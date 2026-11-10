/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019530dc; name: FUN_019530dc
 */


void FUN_019530dc(long *param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  if (param_2 == 5) {
    uVar3 = 5;
    pcVar2 = *(code **)(*param_1 + 0x40);
    uVar1 = 5;
  }
  else {
    switch(param_2) {
    case 1:
      uVar3 = 1;
      pcVar2 = *(code **)(*param_1 + 0x40);
      uVar1 = 1;
      break;
    case 2:
      uVar3 = 2;
      pcVar2 = *(code **)(*param_1 + 0x40);
      uVar1 = 2;
      break;
    case 3:
      uVar3 = 3;
      pcVar2 = *(code **)(*param_1 + 0x40);
      uVar1 = 3;
      break;
    case 4:
      uVar3 = 4;
      pcVar2 = *(code **)(*param_1 + 0x40);
      uVar1 = 4;
      break;
    default:
      goto switchD_0195313c_default;
    }
  }
  (*pcVar2)(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x3d) = uVar3;
switchD_0195313c_default:
  return;
}


