/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0161e2e4; name: FUN_0161e2e4
 */


undefined1 FUN_0161e2e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  if (lVar1 == 0) {
    return 0;
  }
  return *(undefined1 *)(lVar1 + 0x1e1);
}


