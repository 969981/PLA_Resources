/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015cc30; name: FUN_0015cc30
 */


void FUN_0015cc30(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(byte *)((long)param_2 + 9) = *(byte *)((long)param_2 + 9) & 0xfc;
  *(undefined8 *)(lVar1 + 0x58) = *param_2;
  *param_2 = *(undefined8 *)(lVar1 + 0xa0);
  *(undefined8 **)(lVar1 + 0xa0) = param_2;
  return;
}


