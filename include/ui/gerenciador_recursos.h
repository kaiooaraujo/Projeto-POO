#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <map>
#include <string>
#include <memory>
#include <stdexcept>

namespace rpg::ui {

/**
 * @class GerenciadorRecursos
 * @brief Gerenciador centralizado de recursos (fontes, texturas, sons)
 * 
 * Implementação singleton que carrega recursos uma única vez em memória
 * e os reutiliza em todo o jogo, evitando I/O desnecessário.
 */
class GerenciadorRecursos {
private:
    static GerenciadorRecursos* instancia;
    
    std::map<std::string, std::unique_ptr<sf::Font>> fontes;
    std::map<std::string, std::unique_ptr<sf::Texture>> texturas;
    std::map<std::string, std::unique_ptr<sf::SoundBuffer>> sons;
    
    // Construtor privado para singleton
    GerenciadorRecursos() = default;
    
public:
    // Não permitir cópia
    GerenciadorRecursos(const GerenciadorRecursos&) = delete;
    GerenciadorRecursos& operator=(const GerenciadorRecursos&) = delete;
    
    /**
     * @brief Obtém a instância única do gerenciador
     * @return Referência para a instância singleton
     */
    static GerenciadorRecursos& obter();
    
    /**
     * @brief Carrega uma fonte do disco
     * @param id Identificador único da fonte
     * @param caminho Caminho do arquivo da fonte
     * @return Referência para a fonte carregada
     * @throws std::runtime_error Se falhar ao carregar
     */
    sf::Font& carregarFonte(const std::string& id, const std::string& caminho);
    
    /**
     * @brief Obtém uma fonte já carregada
     * @param id Identificador da fonte
     * @return Referência para a fonte
     * @throws std::runtime_error Se a fonte não estiver carregada
     */
    sf::Font& obterFonte(const std::string& id);
    
    /**
     * @brief Carrega uma textura do disco
     * @param id Identificador único da textura
     * @param caminho Caminho do arquivo da textura
     * @return Referência para a textura carregada
     * @throws std::runtime_error Se falhar ao carregar
     */
    sf::Texture& carregarTextura(const std::string& id, const std::string& caminho);
    
    /**
     * @brief Obtém uma textura já carregada
     * @param id Identificador da textura
     * @return Referência para a textura
     * @throws std::runtime_error Se a textura não estiver carregada
     */
    sf::Texture& obterTextura(const std::string& id);
    
    /**
     * @brief Carrega um arquivo de áudio do disco
     * @param id Identificador único do som
     * @param caminho Caminho do arquivo de áudio
     * @return Referência para o buffer de som
     * @throws std::runtime_error Se falhar ao carregar
     */
    sf::SoundBuffer& carregarSom(const std::string& id, const std::string& caminho);
    
    /**
     * @brief Obtém um som já carregado
     * @param id Identificador do som
     * @return Referência para o buffer de som
     * @throws std::runtime_error Se o som não estiver carregado
     */
    sf::SoundBuffer& obterSom(const std::string& id);
    
    /**
     * @brief Verifica se um recurso está carregado
     * @param id Identificador do recurso
     * @param tipo Tipo do recurso: "fonte", "textura" ou "som"
     * @return true se o recurso está carregado, false caso contrário
     */
    bool temRecurso(const std::string& id, const std::string& tipo) const;
    
    /**
     * @brief Libera um recurso específico
     * @param id Identificador do recurso
     * @param tipo Tipo do recurso: "fonte", "textura" ou "som"
     */
    void liberarRecurso(const std::string& id, const std::string& tipo);
    
    /**
     * @brief Libera todos os recursos carregados
     */
    void limpar();
    
    /**
     * @brief Destrutor
     */
    ~GerenciadorRecursos();
};

} // namespace rpg::ui
