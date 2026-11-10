/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00380d6c; name: FUN_00380d6c
 */


long FUN_00380d6c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + (ulong)*(uint *)(param_1 + 0x24));
  if ((uVar2 & 1) == 0) {
    lVar1 = FUN_0030c8c0();
    return lVar1;
  }
  return (uVar2 & 0xfffffffffffffffe) + 8;
}


