/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276bf8c; name: FUN_0276bf8c
 */


undefined8 FUN_0276bf8c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x58) == 0) || (uVar1 = FUN_02a43a8c(), (uVar1 & 1) != 0)) {
    return 0;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_0276e608();
  }
  uVar2 = FUN_0275f4f4();
  return uVar2;
}


