/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6bf6c; name: FUN_02a6bf6c
 */


void FUN_02a6bf6c(MultiWaitType *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  MultiWaitHolderType *pMVar9;
  MultiWaitHolderType *pMVar10;
  MultiWaitHolderType *pMVar11;
  
  pMVar11 = *(MultiWaitHolderType **)(param_1 + 0x30);
  pMVar9 = *(MultiWaitHolderType **)(param_1 + 0x38);
LAB_02a6bf84:
  pMVar10 = pMVar9;
  if (pMVar9 != pMVar11) {
    do {
      pMVar9 = pMVar10 + -0x50;
      lVar6 = nn::os::GetMultiWaitHolderUserData(pMVar9);
      if (lVar6 == 0) {
LAB_02a6bfdc:
        plVar7 = *(long **)(pMVar10 + -0x10);
      }
      else {
        nn::os::SetMultiWaitHolderUserData(pMVar9,0);
        nn::os::FinalizeMultiWaitHolder(pMVar9);
        plVar7 = *(long **)(pMVar10 + -0x10);
        *(undefined8 *)(pMVar10 + -0x10) = 0;
        if (plVar7 == (long *)0x0) goto LAB_02a6bfdc;
        lVar6 = plVar7[0xb];
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
        if (iVar2 + -1 != 0) goto LAB_02a6bfdc;
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
        plVar7 = *(long **)(pMVar10 + -0x10);
      }
      if (plVar7 == (long *)0x0) goto LAB_02a6bf84;
      lVar6 = plVar7[0xb];
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
      if (iVar2 + -1 != 0) goto LAB_02a6bf84;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
      pMVar10 = pMVar9;
      if (pMVar9 == pMVar11) break;
    } while( true );
  }
  *(MultiWaitHolderType **)(param_1 + 0x38) = pMVar11;
  nn::os::FinalizeMultiWait(param_1);
  pMVar11 = *(MultiWaitHolderType **)(param_1 + 0x30);
  if (pMVar11 == (MultiWaitHolderType *)0x0) {
    return;
  }
  pMVar9 = *(MultiWaitHolderType **)(param_1 + 0x38);
  pMVar10 = pMVar11;
  if (*(MultiWaitHolderType **)(param_1 + 0x38) != pMVar11) {
    do {
      pMVar10 = pMVar9 + -0x50;
      lVar6 = nn::os::GetMultiWaitHolderUserData(pMVar10);
      if (lVar6 == 0) {
LAB_02a6c0b8:
        plVar7 = *(long **)(pMVar9 + -0x10);
      }
      else {
        nn::os::SetMultiWaitHolderUserData(pMVar10,0);
        nn::os::FinalizeMultiWaitHolder(pMVar10);
        plVar7 = *(long **)(pMVar9 + -0x10);
        *(undefined8 *)(pMVar9 + -0x10) = 0;
        if (plVar7 == (long *)0x0) goto LAB_02a6c0b8;
        lVar6 = plVar7[0xb];
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
        if (iVar2 + -1 != 0) goto LAB_02a6c0b8;
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
        plVar7 = *(long **)(pMVar9 + -0x10);
      }
      if (plVar7 != (long *)0x0) {
        lVar6 = plVar7[0xb];
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
          (**(code **)(*plVar7 + 0x20))();
        }
      }
      pMVar9 = pMVar10;
    } while (pMVar10 != pMVar11);
    pMVar10 = *(MultiWaitHolderType **)(param_1 + 0x30);
  }
  lVar6 = *(long *)(param_1 + 0x40);
  plVar7 = *(long **)(param_1 + 0x48);
  *(MultiWaitHolderType **)(param_1 + 0x38) = pMVar11;
  uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar8 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar7,pMVar10,lVar6 - (long)pMVar10,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02a6c198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7,pMVar10,lVar6 - (long)pMVar10,8);
  return;
}


