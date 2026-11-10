/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083794c; name: FUN_0083794c
 */


ulong FUN_0083794c(long param_1)

{
  ulong uVar1;
  
  if ((ulong)*(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50) == 0) {
    return 0xfd;
  }
  uVar1 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 0x788) + uVar1) == '\0') {
      return uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 + 1;
  } while (*(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50) != uVar1);
  return 0xfd;
}


