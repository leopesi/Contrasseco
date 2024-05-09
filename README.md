# Contrasseco IoT

### Dispositivo de monitoramento de fluxo de água para motobomba de piscina.

Com um fluxostato instalado no recalque da motobomba é possível indentificar quando o fluxo de água é interrompido, seja por obstrução do ralo de fundo ou aspirador, ar na tubulação ou qualquer outro motivo. Neste instante é acionado o modo **NO SAFE** do aparelho, que faz algumas tentativas de reestabelecer o fluxo normal, como está ilustrado no fluxograma abaixo. Se o fluxo de água normal for reestabelecido o dispositivo retorna para o modo **SAFE** , caso contrário é acionado o modo **SETUP**, que desliga a motobomba e aciona uma luz de alerta.

![Fluxograma](https://user-images.githubusercontent.com/52714788/78585182-c731e580-780f-11ea-942d-e4f4987adfec.jpg)

<hr>

### Circuito de teste para simulação no tinkercad..

![Arduino](https://user-images.githubusercontent.com/52714788/78721167-6385e600-78fd-11ea-96a7-07ee9a4d95c6.jpg)

<hr>

### Visão Geral

- C++
- Arduino
