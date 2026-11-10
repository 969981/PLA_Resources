/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba5aac; name: FUN_02ba5aac
 */


void FUN_02ba5aac(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
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
  lVar10 = *(long *)(param_1 + 0x1d0);
  if (lVar10 != 0) {
    bVar4 = false;
    goto LAB_02ba5f58;
  }
  FUN_02baaae0(&local_88,local_90,&local_90);
  plVar8 = local_88;
  local_88 = (long *)0x0;
  plVar11 = *(long **)(param_1 + 0x1d0);
  *(long **)(param_1 + 0x1d0) = plVar8;
  if (plVar11 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x1e0) = local_78;
    *(undefined8 *)(param_1 + 0x1e8) = local_70;
    *(long **)(param_1 + 0x1d8) = local_80;
    local_88 = (long *)0x0;
  }
  else {
    FUN_02bcbe58(auStack_68,0);
    plVar8 = (long *)plVar11[0xb];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    lVar10 = plVar11[7];
    plVar11[7] = 0;
    if (lVar10 != 0) {
      FUN_02baac24(plVar11 + 8);
    }
    lVar9 = *plVar11;
    lVar10 = tpidr_el0;
    if (lVar9 != 0) {
      lVar12 = plVar11[1];
      if (plVar11[1] == lVar9) {
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
        lVar12 = *plVar11;
      }
      lVar14 = plVar11[2];
      plVar8 = (long *)plVar11[3];
      plVar11[1] = lVar9;
      uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(plVar8,lVar12,lVar14 - lVar12,8);
          goto LAB_02ba5c38;
        }
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar12,lVar14 - lVar12,8);
    }
LAB_02ba5c38:
    plVar8 = *(long **)(param_1 + 0x1d8);
    uVar2 = *(undefined8 *)(param_1 + 0x1e0);
    uVar13 = *(undefined8 *)(param_1 + 0x1e8);
    uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar7 & 1) == 0) {
LAB_02ba5c94:
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar11,uVar2,uVar13);
    }
    else {
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02ba5c94;
      FUN_02bcc824(plVar8,plVar11,uVar2,uVar13);
    }
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar6 = *(int *)(lVar10 + 0x38d480) + -1;
    *(int *)(lVar10 + 0x38d480) = iVar6;
    if (iVar6 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar10 + 0x38d484) = 0;
    }
    plVar8 = local_88;
    *(long **)(param_1 + 0x1d8) = local_80;
    *(undefined8 *)(param_1 + 0x1e0) = local_78;
    *(undefined8 *)(param_1 + 0x1e8) = local_70;
    local_88 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      FUN_02bcbe58(auStack_68,0);
      plVar11 = (long *)plVar8[0xb];
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 10;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar11 + 0x10))();
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
        plVar11 = (long *)plVar8[3];
        plVar8[1] = lVar9;
        uVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11);
        if ((uVar7 & 1) != 0) {
          if (*(char *)(lVar10 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar10 + 0x38d488) = 1;
            *(undefined8 *)(lVar10 + 0x38d478) = 0;
            *(undefined8 *)(lVar10 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar10 + 0x38d480)) {
            FUN_02bcc824(plVar11,lVar12,lVar14 - lVar12,8);
            goto LAB_02ba5e58;
          }
        }
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar12,lVar14 - lVar12,8);
      }
LAB_02ba5e58:
      uVar7 = (**(code **)(*local_80 + 0xc0))(local_80);
      if ((uVar7 & 1) == 0) {
LAB_02ba5eb4:
        (**(code **)(*local_80 + 0x18))(local_80,plVar8,local_78,local_70);
      }
      else {
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02ba5eb4;
        FUN_02bcc824(local_80,plVar8,local_78,local_70);
      }
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar6 = *(int *)(lVar10 + 0x38d480) + -1;
      *(int *)(lVar10 + 0x38d480) = iVar6;
      if (iVar6 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar10 + 0x38d484) = 0;
      }
    }
  }
  lVar10 = *(long *)(param_1 + 0x1d0);
  bVar4 = true;
LAB_02ba5f58:
  plVar8 = *(long **)(lVar10 + 0x58);
  param_2 = (long *)*param_2;
  if (plVar8 == param_2) {
    bVar5 = false;
  }
  else {
    if (param_2 != (long *)0x0) {
      plVar8 = param_2 + 10;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar8 = *(long **)(lVar10 + 0x58);
    }
    *(long **)(lVar10 + 0x58) = param_2;
    if (plVar8 != (long *)0x0) {
      plVar11 = plVar8 + 10;
      do {
        lVar9 = *plVar11;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar9 == 1) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    bVar5 = true;
  }
  if (*(int *)(lVar10 + 0x60) == param_3) {
    if ((!bVar5) && (!bVar4)) {
      return;
    }
  }
  else {
    *(int *)(lVar10 + 0x60) = param_3;
  }
  lVar9 = *(long *)(param_1 + 0x240);
  for (lVar10 = *(long *)(param_1 + 0x238); lVar10 != lVar9; lVar10 = lVar10 + 0x18) {
    *(undefined1 *)(lVar10 + 0x10) = 1;
  }
  return;
}


