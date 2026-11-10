/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02784284; name: FUN_02784284
 */


void FUN_02784284(long *param_1,undefined8 param_2)

{
  FUN_0276d1cc(param_2);
  if (*(long *)(*param_1 + 0x68) == 0) {
    return;
  }
  FUN_013b6898(*(long *)(*param_1 + 0x68),&DAT_03a7e048);
  return;
}


