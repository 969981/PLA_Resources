/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c7dd6c; name: FUN_01c7dd6c
 */


void FUN_01c7dd6c(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  long *local_88;
  long *local_80;
  uint local_74;
  long *local_70;
  undefined8 *local_68 [2];
  undefined8 local_58;
  
  FUN_016c24d0(&local_70,param_3);
  if (local_70 == (long *)0x0) {
    return;
  }
  puVar23 = (undefined8 *)local_70[0x3f];
  local_74 = 0x22;
  uVar10 = *(ulong *)(param_1 + 0x140);
  plVar18 = (long *)(param_1 + 0x138);
  if (uVar10 != 0) {
    uVar13 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = (ulong)((uint)uVar10 - 1) & 0x22;
    }
    else {
      uVar14 = 0x22;
      if (uVar10 < 0x23) {
        uVar1 = (uint)uVar10 & 0xff;
        uVar4 = 0;
        if ((uVar10 & 0xff) != 0) {
          uVar4 = 0x22 / uVar1;
        }
        uVar14 = (ulong)(0x22 - uVar4 * uVar1);
      }
    }
    plVar15 = *(long **)(*plVar18 + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == 0x22) {
            if ((int)plVar15[2] == 0x22) goto LAB_01c7de40;
          }
          else if ((plVar15[1] & uVar10 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == 0x22) {
            if ((int)plVar15[2] == 0x22) goto LAB_01c7de40;
          }
          else {
            if (uVar10 <= uVar13) {
              uVar16 = 0;
              if (uVar10 != 0) {
                uVar16 = uVar13 / uVar10;
              }
              uVar13 = uVar13 - uVar16 * uVar10;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  local_80 = (long *)FUN_0189f360(local_68,uVar7);
  if (local_80 != (long *)0x0) {
    lVar20 = local_80[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01c7eb18;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar9;
    }
    piVar11 = (int *)(lVar20 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_88 = (long *)FUN_018a008c(local_68,uVar7);
  if (local_88 != (long *)0x0) {
    lVar20 = local_88[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01c7eb18;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar7;
    }
    piVar11 = (int *)(lVar20 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar15 = local_80;
  if ((puVar23 != (undefined8 *)0xae652fb65c121b9b) &&
     (puVar23 != (undefined8 *)&DAT_cbf29ce484222645)) {
    local_90 = (long *)*param_2;
    if (local_90 == (long *)0x0) {
      plVar17 = (long *)0x0;
    }
    else {
      lVar20 = local_90[0xb];
      if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01c7eb18;
      if (*(long *)(lVar20 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
        *(undefined8 *)(lVar20 + 0x10) = uVar7;
      }
      piVar11 = (int *)(lVar20 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar17 = local_90;
    }
    local_68[0] = puVar23;
    FUN_01c84bfc(plVar15 + 0xd,local_68,&local_90);
    if (plVar17 != (long *)0x0) {
      lVar20 = plVar17[0xb];
      piVar11 = (int *)(lVar20 + 0xc);
      do {
        iVar6 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
    }
    FUN_01c853a0(param_1 + 0x68,&local_74,&local_80);
  }
  FUN_009c69bc(&local_a8,*param_2);
  (**(code **)(*local_a8 + 0x10))(local_68);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_0087f944(&local_a0,local_68);
  puVar23 = local_68[0];
  if (local_68[0] != (undefined8 *)0x0) {
    piVar11 = (int *)(local_68[0] + 1);
    do {
      iVar6 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_68[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_58 = *puVar23;
      FUN_02a44274(lVar20 + 0xd8,&local_58);
    }
  }
  puVar23 = local_a0;
  if (local_a0 == (undefined8 *)0x0) {
    puVar22 = (undefined8 *)0x0;
  }
  else {
    piVar11 = (int *)(local_a0 + 1);
    puVar22 = (undefined8 *)*local_a0;
    do {
      iVar6 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_68[0] = (undefined8 *)*puVar23;
      FUN_02a44274(lVar20 + 0xd8,local_68);
    }
  }
  if (local_a8 != (long *)0x0) {
    lVar20 = local_a8[0xb];
    piVar11 = (int *)(lVar20 + 0xc);
    do {
      iVar6 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  plVar15 = local_88;
  local_b0 = (long *)*param_2;
  if (local_b0 == (long *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    lVar20 = local_b0[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01c7eb18;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar7;
    }
    piVar11 = (int *)(lVar20 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar17 = local_b0;
  }
  local_68[0] = puVar22;
  FUN_01c857a4(plVar15 + 0xd,local_68,&local_b0);
  if (plVar17 != (long *)0x0) {
    lVar20 = plVar17[0xb];
    piVar11 = (int *)(lVar20 + 0xc);
    do {
      iVar6 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  FUN_01c85f4c(plVar18,&local_74,&local_88);
  plVar15 = local_80;
  if (local_88 != (long *)0x0) {
    lVar20 = local_88[0xb];
    piVar11 = (int *)(lVar20 + 0xc);
    do {
      iVar6 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
      plVar15 = local_80;
    }
  }
  local_80 = plVar15;
  if (plVar15 == (long *)0x0) goto joined_r0x01c7e324;
  lVar20 = plVar15[0xb];
  piVar11 = (int *)(lVar20 + 0xc);
  do {
    iVar6 = *piVar11;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
    if (bVar3) {
      *piVar11 = iVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 + -1 != 0) goto joined_r0x01c7e324;
  *(undefined8 *)(lVar20 + 0x18) = 0;
  pcVar12 = *(code **)(*plVar15 + 0x20);
LAB_01c7e5fc:
  (*pcVar12)(plVar15);
joined_r0x01c7e324:
  if (local_70 != (long *)0x0) {
    lVar20 = local_70[0xb];
    piVar11 = (int *)(lVar20 + 0xc);
    do {
      iVar6 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return;
LAB_01c7decc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) {
    uVar10 = 0x22;
    uVar13 = *(ulong *)(param_1 + 0xd8);
  }
  else {
    lVar20 = plVar15[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01c7eb18;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar7;
    }
    piVar11 = (int *)(lVar20 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = (ulong)local_74;
    uVar13 = *(ulong *)(param_1 + 0xd8);
  }
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar16 = (int)uVar13 - 1 & uVar10;
    }
    else {
      uVar16 = uVar10;
      if (uVar13 <= uVar10) {
        uVar16 = 0;
        if (uVar13 != 0) {
          uVar16 = uVar10 / uVar13;
        }
        uVar16 = uVar10 - uVar16 * uVar13;
      }
    }
    plVar17 = *(long **)(*(long *)(param_1 + 0xd0) + uVar16 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar17[1] == uVar10) {
            if ((int)plVar17[2] == (int)uVar10) goto LAB_01c7df98;
          }
          else if ((plVar17[1] & uVar13 - 1) != uVar16) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar17[1];
          if (uVar14 == uVar10) {
            if ((int)plVar17[2] == (int)uVar10) goto LAB_01c7df98;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar5 * uVar13;
            }
            if (uVar14 != uVar16) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  goto LAB_01c7eb14;
LAB_01c7df98:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    lVar20 = plVar17[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01c7eb18;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar7;
    }
    piVar11 = (int *)(lVar20 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = (ulong)local_74;
  }
  uVar13 = *(ulong *)(param_1 + 0x140);
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar16 = (int)uVar13 - 1 & uVar10;
    }
    else {
      uVar16 = uVar10;
      if (uVar13 <= uVar10) {
        uVar16 = 0;
        if (uVar13 != 0) {
          uVar16 = uVar10 / uVar13;
        }
        uVar16 = uVar10 - uVar16 * uVar13;
      }
    }
    plVar18 = *(long **)(*plVar18 + uVar16 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar18[1] == uVar10) {
            if ((int)plVar18[2] == (int)uVar10) goto LAB_01c7e064;
          }
          else if ((plVar18[1] & uVar13 - 1) != uVar16) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar18[1];
          if (uVar14 == uVar10) {
            if ((int)plVar18[2] == (int)uVar10) goto LAB_01c7e064;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar5 * uVar13;
            }
            if (uVar14 != uVar16) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  goto LAB_01c7eb14;
LAB_01c7e064:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    lVar20 = plVar18[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01c7eb18;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar7;
    }
    piVar11 = (int *)(lVar20 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((puVar23 != (undefined8 *)0xae652fb65c121b9b) &&
     (puVar23 != (undefined8 *)&DAT_cbf29ce484222645)) {
    lVar20 = FUN_01c847d4(plVar15 + 10);
    local_b8 = (long *)*param_2;
    if (local_b8 == (long *)0x0) {
      plVar19 = (long *)0x0;
    }
    else {
      lVar8 = local_b8[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_01c7eb18;
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar11 = (int *)(lVar8 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar19 = local_b8;
    }
    local_68[0] = puVar23;
    FUN_01c84bfc(lVar20 + 0x68,local_68,&local_b8);
    if (plVar19 != (long *)0x0) {
      lVar20 = plVar19[0xb];
      piVar11 = (int *)(lVar20 + 0xc);
      do {
        iVar6 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
    }
  }
  puVar23 = (undefined8 *)(**(code **)plVar18[10])(plVar18 + 10);
  FUN_01c84b28();
  if (puVar23 == (undefined8 *)0x0) {
    plVar19 = (long *)0x0;
  }
  else {
    do {
      if (puVar23 == (undefined8 *)PTR_DAT_04381dc0) {
        plVar19 = plVar18;
        break;
      }
      puVar23 = (undefined8 *)*puVar23;
      plVar19 = (long *)0x0;
    } while (puVar23 != (undefined8 *)0x0);
  }
  FUN_009c69bc(&local_80,*param_2);
  (**(code **)(*local_80 + 0x10))(local_68);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_0087f944(&local_a0,local_68);
  puVar23 = local_68[0];
  if (local_68[0] != (undefined8 *)0x0) {
    piVar11 = (int *)(local_68[0] + 1);
    do {
      iVar6 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_68[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_58 = *puVar23;
      FUN_02a44274(lVar20 + 0xd8,&local_58);
    }
  }
  puVar23 = local_a0;
  if (local_a0 == (undefined8 *)0x0) {
    puVar22 = (undefined8 *)0x0;
  }
  else {
    piVar11 = (int *)(local_a0 + 1);
    puVar22 = (undefined8 *)*local_a0;
    do {
      iVar6 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_68[0] = (undefined8 *)*puVar23;
      FUN_02a44274(lVar20 + 0xd8,local_68);
    }
  }
  if (local_80 != (long *)0x0) {
    lVar20 = local_80[0xb];
    piVar11 = (int *)(lVar20 + 0xc);
    do {
      iVar6 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  local_c0 = (long *)*param_2;
  if (local_c0 == (long *)0x0) {
    plVar21 = (long *)0x0;
  }
  else {
    lVar20 = local_c0[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01c7eb18;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar7;
    }
    piVar11 = (int *)(lVar20 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar21 = local_c0;
  }
  local_68[0] = puVar22;
  FUN_01c857a4(plVar19 + 0xd,local_68,&local_c0);
  if (plVar21 != (long *)0x0) {
    lVar20 = plVar21[0xb];
    piVar11 = (int *)(lVar20 + 0xc);
    do {
      iVar6 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  puVar23 = (undefined8 *)local_70[0x3e];
  if (puVar23 != (undefined8 *)0xae652fb65c121b9b && puVar23 != (undefined8 *)&DAT_cbf29ce484222645)
  {
    lVar20 = FUN_01c847d4(plVar17 + 10);
    local_68[0] = puVar23;
    lVar8 = FUN_01c86350(lVar20 + 0x68,local_68);
    if (lVar8 == 0) {
      local_c8 = (long *)*param_2;
      if (local_c8 == (long *)0x0) {
        plVar19 = (long *)0x0;
      }
      else {
        lVar8 = local_c8[0xb];
        if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_01c7eb18;
        if (*(long *)(lVar8 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
          *(undefined8 *)(lVar8 + 0x10) = uVar7;
        }
        piVar11 = (int *)(lVar8 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = *piVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar19 = local_c8;
      }
      local_68[0] = puVar23;
      FUN_01c84bfc(lVar20 + 0x68,local_68,&local_c8);
      if (plVar19 != (long *)0x0) {
        lVar20 = plVar19[0xb];
        piVar11 = (int *)(lVar20 + 0xc);
        do {
          iVar6 = *piVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
      }
    }
  }
  if (plVar18 != (long *)0x0) {
    lVar20 = plVar18[0xb];
    piVar11 = (int *)(lVar20 + 0xc);
    do {
      iVar6 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  if (plVar17 != (long *)0x0) {
    lVar20 = plVar17[0xb];
    piVar11 = (int *)(lVar20 + 0xc);
    do {
      iVar6 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  if (plVar15 == (long *)0x0) goto joined_r0x01c7e324;
  lVar20 = plVar15[0xb];
  piVar11 = (int *)(lVar20 + 0xc);
  do {
    iVar6 = *piVar11;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
    if (bVar3) {
      *piVar11 = iVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 + -1 != 0) goto joined_r0x01c7e324;
  *(undefined8 *)(lVar20 + 0x18) = 0;
  pcVar12 = *(code **)(*plVar15 + 0x20);
  goto LAB_01c7e5fc;
LAB_01c7de40:
  uVar10 = *(ulong *)(param_1 + 0x70);
  if (uVar10 != 0) {
    uVar13 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = (ulong)((uint)uVar10 - 1) & 0x22;
    }
    else {
      uVar14 = 0x22;
      if (uVar10 < 0x23) {
        uVar1 = (uint)uVar10 & 0xff;
        uVar4 = 0;
        if ((uVar10 & 0xff) != 0) {
          uVar4 = 0x22 / uVar1;
        }
        uVar14 = (ulong)(0x22 - uVar4 * uVar1);
      }
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0x68) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == 0x22) {
            if ((int)plVar15[2] == 0x22) goto LAB_01c7decc;
          }
          else if ((plVar15[1] & uVar10 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == 0x22) {
            if ((int)plVar15[2] == 0x22) goto LAB_01c7decc;
          }
          else {
            if (uVar10 <= uVar13) {
              uVar16 = 0;
              if (uVar10 != 0) {
                uVar16 = uVar13 / uVar10;
              }
              uVar13 = uVar13 - uVar16 * uVar10;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01c7eb14:
  FUN_01c7fb60();
LAB_01c7eb18:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


