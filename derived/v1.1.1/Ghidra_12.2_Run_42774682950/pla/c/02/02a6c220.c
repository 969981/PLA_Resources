/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6c220; name: FUN_02a6c220
 */


void FUN_02a6c220(long param_1,long param_2)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  MultiWaitHolderType *pMVar15;
  MultiWaitHolderType *pMVar16;
  MultiWaitHolderType *pMVar17;
  long lVar18;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined1 local_58;
  long local_48;
  
  puVar8 = *(undefined8 **)(param_1 + 0x30);
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  puVar14 = puVar8;
  local_48 = param_2;
  if (puVar8 == puVar7) {
LAB_02a6c274:
    if (puVar14 != puVar7) {
      local_60 = (long *)param_2;
      if (param_2 != 0) {
        lVar11 = *(long *)(param_2 + 0x58);
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar6;
        }
        piVar2 = (int *)(lVar11 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_58 = 0;
      nn::os::InitializeMultiWaitHolder
                ((MultiWaitHolderType *)&local_a0,(EventType *)(param_2 + 0x68));
      nn::os::SetMultiWaitHolderUserData((MultiWaitHolderType *)&local_a0,(ulong)&local_a0);
      plVar13 = (long *)puVar14[8];
      puVar14[2] = local_90;
      puVar14[3] = uStack_88;
      *puVar14 = local_a0;
      puVar14[1] = uStack_98;
      puVar14[8] = 0;
      puVar14[6] = local_70;
      puVar14[7] = uStack_68;
      puVar14[4] = local_80;
      puVar14[5] = uStack_78;
      if (plVar13 != (long *)0x0) {
        lVar11 = plVar13[0xb];
        piVar2 = (int *)(lVar11 + 0xc);
        do {
          iVar3 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))();
        }
      }
      plVar13 = local_60;
      local_60 = (long *)0x0;
      puVar14[8] = plVar13;
      *(undefined1 *)(puVar14 + 9) = local_58;
      lVar11 = nn::os::GetMultiWaitHolderUserData((MultiWaitHolderType *)&local_a0);
      if (lVar11 != 0) {
        nn::os::SetMultiWaitHolderUserData((MultiWaitHolderType *)&local_a0,0);
        nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)&local_a0);
        plVar13 = local_60;
        local_60 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          lVar11 = plVar13[0xb];
          piVar2 = (int *)(lVar11 + 0xc);
          do {
            iVar3 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))();
          }
        }
      }
      if (local_60 == (long *)0x0) {
        return;
      }
      lVar11 = local_60[0xb];
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
        return;
      }
      return;
    }
  }
  else {
    do {
      if (puVar14[8] == 0) goto LAB_02a6c274;
      puVar14 = puVar14 + 10;
    } while (puVar7 != puVar14);
  }
  puVar14 = (undefined8 *)(param_1 + 0x48);
  if (puVar7 < *(undefined8 **)(param_1 + 0x40)) {
    FUN_02a6c97c(puVar14,puVar7,&local_48);
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 0x50;
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0x50);
    lVar11 = (long)puVar7 - (long)puVar8 >> 4;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    uVar1 = lVar11 * -0x3333333333333333 + 1;
    if (uVar12 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = (long)*(undefined8 **)(param_1 + 0x40) - (long)puVar8 >> 4;
    uVar10 = lVar9 * -0x6666666666666666;
    if (uVar1 <= uVar10) {
      uVar1 = uVar10;
    }
    if ((ulong)(lVar9 * -0x3333333333333333) < uVar12 >> 1) {
      uVar12 = uVar1;
    }
    if (uVar12 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)*puVar14 + 0x10))((long *)*puVar14,uVar12 * 0x50,8);
      if (lVar9 == 0) {
        (**(code **)(*(long *)*puVar14 + 0xb8))();
      }
    }
    lVar18 = lVar9 + lVar11 * 0x10;
    FUN_02a6c97c(puVar14,lVar18,&local_48);
    pMVar16 = *(MultiWaitHolderType **)(param_1 + 0x30);
    pMVar15 = *(MultiWaitHolderType **)(param_1 + 0x38);
    lVar11 = lVar18 + 0x50;
    if (pMVar15 == pMVar16) {
      pMVar15 = pMVar16;
    }
    else {
      do {
        lVar18 = lVar18 + -0x50;
        pMVar15 = pMVar15 + -0x50;
        FUN_02a6c82c(puVar14,lVar18,pMVar15);
      } while (pMVar16 != pMVar15);
      pMVar16 = *(MultiWaitHolderType **)(param_1 + 0x30);
      pMVar15 = *(MultiWaitHolderType **)(param_1 + 0x38);
    }
    *(long *)(param_1 + 0x30) = lVar18;
    *(long *)(param_1 + 0x38) = lVar11;
    lVar11 = *(long *)(param_1 + 0x40);
    *(ulong *)(param_1 + 0x40) = lVar9 + uVar12 * 0x50;
    while (pMVar15 != pMVar16) {
      pMVar17 = pMVar15 + -0x50;
      lVar9 = nn::os::GetMultiWaitHolderUserData(pMVar17);
      if (lVar9 == 0) {
LAB_02a6c5cc:
        plVar13 = *(long **)(pMVar15 + -0x10);
      }
      else {
        nn::os::SetMultiWaitHolderUserData(pMVar17,0);
        nn::os::FinalizeMultiWaitHolder(pMVar17);
        plVar13 = *(long **)(pMVar15 + -0x10);
        *(undefined8 *)(pMVar15 + -0x10) = 0;
        if (plVar13 == (long *)0x0) goto LAB_02a6c5cc;
        lVar9 = plVar13[0xb];
        piVar2 = (int *)(lVar9 + 0xc);
        do {
          iVar3 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 != 0) goto LAB_02a6c5cc;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))();
        plVar13 = *(long **)(pMVar15 + -0x10);
      }
      pMVar15 = pMVar17;
      if (plVar13 != (long *)0x0) {
        lVar9 = plVar13[0xb];
        piVar2 = (int *)(lVar9 + 0xc);
        do {
          iVar3 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))();
        }
      }
    }
    if (pMVar16 != (MultiWaitHolderType *)0x0) {
      plVar13 = (long *)*puVar14;
      lVar11 = lVar11 - (long)pMVar16;
      uVar12 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar12 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar13,pMVar16,lVar11,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02a6c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar13 + 0x18))(plVar13,pMVar16,lVar11,8);
      return;
    }
  }
  return;
}


