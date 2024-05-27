## Links referentes ao projeto:

>[!NOTE]
>Link do ESP32: https://pt.aliexpress.com/item/1005005970553639.html <br>
>Video a respeito do projeto: https://www.youtube.com/watch?v=CJ9YCWRjAl0 <br>
>Site para o tratamento da imagem: https://resizeimage.net/ <br>
>Site para a conversão em array C: https://notisrac.github.io/FileToCArray/


## Configuração do ESP32: <br> 

1. Acessar Arduino IDE
 - Clique no canto superior esquerdo em 'Arquivo'
 - Clique em 'Preferências'
2. Na tela de Preferências que se abrir
 - Clique no ícone ao lado de 'URLs do Gerenciador de Placas Adicionais'
 - Adicione esse link em uma nova linha: https://raw.githubusercontent.com/esp...
 - Clique em OK
3. Selecione o segundo ícone da lateral esquerda
 - Abrindo o gerenciador de placas pesquise por 'esp32'
 - Instale 'esp32 por Espressif Systems'
4. Clique em Ferramentas no canto superior
 - Clique em 'Placa:'
 - Clique em 'esp32'
 - Selecione 'TTGO LoRa32-OLED'
5 Clique em Ferramentas no canto superior
 - Clique em 'Porta:'
 - Selecione a que você conectou no seu ESP32 (Se ela não estiver disponível, certifique-se de que seu cabo realiza a transmissão de dados e atualize os drivers de porta)

## Passos para uso:
_(Necessário já ter realizado a configuração do ESP32)_ <br>

1. Baixar o código no github
2. Escolher e baixar o gif que será reproduzido
3. Cortar e redimensionar o gif
 - Você pode redimensionar, cortar e rotacionar mais é importante que se adeque a 135x240
4. Converter o gif em array
  - [x] Code format: Hex (0x00)
  - [x] Treat as binary: Marcado
  - [ ] Static: Desmarcado
  - [x] Const: Marcado
  - [ ] Unsigned: Desmarcado
  - [x] Data type: uint8_t
  - [x] PROGMEM: Marcado
  - Clique para converter
5. Copia e cola no arquivo out.h alterando a segunda linha para: "const uint8_t arquivo[] PROGMEM  = {"
6. Verifique e envie seu código para o ESP32

