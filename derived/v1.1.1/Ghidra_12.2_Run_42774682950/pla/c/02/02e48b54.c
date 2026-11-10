/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e48b54; name: FUN_02e48b54
 */


void FUN_02e48b54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      if (*(short *)(param_1 + 0x30) != 0) {
        lVar1 = *(long *)(param_1 + 0x38) + 8;
        FUN_02e48cd0(param_1,*(undefined8 *)(param_1 + 8),lVar2,lVar1,param_2,param_1 + 0x50);
        if (1 < *(ushort *)(param_1 + 0x30)) {
          uVar3 = 1;
          lVar2 = 8;
          lVar4 = 0x40;
          do {
            FUN_02e48cd0(param_1,*(long *)(param_1 + 8) + lVar2,*(long *)(param_1 + 0x20) + lVar4,
                         lVar1,param_2,param_1 + 0x50);
            uVar3 = uVar3 + 1;
            lVar2 = lVar2 + 8;
            lVar4 = lVar4 + 0x40;
          } while (uVar3 < *(ushort *)(param_1 + 0x30));
        }
        lVar2 = *(long *)(param_1 + 0x20);
      }
      FUN_02f59e70(9,lVar2);
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      if (*(short *)(param_1 + 0x36) != 0) {
        FUN_02e4c20c(lVar2);
        FUN_02e4c274(*(undefined8 *)(param_1 + 0x28));
        if (1 < *(ushort *)(param_1 + 0x36)) {
          uVar3 = 1;
          lVar2 = 0x88;
          do {
            FUN_02e4c20c(*(long *)(param_1 + 0x28) + lVar2);
            FUN_02e4c274(*(long *)(param_1 + 0x28) + lVar2);
            uVar3 = uVar3 + 1;
            lVar2 = lVar2 + 0x88;
          } while (uVar3 < *(ushort *)(param_1 + 0x36));
        }
        lVar2 = *(long *)(param_1 + 0x28);
      }
      FUN_02f59e70(9,lVar2);
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    FUN_02e49030(*(long *)(param_1 + 0x38) + 0x40,param_1);
    *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x4c) = 1;
    *(int *)(*(long *)(param_1 + 0x38) + 0x48) = *(int *)(*(long *)(param_1 + 0x38) + 0x48) + -1;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}


