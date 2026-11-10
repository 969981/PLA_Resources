/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f6708; name: FUN_032f6708
 */


void FUN_032f6708(long *param_1,long *param_2)

{
  FUN_032f6764();
  if ((*param_1 != 0) && (-1 < (int)param_1[1])) {
    (**(code **)(*param_2 + 0x18))
              (param_2,*param_1,(long)(*(int *)((long)param_1 + 0xc) * 0x10 + 0x10));
  }
  *param_1 = 0;
  param_1[1] = -0x100000000;
  return;
}


