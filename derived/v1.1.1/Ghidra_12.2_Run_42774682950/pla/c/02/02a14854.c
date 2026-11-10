/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14854; name: FUN_02a14854
 */


void FUN_02a14854(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8) + 0x120;
  FUN_02952d9c(*(undefined8 *)(lVar1 + (param_2 & 0xff) * 8),
               *(undefined8 *)(lVar1 + (param_3 & 0xff) * 8));
  return;
}


