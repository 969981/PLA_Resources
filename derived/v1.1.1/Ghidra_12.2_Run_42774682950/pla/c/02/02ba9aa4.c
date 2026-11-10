/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba9aa4; name: FUN_02ba9aa4
 */


void FUN_02ba9aa4(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  local_a0 = *(undefined8 *)(param_1 + 8);
  lVar12 = *(long *)(param_1 + 0x1d0);
  if (lVar12 != 0) {
    bVar4 = false;
    goto LAB_02ba9f84;
  }
  FUN_02baaae0(&local_98,local_a0,&local_a0);
  plVar10 = local_98;
  local_98 = (long *)0x0;
  plVar14 = *(long **)(param_1 + 0x1d0);
  *(long **)(param_1 + 0x1d0) = plVar10;
  if (plVar14 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x1e0) = local_88;
    *(undefined8 *)(param_1 + 0x1e8) = local_80;
    *(long **)(param_1 + 0x1d8) = local_90;
  }
  else {
    FUN_02bcbe58(auStack_78,0);
    plVar10 = (long *)plVar14[0xb];
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
    lVar12 = plVar14[7];
    plVar14[7] = 0;
    if (lVar12 != 0) {
      FUN_02baac24(plVar14 + 8);
    }
    lVar13 = *plVar14;
    lVar12 = tpidr_el0;
    if (lVar13 != 0) {
      lVar15 = plVar14[1];
      if (plVar14[1] == lVar13) {
        lVar15 = lVar13;
      }
      else {
        do {
          lVar17 = lVar15 + -0x30;
          if (*(char *)(lVar15 + -0x28) != '\0') {
            if (*(long **)(lVar15 + -8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar15 + -8) + 0x20))();
            }
            *(undefined1 *)(lVar15 + -0x28) = 0;
          }
          lVar15 = lVar17;
        } while (lVar13 != lVar17);
        lVar15 = *plVar14;
      }
      lVar17 = plVar14[2];
      plVar10 = (long *)plVar14[3];
      plVar14[1] = lVar13;
      uVar11 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar11 & 1) != 0) {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar10,lVar15,lVar17 - lVar15,8);
          goto LAB_02ba9c48;
        }
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar15,lVar17 - lVar15,8);
    }
LAB_02ba9c48:
    plVar10 = *(long **)(param_1 + 0x1d8);
    uVar2 = *(undefined8 *)(param_1 + 0x1e0);
    uVar16 = *(undefined8 *)(param_1 + 0x1e8);
    uVar11 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar11 & 1) == 0) {
LAB_02ba9ca8:
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar14,uVar2,uVar16);
    }
    else {
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_02ba9ca8;
      FUN_02bcc824(plVar10,plVar14,uVar2,uVar16);
    }
    if (*(char *)(lVar12 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar12 + 0x38d488) = 1;
      *(undefined8 *)(lVar12 + 0x38d478) = 0;
      *(undefined8 *)(lVar12 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar12 + 0x38d480) + -1;
    *(int *)(lVar12 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar12 + 0x38d484) = 0;
    }
    plVar10 = local_98;
    *(long **)(param_1 + 0x1d8) = local_90;
    *(undefined8 *)(param_1 + 0x1e0) = local_88;
    *(undefined8 *)(param_1 + 0x1e8) = local_80;
    local_98 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_02bcbe58(auStack_78,0);
      plVar14 = (long *)plVar10[0xb];
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 10;
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
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      lVar13 = plVar10[7];
      plVar10[7] = 0;
      if (lVar13 != 0) {
        FUN_02baac24(plVar10 + 8);
      }
      lVar13 = *plVar10;
      if (lVar13 != 0) {
        lVar15 = plVar10[1];
        if (plVar10[1] == lVar13) {
          lVar15 = lVar13;
        }
        else {
          do {
            lVar17 = lVar15 + -0x30;
            if (*(char *)(lVar15 + -0x28) != '\0') {
              if (*(long **)(lVar15 + -8) != (long *)0x0) {
                (**(code **)(**(long **)(lVar15 + -8) + 0x20))();
              }
              *(undefined1 *)(lVar15 + -0x28) = 0;
            }
            lVar15 = lVar17;
          } while (lVar13 != lVar17);
          lVar15 = *plVar10;
        }
        lVar17 = plVar10[2];
        plVar14 = (long *)plVar10[3];
        plVar10[1] = lVar13;
        uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
        if ((uVar11 & 1) != 0) {
          if (*(char *)(lVar12 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar12 + 0x38d488) = 1;
            *(undefined8 *)(lVar12 + 0x38d478) = 0;
            *(undefined8 *)(lVar12 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar12 + 0x38d480)) {
            FUN_02bcc824(plVar14,lVar15,lVar17 - lVar15,8);
            goto LAB_02ba9e78;
          }
        }
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar15,lVar17 - lVar15,8);
      }
LAB_02ba9e78:
      uVar11 = (**(code **)(*local_90 + 0xc0))(local_90);
      if ((uVar11 & 1) == 0) {
LAB_02ba9ed8:
        (**(code **)(*local_90 + 0x18))(local_90,plVar10,local_88,local_80);
      }
      else {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_02ba9ed8;
        FUN_02bcc824(local_90,plVar10,local_88,local_80);
      }
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar5 = *(int *)(lVar12 + 0x38d480) + -1;
      *(int *)(lVar12 + 0x38d480) = iVar5;
      if (iVar5 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar12 + 0x38d484) = 0;
      }
    }
  }
  lVar12 = *(long *)(param_1 + 0x1d0);
  bVar4 = true;
LAB_02ba9f84:
  bVar6 = *(int *)(lVar12 + 0x70) != param_2;
  if (bVar6) {
    *(int *)(lVar12 + 0x70) = param_2;
  }
  bVar7 = *(int *)(lVar12 + 0x74) != param_3;
  if (bVar7) {
    *(int *)(lVar12 + 0x74) = param_3;
  }
  bVar8 = *(int *)(lVar12 + 0x7c) != param_4;
  if (bVar8) {
    *(int *)(lVar12 + 0x7c) = param_4;
  }
  bVar9 = *(int *)(lVar12 + 0x78) != param_5;
  if (bVar9) {
    *(int *)(lVar12 + 0x78) = param_5;
  }
  if (*(int *)(lVar12 + 0x80) == param_6) {
    if ((!bVar6 && ((!bVar7 && !bVar6) &&
                   ((!bVar8 && (!bVar7 && !bVar6)) && (!bVar9 && (!bVar8 && (!bVar7 && !bVar6))))))
       && (!bVar4)) {
      return;
    }
  }
  else {
    *(int *)(lVar12 + 0x80) = param_6;
  }
  lVar13 = *(long *)(param_1 + 0x240);
  for (lVar12 = *(long *)(param_1 + 0x238); lVar12 != lVar13; lVar12 = lVar12 + 0x18) {
    *(undefined1 *)(lVar12 + 0x10) = 1;
  }
  return;
}


