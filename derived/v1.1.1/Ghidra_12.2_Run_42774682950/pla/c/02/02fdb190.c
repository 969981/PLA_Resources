/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fdb190; name: FUN_02fdb190
 */


void FUN_02fdb190(float param_1,long param_2)

{
  *(short *)(param_2 + 0x70) = (short)((uint)(param_1 * 1.0039062) >> 0x10);
  return;
}


