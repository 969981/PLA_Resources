/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9c8b8; name: FUN_02e9c8b8
 */


void FUN_02e9c8b8(long *param_1,undefined4 *param_2)

{
  if ((((((*(byte *)(param_1 + 0x30) >> 6 & 1) == 0) &&
        ((*(long *)(param_2 + 2) == 0 || (param_1[2] == *(long *)(param_2 + 2))))) &&
       ((param_2[4] == 0 || ((int)param_1[3] == param_2[4])))) &&
      ((((param_2[6] == 0 || ((int)param_1[4] == param_2[6])) &&
        ((*(char *)(param_2 + 8) == -1 || ((char)param_1[5] == *(char *)(param_2 + 8))))) &&
       ((*(char *)(param_2 + 10) == -1 || ((char)param_1[6] == *(char *)(param_2 + 10))))))) &&
     ((*(long *)(param_2 + 0xc) == 0 || (param_1[7] == *(long *)(param_2 + 0xc))))) {
                    /* WARNING: Could not recover jumptable at 0x02e9c91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_2[0x12],param_2[0x13],param_1,*param_2);
    return;
  }
  return;
}


