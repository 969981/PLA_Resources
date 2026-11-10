/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f522f8; name: FUN_02f522f8
 */


int FUN_02f522f8(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_02f4f580(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x80));
  return *(int *)(*(long *)(*(long *)(param_1 + 0x78) + 0x100) + 4) + iVar1;
}


