/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba7380; name: FUN_02ba7380
 */


void FUN_02ba7380(float param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  undefined8 local_48;
  
  local_48 = *(undefined8 *)(param_2 + 8);
  lVar8 = *(long *)(param_2 + 0x1d0);
  if (lVar8 != 0) {
    bVar4 = false;
    goto LAB_02ba7828;
  }
  FUN_02baaae0(&local_88,local_48,&local_48);
  plVar6 = local_88;
  local_88 = (long *)0x0;
  plVar10 = *(long **)(param_2 + 0x1d0);
  *(long **)(param_2 + 0x1d0) = plVar6;
  if (plVar10 == (long *)0x0) {
    *(undefined8 *)(param_2 + 0x1e0) = local_78;
    *(undefined8 *)(param_2 + 0x1e8) = local_70;
    *(long **)(param_2 + 0x1d8) = local_80;
  }
  else {
    FUN_02bcbe58(auStack_68,0);
    plVar6 = (long *)plVar10[0xb];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
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
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    lVar8 = plVar10[7];
    plVar10[7] = 0;
    if (lVar8 != 0) {
      FUN_02baac24(plVar10 + 8);
    }
    lVar9 = *plVar10;
    lVar8 = tpidr_el0;
    if (lVar9 != 0) {
      lVar11 = plVar10[1];
      if (plVar10[1] == lVar9) {
        lVar11 = lVar9;
      }
      else {
        do {
          lVar13 = lVar11 + -0x30;
          if (*(char *)(lVar11 + -0x28) != '\0') {
            if (*(long **)(lVar11 + -8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar11 + -8) + 0x20))();
            }
            *(undefined1 *)(lVar11 + -0x28) = 0;
          }
          lVar11 = lVar13;
        } while (lVar9 != lVar13);
        lVar11 = *plVar10;
      }
      lVar13 = plVar10[2];
      plVar6 = (long *)plVar10[3];
      plVar10[1] = lVar9;
      uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar8 + 0x38d480)) {
          FUN_02bcc824(plVar6,lVar11,lVar13 - lVar11,8);
          goto LAB_02ba7508;
        }
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar11,lVar13 - lVar11,8);
    }
LAB_02ba7508:
    plVar6 = *(long **)(param_2 + 0x1d8);
    uVar2 = *(undefined8 *)(param_2 + 0x1e0);
    uVar12 = *(undefined8 *)(param_2 + 0x1e8);
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) == 0) {
LAB_02ba7564:
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar10,uVar2,uVar12);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02ba7564;
      FUN_02bcc824(plVar6,plVar10,uVar2,uVar12);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar8 + 0x38d484) = 0;
    }
    plVar6 = local_88;
    *(long **)(param_2 + 0x1d8) = local_80;
    *(undefined8 *)(param_2 + 0x1e0) = local_78;
    *(undefined8 *)(param_2 + 0x1e8) = local_70;
    local_88 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      FUN_02bcbe58(auStack_68,0);
      plVar10 = (long *)plVar6[0xb];
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
      lVar9 = plVar6[7];
      plVar6[7] = 0;
      if (lVar9 != 0) {
        FUN_02baac24(plVar6 + 8);
      }
      lVar9 = *plVar6;
      if (lVar9 != 0) {
        lVar11 = plVar6[1];
        if (plVar6[1] == lVar9) {
          lVar11 = lVar9;
        }
        else {
          do {
            lVar13 = lVar11 + -0x30;
            if (*(char *)(lVar11 + -0x28) != '\0') {
              if (*(long **)(lVar11 + -8) != (long *)0x0) {
                (**(code **)(**(long **)(lVar11 + -8) + 0x20))();
              }
              *(undefined1 *)(lVar11 + -0x28) = 0;
            }
            lVar11 = lVar13;
          } while (lVar9 != lVar13);
          lVar11 = *plVar6;
        }
        lVar13 = plVar6[2];
        plVar10 = (long *)plVar6[3];
        plVar6[1] = lVar9;
        uVar7 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        if ((uVar7 & 1) != 0) {
          if (*(char *)(lVar8 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar8 + 0x38d488) = 1;
            *(undefined8 *)(lVar8 + 0x38d478) = 0;
            *(undefined8 *)(lVar8 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar8 + 0x38d480)) {
            FUN_02bcc824(plVar10,lVar11,lVar13 - lVar11,8);
            goto LAB_02ba7728;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar13 - lVar11,8);
      }
LAB_02ba7728:
      uVar7 = (**(code **)(*local_80 + 0xc0))(local_80);
      if ((uVar7 & 1) == 0) {
LAB_02ba7784:
        (**(code **)(*local_80 + 0x18))(local_80,plVar6,local_78,local_70);
      }
      else {
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02ba7784;
        FUN_02bcc824(local_80,plVar6,local_78,local_70);
      }
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar5 = *(int *)(lVar8 + 0x38d480) + -1;
      *(int *)(lVar8 + 0x38d480) = iVar5;
      if (iVar5 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar8 + 0x38d484) = 0;
      }
    }
  }
  lVar8 = *(long *)(param_2 + 0x1d0);
  bVar4 = true;
LAB_02ba7828:
  if (*(float *)(lVar8 + 0x6c) == param_1) {
    if (!bVar4) {
      return;
    }
  }
  else {
    *(float *)(lVar8 + 0x6c) = param_1;
  }
  lVar9 = *(long *)(param_2 + 0x240);
  for (lVar8 = *(long *)(param_2 + 0x238); lVar8 != lVar9; lVar8 = lVar8 + 0x18) {
    *(undefined1 *)(lVar8 + 0x10) = 1;
  }
  return;
}


