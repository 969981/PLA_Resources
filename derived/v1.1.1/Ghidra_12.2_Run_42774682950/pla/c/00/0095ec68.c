/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0095ec68; name: FUN_0095ec68
 */


void FUN_0095ec68(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long *local_58;
  
  if (*(long *)(param_1 + 0xa0) == 0) {
    return;
  }
  lVar6 = tpidr_el0;
LAB_0095ecd4:
  plVar14 = *(long **)(*(long *)(*(long *)(param_1 + 0x60) +
                                (*(ulong *)(param_1 + 0x98) >> 6 & 0x3fffffffffffff8)) +
                      (*(ulong *)(param_1 + 0x98) & 0x1ff) * 8);
  if (plVar14 != (long *)0x0) {
    plVar12 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar7 = (**(code **)(*plVar14 + 0x28))(plVar14);
  uVar9 = *(ulong *)(param_1 + 0xd0);
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar13 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar10 = (ulong)uVar7;
    if (uVar13 < 2) {
      uVar11 = (ulong)((int)uVar9 - 1U & uVar7);
    }
    else {
      uVar11 = uVar10;
      if (uVar9 <= uVar10) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar10 / uVar9;
        }
        uVar11 = uVar10 - uVar11 * uVar9;
      }
    }
    plVar12 = *(long **)(*(long *)(param_1 + 200) + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar12[1] == uVar10) {
            if (*(uint *)(plVar12 + 2) == uVar7) goto LAB_0095edcc;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar12[1];
          if (uVar13 == uVar10) {
            if (*(uint *)(plVar12 + 2) == uVar7) goto LAB_0095edcc;
          }
          else {
            if (uVar9 <= uVar13) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar13 / uVar9;
              }
              uVar13 = uVar13 - uVar5 * uVar9;
            }
            if (uVar13 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  goto LAB_0095edf8;
LAB_0095edcc:
  if (plVar12[0xe] != 0) {
    for (plVar12 = (long *)plVar12[9]; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      local_58 = plVar14;
      (*(code *)plVar12[4])(plVar12 + 8,&local_58);
    }
  }
LAB_0095edf8:
  plVar12 = *(long **)(*(long *)(*(long *)(param_1 + 0x60) +
                                (*(ulong *)(param_1 + 0x98) >> 6 & 0x3fffffffffffff8)) +
                      (*(ulong *)(param_1 + 0x98) & 0x1ff) * 8);
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  uVar9 = *(long *)(param_1 + 0x98) + 1;
  *(ulong *)(param_1 + 0x98) = uVar9;
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + -1;
  if (0x3ff < uVar9) {
    plVar12 = *(long **)(param_1 + 0xa8);
    uVar15 = **(undefined8 **)(param_1 + 0x60);
    uVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar9 & 1) == 0) {
LAB_0095eef8:
      (**(code **)(*plVar12 + 0x18))(plVar12,uVar15,0x1000,8);
    }
    else {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_0095eef8;
      FUN_02bcc824(plVar12,uVar15,0x1000,8);
    }
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 8;
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + -0x200;
  }
  if (plVar14 != (long *)0x0) {
    plVar12 = plVar14 + 10;
    do {
      iVar4 = (int)*plVar12 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      lVar8 = *(long *)(param_1 + 0xa0);
      goto joined_r0x0095ee94;
    }
  }
  lVar8 = *(long *)(param_1 + 0xa0);
joined_r0x0095ee94:
  if (lVar8 == 0) {
    return;
  }
  goto LAB_0095ecd4;
}


