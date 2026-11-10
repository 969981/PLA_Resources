/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c92140; name: FUN_02c92140
 */


void FUN_02c92140(long param_1,undefined8 param_2,byte param_3,byte param_4)

{
  FUN_02c91f74();
  *(byte *)(param_1 + 0x2f3) = param_3 & 1;
  *(byte *)(param_1 + 0x2f2) = param_4 & 1;
  return;
}


