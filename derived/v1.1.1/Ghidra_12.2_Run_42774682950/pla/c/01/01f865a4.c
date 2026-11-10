/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f865a4; name: FUN_01f865a4
 */


void FUN_01f865a4(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x308) != 2) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (*(int *)(param_2 + 0x314) == 0) {
    lVar2 = param_2 + (long)*(int *)(param_2 + 0x30c) * 0x18 + 0x270;
  }
  else if (*(int *)(param_2 + 0x314) == 1) {
    lVar2 = param_2 + (long)*(int *)(param_2 + 0x30c) * 0x18 + 0x2b8;
  }
  else {
    lVar2 = param_2 + 0x270;
  }
  iVar1 = *(int *)(lVar2 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00b636fc(param_1,param_2 + (long)iVar1 * 0x20 + 0x1f8);
  return;
}


