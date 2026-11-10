/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0279af40; name: FUN_0279af40
 */


void FUN_0279af40(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_48;
  long *local_38;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x108));
  local_48 = *(undefined8 *)(param_3 + 8);
  FUN_013b507c(&local_38,*(undefined8 *)(param_2 + 8),&local_48);
  if (local_38 == (long *)0x0) {
    *param_1 = 0;
    goto LAB_0279b04c;
  }
  if (*(ulong *)(param_2 + 0xf8) < *(ulong *)(param_2 + 0x100)) {
    FUN_02a49678(local_38,"RequestThread",0xffffffff,0x10);
    FUN_0279b40c(local_38 + 0x82,param_4);
    FUN_013b5640(param_2 + 0xd0,&local_38);
    *param_1 = local_38;
    if (local_38 == (long *)0x0) goto LAB_0279b04c;
    lVar6 = local_38[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (local_38 == (long *)0x0) goto LAB_0279b04c;
  }
  else {
    *param_1 = 0;
  }
  lVar6 = local_38[0xb];
  piVar1 = (int *)(lVar6 + 0xc);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 == 0) {
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*local_38 + 0x20))();
  }
LAB_0279b04c:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x108));
  return;
}


