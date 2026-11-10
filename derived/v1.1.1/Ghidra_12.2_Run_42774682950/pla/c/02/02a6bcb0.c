/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6bcb0; name: FUN_02a6bcb0
 */


void FUN_02a6bcb0(long *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  MultiWaitHolderType *pMVar11;
  MultiWaitHolderType *pMVar12;
  MultiWaitHolderType *pMVar13;
  
  lVar8 = *param_1;
  if ((ulong)((param_1[2] - lVar8 >> 4) * -0x3333333333333333) < param_2) {
    plVar10 = param_1 + 3;
    lVar9 = param_1[1];
    lVar5 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,param_2 * 0x50,8);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar10 + 0xb8))();
    }
    lVar9 = lVar5 + (lVar9 - lVar8 >> 4) * 0x10;
    pMVar12 = (MultiWaitHolderType *)*param_1;
    pMVar11 = (MultiWaitHolderType *)param_1[1];
    lVar8 = lVar9;
    if (pMVar11 == pMVar12) {
      pMVar11 = pMVar12;
    }
    else {
      do {
        lVar8 = lVar8 + -0x50;
        pMVar11 = pMVar11 + -0x50;
        FUN_02a6c82c(plVar10,lVar8,pMVar11);
      } while (pMVar12 != pMVar11);
      pMVar12 = (MultiWaitHolderType *)*param_1;
      pMVar11 = (MultiWaitHolderType *)param_1[1];
    }
    *param_1 = lVar8;
    param_1[1] = lVar9;
    lVar8 = param_1[2];
    param_1[2] = lVar5 + param_2 * 0x50;
    while (pMVar11 != pMVar12) {
      pMVar13 = pMVar11 + -0x50;
      lVar5 = nn::os::GetMultiWaitHolderUserData(pMVar13);
      if (lVar5 == 0) {
LAB_02a6be84:
        plVar7 = *(long **)(pMVar11 + -0x10);
      }
      else {
        nn::os::SetMultiWaitHolderUserData(pMVar13,0);
        nn::os::FinalizeMultiWaitHolder(pMVar13);
        plVar7 = *(long **)(pMVar11 + -0x10);
        *(undefined8 *)(pMVar11 + -0x10) = 0;
        if (plVar7 == (long *)0x0) goto LAB_02a6be84;
        lVar5 = plVar7[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 != 0) goto LAB_02a6be84;
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
        plVar7 = *(long **)(pMVar11 + -0x10);
      }
      pMVar11 = pMVar13;
      if (plVar7 != (long *)0x0) {
        lVar5 = plVar7[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
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
          *(undefined8 *)(lVar5 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))();
        }
      }
    }
    if (pMVar12 != (MultiWaitHolderType *)0x0) {
      plVar10 = (long *)*plVar10;
      uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar6 & 1) != 0) {
        lVar5 = tpidr_el0;
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar10,pMVar12,lVar8 - (long)pMVar12,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02a6be28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x18))(plVar10,pMVar12,lVar8 - (long)pMVar12,8);
      return;
    }
  }
  return;
}


