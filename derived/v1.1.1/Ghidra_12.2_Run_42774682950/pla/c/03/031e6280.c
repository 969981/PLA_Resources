/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e6280; name: FUN_031e6280
 */


void FUN_031e6280(undefined8 *param_1,long param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = param_2;
  *param_1 = &DAT_042f1020;
  iVar1 = *param_3;
  param_1[5] = 0;
  *(int *)(param_1 + 3) = iVar1;
  param_1[6] = 0x8000000000000000;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  FUN_032c2320(param_1 + 9);
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  FUN_032c2320(param_1 + 0xd);
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x38) + (long)*param_3 * 0xf0);
  param_1[4] = uVar2;
  FUN_0318b774(uVar2,param_1 + 5);
  return;
}


