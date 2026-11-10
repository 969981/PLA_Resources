/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea4e24; name: FUN_01ea4e24
 */


void FUN_01ea4e24(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  float fVar15;
  float local_150;
  undefined8 *local_140;
  undefined8 uStack_138;
  long *local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  undefined1 auStack_110 [200];
  undefined8 *local_48 [2];
  long *local_38;
  
  FUN_01ea55a4(auStack_110,param_1,0x1a);
  FUN_00956dac(&local_120,param_1 + 0x1a8);
  FUN_01ea579c(&local_118,param_1 + 0x380,&local_120,auStack_110);
  if (local_120 != (long *)0x0) {
    lVar9 = local_120[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_120 + 0x20))();
    }
  }
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar9 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar9;
  uVar10 = *(ulong *)(lVar9 + 0x60);
  local_150 = 0.0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xd65830cac3e925da;
    }
    else if (uVar10 < 0xd65830cac3e925db) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xd65830cac3e925da / uVar10;
      }
      uVar12 = 0xd65830cac3e925da - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xd65830cac3e925da;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x58) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xd65830cac3e925da) {
            if (plVar13[2] == -0x29a7cf353c16da26) goto LAB_01ea4f54;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xd65830cac3e925da) {
            if (plVar13[2] == -0x29a7cf353c16da26) goto LAB_01ea4f54;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar5 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01ea50b4:
  fVar15 = (float)FUN_0108d168(*(undefined8 *)(param_1 + 0x208));
  if (1.1920929e-07 < fVar15) {
    local_150 = (float)FUN_0108d168(*(undefined8 *)(param_1 + 0x208));
  }
  FUN_02be88ac(local_48,local_118,0);
  FUN_00ab5ae0(&local_38,local_48);
  puVar6 = local_48[0];
  if (local_48[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48[0] + 1);
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
      local_48[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_140 = (undefined8 *)*puVar6;
      FUN_02a44274(lVar9 + 0xd8,&local_140);
    }
  }
  if (local_38 != (long *)0x0) {
    *(undefined1 *)((long)local_38 + 0x282) = 1;
    lVar9 = local_38[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    local_38[0x4f] =
         CONCAT44((float)((ulong)local_38[0x4f] >> 0x20) * local_150,
                  (float)local_38[0x4f] * local_150);
    local_38[0x4e] =
         CONCAT44((float)((ulong)local_38[0x4e] >> 0x20) * local_150,
                  (float)local_38[0x4e] * local_150);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  plVar13 = local_118;
  local_128 = local_118;
  if (local_118 == (long *)0x0) {
    FUN_01ea3e34(param_1,&local_128,1);
  }
  else {
    lVar9 = local_118[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01ea558c;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_01ea3e34(param_1,&local_128,1);
    lVar9 = plVar13[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  plVar13 = local_118;
  local_130 = local_118;
  if (local_118 == (long *)0x0) {
    FUN_01ea4564(param_1,&local_130);
  }
  else {
    lVar9 = local_118[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_01ea558c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_01ea4564(param_1,&local_130);
    lVar9 = plVar13[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  (**(code **)(*local_118 + 0x10))(local_48);
  local_140 = (undefined8 *)0x0;
  uStack_138 = 0;
  FUN_018fed88(&local_140,local_48);
  puVar6 = local_48[0];
  if (local_48[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48[0] + 1);
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
      local_48[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_38 = (long *)*puVar6;
      FUN_02a44274(lVar9 + 0xd8,&local_38);
    }
  }
  FUN_019fa21c(param_1 + 0x270,&local_140);
  puVar6 = local_140;
  if (local_140 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_140 + 1);
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
      local_140[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_48[0] = (undefined8 *)*puVar6;
      FUN_02a44274(lVar9 + 0xd8,local_48);
    }
  }
  if (local_118 != (long *)0x0) {
    lVar9 = local_118[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_118 + 0x20))();
    }
  }
  return;
LAB_01ea4f54:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar2 = plVar13 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar13[0x21];
    local_150 = 0.0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0xc7ec54c7b3ff34b3;
      }
      else if (uVar10 < 0xc7ec54c7b3ff34b4) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0xc7ec54c7b3ff34b3 / uVar10;
        }
        uVar12 = 0xc7ec54c7b3ff34b3 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0xc7ec54c7b3ff34b3;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar12 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar14[1] == 0xc7ec54c7b3ff34b3) {
              if (plVar14[2] == -0x3813ab384c00cb4d) goto LAB_01ea5098;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == 0xc7ec54c7b3ff34b3) {
              if (plVar14[2] == -0x3813ab384c00cb4d) goto LAB_01ea5098;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar5 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea509c;
  }
  goto LAB_01ea50b4;
LAB_01ea5098:
  local_150 = *(float *)(plVar14 + 6);
LAB_01ea509c:
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
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_01ea50b4;
}


