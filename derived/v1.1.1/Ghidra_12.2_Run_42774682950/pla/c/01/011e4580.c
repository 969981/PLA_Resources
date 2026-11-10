/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e4580; name: FUN_011e4580
 */


undefined8 FUN_011e4580(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = FUN_011e4478(param_2,param_1);
  uVar3 = FUN_011e4478(param_3,param_2);
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar1;
    uVar2 = FUN_011e4478(param_2,param_1);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    uVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar1;
  }
  else {
    uVar1 = *param_1;
    if ((uVar3 & 1) != 0) {
      *param_1 = *param_3;
      *param_3 = uVar1;
      return 1;
    }
    *param_1 = *param_2;
    *param_2 = uVar1;
    uVar2 = FUN_011e4478(param_3,param_2);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    uVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar1;
  }
  return 2;
}


