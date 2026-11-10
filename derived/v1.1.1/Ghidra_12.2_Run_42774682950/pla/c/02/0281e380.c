/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281e380; name: FUN_0281e380
 */


void FUN_0281e380(long param_1,undefined4 param_2,byte param_3)

{
  *(undefined4 *)(param_1 + 0x910) = param_2;
  *(byte *)(param_1 + 0x9f5) = param_3 & 1;
  return;
}


