/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01468dd0; name: FUN_01468dd0
 */


void FUN_01468dd0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x6d8));
  *(undefined8 *)(param_1 + 0x6a8) = *param_2;
  uVar4 = param_2[3];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x6c0) = uVar4;
  *(undefined8 *)(param_1 + 0x6b8) = uVar2;
  *(undefined8 *)(param_1 + 0x6b0) = uVar1;
  lVar3 = FUN_01468650(*(undefined8 *)(param_1 + 0x4c8),"PlaceNameView");
  if (lVar3 == 0) {
LAB_01468eb8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if ((*(byte *)(lVar3 + 0x5b0) & 1) == 0) {
    local_50 = 0x6bcce3c5c48c59a;
    pcStack_48 = "NotifyView_0";
    local_40 = 0xc;
    local_38 = (long *)0x0;
    lVar3 = FUN_014703a4(*(undefined8 *)(param_1 + 0x4c8),&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (lVar3 == 0) goto LAB_01468eb8;
    FUN_0147b918(lVar3,param_2);
  }
  else {
    *(undefined1 *)(param_1 + 0x6a2) = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x6d8));
  return;
}


