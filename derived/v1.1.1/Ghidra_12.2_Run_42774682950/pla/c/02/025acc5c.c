/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025acc5c; name: FUN_025acc5c
 */


void FUN_025acc5c(long param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  double dVar1;
  double __x;
  
  __x = *(double *)(param_1 + 0x70) - (double)(uint)(*(int *)(param_1 + 0x78) * 0x3c);
  dVar1 = fmod(__x,1.0);
  *param_2 = *(undefined4 *)(param_1 + 0x78);
  *param_3 = (int)__x;
  *param_4 = (int)(dVar1 * 60.0);
  return;
}


