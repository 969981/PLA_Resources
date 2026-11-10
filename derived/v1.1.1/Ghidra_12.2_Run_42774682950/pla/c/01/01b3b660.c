/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3b660; name: FUN_01b3b660
 */


void FUN_01b3b660(long param_1,ulong param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [100];
  undefined4 local_9c;
  long *local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  if (((param_3 & 1) != 0) && (*(long *)(param_1 + 0x5c0) != 0)) {
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    lVar10 = *(long *)PTR_DAT_04379698;
    *(long *)PTR_DAT_043796a0 = lVar10;
    plVar11 = *(long **)(*(long *)(lVar10 + 0x50) + 0x30);
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_8c = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_90 = CONCAT31(local_90._1_3_,0xb);
    FUN_01468dd0(plVar11,&local_90);
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
  }
  if ((param_2 & 1) != 0) {
    for (lVar10 = *(long *)(param_1 + 0x5b8); lVar10 != param_1 + 0x5b0;
        lVar10 = *(long *)(lVar10 + 8)) {
      local_90 = *(undefined4 *)(lVar10 + 0x10);
      local_9c = *(undefined4 *)(lVar10 + 0x14);
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      local_118 = (code *)0x0;
      FUN_01f0d5ac(&local_98,&local_90,&local_9c,*(undefined8 *)(param_1 + 8),&local_120);
      pcVar4 = local_118;
      if (local_98 != (long *)0x0) {
        lVar8 = local_98[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_98 + 0x20))();
          pcVar4 = local_118;
        }
      }
      local_118 = pcVar4;
      if (pcVar4 != (code *)0x0) {
        local_110 = 0;
        uStack_108 = 0;
        local_120 = 0;
        local_118 = (code *)0x0;
        (*pcVar4)(auStack_100);
      }
    }
  }
  if (*(long *)(param_1 + 0x5c0) == 0) {
    return;
  }
  plVar9 = *(long **)(param_1 + 0x5b8);
  plVar11 = (long *)(param_1 + 0x5b0);
  lVar10 = *(long *)(param_1 + 0x5b0);
  *(undefined8 *)(*plVar9 + 8) = *(undefined8 *)(lVar10 + 8);
  **(long **)(lVar10 + 8) = *plVar9;
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  if (plVar9 == plVar11) {
    return;
  }
  plVar12 = *(long **)(param_1 + 0x5c8);
  plVar13 = (long *)plVar9[1];
  uVar7 = (**(code **)(*plVar12 + 0xc0))(plVar12);
  if ((uVar7 & 1) == 0) {
LAB_01b3b898:
    (**(code **)(*plVar12 + 0x18))(plVar12,plVar9,0x18,4);
  }
  else {
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_01b3b898;
    FUN_02bcc824(plVar12,plVar9,0x18,4);
  }
  if (plVar13 == plVar11) {
    return;
  }
  plVar9 = (long *)plVar13[1];
  plVar12 = *(long **)(param_1 + 0x5c8);
  uVar7 = (**(code **)(*plVar12 + 0xc0))(plVar12);
  if ((uVar7 & 1) != 0) {
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar10 + 0x38d480)) {
      FUN_02bcc824(plVar12,plVar13,0x18,4);
      goto LAB_01b3b93c;
    }
  }
  (**(code **)(*plVar12 + 0x18))(plVar12,plVar13,0x18,4);
LAB_01b3b93c:
  if (plVar9 != plVar11) {
    lVar10 = tpidr_el0;
    do {
      plVar12 = *(long **)(param_1 + 0x5c8);
      plVar13 = (long *)plVar9[1];
      uVar7 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar7 & 1) == 0) {
LAB_01b3b9c0:
        (**(code **)(*plVar12 + 0x18))(plVar12,plVar9,0x18,4);
      }
      else {
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_01b3b9c0;
        FUN_02bcc824(plVar12,plVar9,0x18,4);
      }
      plVar9 = plVar13;
    } while (plVar13 != plVar11);
  }
  return;
}


