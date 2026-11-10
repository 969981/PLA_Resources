/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03341140; name: FUN_03341140
 */


void FUN_03341140(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    iVar1 = (int)param_3[3];
    if ((iVar1 < 0) && (*(int *)(param_3 + 3) = iVar1 + 8, iVar1 + 8 < 1)) {
      puVar2 = (undefined8 *)(param_3[1] + (long)iVar1);
    }
    else {
      puVar2 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar2 + 1);
    }
    *param_1 = *puVar2;
    param_1 = param_1 + 1;
  }
  return;
}


