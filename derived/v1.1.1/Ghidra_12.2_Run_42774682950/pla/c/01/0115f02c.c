/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0115f02c; name: FUN_0115f02c
 */


uint FUN_0115f02c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  FUN_0115f06c();
  uVar1 = FUN_0116322c();
  if ((*(long *)(param_1 + 0xf8) != 0) && (uVar2 = FUN_00d37ad4(), (uVar2 & 1) == 0)) {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


