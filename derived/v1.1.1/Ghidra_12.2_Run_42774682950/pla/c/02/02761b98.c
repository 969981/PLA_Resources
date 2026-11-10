/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02761b98; name: FUN_02761b98
 */


void FUN_02761b98(int *param_1,long param_2,long *param_3)

{
  long lVar1;
  int local_28 [2];
  
  FUN_02761c14(local_28);
  if (local_28[0] == 0) {
    *(undefined1 *)(*param_3 + param_3[2]) = 0x88;
    lVar1 = param_3[2];
    param_3[2] = lVar1 + 1;
    *(undefined4 *)(*param_3 + lVar1 + 1) = *(undefined4 *)(param_2 + 0x18);
    param_3[2] = param_3[2] + 4;
  }
  *param_1 = local_28[0];
  return;
}


