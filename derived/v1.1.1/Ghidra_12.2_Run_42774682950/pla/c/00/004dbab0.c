/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dbab0; name: FUN_004dbab0
 */


long FUN_004dbab0(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (((*(int *)(param_1 + 0x38) == 0) || (lVar2 = FUN_004e2880(param_1), lVar2 == 0)) ||
     (iVar1 = FUN_00407950(), iVar1 == 0)) {
    lVar2 = FUN_004e2860(param_1);
    return lVar2;
  }
  return lVar2;
}


