/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd50bc; name: FUN_01cd50bc
 */


void FUN_01cd50bc(long param_1,ulong *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *local_60;
  long *local_58;
  ulong *local_50;
  undefined8 uStack_48;
  undefined8 *local_40 [2];
  undefined8 local_28;
  
  uVar12 = *(ulong *)(param_1 + 0x78);
  if (uVar12 == 0) {
    return;
  }
  uVar14 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar8 = *param_2;
  uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar14 < 2) {
    uVar16 = uVar12 - 1 & uVar8;
  }
  else if (uVar8 < uVar12) {
    uVar16 = uVar8;
  }
  else {
    uVar16 = 0;
    if (uVar12 != 0) {
      uVar16 = uVar8 / uVar12;
    }
    uVar16 = uVar8 - uVar16 * uVar12;
  }
  plVar18 = *(long **)(*(long *)(param_1 + 0x70) + uVar16 * 8);
  if (plVar18 == (long *)0x0) {
    return;
  }
  plVar18 = (long *)*plVar18;
  if (plVar18 == (long *)0x0) {
    return;
  }
  if (uVar14 < 2) {
    do {
      if (plVar18[1] == uVar8) {
        if (plVar18[2] == uVar8) goto LAB_01cd517c;
      }
      else if ((plVar18[1] & uVar12 - 1) != uVar16) {
        return;
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    uVar14 = plVar18[1];
    if (uVar14 == uVar8) {
      if (plVar18[2] == uVar8) break;
    }
    else {
      if (uVar12 <= uVar14) {
        uVar4 = 0;
        if (uVar12 != 0) {
          uVar4 = uVar14 / uVar12;
        }
        uVar14 = uVar14 - uVar4 * uVar12;
      }
      if (uVar14 != uVar16) {
        return;
      }
    }
    plVar18 = (long *)*plVar18;
    if (plVar18 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_01cd517c:
  (**(code **)(*(long *)*param_3 + 0x10))(local_40);
  local_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_01cd6ab8(&local_50,local_40);
  if (local_40[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_40[0] + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_40[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *local_40[0];
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  puVar5 = local_50;
  if (local_50 == (ulong *)0x0) {
    puVar19 = (undefined8 *)0x0;
  }
  else {
    puVar10 = local_50 + 1;
    puVar19 = (undefined8 *)*local_50;
    do {
      iVar6 = (int)*puVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar10,0x10);
      if (bVar3) {
        *(int *)puVar10 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      local_50[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_40[0] = (undefined8 *)*puVar5;
      FUN_02a44274(lVar9 + 0xd8,local_40);
    }
  }
  puVar11 = *(undefined8 **)(plVar18[3] + 0x88);
  if (puVar11 != (undefined8 *)0x0) {
    plVar20 = (long *)(plVar18[3] + 0x80);
    uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      puVar13 = (undefined8 *)((long)puVar11 - 1U & (ulong)puVar19);
    }
    else {
      puVar13 = puVar19;
      if (puVar11 <= puVar19) {
        uVar14 = 0;
        if (puVar11 != (undefined8 *)0x0) {
          uVar14 = (ulong)puVar19 / (ulong)puVar11;
        }
        puVar13 = (undefined8 *)((long)puVar19 - uVar14 * (long)puVar11);
      }
    }
    plVar15 = *(long **)(*plVar20 + (long)puVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if ((undefined8 *)plVar15[1] == puVar19) {
            if ((undefined8 *)plVar15[2] == puVar19) goto LAB_01cd53a8;
          }
          else if ((undefined8 *)((ulong)plVar15[1] & (long)puVar11 - 1U) != puVar13) {
            return;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          puVar17 = (undefined8 *)plVar15[1];
          if (puVar17 == puVar19) {
            if ((undefined8 *)plVar15[2] == puVar19) goto LAB_01cd53a8;
          }
          else {
            if (puVar11 <= puVar17) {
              uVar12 = 0;
              if (puVar11 != (undefined8 *)0x0) {
                uVar12 = (ulong)puVar17 / (ulong)puVar11;
              }
              puVar17 = (undefined8 *)((long)puVar17 - uVar12 * (long)puVar11);
            }
            if (puVar17 != puVar13) {
              return;
            }
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  return;
LAB_01cd53a8:
  local_40[0] = puVar19;
  FUN_01cd922c(plVar20,local_40);
  plVar15 = (long *)plVar18[3];
  plVar20 = (long *)plVar15[0xf];
  local_58 = plVar20;
  if (plVar20 != (long *)0x0) {
    lVar9 = plVar20[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01cd5568;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar15 = (long *)plVar18[3];
  }
  local_60 = plVar15;
  if (plVar15 == (long *)0x0) {
    FUN_01cd4898(&local_58,&local_60);
  }
  else {
    lVar9 = plVar15[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_01cd5568:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_01cd4898(&local_58,&local_60);
    lVar9 = plVar15[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  if (plVar20 == (long *)0x0) {
    return;
  }
  lVar9 = plVar20[0xb];
  piVar1 = (int *)(lVar9 + 0xc);
  do {
    iVar6 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 + -1 == 0) {
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar20 + 0x20))(plVar20);
    return;
  }
  return;
}


