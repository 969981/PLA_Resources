/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d74270; name: FUN_00d74270
 */


void FUN_00d74270(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = 4;
  param_1[8] = 0;
  param_1[1] = 4;
  uVar1 = FUN_00d15530();
  switch(uVar1) {
  case 1:
    uVar2 = 0;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 7:
    goto switchD_00d742c0_caseD_2;
  default:
    return;
  case 8:
    uVar2 = 7;
    break;
  case 9:
    uVar2 = 5;
    break;
  case 10:
    uVar2 = 6;
  }
  param_3 = param_2;
switchD_00d742c0_caseD_2:
  *param_1 = uVar2;
  param_1[6] = param_3;
  param_1[7] = 1;
  return;
}


