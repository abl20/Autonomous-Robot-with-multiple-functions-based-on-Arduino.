Se trata de un robot formado por dos Arduinos: Arduino MEGA y Arduino UNO:
El Arduino MEGA tendrá dos modos seleccionables mediante un interruptor con resistencia de pull-up para evitar así las posibles interferencias. Si se encuentra a nivel alto este interruptor, el robot entrará en modo esquiva-obstáculos, el cuál autónomamente, mediánte los tres sensores ultrsónicos de distancia y los cuatro servomotores de rotacion continua, será capaz de moverse sin interceptar ningun objeto. Si por el contrario el interruptor se encuentra a nivel bajo, el robot se encontrará en el modo control remoto mediante mando infrarrojos. Por medio de este modo, el usuario es capaz de interaccionar con el robot a traves de un mando infrarrojo, pudiendo desplazar el robot en la dirección que se desee y tambien pudiendo accionar las pinzas incorporadas en el robot para desplazar objetos.
 El Arduino UNO basará su funcionalidad en base a la conexión de un módulo Bluetooth, al cual se le enviará desde un teléfono móvil, equipado con esta tecnología, las funciones a realizar. Entre ellas estara el control de dos matrices led 8x8 en las cuales aparecerá un texto en scrolling y diversas figuras, un buzzer que será posible seleccionar la canción a reproducir y 2 led’s (uno rojo y otro azul) que se combinaran con el buzzer (simulando el sonido de una sirena) para hacer un modo policía.
