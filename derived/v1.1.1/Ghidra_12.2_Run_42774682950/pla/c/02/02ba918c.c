/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba918c; name: FUN_02ba918c
 */


void FUN_02ba918c(long param_1,long *param_2,byte param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  ulong uVar8;
  long *plVar9;
  byte bVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  local_90 = *(undefined8 *)(param_1 + 8);
  lVar14 = *(long *)(param_1 + 0x1d0);
  if (lVar14 != 0) {
    bVar4 = false;
    lVar11 = *(long *)(lVar14 + 0x38);
    goto joined_r0x02ba9648;
  }
  FUN_02baaae0(&local_88,local_90,&local_90);
  plVar9 = local_88;
  local_88 = (long *)0x0;
  plVar12 = *(long **)(param_1 + 0x1d0);
  *(long **)(param_1 + 0x1d0) = plVar9;
  if (plVar12 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x1e0) = local_78;
    *(undefined8 *)(param_1 + 0x1e8) = local_70;
    *(long **)(param_1 + 0x1d8) = local_80;
    local_88 = (long *)0x0;
  }
  else {
    FUN_02bcbe58(auStack_68,0);
    plVar9 = (long *)plVar12[0xb];
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
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
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    lVar14 = plVar12[7];
    plVar12[7] = 0;
    if (lVar14 != 0) {
      FUN_02baac24(plVar12 + 8);
    }
    lVar11 = *plVar12;
    lVar14 = tpidr_el0;
    if (lVar11 != 0) {
      lVar13 = plVar12[1];
      if (plVar12[1] == lVar11) {
        lVar13 = lVar11;
      }
      else {
        do {
          lVar16 = lVar13 + -0x30;
          if (*(char *)(lVar13 + -0x28) != '\0') {
            if (*(long **)(lVar13 + -8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar13 + -8) + 0x20))();
            }
            *(undefined1 *)(lVar13 + -0x28) = 0;
          }
          lVar13 = lVar16;
        } while (lVar11 != lVar16);
        lVar13 = *plVar12;
      }
      lVar16 = plVar12[2];
      plVar9 = (long *)plVar12[3];
      plVar12[1] = lVar11;
      uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar8 & 1) != 0) {
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar14 + 0x38d480)) {
          FUN_02bcc824(plVar9,lVar13,lVar16 - lVar13,8);
          goto LAB_02ba9324;
        }
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar13,lVar16 - lVar13,8);
    }
LAB_02ba9324:
    plVar9 = *(long **)(param_1 + 0x1d8);
    uVar2 = *(undefined8 *)(param_1 + 0x1e0);
    uVar15 = *(undefined8 *)(param_1 + 0x1e8);
    uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar8 & 1) == 0) {
LAB_02ba9380:
      (**(code **)(*plVar9 + 0x18))(plVar9,plVar12,uVar2,uVar15);
    }
    else {
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar14 + 0x38d480) < 1) goto LAB_02ba9380;
      FUN_02bcc824(plVar9,plVar12,uVar2,uVar15);
    }
    if (*(char *)(lVar14 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar14 + 0x38d488) = 1;
      *(undefined8 *)(lVar14 + 0x38d478) = 0;
      *(undefined8 *)(lVar14 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar6 = *(int *)(lVar14 + 0x38d480) + -1;
    *(int *)(lVar14 + 0x38d480) = iVar6;
    if (iVar6 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar14 + 0x38d484) = 0;
    }
    plVar9 = local_88;
    *(long **)(param_1 + 0x1d8) = local_80;
    *(undefined8 *)(param_1 + 0x1e0) = local_78;
    *(undefined8 *)(param_1 + 0x1e8) = local_70;
    local_88 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      FUN_02bcbe58(auStack_68,0);
      plVar12 = (long *)plVar9[0xb];
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
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
          (**(code **)(*plVar12 + 0x10))();
        }
      }
      lVar11 = plVar9[7];
      plVar9[7] = 0;
      if (lVar11 != 0) {
        FUN_02baac24(plVar9 + 8);
      }
      lVar11 = *plVar9;
      if (lVar11 != 0) {
        lVar13 = plVar9[1];
        if (plVar9[1] == lVar11) {
          lVar13 = lVar11;
        }
        else {
          do {
            lVar16 = lVar13 + -0x30;
            if (*(char *)(lVar13 + -0x28) != '\0') {
              if (*(long **)(lVar13 + -8) != (long *)0x0) {
                (**(code **)(**(long **)(lVar13 + -8) + 0x20))();
              }
              *(undefined1 *)(lVar13 + -0x28) = 0;
            }
            lVar13 = lVar16;
          } while (lVar11 != lVar16);
          lVar13 = *plVar9;
        }
        lVar16 = plVar9[2];
        plVar12 = (long *)plVar9[3];
        plVar9[1] = lVar11;
        uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
        if ((uVar8 & 1) != 0) {
          if (*(char *)(lVar14 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar14 + 0x38d488) = 1;
            *(undefined8 *)(lVar14 + 0x38d478) = 0;
            *(undefined8 *)(lVar14 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar14 + 0x38d480)) {
            FUN_02bcc824(plVar12,lVar13,lVar16 - lVar13,8);
            goto LAB_02ba9544;
          }
        }
        (**(code **)(*plVar12 + 0x18))(plVar12,lVar13,lVar16 - lVar13,8);
      }
LAB_02ba9544:
      uVar15 = local_70;
      uVar2 = local_78;
      plVar12 = local_80;
      uVar8 = (**(code **)(*local_80 + 0xc0))(local_80);
      if ((uVar8 & 1) == 0) {
LAB_02ba95a0:
        (**(code **)(*plVar12 + 0x18))(plVar12,plVar9,uVar2,uVar15);
      }
      else {
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar14 + 0x38d480) < 1) goto LAB_02ba95a0;
        FUN_02bcc824(plVar12,plVar9,uVar2,uVar15);
      }
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar6 = *(int *)(lVar14 + 0x38d480) + -1;
      *(int *)(lVar14 + 0x38d480) = iVar6;
      if (iVar6 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar14 + 0x38d484) = 0;
      }
    }
  }
  lVar14 = *(long *)(param_1 + 0x1d0);
  bVar4 = true;
  lVar11 = *(long *)(lVar14 + 0x38);
joined_r0x02ba9648:
  if (lVar11 == 0) {
    FUN_02bab0b0(&local_88,*(undefined8 *)(param_1 + 8));
    plVar9 = local_88;
    local_88 = (long *)0x0;
    lVar11 = *(long *)(lVar14 + 0x38);
    *(long **)(lVar14 + 0x38) = plVar9;
    if (lVar11 != 0) {
      FUN_02baac24(lVar14 + 0x40);
    }
    *(undefined8 *)(lVar14 + 0x48) = local_78;
    *(undefined8 *)(lVar14 + 0x50) = local_70;
    *(long **)(lVar14 + 0x40) = local_80;
    lVar14 = *(long *)(param_1 + 0x1d0);
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  lVar14 = *(long *)(lVar14 + 0x38);
  param_2 = (long *)*param_2;
  plVar9 = *(long **)(lVar14 + 0x20);
  if (plVar9 == param_2) {
    bVar10 = 0;
  }
  else {
    if (param_2 != (long *)0x0) {
      plVar9 = param_2 + 10;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar9 = *(long **)(lVar14 + 0x20);
    }
    *(long **)(lVar14 + 0x20) = param_2;
    if (plVar9 != (long *)0x0) {
      plVar12 = plVar9 + 10;
      do {
        lVar11 = *plVar12;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = (int)lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar11 == 1) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    bVar10 = 1;
  }
  if (*(byte *)(lVar14 + 0x29) == (param_3 & 1)) {
    if (((bool)(!bVar7 & (bVar10 ^ 1))) && (!bVar4)) {
      return;
    }
  }
  else {
    *(byte *)(lVar14 + 0x29) = param_3 & 1;
  }
  lVar11 = *(long *)(param_1 + 0x240);
  for (lVar14 = *(long *)(param_1 + 0x238); lVar14 != lVar11; lVar14 = lVar14 + 0x18) {
    *(undefined1 *)(lVar14 + 0x10) = 1;
  }
  return;
}


