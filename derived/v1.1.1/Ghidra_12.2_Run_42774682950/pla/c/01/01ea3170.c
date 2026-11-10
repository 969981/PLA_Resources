/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea3170; name: FUN_01ea3170
 */


void FUN_01ea3170(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  float local_140;
  undefined8 *local_130;
  undefined8 uStack_128;
  long *local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  undefined1 auStack_100 [184];
  long *local_48 [2];
  long *local_38;
  
  FUN_01ea397c(auStack_100,param_1,0x1a,1);
  FUN_00956dac(&local_110,param_1 + 0x1a8);
  local_48[0] = local_110;
  if (local_110 != (long *)0x0) {
    lVar14 = local_110[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01ea3964;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(param_1 + 0x300))(&local_108,param_1 + 800,local_48,auStack_100);
  if (local_48[0] != (long *)0x0) {
    lVar14 = local_48[0][0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_48[0] + 0x20))();
    }
  }
  if (local_110 != (long *)0x0) {
    lVar14 = local_110[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_110 + 0x20))();
    }
  }
  plVar12 = local_108;
  local_118 = local_108;
  if (local_108 == (long *)0x0) {
    FUN_01ea3e34(param_1,&local_118,1);
  }
  else {
    lVar14 = local_108[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01ea3964;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_01ea3e34(param_1,&local_118,1);
    lVar14 = plVar12[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  plVar12 = local_108;
  local_120 = local_108;
  if (local_108 == (long *)0x0) {
    FUN_01ea4564(param_1,&local_120);
  }
  else {
    lVar14 = local_108[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_01ea3964:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_01ea4564(param_1,&local_120);
    lVar14 = plVar12[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar14;
  uVar9 = *(ulong *)(lVar14 + 0x60);
  local_140 = 0.0;
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & 0xd65830cac3e925da;
    }
    else if (uVar9 < 0xd65830cac3e925db) {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = 0xd65830cac3e925da / uVar9;
      }
      uVar11 = 0xd65830cac3e925da - uVar11 * uVar9;
    }
    else {
      uVar11 = 0xd65830cac3e925da;
    }
    plVar12 = *(long **)(*(long *)(lVar14 + 0x58) + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == 0xd65830cac3e925da) {
            if (plVar12[2] == -0x29a7cf353c16da26) goto LAB_01ea33e8;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == 0xd65830cac3e925da) {
            if (plVar12[2] == -0x29a7cf353c16da26) goto LAB_01ea33e8;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar5 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  goto LAB_01ea3548;
LAB_01ea33e8:
  plVar12 = (long *)plVar12[3];
  if (plVar12 == (long *)0x0) goto LAB_01ea3548;
  plVar2 = plVar12 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar9 = plVar12[0x21];
  local_140 = 0.0;
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & 0xc7ec54c7b3ff34b3;
    }
    else if (uVar9 < 0xc7ec54c7b3ff34b4) {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = 0xc7ec54c7b3ff34b3 / uVar9;
      }
      uVar11 = 0xc7ec54c7b3ff34b3 - uVar11 * uVar9;
    }
    else {
      uVar11 = 0xc7ec54c7b3ff34b3;
    }
    plVar13 = *(long **)(plVar12[0x20] + uVar11 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar13[1] == 0xc7ec54c7b3ff34b3) {
            if (plVar13[2] == -0x3813ab384c00cb4d) goto LAB_01ea352c;
          }
          else if ((plVar13[1] & uVar9 - 1) != uVar11) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar13[1];
          if (uVar10 == 0xc7ec54c7b3ff34b3) {
            if (plVar13[2] == -0x3813ab384c00cb4d) goto LAB_01ea352c;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar5 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  goto LAB_01ea3530;
LAB_01ea352c:
  local_140 = *(float *)(plVar13 + 6);
LAB_01ea3530:
  do {
    iVar7 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar12 + 0x10))();
  }
LAB_01ea3548:
  fVar15 = (float)FUN_0108d168(*(undefined8 *)(param_1 + 0x208));
  if (1.1920929e-07 < fVar15) {
    local_140 = (float)FUN_0108d168(*(undefined8 *)(param_1 + 0x208));
  }
  FUN_02be88ac(local_48,local_108,0);
  FUN_00ab5ae0(&local_38,local_48);
  plVar12 = local_48[0];
  if (local_48[0] != (long *)0x0) {
    plVar2 = local_48[0] + 1;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      local_48[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_130 = (undefined8 *)*plVar12;
      FUN_02a44274(lVar14 + 0xd8,&local_130);
    }
  }
  if (local_38 != (long *)0x0) {
    *(undefined1 *)((long)local_38 + 0x282) = 1;
    lVar14 = local_38[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    local_38[0x4f] =
         CONCAT44((float)((ulong)local_38[0x4f] >> 0x20) * local_140,
                  (float)local_38[0x4f] * local_140);
    local_38[0x4e] =
         CONCAT44((float)((ulong)local_38[0x4e] >> 0x20) * local_140,
                  (float)local_38[0x4e] * local_140);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  (**(code **)(*local_108 + 0x10))(local_48);
  local_130 = (undefined8 *)0x0;
  uStack_128 = 0;
  FUN_018fed88(&local_130,local_48);
  plVar12 = local_48[0];
  if (local_48[0] != (long *)0x0) {
    plVar2 = local_48[0] + 1;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      local_48[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_38 = (long *)*plVar12;
      FUN_02a44274(lVar14 + 0xd8,&local_38);
    }
  }
  FUN_019fa21c(param_1 + 0x270,&local_130);
  puVar6 = local_130;
  if (local_130 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_130 + 1);
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
      local_130[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_48[0] = (long *)*puVar6;
      FUN_02a44274(lVar14 + 0xd8,local_48);
    }
  }
  if (local_108 != (long *)0x0) {
    lVar14 = local_108[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_108 + 0x20))();
    }
  }
  return;
}


