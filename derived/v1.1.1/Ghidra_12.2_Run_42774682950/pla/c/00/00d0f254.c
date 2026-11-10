/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d0f254; name: FUN_00d0f254
 */


undefined1 FUN_00d0f254(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xb0) == 0) {
    return 1;
  }
  lVar1 = FUN_02db6478();
  if (*(long *)(lVar1 + 8) == 0) {
    return 0;
  }
  return *(undefined1 *)(*(long *)(lVar1 + 8) + 0x1e1);
}


