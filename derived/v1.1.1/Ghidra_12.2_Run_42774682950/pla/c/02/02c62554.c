/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c62554; name: FUN_02c62554
 */


float FUN_02c62554(long param_1)

{
  byte bVar1;
  
  bVar1 = FUN_02c76f24(*(undefined8 *)(param_1 + 0x98));
  return ((float)bVar1 / 255.0) * 0.40000004 + 0.8;
}


