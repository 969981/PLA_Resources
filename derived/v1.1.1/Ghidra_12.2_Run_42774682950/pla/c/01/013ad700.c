/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ad700; name: FUN_013ad700
 */


void FUN_013ad700(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0xa8) = param_2;
  if (param_2 < 0x10) {
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(&DAT_03a7b530 + (long)(int)param_2 * 4);
  }
  return;
}


