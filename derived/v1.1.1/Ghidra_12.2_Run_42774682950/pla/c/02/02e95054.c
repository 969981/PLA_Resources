/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e95054; name: FUN_02e95054
 */


int FUN_02e95054(long param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[4] + -1;
  *(int *)(param_2 + 4) = iVar1;
  if (iVar1 == 0) {
    if (*param_2 != 0) {
      (*DAT_0442d158)(*(undefined4 *)((long)param_2 + 0xc),*param_2);
      *param_2 = 0;
      param_2[1] = -0x100000000;
      if ((int)param_2[4] != 0) {
        return (int)param_2[4];
      }
    }
    FUN_02e96110(param_1 + 0x88,*(undefined4 *)((long)param_2 + 0x24));
    iVar1 = 0;
  }
  return iVar1;
}


