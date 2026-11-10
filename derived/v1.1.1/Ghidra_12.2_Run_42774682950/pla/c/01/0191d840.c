/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191d840; name: FUN_0191d840
 */


void FUN_0191d840(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  pcVar3 = "field_ns";
  uVar1 = 0xdb7aa0359d651733;
  uVar2 = 8;
  switch(param_2) {
  case 1:
    break;
  case 2:
    uVar1 = 0x4b2f74b7d3bd841b;
    uVar2 = 0xd;
    pcVar3 = "battle_normal";
    break;
  case 3:
    uVar1 = 0x5e64874601bdd38d;
    uVar2 = 0xe;
    pcVar3 = "battle_trainer";
    break;
  case 4:
    uVar1 = 0xbb2cbfa72ae2d8a3;
    uVar2 = 9;
    pcVar3 = "battle_ns";
    break;
  case 5:
    uVar1 = 0x2806e5fb21a98b98;
    uVar2 = 8;
    pcVar3 = "minigame";
    break;
  case 6:
    uVar1 = 0xae7b476b387ca516;
    uVar2 = 0xd;
    pcVar3 = "event_agunomu";
    break;
  case 7:
    uVar1 = 0xc72013a6cd00e44b;
    uVar2 = 7;
    pcVar3 = "boxfull";
    break;
  default:
    uVar1 = 0x79479c9171128967;
    uVar2 = 5;
    pcVar3 = "field";
  }
  *param_1 = uVar1;
  param_1[1] = pcVar3;
  param_1[2] = uVar2;
  param_1[3] = 0;
  return;
}


