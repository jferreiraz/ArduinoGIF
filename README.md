LINKS:

Link do ESP32: https://pt.aliexpress.com/item/1005005970553639.html
Video a respeito do projeto: https://www.youtube.com/watch?v=CJ9YCWRjAl0
Site para o tratamento da imagem: https://resizeimage.net/
Site para a conversão em array C: https://notisrac.github.io/FileToCArray/

CONFIGURAÇÃO DO ESP32:
-Apresentado no video em 04:44

1. Acessar Arduino IDE
 1.1 Clique no canto superior esquerdo em 'Arquivo'
 1.2 Clique em 'Preferências'
2. Na tela de Preferências que se abrir
 2.1 Clique no ícone ao lado de 'URLs do Gerenciador de Placas Adicionais'
 2.2 Adicione esse link em uma nova linha: https://raw.githubusercontent.com/esp...
 2.3 Clique em OK
3. Selecione o segundo ícone da lateral esquerda
 3.1 Abrindo o gerenciador de placas pesquise por 'esp32'
 3.2 Instale 'esp32 por Espressif Systems'
4. Clique em Ferramentas no canto superior
 4.1 Clique em 'Placa:'
 4.2 Clique em 'esp32'
 4.3 Selecione 'TTGO LoRa32-OLED'
5 Clique em Ferramentas no canto superior
 5.1 Clique em 'Porta:'
 5.2 Selecione a que você conectou no seu ESP32 (Se ela não estiver disponível, certifique-se de que seu cabo realiza a transmissão de dados e atualize os drivers de porta)


PASSOS PARA USO:
-Necessário já ter realizado a configuração do ESP32 (Apresentado no video em 04:44)

1. Baixar o código no github
2. Escolher e baixar o gif que será reproduzido
3. Cortar e redimensionar o gif
 4.1 Você pode redimensionar, cortar e rotacionar mais é importante que se adeque a 135x240
4. Converter o gif em array
 4.1 Code format: Hex (0x00)
 4.2 Treat as binary: Marcado
 4.3 Static: Desmarcado
 4.4 Const: Marcado
 4.5 Unsigned: Desmarcado
 4.6 Data type: uint8_t
 4.7 PROGMEM: Marcado
 4.8 Clique para converter
5. Copia e cola no arquivo out.h alterando a segunda linha para: "const uint8_t arquivo[] PROGMEM  = {"
6. Verifique e envie seu código para o ESP32
