/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00867504; name: FUN_00867504
 */


void FUN_00867504(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (*(char *)(param_1 + 0x49) != '\0') {
    return;
  }
  pMVar1 = (MutexType *)(param_1 + 0x18);
  nn::os::LockMutex(pMVar1);
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 == (long *)0x0) {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    local_38[0] = 0xac65;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    uVar3 = FUN_007f00c8(local_38);
    (**(code **)(*plVar5 + 0x38))(plVar5,uVar3);
    FUN_00867878(param_1);
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  nn::os::UnlockMutex(pMVar1);
  puVar2 = PTR_DAT_043780f8;
  if ((*(char *)(param_1 + 0x4a) == '\0') ||
     (uVar4 = FUN_00865eb4(*(undefined8 *)PTR_DAT_043780f8), (uVar4 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x49) = 1;
    FUN_008660a0(local_38,*(undefined8 *)puVar2);
    return;
  }
  FUN_00866024(local_38,*(undefined8 *)puVar2);
  return;
}


