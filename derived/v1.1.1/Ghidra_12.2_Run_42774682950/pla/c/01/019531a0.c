/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019531a0; name: FUN_019531a0
 */


void FUN_019531a0(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((int)param_2 == 5) {
    lVar1 = *param_1;
  }
  else {
    switch((int)param_2) {
    case 1:
      lVar1 = *param_1;
      param_2 = 1;
      break;
    case 2:
      lVar1 = *param_1;
      param_2 = 2;
      break;
    case 3:
      lVar1 = *param_1;
      param_2 = 3;
      break;
    case 4:
      lVar1 = *param_1;
      param_2 = 4;
      break;
    default:
      goto switchD_019531f8_default;
    }
  }
  (**(code **)(lVar1 + 0x48))(param_1,param_2);
  *(undefined4 *)(param_1 + 0x3d) = 0;
switchD_019531f8_default:
  return;
}


