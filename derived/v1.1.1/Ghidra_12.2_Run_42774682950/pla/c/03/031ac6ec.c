/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ac6ec; name: FUN_031ac6ec
 */


void FUN_031ac6ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  
  FUN_031abe84(param_2,param_3,param_4,param_5);
  if ((*(byte *)(param_2 + 100) | 2) == 3) {
    FUN_031a8c34(param_1,*(undefined8 *)(param_2 + 0x68));
    iVar1 = *(int *)(param_2 + 0x78);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x78);
  }
  if (iVar1 != 0) {
    FUN_031a8d80(param_1,*(long *)(param_2 + 0x70),*(long *)(param_2 + 0x70) + (long)iVar1 * 4,0);
    *(undefined4 *)(param_2 + 0x78) = 0;
  }
  return;
}


