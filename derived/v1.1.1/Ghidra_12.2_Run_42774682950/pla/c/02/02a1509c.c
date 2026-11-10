/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a1509c; name: FUN_02a1509c
 */


void FUN_02a1509c(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8) + 0x120;
  FUN_02a38320(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(lVar1 + (param_2 & 0xff) * 8),
               *(undefined8 *)(lVar1 + (param_3 & 0xff) * 8));
  return;
}


