#pragma once

#include <cstdint>
#include <string>

namespace rpg::config {

// ─── Configurações de Janela ────────────────────────────────────────────────
namespace janela {
    constexpr uint32_t LARGURA_PADRAO = 1280;
    constexpr uint32_t ALTURA_PADRAO = 720;
    constexpr const char* TITULO_PADRAO = "Arena of Champions";
    constexpr uint32_t FPS_LIMITE = 60;
}

// ─── Configurações de Cores ─────────────────────────────────────────────────
namespace cores {
    // Fundo
    constexpr uint8_t FUNDO_R = 15;
    constexpr uint8_t FUNDO_G = 10;
    constexpr uint8_t FUNDO_B = 25;
    
    // Botões
    namespace botao {
        constexpr uint8_t NORMAL_R = 60;
        constexpr uint8_t NORMAL_G = 40;
        constexpr uint8_t NORMAL_B = 80;
        
        constexpr uint8_t HOVER_R = 100;
        constexpr uint8_t HOVER_G = 60;
        constexpr uint8_t HOVER_B = 130;
        
        constexpr uint8_t PRESSIONADO_R = 40;
        constexpr uint8_t PRESSIONADO_G = 20;
        constexpr uint8_t PRESSIONADO_B = 60;
        
        constexpr uint8_t BORDA_R = 180;
        constexpr uint8_t BORDA_G = 120;
        constexpr uint8_t BORDA_B = 220;
    }
    
    // Barra de Vida
    namespace barra_vida {
        constexpr uint8_t FUNDO_R = 40;
        constexpr uint8_t FUNDO_G = 40;
        constexpr uint8_t FUNDO_B = 40;
        
        constexpr uint8_t VERDE_R = 50;
        constexpr uint8_t VERDE_G = 200;
        constexpr uint8_t VERDE_B = 50;
        
        constexpr uint8_t AMARELO_R = 220;
        constexpr uint8_t AMARELO_G = 180;
        constexpr uint8_t AMARELO_B = 30;
        
        constexpr uint8_t VERMELHO_R = 200;
        constexpr uint8_t VERMELHO_G = 40;
        constexpr uint8_t VERMELHO_B = 40;
    }
    
    // Título
    namespace titulo {
        constexpr uint8_t R = 220;
        constexpr uint8_t G = 170;
        constexpr uint8_t B = 50;
    }
}

// ─── Configurações de Posição (Menu) ────────────────────────────────────────
namespace menu {
    constexpr float TITULO_X = 640.f;
    constexpr float TITULO_Y = 140.f;
    constexpr float TITULO_TAMANHO = 56.f;
    
    constexpr float SUBTITULO_X = 640.f;
    constexpr float SUBTITULO_Y = 210.f;
    constexpr float SUBTITULO_TAMANHO = 22.f;
    
    constexpr float BOTOES_X = 530.f;  // 640 - 110
    constexpr float BOTOES_Y_INICIAL = 290.f;
    constexpr float BOTOES_ESPACO_Y = 70.f;
    constexpr float BOTOES_LARGURA = 220.f;
    constexpr float BOTOES_ALTURA = 50.f;
}

// ─── Configurações de Posição (Batalha) ────────────────────────────────────
namespace batalha {
    // Barras de vida
    constexpr float BARRA_VIDA_P1_X = 60.f;
    constexpr float BARRA_VIDA_P1_Y = 30.f;
    constexpr float BARRA_VIDA_P2_X = 940.f;
    constexpr float BARRA_VIDA_P2_Y = 30.f;
    constexpr float BARRA_VIDA_LARGURA = 280.f;
    constexpr float BARRA_VIDA_ALTURA = 22.f;
    
    // Painel de log
    constexpr float PAINEL_LOG_X = 440.f;
    constexpr float PAINEL_LOG_Y = 520.f;
    constexpr float PAINEL_LOG_LARGURA = 400.f;
    constexpr float PAINEL_LOG_ALTURA = 180.f;
    constexpr int PAINEL_LOG_MAX_LINHAS = 8;
    
    // Sprites
    constexpr float SPRITE_P1_X = 150.f;
    constexpr float SPRITE_P1_Y = 300.f;
    constexpr float SPRITE_P2_X = 1130.f;
    constexpr float SPRITE_P2_Y = 300.f;
    constexpr float SPRITE_ESCALA = 2.5f;
    constexpr float SPRITE_P2_ESCALA_X = -2.5f; // Espelhado
    
    // Botões de ação
    constexpr float BOTOES_ACAO_Y = 460.f;
    constexpr float BOTOES_ACAO_X_INICIAL = 430.f;
    constexpr float BOTOES_ACAO_ESPACO_X = 170.f;
    constexpr float BOTOES_ACAO_LARGURA = 150.f;
    constexpr float BOTOES_ACAO_ALTURA = 45.f;
    
    // Indicador de turno
    constexpr float INDICADOR_TURNO_X = 640.f;
    constexpr float INDICADOR_TURNO_Y = 430.f;
    constexpr uint32_t INDICADOR_TURNO_TAMANHO = 18;
    
    // Animação
    constexpr float DURACAO_ANIMACAO_ATAQUE = 0.3f;
    constexpr float AMPLITUDE_SHAKE = 15.f;
    constexpr float VELOCIDADE_SHAKE = 30.f;
    
    // Timing do bot
    constexpr float ESPERA_TURNO_BOT = 0.6f;
}

// ─── Configurações de Caminhos de Recursos ──────────────────────────────────
namespace recursos {
    namespace fontes {
        constexpr const char* MEDIEVAL = "assets/fonts/medieval.ttf";
        constexpr const char* UI = "assets/fonts/ui.ttf";
    }
    
    namespace texturas {
        constexpr const char* FUNDO_MENU = "assets/textures/background_menu.png";
        constexpr const char* FUNDO_ARENA = "assets/textures/background_arena.png";
        constexpr const char* GUERREIRO = "assets/textures/guerreiro.png";
        constexpr const char* MAGO = "assets/textures/mago.png";
        constexpr const char* ARQUEIRO = "assets/textures/arqueiro.png";
        constexpr const char* CLERIGO = "assets/textures/clerigo.png";
        constexpr const char* BOTAO_NORMAL = "assets/textures/button_normal.png";
        constexpr const char* BOTAO_HOVER = "assets/textures/button_hover.png";
        constexpr const char* BARRA_VIDA = "assets/textures/health_bar.png";
    }
    
    namespace sons {
        constexpr const char* ATAQUE = "assets/sounds/attack.wav";
        constexpr const char* LEVEL_UP = "assets/sounds/level_up.wav";
        constexpr const char* VITORIA = "assets/sounds/victory.wav";
    }
}

// ─── Configurações de Tamanhos ──────────────────────────────────────────────
namespace tamanhos {
    constexpr uint32_t TAMANHO_FONTE_BOTAO = 20;
    constexpr uint32_t TAMANHO_FONTE_LABEL_BARRA = 13;
    constexpr uint32_t TAMANHO_FONTE_LOG = 13;
    constexpr float ESPESSURA_BORDA_BOTAO = 2.f;
    constexpr float ESPESSURA_BORDA_BARRA = 1.f;
}

} // namespace rpg::config
