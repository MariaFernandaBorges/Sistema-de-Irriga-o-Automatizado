<p><strong>Projeto Sistema de Jardinagem Automatizado com acesso remoto via smartphone</strong></p>
<p><strong>Integrantes do Grupo:</strong></p>
<ul>
<li>&Eacute;der Lima</li>
<li>Jo&atilde;o Gabriel</li>
<li>Maria Fernanda</li>
<li>Matheus Guimar&atilde;es</li>
<li>Nathan Rafael</li>
<li>Thalles</li>
</ul>
<p><strong>Objetivo:</strong>&nbsp;Realizar a irriga&ccedil;&atilde;o automatizada e monitorar a temperatura e a quantidade de luminosidade da flor de Copo de Leite de acordo com suas recomenda&ccedil;&otilde;es biol&oacute;gicas.</p>
<p><br /><strong>Entradas:</strong>&nbsp;Sensor de Temperatura ,Sensor de Umidade ,Sensor de Temperatura do Solo,Bot&atilde;o Bomba ON/OFF.Bot&atilde;o Lampada ON/OFF</p>
<p><strong>Sa&iacute;das:</strong>Rel&eacute; para controle da bomba,Rel&eacute; para controle de l&acirc;mpada</p>
<p><a href="https://github.com/MariaFernandaBorges/Sistema-de-Irriga-o-Automatizado/blob/master/diagrama%20de%20blocos.png"><img src="https://github.com/MariaFernandaBorges/Sistema-de-Irriga-o-Automatizado/raw/master/diagrama%20de%20blocos.png" alt="" width="500" height="400" /></a></p>
<p><br /><strong>Componentes para Montagem:</strong></p>
<ul>
<li>Placa Wi-Fi NodeMCU WiFi Internet ESP8266,</li>
<li>Sensor de Temperatura e Umidade Relativa do ArDHT22,</li>
<li>Cabo &Agrave; Prova D '&Aacute;gua Digital Sensor de Temperatura Sonda T&eacute;rmica DS18B20,</li>
<li>Sensor de Umidade do Solo,</li>
<li>Display de LED ,</li>
<li>Bot&otilde;es ,</li>
<li>LEDs ,</li>
<li>Rel&eacute; acionador de N&iacute;vel Alto,</li>
<li>Jumps,</li>
<li>Protoboard,</li>
<li>Resistores,</li>
<li>Fonte 5V/2A</li>
</ul>
<p><strong>&nbsp; Fun&ccedil;&otilde;es de Cada Componente:</strong></p>
<ul>
<li dir="auto">Sensor de temperatura: captar a temperatura presente a um certo raio do ponto de fixa&ccedil;&atilde;o e enviar essa informa&ccedil;&atilde;o para o NodeMCU;</li>
<li dir="auto">L&acirc;mpada incandescente: ser&aacute; usada como para fornecer calor caso o valor de temperatura enviado pelo sensor seja inferior a de set point. Controlando a temperatura da planta para que ela esteja dentro da regi&atilde;o de temperatura de sobrevivencia;</li>
<li dir="auto">Sensor de umidade: verificar a umidade presente no solo da planta, diferente do sensor de temperatura que estar&aacute; sobreposto e n&atilde;o enterrado.</li>
<li dir="auto">Bomba d'agua: ser&aacute; usada para aumentar a umidade do solo levando como base o valor enviado pelo sensor de umidade. Tamb&eacute;m ir&aacute; respeitar um valor de set Point.</li>
<li dir="auto">Os LED's s&atilde;o para sinaliza&ccedil;&atilde;o da bomba e da l&acirc;mpada caso estejam acionadas.</li>
<li dir="auto">As boteiras ter&atilde;o a finalidade de for&ccedil;amos a sa&iacute;das (Bomba d'agua ou l&acirc;mpada) caso seja preciso, sendo essas somente duas boteiras. A terceira &eacute; para acionarmos o sistema supervisorio (o Display OLED) com o intuito de visualizarmos os par&acirc;metros daquele exato instante.</li>
</ul>
<p><strong>&nbsp; &nbsp;</strong><em>Ou seja, as grandezas controladas &eacute; temperatura minima e umidade m&iacute;nima. N&atilde;o ser&aacute; possivel controlar os valores m&aacute;ximos dessas duas grandezas pois n&atilde;o temos agentes para combate-las caso essa situa&ccedil;&atilde;o ocorra.</em></p>
<p><strong>Etapas:</strong></p>
<ol>
<li>Elaborar o c&oacute;digo</li>
<li>Fazer as simula&ccedil;&otilde;es e corre&ccedil;&otilde;es</li>
<li>Fazer a lista de materiais para implementa&ccedil;&atilde;o do sistema</li>
<li>Compilar o c&oacute;digo com o app de acesso remoto via smartphone</li>
<li>Implementar o sistema:
<ol>
<li>Parte funcional;</li>
<li>Parte da montagem;</li>
</ol>
</li>
</ol>
<p>&nbsp;</p>
<p><strong>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Informa&ccedil;&otilde;es do cultivo da Flor Copo de Leite&nbsp;</strong></p>
<p><strong>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;Zantedeschia aethiopica Spreng&nbsp;</strong></p>
<ul>
<li>Temperatura de sobreviv&ecirc;ncia: 13 &deg;C &lt; T &lt; 24 &deg;C (para ambientes fechados)</li>
<li>Plantio em vasos com 13-20 cm de profundidade se voc&ecirc; for plantar os copos-de-leite em um ambiente fechado.</li>
<li>Os copos-de-leite precisam de bastante luz nas horas mais amenas do dia &mdash; ou seja, antes ou depois do meio-dia, mas nunca durante. Tenha cuidado para n&atilde;o queimar as folhas das planta</li>
<li>Se plantados em vasos, &eacute; importante manter os copos-de-leite constantemente bem irrigados e o solo sempre &uacute;mido.</li>
<li>Apesar de gostar e precisar de muita luz o Copo de Leite &eacute; tamb&eacute;m bastante sens&iacute;vel &agrave; incid&ecirc;ncia do sol diretamente. O recomendado &eacute; que o sombreamento fique entre 25% a 50%, quanto melhor for o sombreamento mais desenvolvidas ficar&atilde;o as hastes florais.</li>
<li>Plantio para as flores Copo de Leite n&atilde;o seja encharcado, pois muita &aacute;gua no ambiente pode propiciar ao surgimento de fungos e bact&eacute;rias que podem prejudicar o desenvolvimento da planta.</li>
</ul>
<p><a href="https://github.com/MariaFernandaBorges/Sistema-de-Irriga-o-Automatizado/blob/master/copo%20de%20leite.jpg"><img src="https://github.com/MariaFernandaBorges/Sistema-de-Irriga-o-Automatizado/raw/master/copo%20de%20leite.jpg" alt="" width="500" height="400" /></a></p>
