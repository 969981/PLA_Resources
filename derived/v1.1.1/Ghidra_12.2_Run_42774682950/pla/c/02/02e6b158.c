/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6b158; name: FUN_02e6b158
 */


void FUN_02e6b158(long param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  cVar6 = *(char *)(param_1 + 0xc0);
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  if (cVar6 != '\0') {
    plVar4 = *(long **)(param_1 + 0xb8);
    lVar9 = *(long *)plVar4[1];
    uVar2 = *(uint *)(param_1 + 0x90);
    uVar5 = (ulong)uVar2;
    uVar3 = *(uint *)((long *)plVar4[1] + 3);
    iVar7 = *(int *)(param_1 + 0x98);
    uVar1 = lVar9 + (ulong)*(uint *)(plVar4 + 2);
    iVar8 = uVar2 - (int)uVar1;
    if (uVar5 <= uVar1 || lVar9 + (ulong)uVar3 <= uVar5) {
      iVar8 = uVar3 - *(uint *)(plVar4 + 2);
    }
    while( true ) {
      cVar6 = cVar6 + -1;
      *(int *)(param_1 + 0x98) = iVar7 + iVar8;
      *(char *)(param_1 + 0xc0) = cVar6;
      if (cVar6 == '\0') break;
      plVar4 = (long *)*plVar4;
      lVar9 = *(long *)plVar4[1];
      uVar3 = *(uint *)((long *)plVar4[1] + 3);
      iVar7 = *(int *)(param_1 + 0x98);
      uVar1 = lVar9 + (ulong)*(uint *)(plVar4 + 2);
      iVar8 = uVar3 - *(uint *)(plVar4 + 2);
      if (uVar1 < uVar5 && uVar5 < lVar9 + (ulong)uVar3) {
        iVar8 = uVar2 - (int)uVar1;
      }
    }
  }
  FUN_02e6b230(param_1);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return;
}


