/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083072c; name: FUN_0083072c
 */


void FUN_0083072c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((*(char *)(param_1 + 7) != -3) && (*(char *)(param_1 + 8) != -3)) {
    iVar1 = FUN_00830a60(param_1,1,*(char *)(param_1 + 7),*(undefined8 *)(param_1 + 0x38));
    *(int *)(param_1 + 0x40) = iVar1;
    iVar2 = FUN_00830a60(param_1,2,*(undefined1 *)(param_1 + 7),
                         *(long *)(param_1 + 0x38) + (long)iVar1 * 0x38);
    *(int *)(param_1 + 0x44) = iVar2;
    iVar3 = FUN_00830cd0(param_1,1,0,*(long *)(param_1 + 0x38) + (long)(iVar2 + iVar1) * 0x38);
    FUN_00830cd0(param_1,0,1,*(long *)(param_1 + 0x38) + (long)(iVar3 + iVar2 + iVar1) * 0x38);
    iVar1 = FUN_008307fc(param_1,1,*(undefined8 *)(param_1 + 0x30));
    *(int *)(param_1 + 0x48) = iVar1;
    uVar4 = FUN_008307fc(param_1,2,*(long *)(param_1 + 0x30) + (long)iVar1 * 0x38);
    *(undefined4 *)(param_1 + 0x4c) = uVar4;
  }
  return;
}


