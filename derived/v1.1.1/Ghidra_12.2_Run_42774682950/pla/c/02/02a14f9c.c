/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14f9c; name: FUN_02a14f9c
 */


void FUN_02a14f9c(long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120);
  *(ushort *)(lVar1 + 0x87) = *(ushort *)(lVar1 + 0x87) & 0xffbf;
  *(undefined1 *)(lVar1 + 0x28e) = 0x1f;
  return;
}


