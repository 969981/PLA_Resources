/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00167700; name: FUN_00167700
 */


void FUN_00167700(long *param_1,int param_2)

{
  param_2 = (uint)*(byte *)((long)param_1 + 0x3c) + param_2;
  if ((int)(uint)*(byte *)(*param_1 + 0xc) < param_2) {
    if (0xfe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_0016a180(param_1[2],"function or expression needs too many registers");
    }
    *(char *)(*param_1 + 0xc) = (char)param_2;
  }
  return;
}


