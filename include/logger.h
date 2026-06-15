#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include <chrono>
#include <sstream>
#include <iomanip>

namespace rpg::util {

/**
 * @class Logger
 * @brief Sistema de logging centralizado com saída para console e arquivo
 */
class Logger {
public:
    enum class Nivel {
        DEBUG,
        INFO,
        AVISO,
        ERRO,
        CRITICO
    };
    
private:
    static Logger* instancia;
    std::ofstream arquivo_log;
    bool habilitar_console;
    bool habilitar_arquivo;
    
    Logger();
    
    /**
     * @brief Formata a mensagem com timestamp e nível
     */
    std::string formatarMensagem(Nivel nivel, const std::string& mensagem);
    
    /**
     * @brief Converte nível para string
     */
    std::string nivelParaString(Nivel nivel) const;
    
public:
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;
    
    /**
     * @brief Obtém a instância única do logger
     */
    static Logger& obter();
    
    /**
     * @brief Inicializa o logger
     * @param arquivo_saida Caminho para o arquivo de log
     * @param console Habilitar saída no console
     * @param arquivo Habilitar saída em arquivo
     */
    void inicializar(const std::string& arquivo_saida = "rpg.log",
                     bool console = true,
                     bool arquivo = true);
    
    /**
     * @brief Log de nível DEBUG
     */
    void debug(const std::string& mensagem);
    
    /**
     * @brief Log de nível INFO
     */
    void info(const std::string& mensagem);
    
    /**
     * @brief Log de nível AVISO
     */
    void aviso(const std::string& mensagem);
    
    /**
     * @brief Log de nível ERRO
     */
    void erro(const std::string& mensagem);
    
    /**
     * @brief Log de nível CRITICO
     */
    void critico(const std::string& mensagem);
    
    /**
     * @brief Fechar o arquivo de log
     */
    void fechar();
    
    /**
     * @brief Destrutor
     */
    ~Logger();
};

} // namespace rpg::util
