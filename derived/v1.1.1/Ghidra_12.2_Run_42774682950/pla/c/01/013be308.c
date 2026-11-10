/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013be308; name: FUN_013be308
 */


void FUN_013be308(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x767b05eae3332696;
  pcStack_38 = "mystery_gift_history";
  local_30 = 0x14;
  local_28 = (long *)0x0;
  lVar5 = thunk_FUN_00d2ee28(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar5 == 0) {
LAB_013be444:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_48 = *(long **)(param_1 + 0x5c0);
  if (local_48 != (long *)0x0) {
    lVar7 = local_48[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_013be444;
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0281e3a4(lVar5,&local_48);
  if (local_48 != (long *)0x0) {
    lVar7 = local_48[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  FUN_0281e380(lVar5,0,0);
  FUN_0281e390(lVar5,0);
  FUN_0281e398(lVar5,0);
  FUN_0281857c(lVar5);
  return;
}


