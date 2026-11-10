/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020b260; name: FUN_0020b260
 */


undefined8 FUN_0020b260(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x950);
  if (*(int *)(param_1 + 0x95c) - param_2 < iVar1 || 0x7fffffff - param_2 < iVar1) {
    uVar2 = FUN_00205c6c(param_1,*(undefined4 *)(param_1 + 0x93c),3,0);
    return uVar2;
  }
  *(int *)(param_1 + 0x950) = iVar1 + param_2;
  if (((*(byte *)(param_1 + 0x99c) & 1) == 0) && (*(char *)(param_1 + 0x9ac) == '\0')) {
    uVar2 = FUN_002058c4();
    if (((int)uVar2 != 0) &&
       (uVar2 = FUN_0020b5e8(param_1,0,0,*(undefined4 *)(param_1 + 0x950)), (int)uVar2 == 0)) {
      *(undefined4 *)(param_1 + 0x950) = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


