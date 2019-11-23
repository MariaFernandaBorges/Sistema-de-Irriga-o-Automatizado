<p><strong>Projeto Sistema de Jardinagem Automatizado com acesso remoto via smartphone</strong></p>
<p></p>
<p><img src="https://github.com/MariaFernandaBorges/Sistema-de-Irriga-o-Automatizado/blob/master/imagem%20nova.jpg" alt="Apresenta&ccedil;&atilde;o" width="400" height="500" /></p>
<p></p>
<p><strong>Integrantes do Grupo:</strong></p>
<ul>
<li>&Eacute;der Lima</li>
<li>Jo&atilde;o Gabriel</li>
<li>Maria Fernanda</li>
<li>Matheus Guimar&atilde;es</li>
<li>Nathan Rafael</li>
<li>Thalles</li>
</ul>
<p><strong>Objetivo:</strong>&nbsp;Realizar a irriga&ccedil;&atilde;o automatizada e monitorar a temperatura de uma planta.</p>
<p><br /><strong>Entradas:</strong>&nbsp;Sensor de Temperatura ,Sensor de Umidade ,Sensor de Temperatura do Solo,Bot&atilde;o Bomba ON/OFF.Bot&atilde;o Lampada ON/OFF</p>
<p><strong>Sa&iacute;das:</strong>Rel&eacute; para controle da bomba,Rel&eacute; para controle de l&acirc;mpada</p>
<p><a href="https://github.com/MariaFernandaBorges/Sistema-de-Irriga-o-Automatizado/blob/master/diagrama%20de%20blocos.png"><img src="https://github.com/MariaFernandaBorges/Sistema-de-Irriga-o-Automatizado/raw/master/diagrama%20de%20blocos.png" alt="" width="500" height="400" /></a><strong>Lista de Materiais:</strong></p>
<ul>
<li>Placa Wi-Fi NodeMCU WiFi Internet ESP8266,</li>
<li>Sensor de Temperatura Sonda T&eacute;rmica DS18B20</li>
<li>Sensor de Umidade do Solo</li>
<li>Display de LED&nbsp;</li>
<li>Botoeiras Sinalizadoras</li>
<li>M&oacute;dulo rel&eacute; de dois canais 3.3V</li>
<li>Jumps,</li>
<li>Protoboard</li>
<li>Fonte 5V/2A</li>
<li>Regulador de tens&atilde;o 5V para 3.3V</li>
<li>L&acirc;mpada Incandescente&nbsp;</li>
<li>Bomba D'&Aacute;gua&nbsp;</li>
<li>Fio paralelo</li>
<li>Cabo USB</li>
</ul>
<p></p>
<p></p>
<p><img src="https://github.com/MariaFernandaBorges/Sistema-de-Irriga-o-Automatizado/blob/master/imagem%20nova%204.jpg" alt="Liga&ccedil;&atilde;o" /></p>
<p></p>
<p><strong>&nbsp;</strong></p>
<p><strong> Fun&ccedil;&otilde;es de Cada Componente:</strong></p>
<ul>
<li dir="auto">Sensor de temperatura: captar a temperatura presente a um certo raio do ponto de fixa&ccedil;&atilde;o e enviar essa informa&ccedil;&atilde;o para o NodeMCU;</li>
<li dir="auto">L&acirc;mpada incandescente: ser&aacute; usada como para fornecer calor;</li>
<li dir="auto">Sensor de umidade: verificar a umidade presente no solo da planta;</li>
<li dir="auto">Bomba d'agua: ser&aacute; usada para aumentar a umidade do solo;</li>
<li dir="auto">Os LED's s&atilde;o para sinaliza&ccedil;&atilde;o da bomba e da l&acirc;mpada caso estejam acionadas;</li>
<li dir="auto">As boteiras ter&atilde;o a finalidade de for&ccedil;amos a sa&iacute;das (Bomba d'agua ou l&acirc;mpada) caso seja preciso, sendo essas somente duas boteiras. A terceira &eacute; para acionarmos o sistema supervisorio (o Display OLED) com o intuito de visualizarmos os par&acirc;metros daquele exato instante.</li>
</ul>
<p><strong>&nbsp; &nbsp;</strong><em>Ou seja, as grandezas controladas &eacute; temperatura minima e umidade m&iacute;nima. N&atilde;o ser&aacute; possivel controlar os valores m&aacute;ximos dessas duas grandezas pois n&atilde;o temos agentes para combate-las caso essa situa&ccedil;&atilde;o ocorra.</em></p>
<p><strong>Resultados: </strong>O sistema de jardinagem funcionou conforme o esperado com o comando manual, autom&aacute;tico e remoto. Os valores parametrizados foram:<strong></strong></p>
<ul>
<li>Temperatura Baixa =&nbsp; 24 &ordm; C (no modo autom&aacute;tico a l&acirc;mpada liga);</li>
<li>Temperatura Alta = 45 &ordm; C (no modo autom&aacute;tico, caso a l&acirc;mpada esteja ligada ela desligar&aacute;);</li>
<li>Umidade do Solo baixa = 66% (no modo autom&aacute;tico a bomba liga)</li>
<li>Umidade do Solo alta =&nbsp; 88% (no modo autom&aacute;tico, caso a bomba esteja ligada ela desligar&aacute;);</li>
<li>Tempo que a bomba fica ligada &eacute; de 2 segundos;</li>
<li>Tempo que a l&acirc;mpada fica ligada &eacute; de 10 segundos;</li>
</ul>
<p></p>
<p><img src="https://github.com/MariaFernandaBorges/Sistema-de-Irriga-o-Automatizado/blob/master/imagem%20nova%203.jpg" alt="resultado final" /></p>
<p></p>
<p><strong>Monitoramento e Atua&ccedil;&atilde;o Via App:</strong></p>
<p><img src="https://github.com/MariaFernandaBorges/Sistema-de-Irriga-o-Automatizado/blob/master/Screenshot_20191111-195135_Blynk.jpg" alt="Monitoramento via app 1" /></p>
<p></p>
<p></p>
<p><img src="https://github.com/MariaFernandaBorges/Sistema-de-Irriga-o-Automatizado/blob/master/Screenshot_20191111-195137_Blynk.jpg" alt="Monitoramento via app 2" 
