/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02febd84; name: FUN_02febd84
 */


void FUN_02febd84(long *param_1,long *param_2)

{
  FUN_02febd34();
  if ((*param_1 != 0) && (-1 < (int)param_1[1])) {
    (**(code **)(*param_2 + 0x18))
              (param_2,*param_1,(long)(*(int *)((long)param_1 + 0xc) * 0x10 + 0x10));
  }
  *param_1 = 0;
  param_1[1] = -0x100000000;
  return;
}


