/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0095ce10; name: FUN_0095ce10
 */


undefined8 FUN_0095ce10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = FUN_0095ca3c(param_4,param_2,param_1);
  uVar2 = FUN_0095ca3c(param_4,param_3,param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    FUN_0095cb70(param_2,param_3);
    uVar1 = FUN_0095ca3c(param_4,param_2,param_1);
    if ((uVar1 & 1) == 0) {
      return 1;
    }
    param_3 = param_2;
  }
  else {
    if ((uVar2 & 1) != 0) {
      FUN_0095cb70(param_1,param_3);
      return 1;
    }
    FUN_0095cb70(param_1,param_2);
    uVar1 = FUN_0095ca3c(param_4,param_3,param_2);
    if ((uVar1 & 1) == 0) {
      return 1;
    }
    param_1 = param_2;
  }
  FUN_0095cb70(param_1,param_3);
  return 2;
}


