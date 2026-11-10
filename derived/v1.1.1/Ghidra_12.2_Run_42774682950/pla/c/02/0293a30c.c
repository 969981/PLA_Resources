/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293a30c; name: FUN_0293a30c
 */


undefined1 FUN_0293a30c(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x88) + 8) + (ulong)(param_2 & 0xff) * 8 + 0x120);
  if ((*(byte *)(lVar1 + 0x140) & 7) == 0) {
    return 0;
  }
  return *(undefined1 *)(lVar1 + 0x24e);
}


