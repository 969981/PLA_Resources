/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02df3e00; name: FUN_02df3e00
 */


void FUN_02df3e00(long *param_1,long *param_2,uint param_3,int param_4,uint param_5,int param_6,
                 uint param_7)

{
  uint uVar1;
  
  uVar1 = (int)param_3 >> (param_7 & 0x1f);
  *(int *)*param_1 = param_4 + (param_5 & param_3) * param_6 + *(int *)*param_1;
  *param_1 = *param_1 + 4;
  *(int *)*param_2 = param_4 + (param_5 & uVar1) * param_6 + *(int *)*param_2;
  *param_2 = *param_2 + 4;
  uVar1 = (int)uVar1 >> (param_7 & 0x1f);
  *(int *)*param_1 = param_4 + (uVar1 & param_5) * param_6 + *(int *)*param_1;
  *param_1 = *param_1 + 4;
  *(int *)*param_2 =
       param_4 + ((int)uVar1 >> (param_7 & 0x1f) & param_5) * param_6 + *(int *)*param_2;
  *param_2 = *param_2 + 4;
  return;
}


