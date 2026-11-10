/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba88a8; name: FUN_02ba88a8
 */


void FUN_02ba88a8(long param_1,ulong param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  local_90 = *(undefined8 *)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 0x1d0);
  param_2 = param_2 & 0xffffffff;
  if (lVar11 != 0) {
    bVar4 = false;
    lVar9 = *(long *)(lVar11 + 0x38);
    goto joined_r0x02ba8d64;
  }
  FUN_02baaae0(&local_88,local_90,&local_90);
  plVar8 = local_88;
  local_88 = (long *)0x0;
  plVar10 = *(long **)(param_1 + 0x1d0);
  *(long **)(param_1 + 0x1d0) = plVar8;
  if (plVar10 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x1e0) = local_78;
    *(undefined8 *)(param_1 + 0x1e8) = local_70;
    *(long **)(param_1 + 0x1d8) = local_80;
    local_88 = (long *)0x0;
  }
  else {
    FUN_02bcbe58(auStack_68,0);
    plVar8 = (long *)plVar10[0xb];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    lVar11 = plVar10[7];
    plVar10[7] = 0;
    if (lVar11 != 0) {
      FUN_02baac24(plVar10 + 8);
    }
    lVar9 = *plVar10;
    lVar11 = tpidr_el0;
    if (lVar9 != 0) {
      lVar12 = plVar10[1];
      if (plVar10[1] == lVar9) {
        lVar12 = lVar9;
      }
      else {
        do {
          lVar14 = lVar12 + -0x30;
          if (*(char *)(lVar12 + -0x28) != '\0') {
            if (*(long **)(lVar12 + -8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar12 + -8) + 0x20))();
            }
            *(undefined1 *)(lVar12 + -0x28) = 0;
          }
          lVar12 = lVar14;
        } while (lVar9 != lVar14);
        lVar12 = *plVar10;
      }
      lVar14 = plVar10[2];
      plVar8 = (long *)plVar10[3];
      plVar10[1] = lVar9;
      uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar8,lVar12,lVar14 - lVar12,8);
          goto LAB_02ba8a40;
        }
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar12,lVar14 - lVar12,8);
    }
LAB_02ba8a40:
    plVar8 = *(long **)(param_1 + 0x1d8);
    uVar2 = *(undefined8 *)(param_1 + 0x1e0);
    uVar13 = *(undefined8 *)(param_1 + 0x1e8);
    uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar7 & 1) == 0) {
LAB_02ba8a9c:
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar10,uVar2,uVar13);
    }
    else {
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_02ba8a9c;
      FUN_02bcc824(plVar8,plVar10,uVar2,uVar13);
    }
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar11 + 0x38d480) + -1;
    *(int *)(lVar11 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar11 + 0x38d484) = 0;
    }
    plVar8 = local_88;
    *(long **)(param_1 + 0x1d8) = local_80;
    *(undefined8 *)(param_1 + 0x1e0) = local_78;
    *(undefined8 *)(param_1 + 0x1e8) = local_70;
    local_88 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      FUN_02bcbe58(auStack_68,0);
      plVar10 = (long *)plVar8[0xb];
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      lVar9 = plVar8[7];
      plVar8[7] = 0;
      if (lVar9 != 0) {
        FUN_02baac24(plVar8 + 8);
      }
      lVar9 = *plVar8;
      if (lVar9 != 0) {
        lVar12 = plVar8[1];
        if (plVar8[1] == lVar9) {
          lVar12 = lVar9;
        }
        else {
          do {
            lVar14 = lVar12 + -0x30;
            if (*(char *)(lVar12 + -0x28) != '\0') {
              if (*(long **)(lVar12 + -8) != (long *)0x0) {
                (**(code **)(**(long **)(lVar12 + -8) + 0x20))();
              }
              *(undefined1 *)(lVar12 + -0x28) = 0;
            }
            lVar12 = lVar14;
          } while (lVar9 != lVar14);
          lVar12 = *plVar8;
        }
        lVar14 = plVar8[2];
        plVar10 = (long *)plVar8[3];
        plVar8[1] = lVar9;
        uVar7 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        if ((uVar7 & 1) != 0) {
          if (*(char *)(lVar11 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar11 + 0x38d488) = 1;
            *(undefined8 *)(lVar11 + 0x38d478) = 0;
            *(undefined8 *)(lVar11 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar11 + 0x38d480)) {
            FUN_02bcc824(plVar10,lVar12,lVar14 - lVar12,8);
            goto LAB_02ba8c60;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,lVar14 - lVar12,8);
      }
LAB_02ba8c60:
      uVar13 = local_70;
      uVar2 = local_78;
      plVar10 = local_80;
      uVar7 = (**(code **)(*local_80 + 0xc0))(local_80);
      if ((uVar7 & 1) == 0) {
LAB_02ba8cbc:
        (**(code **)(*plVar10 + 0x18))(plVar10,plVar8,uVar2,uVar13);
      }
      else {
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_02ba8cbc;
        FUN_02bcc824(plVar10,plVar8,uVar2,uVar13);
      }
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar5 = *(int *)(lVar11 + 0x38d480) + -1;
      *(int *)(lVar11 + 0x38d480) = iVar5;
      if (iVar5 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar11 + 0x38d484) = 0;
      }
    }
  }
  lVar11 = *(long *)(param_1 + 0x1d0);
  bVar4 = true;
  lVar9 = *(long *)(lVar11 + 0x38);
joined_r0x02ba8d64:
  if (lVar9 == 0) {
    FUN_02bab0b0(&local_88,*(undefined8 *)(param_1 + 8));
    plVar8 = local_88;
    local_88 = (long *)0x0;
    lVar9 = *(long *)(lVar11 + 0x38);
    *(long **)(lVar11 + 0x38) = plVar8;
    if (lVar9 != 0) {
      FUN_02baac24(lVar11 + 0x40);
    }
    *(undefined8 *)(lVar11 + 0x48) = local_78;
    *(undefined8 *)(lVar11 + 0x50) = local_70;
    *(long **)(lVar11 + 0x40) = local_80;
    lVar11 = *(long *)(param_1 + 0x1d0);
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  lVar11 = *(long *)(lVar11 + 0x38);
  plVar8 = *(long **)(lVar11 + param_2 * 8);
  plVar10 = (long *)*param_3;
  if (plVar8 == plVar10) {
    if ((!bVar6) && (!bVar4)) {
      return;
    }
  }
  else {
    if (plVar10 != (long *)0x0) {
      plVar8 = plVar10 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar8 = *(long **)(lVar11 + param_2 * 8);
    }
    *(long **)(lVar11 + param_2 * 8) = plVar10;
    if (plVar8 != (long *)0x0) {
      plVar10 = plVar8 + 10;
      do {
        iVar5 = (int)*plVar10 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
  }
  lVar9 = *(long *)(param_1 + 0x240);
  for (lVar11 = *(long *)(param_1 + 0x238); lVar11 != lVar9; lVar11 = lVar11 + 0x18) {
    *(undefined1 *)(lVar11 + 0x10) = 1;
  }
  return;
}


