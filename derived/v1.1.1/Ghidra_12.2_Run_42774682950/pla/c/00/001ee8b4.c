/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ee8b4; name: FUN_001ee8b4
 */


undefined8 FUN_001ee8b4(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[4];
  uVar3 = param_2[1];
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  param_2[1] = uVar3 - uVar1;
  param_2[4] = uVar2 - uVar1;
  *(ulong *)(param_2 + 2) = *(long *)(param_2 + 2) + (ulong)uVar1;
  if (uVar3 - uVar1 == 0 || uVar2 - uVar1 != 0) {
    uVar4 = FUN_001eeb30();
    return uVar4;
  }
  *param_2 = 3;
  return 0;
}


