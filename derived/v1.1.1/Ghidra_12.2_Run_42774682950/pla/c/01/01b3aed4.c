/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3aed4; name: FUN_01b3aed4
 */


int FUN_01b3aed4(long param_1,ulong param_2,ulong param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379690), iVar6 != 0))
  {
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
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar12 = *(long **)(param_1 + 0x5b8);
  plVar2 = (long *)(param_1 + 0x5b0);
  if (plVar2 == plVar12) {
    iVar6 = 0;
    goto joined_r0x01b3b1cc;
  }
  local_110._0_4_ = CONCAT22((short)*(undefined4 *)((long)plVar12 + 0x14),(short)plVar12[2]);
  iVar6 = FUN_01468b54(plVar11,&local_110);
  if ((param_2 & 1) == 0) {
    iVar7 = *(int *)((long)plVar12 + 0x14) - iVar6;
    lVar10 = tpidr_el0;
    if (iVar7 == 0) {
      plVar14 = (long *)plVar12[1];
      *(long **)(*plVar12 + 8) = plVar14;
      *(long *)plVar12[1] = *plVar12;
      plVar13 = *(long **)(param_1 + 0x5c8);
      *(long *)(param_1 + 0x5c0) = *(long *)(param_1 + 0x5c0) + -1;
      uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar9 & 1) != 0) {
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(plVar13,plVar12,0x18,4);
          goto joined_r0x01b3b3e0;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,0x18,4);
    }
    else {
      *(int *)((long)plVar12 + 0x14) = iVar7;
      plVar14 = (long *)plVar12[1];
    }
joined_r0x01b3b3e0:
    do {
      if (plVar2 == plVar14) goto LAB_01b3b110;
      local_110._4_4_ = (undefined4)((ulong)local_110 >> 0x20);
      local_110._0_4_ = CONCAT22((short)*(undefined4 *)((long)plVar14 + 0x14),(short)plVar14[2]);
      iVar7 = FUN_01468b54(plVar11,&local_110);
      iVar6 = iVar7 + iVar6;
      iVar7 = *(int *)((long)plVar14 + 0x14) - iVar7;
      if (iVar7 == 0) {
        plVar12 = (long *)plVar14[1];
        *(long **)(*plVar14 + 8) = plVar12;
        *(long *)plVar14[1] = *plVar14;
        plVar13 = *(long **)(param_1 + 0x5c8);
        *(long *)(param_1 + 0x5c0) = *(long *)(param_1 + 0x5c0) + -1;
        uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
        if ((uVar9 & 1) != 0) {
          if (*(char *)(lVar10 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar10 + 0x38d488) = 1;
            *(undefined8 *)(lVar10 + 0x38d478) = 0;
            *(undefined8 *)(lVar10 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar10 + 0x38d480)) {
            FUN_02bcc824(plVar13,plVar14,0x18,4);
            plVar14 = plVar12;
            goto joined_r0x01b3b3e0;
          }
        }
        (**(code **)(*plVar13 + 0x18))(plVar13,plVar14,0x18,4);
        plVar14 = plVar12;
        goto joined_r0x01b3b3e0;
      }
      *(int *)((long)plVar14 + 0x14) = iVar7;
      plVar14 = (long *)plVar14[1];
    } while( true );
  }
  plVar14 = (long *)plVar12[1];
  *(long **)(*plVar12 + 8) = plVar14;
  *(long *)plVar12[1] = *plVar12;
  plVar13 = *(long **)(param_1 + 0x5c8);
  *(long *)(param_1 + 0x5c0) = *(long *)(param_1 + 0x5c0) + -1;
  uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
  if ((uVar9 & 1) == 0) {
LAB_01b3b2a0:
    (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,0x18,4);
  }
  else {
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_01b3b2a0;
    FUN_02bcc824(plVar13,plVar12,0x18,4);
  }
  if (plVar2 != plVar14) {
    lVar10 = tpidr_el0;
    do {
      while( true ) {
        local_110._0_4_ = CONCAT22((short)*(undefined4 *)((long)plVar14 + 0x14),(short)plVar14[2]);
        iVar7 = FUN_01468b54(plVar11,&local_110);
        plVar12 = (long *)plVar14[1];
        *(long **)(*plVar14 + 8) = plVar12;
        *(long *)plVar14[1] = *plVar14;
        plVar13 = *(long **)(param_1 + 0x5c8);
        *(long *)(param_1 + 0x5c0) = *(long *)(param_1 + 0x5c0) + -1;
        uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
        if ((uVar9 & 1) == 0) {
          bVar4 = false;
        }
        else {
          if (*(char *)(lVar10 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar10 + 0x38d488) = 1;
            *(undefined8 *)(lVar10 + 0x38d478) = 0;
            *(undefined8 *)(lVar10 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
          }
          bVar4 = 0 < *(int *)(lVar10 + 0x38d480);
        }
        iVar6 = iVar7 + iVar6;
        if (bVar4) break;
        (**(code **)(*plVar13 + 0x18))(plVar13,plVar14,0x18,4);
        plVar14 = plVar12;
        if (plVar2 == plVar12) goto LAB_01b3b110;
      }
      FUN_02bcc824(plVar13,plVar14,0x18,4);
      plVar14 = plVar12;
    } while (plVar2 != plVar12);
  }
LAB_01b3b110:
  if ((0 < iVar6) && ((param_3 & 1) != 0)) {
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_78 = 0x17;
    local_70 = (long *)0x0;
    local_88 = &DAT_c4362e0f8400af43;
    pcStack_80 = "PLAY_SE_HA_SYS_GET_ITEM";
    uVar8 = *(undefined8 *)PTR_DAT_04379c30;
    local_a0 = 0;
    uStack_98 = 0;
    *(undefined8 *)PTR_DAT_04379c38 = uVar8;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    local_108 = (code *)0x0;
    FUN_02913338(uVar8,&local_88,&local_110,0,0,0);
    pcVar5 = local_108;
    if (local_108 == (code *)0x0) {
      local_108 = (code *)0x0;
    }
    else {
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      local_108 = (code *)0x0;
      (*pcVar5)(&local_f0);
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
  }
joined_r0x01b3b1cc:
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  return iVar6;
}


