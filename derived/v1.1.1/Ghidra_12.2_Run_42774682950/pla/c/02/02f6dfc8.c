/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6dfc8; name: FUN_02f6dfc8
 */


void FUN_02f6dfc8(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80 [2];
  byte local_68 [8];
  
  *param_1 = (long)&PTR_LAB_042b76a0;
  FUN_02f6e6bc(param_1 + 0x15,param_1);
  if (*(char *)((long)param_1 + 0x94) != '\0') {
    plVar7 = param_1 + 9;
    uVar8 = 0;
    do {
      uVar15 = uVar8;
      if ((int)param_1[10] <= (int)uVar15) goto LAB_02f6e16c;
      lVar9 = *plVar7;
      uVar8 = uVar15 + 1;
    } while ((*(byte *)((long)plVar7 + (ulong)(uVar15 & 0xffff) * 0x40 + lVar9 + 0x1e) & 1) != 0);
    if (uVar15 + 1 != 0) {
      NEON_fmov(0x3f800000,4);
      do {
        puVar2 = (undefined8 *)((long)plVar7 + (ulong)(uVar15 & 0xffff) * 0x40 + lVar9);
        uStack_88 = puVar2[5];
        local_90 = puVar2[4];
        uStack_a8 = puVar2[1];
        local_b0 = *puVar2;
        uStack_98 = puVar2[3];
        local_a0 = puVar2[2];
        local_80[1] = puVar2[7];
        lVar9 = puVar2[6];
        if (lVar9 == 0) {
          local_80[0] = 0;
        }
        else {
          local_80[0] = (long)(puVar2 + 6) + (lVar9 - (long)local_80);
        }
        lVar9 = local_80[0];
        if (((local_80[0] != 0) && (local_80[0] + (long)local_80 != 0)) &&
           (*(long *)((long)local_80 + local_80[0] + 8) != 0)) {
          plVar14 = (long *)((long)local_80 + local_80[0] + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = *plVar14 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          lVar9 = local_80[0];
        }
        if (((local_80[0] + (long)local_80 != 0) && (lVar9 != 0)) &&
           (lVar9 = (**(code **)(DAT_0442d3b0 + (ulong)local_68[local_80[0]] * 0x200 + 0x48))(),
           lVar9 != 0)) {
          FUN_02f6e778(param_1,&local_b0,(ulong)(uVar15 & 0xffff));
        }
        if ((local_80[0] != 0) &&
           (plVar14 = (long *)(local_80[0] + (long)local_80), plVar14 != (long *)0x0)) {
          if (*(long *)((long)local_80 + local_80[0] + 8) != 0) {
            plVar13 = (long *)((long)local_80 + local_80[0] + 0x10);
            do {
              lVar9 = *plVar13;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = lVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar9 + -1 == 0) {
              (**(code **)(*plVar14 + 0x18))();
            }
          }
          local_80[0] = 0;
        }
        uVar8 = uVar15 + 1;
        do {
          uVar15 = uVar8;
          if ((int)param_1[10] <= (int)uVar15) goto LAB_02f6e16c;
          lVar9 = *plVar7;
          uVar8 = uVar15 + 1;
        } while ((*(byte *)((long)plVar7 + (ulong)(uVar15 & 0xffff) * 0x40 + lVar9 + 0x1e) & 1) != 0
                );
      } while (uVar15 + 1 != 0);
    }
  }
LAB_02f6e16c:
  lVar9 = param_1[0x1d];
  param_1[0x16] = (long)&PTR_LAB_042b7ad8;
  if ((int)*(uint *)((long)param_1 + 0xf4) < 0) {
    uVar8 = *(uint *)((long)param_1 + 0xf4) & 0x7fffffff;
    if ((int)uVar8 <= (int)*(uint *)(param_1 + 0x1e)) {
      uVar8 = *(uint *)(param_1 + 0x1e);
    }
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar9 + (long)(param_1 + 0x1d);
    }
    lVar11 = tpidr_el0;
    lVar10 = *(long *)(lVar11 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,(ulong)uVar8 << 7);
  }
  lVar9 = param_1[0x19];
  if ((int)*(uint *)((long)param_1 + 0xd4) < 0) {
    uVar8 = *(uint *)((long)param_1 + 0xd4) & 0x7fffffff;
    if ((int)uVar8 <= (int)*(uint *)(param_1 + 0x1a)) {
      uVar8 = *(uint *)(param_1 + 0x1a);
    }
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar9 + (long)(param_1 + 0x19);
    }
    lVar11 = tpidr_el0;
    lVar10 = *(long *)(lVar11 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,(ulong)uVar8 << 5);
  }
  puVar6 = PTR_DAT_043723c0;
  param_1[0x16] = (long)(PTR_DAT_043723c0 + 0x10);
  cVar4 = DAT_0444b3c8;
  if (DAT_0444b3c8 != '\0') {
    plVar7 = (long *)(param_1[0x15] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x15] & 3U) == 0) {
        param_1[0x15] = (ulong)plVar7 | 1;
        do {
          lVar9 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar9 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x15] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar14 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar14 | 1;
          plVar7 = plVar14;
        } while (plVar14 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_02f6e220;
    }
    plVar7 = (long *)(param_1[0x14] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x14] & 3U) == 0) {
        param_1[0x14] = (ulong)plVar7 | 1;
        do {
          lVar9 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar9 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x14] = 0;
      }
      else {
        do {
          plVar14 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar14 | 1;
          plVar7 = plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_02f6e220:
  lVar9 = param_1[0xc];
  if ((int)*(uint *)((long)param_1 + 0x6c) < 0) {
    uVar8 = *(uint *)((long)param_1 + 0x6c) & 0x7fffffff;
    if ((int)uVar8 <= (int)*(uint *)(param_1 + 0xd)) {
      uVar8 = *(uint *)(param_1 + 0xd);
    }
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar9 + (long)(param_1 + 0xc);
    }
    lVar11 = tpidr_el0;
    lVar10 = *(long *)(lVar11 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,(ulong)uVar8 << 5);
  }
  uVar8 = *(uint *)(param_1 + 10);
  plVar7 = param_1 + 9;
  if (0 < (int)uVar8) {
    lVar9 = 0;
    do {
      lVar11 = lVar9 * 0x40 + *plVar7;
      if ((*(byte *)((long)plVar7 + lVar11 + 0x1e) & 1) == 0) {
        plVar13 = (long *)((long)plVar7 + lVar11 + 0x30);
        plVar14 = (long *)(*plVar13 + (long)plVar13);
        if (*plVar13 != 0 && plVar14 != (long *)0x0) {
          if (plVar14[1] != 0) {
            plVar1 = plVar14 + 2;
            do {
              lVar11 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar11 + -1 == 0) {
              (**(code **)(*plVar14 + 0x18))();
            }
          }
          *plVar13 = 0;
          uVar8 = *(uint *)(param_1 + 10);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uVar8);
  }
  if ((int)*(uint *)((long)param_1 + 0x54) < 0) {
    uVar15 = *(uint *)((long)param_1 + 0x54) & 0x7fffffff;
    if ((int)uVar15 <= (int)uVar8) {
      uVar15 = uVar8;
    }
    if (param_1[9] == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = param_1[9] + (long)plVar7;
    }
    lVar11 = tpidr_el0;
    lVar10 = *(long *)(lVar11 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,(ulong)uVar15 << 6);
  }
  *param_1 = (long)&PTR_LAB_042bb140;
  plVar7 = param_1 + 6;
  iVar3 = (int)param_1[7];
  if (0 < iVar3) {
    lVar9 = 0;
    if (*plVar7 != 0) {
      lVar9 = *plVar7 + (long)plVar7;
    }
    plVar14 = (long *)(lVar9 + (long)iVar3 * 8);
    iVar12 = 0;
    do {
      plVar14 = plVar14 + -1;
      if (((*plVar14 != 0) && (plVar13 = (long *)(*plVar14 + (long)plVar14), plVar13 != (long *)0x0)
          ) && (plVar13[1] != 0)) {
        plVar1 = plVar13 + 2;
        do {
          lVar9 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar13 + 0x18))();
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar3);
  }
  if ((int)*(uint *)((long)param_1 + 0x3c) < 0) {
    uVar8 = *(uint *)((long)param_1 + 0x3c) & 0x7fffffff;
    if ((int)uVar8 <= (int)*(uint *)(param_1 + 7)) {
      uVar8 = *(uint *)(param_1 + 7);
    }
    lVar9 = 0;
    if (param_1[6] != 0) {
      lVar9 = param_1[6] + (long)plVar7;
    }
    lVar11 = tpidr_el0;
    lVar10 = *(long *)(lVar11 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,(ulong)uVar8 << 3);
  }
  *param_1 = (long)(puVar6 + 0x10);
  return;
}


