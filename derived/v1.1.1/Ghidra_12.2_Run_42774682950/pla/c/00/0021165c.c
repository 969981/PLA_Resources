/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021165c; name: FUN_0021165c
 */


void FUN_0021165c(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    FUN_0021157c(param_1);
    return;
  }
  if (lVar2 == param_1[2] + -1) {
    param_1[2] = lVar2;
    return;
  }
  *(undefined8 *)(*param_1 + lVar2 * 8) = *(undefined8 *)(*param_1 + (param_1[2] + -1) * 8);
  **(long **)(*param_1 + *param_2 * 8) = *param_2;
  param_1[2] = param_1[2] + -1;
  iVar1 = (*(code *)param_1[4])(param_2,*(undefined8 *)(*param_1 + *param_2 * 8));
  if (iVar1 == 0) {
    FUN_002114ec(param_1,*param_2);
    return;
  }
  FUN_002115b8(param_1);
  return;
}


