#include <stdio.h>
#include <string.h>

// 374269
int list[] = { 2,2,-1,1,-1,1,1,-5,-5,-1,0,-8,-2,-11,-4,-5,-10,-4,-9,-9,1,1,-11,-8,-19,-14,-6,-2,-1,-11,-23,-8,-7,-9,-26,-1,-8,-11,-34,0,-22,-17,-41,-12,-43,-33,-15,0,2,-41,-41,-26,-48,-52,-47,-30,-38,-20,-4,-21,-17,-19,-55,-32,-12,-55,1,-34,-8,-15,-59,-56,-16,-23,-43,-5,-41,-56,-32,-67,-14,0,-28,-32,-7,-54,-19,-9,-24,-63,-2,-60,-5,-78,-11,-84,-50,-36,-72,-14,-30,-4,-62,-6,-1,-69,-17,-33,-32,-45,-71,-87,-71,-60,-19,-80,-11,-106,-45,-27,-23,-51,-77,-67,-103,-17,-98,-109,-91,-125,-68,-39,-34,-96,-49,-64,-38,-105,-31,-100,-89,-108,-69,-36,-94,-38,-124,-123,-79,-92,-42,-14,-87,-68,-17,-36,-21,-54,-98,-79,-142,-25,-60,-112,-99,-64,-15,-78,-37,-64,-15,-129,-32,-102,-74,-112,1,-146,-151,-147,-153,-4,-181,-22,-176,-4,-57,-151,-86,-121,-38,-137,-160,-156,-72,-73,-149,-64,-182,-117,-146,-180,-195,-27,-194,-191,-108,-153,-40,-149,-100,-120,-207,-83,-94,-73,-200,-95,-155,-94,-76,-9,-149,-70,-125,-49,-146,-223,-68,-139,-26,-132,-142,-165,-2,-45,-154,-129,-130,-185,-60,-34,-173,-91,-37,-40,-153,-189,-236,-95,-128,-46,-14,-53,-245,-67,-9,-208,-244,-198,-74,-62,-104,-51,-251,-48,-50,-115,-76,-79,-32,-82,-65,-185,-124,-32,-189,-124,-174,1,-273,-223,-275,-238,-200,-184,-229,-195,-152,-63,-150,-73,-44,-54,-187,-49,-250,-192,-290,-282,-266,-214,-117,-199,-83,-104,-251,-176,-262,-296,-39,-259,-87,-132,-166,-67,-194,1,-294,-8,-3,-264,-217,-228,-233,-241,-294,-210,-72,-307,-259,-33,-101,-103,-235,-100,-110,-253,-292,-134,-269,-52,-265,-15,-29,-272,-126,-210,-151,-308,-40,-40,-112,-268,-185,-346,-237,-287,-34,-302,-41,-25,-191,-29,-170,-95,-315,-278,-160,-220,-99,-126,-224,-33,-350,-76,-138,-340,-284,-268,-128,-238,-197,-93,-110,-120,-190,-140,-64,-217,-296,-103,-363,-199,-254,-233,-190,-282,-136,-174,-309,-61,-206,-18,-105,-111,-163,-287,-188,-145,-294,-251,-398,-265,-273,-50,-250,-376,-5,-357,-6,-8,-198,-20,-82,-158,-122,-196,-97,-183,-48,-428,-36,-88,-424,-35,-380,-109,-209,-323,-394,-102,-276,-153,-229,-320,-391,-7,-328,-127,-430,-102,-372,-447,-222,-401,-184,-183,-49,-239,-413,-101,-187,-289,-12,-418,-248,-279,-318,-134,-443,-272,-456,-143,-3,-209,-276,-414,-189,-302,-238,-241,-106,-332,-375,-400,-476,-9,-95,-412,-52,-127,-442,-278,-25,-446,-411,-39,-55,-80,-234,-361,-223,-384,-283,-47,-164,-18,-38,-87,-393,-93,-380,-493,-73,-150,-241,-378,-211,-516,-349,-520,-38,-397,-406,-16,-461,-276,-448,-316,-376,-156,-369,-216,-431,-309,-400,-135,-523,-40,-508,-87,-25,-151,-355,-141,-3,-495,-153,-438,-343,-161,-66,-455,-70,-248,-278,-548,-300,-337,-290,-551,-200,-68,-540,-476,-395,-245,-318,-424,-112,-556,-541,-94,-148,-542,-100,-120,-199,-569,-471,-298,-16,-453,-469,-50,-500,-84,-435,-579,-287,-522,-77,-83,-347,-437,-171,-231,-139,-350,-357,-221,-214,-224,-148,-125,-385,-255,-38,-320,-254,-517,-532,-80,-286,-58,-97,-390,-309,-548,-319,-323,-238,-297,-12,-312,-517,-434,-466,-103,-621,-448,-503,-72,-601,-287,-61,-577,-87,-143,-33,-482,-275,-529,-340,-279,-130,-512,-63,-109,-528,-22,-549,-317,-375,-377,-385,-23,-191,-138,-509,-40,-565,-559,-14,-547,-28,-159,-153,-585,-508,-582,-431,-580,-637,-561,-513,-243,-420,-298,-485,-132,-613,-157,-521,-596,-61,-420,-498,-577,-563,-354,-662,-264,-273,-111,-597,-466,-389,-345,-306,-102,-57,-596,-1,-45,-12,-619,-47,-43,0,-323,-9,-319,-529,-402,-238,-191,-487,-315,-65,-386,-110,-605,-363,-461,-6,-95,-95,2,-596,-454,-618,-83,-481,-283,-386,-247,-417,-707,-564,-603,-17,-712,-140,-336,-567,-443,-36,-476,-251,-735,-589,-198,-197,-476,-49,-736,-422,-383,-569,-732,-1,-104,-261,-352,-453,-273,-344,-66,-307,-698,-158,-238,-280,-207,-624,-491,-765,-506,-146,-616,-711,-650,-655,-393,-19,-315,-311,-572,-675,-533,-156,-373,-744,-142,-582,-491,-796,-777,-125,-483,-426,-510,-560,-700,-778,-407,-440,-409,-238,-738,-477,-147,-152,-317,-110,-323,-788,-601,-202,-517,-487,-726,-300,-1,-554,-448,-15,-191,-531,-568,-466,-527,-132,-254,-290,-8,-400,-655,-788,-376,-249,-662,-315,-378,-41,-793,-163,-29,-327,-839,-133,-124,-129,-673,-32,-605,-393,-664,-374,-135,-366,-717,-93,-601,-763,-788,-494,-802,-282,-443,-491,-461,-197,-83,-96,-162,-97,-161,-232,-144,-472,-118,-429,-387,-724,-789,-636,-298,-484,-720,-526,-382,-102,-449,-846,-525,-547,-696,-524,-272,-843,-286,-247,-838,-447,-489,-797,-483,-386,-775,-340,-772,-158,-293,-256,-432,-812,-273,-93,-487,-264,-594,-330,-712,-798,-131,-591,-539,-677,-455,-470,-108,-573,-57,-845,-383,-273,-890,-747,-913,-648,-625,-650,-544,-137,-490,-434,-734,-182,-355,-859,-835,-141,-536,-874,-102,-940,-359,-83,-800,-894,-712,-470,-687,-578,-435,-935,-400,-780,-814,-458,-892,-481,-371,-761,-348,-388,-891,-764,-297,-536,-695,-314,-336,-978,-379,-462,-597,-533,-561,-9,-474,-292,-560,-420,-828,-721,-769,-874,-157,-495,-771,-899,-571,-98,-282,-233,-203,-982,-416,-142,-993,-540,-979,-851,-506,-238,-292,-184,-695,-195,-632,-575,-962,-76,-546,-705,-13,-271,-222,-124,-380,2,-1003,-251,-525,-228,-644,-159,-624,-477,-912,-712,-343,-263,-88,-745,-85,-374,-675,-804,-610,-854,-511,-612,-964,-731,-358,-495,-946,-466,-364,-1053,-57,-101,-829,-155,-600 };

void main() {
  int listSize = sizeof(list) / sizeof(int);
  int pos = 0;
  int jumps = 0;
  
  while(pos < listSize) {
    int offset = list[pos];
    list[pos] += 1;
    pos += offset;
    jumps++;
  }
  
  printf("jumps = %d\n", jumps);
}