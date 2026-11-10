/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ab4d84; name: FUN_02ab4d84
 */


void FUN_02ab4d84(long *param_1,uint param_2,uint param_3,uint param_4,long *param_5)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long *plVar17;
  undefined1 *puVar18;
  long *local_68;
  undefined1 auStack_58 [8];
  
  param_1[7] = 0;
  puVar7 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar7 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar7 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar8 = PTR_DAT_04379528;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar10 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar13 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *(uint *)((long)param_1 + 0x54) = param_2;
  *param_1 = (long)&PTR_LAB_04281150;
  param_1[1] = lVar13;
  param_1[9] = (long)&PTR_LAB_042811d0;
  *(uint *)(param_1 + 0xb) = param_3;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  plVar12 = param_1 + 0xe;
  *plVar12 = 0;
  *(undefined2 *)((long)param_1 + 0xec) = 0x101;
  *(undefined1 *)((long)param_1 + 0xee) = 1;
  uVar3 = param_3;
  if (param_4 != 0) {
    uVar3 = param_4;
  }
  param_1[0x1e] = 0;
  *(uint *)((long)param_1 + 0x5c) = uVar3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (param_2 == 1) {
    *(undefined1 *)((long)param_1 + 0xee) = 0;
    *(undefined2 *)((long)param_1 + 0xec) = 0;
    if (uVar3 != 0) goto LAB_02ab4e80;
LAB_02ab4ed0:
    *(undefined1 *)((long)param_1 + 0xec) = 0;
    *(undefined1 *)((long)param_1 + 0xee) = 0;
    lVar10 = *param_5;
  }
  else {
    if (uVar3 < param_2) goto LAB_02ab4ed0;
LAB_02ab4e80:
    lVar10 = *param_5;
  }
  if (lVar10 == 0) {
    plVar11 = *(long **)(DAT_043ef5a0 + 0x60);
    if (plVar11 != (long *)0x0) {
      plVar17 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar14 = *(undefined1 **)(plVar11[0xd] + 0xd0);
    if (puVar14 != (undefined1 *)0x0) {
      uVar15 = (long)puVar14 - ((ulong)puVar14 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        puVar16 = (undefined1 *)((ulong)(puVar14 + -1) & 0x2e8c1415c6ca7d23);
      }
      else {
        puVar16 = &DAT_2e8c1415c6ca7d23;
        if (puVar14 < (undefined1 *)0x2e8c1415c6ca7d24) {
          uVar6 = 0;
          if (puVar14 != (undefined1 *)0x0) {
            uVar6 = 0x2e8c1415c6ca7d23 / (ulong)puVar14;
          }
          puVar16 = &DAT_2e8c1415c6ca7d23 + -(uVar6 * (long)puVar14);
        }
      }
      plVar17 = *(long **)(*(long *)(plVar11[0xd] + 200) + (long)puVar16 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if ((undefined1 *)plVar17[1] == &DAT_2e8c1415c6ca7d23) {
              if ((undefined1 *)plVar17[2] == &DAT_2e8c1415c6ca7d23) goto LAB_02ab519c;
            }
            else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar14 + -1)) != puVar16) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            puVar18 = (undefined1 *)plVar17[1];
            if (puVar18 == &DAT_2e8c1415c6ca7d23) {
              if ((undefined1 *)plVar17[2] == &DAT_2e8c1415c6ca7d23) goto LAB_02ab519c;
            }
            else {
              if (puVar14 <= puVar18) {
                uVar15 = 0;
                if (puVar14 != (undefined1 *)0x0) {
                  uVar15 = (ulong)puVar18 / (ulong)puVar14;
                }
                puVar18 = puVar18 + -(uVar15 * (long)puVar14);
              }
              if (puVar18 != puVar16) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    local_68 = (long *)0x0;
    goto LAB_02ab5008;
  }
  piVar1 = (int *)(lVar10 + 0x50);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar11 = (long *)*plVar12;
  *plVar12 = lVar10;
  if (plVar11 == (long *)0x0) goto joined_r0x02ab5208;
  plVar17 = plVar11 + 10;
  do {
    iVar9 = (int)*plVar17 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *(int *)plVar17 = iVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 != 0) goto joined_r0x02ab5208;
  lVar10 = *plVar11;
  goto LAB_02ab51fc;
LAB_02ab519c:
  local_68 = (long *)plVar17[6];
  if (local_68 != (long *)0x0) {
    plVar17 = local_68 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
LAB_02ab5008:
  lVar10 = FUN_02ab8084(auStack_58,param_1[1],&local_68);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar17 = (long *)*plVar12;
  *plVar12 = 0;
  if (plVar17 != (long *)0x0) {
    plVar2 = plVar17 + 10;
    do {
      iVar9 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
  }
  *plVar12 = lVar10;
  if (local_68 != (long *)0x0) {
    plVar17 = local_68 + 10;
    do {
      iVar9 = (int)*plVar17 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(int *)plVar17 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (plVar11 == (long *)0x0) goto joined_r0x02ab5208;
  plVar17 = plVar11 + 10;
  do {
    iVar9 = (int)*plVar17 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *(int *)plVar17 = iVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 != 0) goto joined_r0x02ab5208;
  lVar10 = *plVar11;
LAB_02ab51fc:
  (**(code **)(lVar10 + 0x10))(plVar11);
joined_r0x02ab5208:
  if (param_2 < param_3) {
    plVar11 = (long *)param_1[1];
    if (((*puVar7 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar9 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar11;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    lVar13 = (**(code **)(*plVar11 + 0x10))(plVar11,0xf8,8);
    if (lVar13 == 0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    FUN_02ab4d84(lVar13,param_2 + 1,param_3,param_4,plVar12);
    *(long **)(lVar13 + 8) = plVar11;
    *(long *)(lVar13 + 0x10) = lVar13;
    *(undefined8 *)(lVar13 + 0x18) = 0xf8;
    *(undefined8 *)(lVar13 + 0x20) = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    if (lVar13 != 0) {
      piVar1 = (int *)(lVar13 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar12 = (long *)param_1[0x1e];
    param_1[0x1e] = 0;
    if (plVar12 != (long *)0x0) {
      plVar11 = plVar12 + 10;
      do {
        iVar9 = (int)*plVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
    }
    param_1[0x1e] = lVar13;
  }
  return;
}


