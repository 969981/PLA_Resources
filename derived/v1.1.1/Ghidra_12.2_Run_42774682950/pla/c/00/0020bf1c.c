/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020bf1c; name: FUN_0020bf1c
 */


undefined8 FUN_0020bf1c(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00211b04(param_1,(int)param_2[1],*(undefined4 *)((long)param_2 + 0xc));
  if (iVar1 != 0) {
    uVar2 = FUN_00206aec(*param_2,*(undefined4 *)(param_1 + 0xb8),3);
    return uVar2;
  }
  if (((*(byte *)(*param_2 + 0x99c) & 1) == 0) && (*(char *)(param_1 + 0xe7) == '\0')) {
    uVar2 = FUN_002058c4(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xc0));
    if (((int)uVar2 != 0) &&
       (uVar2 = FUN_0020b5e8(*param_2,0,*(undefined4 *)(param_1 + 0xb8),
                             *(undefined4 *)(param_1 + 0xc0)), (int)uVar2 == 0)) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


