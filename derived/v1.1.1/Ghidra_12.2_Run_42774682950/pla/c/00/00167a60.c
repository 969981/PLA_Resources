/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00167a60; name: FUN_00167a60
 */


void FUN_00167a60(long *param_1,int *param_2)

{
  if (*param_2 == 0xe) {
    *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4) =
         *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4) & 0x7fffff | 0x1000000;
    *param_2 = 0xc;
  }
  else if (*param_2 == 0xd) {
    *param_2 = 7;
    param_2[2] = *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4) >> 6 & 0xff;
    return;
  }
  return;
}


