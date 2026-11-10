/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02761a9c; name: FUN_02761a9c
 */


void FUN_02761a9c(undefined4 *param_1,undefined1 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  
  switch(param_2) {
  case 0x80:
    *(char *)(*param_4 + param_4[2]) = (char)param_3;
    lVar1 = 1;
    break;
  case 0x81:
    *(short *)(*param_4 + param_4[2]) = (short)param_3;
    lVar1 = 2;
    break;
  case 0x82:
    *(int *)(*param_4 + param_4[2]) = (int)param_3;
    lVar1 = 4;
    break;
  case 0x83:
    *(undefined8 *)(*param_4 + param_4[2]) = param_3;
    lVar1 = 8;
    break;
  default:
    goto switchD_02761ac0_default;
  }
  param_4[2] = param_4[2] + lVar1;
switchD_02761ac0_default:
  *param_1 = 0;
  return;
}


