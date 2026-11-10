/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015cbe0; name: FUN_0015cbe0
 */


void FUN_0015cbe0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xfb;
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(lVar1 + 0x78);
  *(long *)(lVar1 + 0x78) = param_2;
  return;
}


