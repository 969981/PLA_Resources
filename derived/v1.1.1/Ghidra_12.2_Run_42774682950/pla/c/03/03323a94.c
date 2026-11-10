/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03323a94; name: FUN_03323a94
 */


void FUN_03323a94(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  FUN_03325040();
  *param_1 = &PTR_LAB_04350288;
  param_1[5] = 0;
  lVar2 = *param_2;
  *(bool *)(param_1 + 4) = lVar2 != 0;
  if (lVar2 != 0) {
    param_1[3] = *param_2;
    iVar1 = nn::fs::GetFileSize(param_1 + 6);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
  }
  return;
}


