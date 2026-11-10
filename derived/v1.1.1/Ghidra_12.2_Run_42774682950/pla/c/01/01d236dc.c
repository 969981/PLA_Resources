/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d236dc; name: FUN_01d236dc
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_01d236dc(long param_1,uint param_2,long *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  int *piVar11;
  undefined1 *puVar12;
  code *pcVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined1 *puVar21;
  ulong uVar22;
  long lVar23;
  undefined1 *puVar24;
  long *plVar25;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  uint local_84;
  long *local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  FUN_016c24d0(&local_80,param_4);
  if (local_80 == (long *)0x0) {
    return false;
  }
  puVar10 = (undefined1 *)local_80[0x3f];
  uVar14 = *(ulong *)(param_1 + 0x140);
  plVar20 = (long *)(param_1 + 0x138);
  local_84 = param_2;
  if (uVar14 != 0) {
    uVar16 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar22 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar16 = (ulong)param_2;
    if (uVar22 < 2) {
      uVar17 = (ulong)((int)uVar14 - 1U & param_2);
    }
    else {
      uVar17 = uVar16;
      if (uVar14 <= uVar16) {
        uVar17 = 0;
        if (uVar14 != 0) {
          uVar17 = uVar16 / uVar14;
        }
        uVar17 = uVar16 - uVar17 * uVar14;
      }
    }
    plVar18 = *(long **)(*plVar20 + uVar17 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar18[1] == uVar16) {
            if (*(uint *)(plVar18 + 2) == param_2) goto LAB_01d237e8;
          }
          else if ((plVar18[1] & uVar14 - 1) != uVar17) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar18[1];
          if (uVar22 == uVar16) {
            if (*(uint *)(plVar18 + 2) == param_2) goto LAB_01d237e8;
          }
          else {
            if (uVar14 <= uVar22) {
              uVar3 = 0;
              if (uVar14 != 0) {
                uVar3 = uVar22 / uVar14;
              }
              uVar22 = uVar22 - uVar3 * uVar14;
            }
            if (uVar22 != uVar17) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 8);
  local_90 = (long *)FUN_0186ecf8(local_78,uVar6);
  if (local_90 != (long *)0x0) {
    lVar23 = local_90[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d245d0;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar9;
    }
    piVar11 = (int *)(lVar23 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = *piVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  local_98 = (long *)FUN_0186f9a0(local_78,uVar6);
  if (local_98 != (long *)0x0) {
    lVar23 = local_98[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d245d0;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar6;
    }
    piVar11 = (int *)(lVar23 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = *piVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar18 = local_90;
  if ((puVar10 != (undefined1 *)0xae652fb65c121b9b) && (puVar10 != &DAT_cbf29ce484222645)) {
    local_a0 = (long *)*param_3;
    if (local_a0 != (long *)0x0) {
      lVar23 = local_a0[0xb];
      if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d245d0;
      if (*(long *)(lVar23 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
        *(undefined8 *)(lVar23 + 0x10) = uVar6;
      }
      piVar11 = (int *)(lVar23 + 0xc);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_01d2bc30(plVar18,puVar10,&local_a0);
    if (local_a0 != (long *)0x0) {
      lVar23 = local_a0[0xb];
      piVar11 = (int *)(lVar23 + 0xc);
      do {
        iVar5 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*local_a0 + 0x20))();
      }
    }
    FUN_01d2c98c(param_1 + 0x68,&local_84,&local_90);
  }
  FUN_009c69bc(&local_b8,*param_3);
  (**(code **)(*local_b8 + 0x10))(local_78);
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_0087f944(&local_b0,local_78);
  puVar4 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar11 = (int *)(local_78[0] + 1);
    do {
      iVar5 = *piVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_68 = *puVar4;
      FUN_02a44274(lVar23 + 0xd8,&local_68);
    }
  }
  puVar4 = local_b0;
  if (local_b0 == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  else {
    piVar11 = (int *)(local_b0 + 1);
    uVar6 = *local_b0;
    do {
      iVar5 = *piVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 + -1 == 0) {
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_78[0] = (undefined8 *)*puVar4;
      FUN_02a44274(lVar23 + 0xd8,local_78);
    }
  }
  if (local_b8 != (long *)0x0) {
    lVar23 = local_b8[0xb];
    piVar11 = (int *)(lVar23 + 0xc);
    do {
      iVar5 = *piVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  plVar18 = local_98;
  local_c0 = (long *)*param_3;
  if (local_c0 != (long *)0x0) {
    lVar23 = local_c0[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d245d0;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar9;
    }
    piVar11 = (int *)(lVar23 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = *piVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01d2be7c(plVar18,uVar6,&local_c0);
  if (local_c0 != (long *)0x0) {
    lVar23 = local_c0[0xb];
    piVar11 = (int *)(lVar23 + 0xc);
    do {
      iVar5 = *piVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_c0 + 0x20))();
    }
  }
  FUN_01d2d4a4(plVar20,&local_84,&local_98);
  plVar18 = local_90;
  if (local_98 != (long *)0x0) {
    lVar23 = local_98[0xb];
    piVar11 = (int *)(lVar23 + 0xc);
    do {
      iVar5 = *piVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
      plVar18 = local_90;
    }
  }
  local_90 = plVar18;
  if (plVar18 == (long *)0x0) goto LAB_01d23ca4;
  lVar23 = plVar18[0xb];
  piVar11 = (int *)(lVar23 + 0xc);
  do {
    iVar5 = *piVar11;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
    if (bVar2) {
      *piVar11 = iVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar5 + -1 != 0) goto LAB_01d23ca4;
  *(undefined8 *)(lVar23 + 0x18) = 0;
  pcVar13 = *(code **)(*plVar18 + 0x20);
LAB_01d2407c:
  (*pcVar13)(plVar18);
LAB_01d23ca4:
  if (local_80 != (long *)0x0) {
    lVar23 = local_80[0xb];
    piVar11 = (int *)(lVar23 + 0xc);
    do {
      iVar5 = *piVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  return puVar10 != &DAT_cbf29ce484222645 && puVar10 != (undefined1 *)0xae652fb65c121b9b;
LAB_01d23870:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    lVar23 = plVar18[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d245d0;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar6;
    }
    piVar11 = (int *)(lVar23 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = *piVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar16 = (ulong)local_84;
  }
  uVar14 = *(ulong *)(param_1 + 0xd8);
  if (uVar14 != 0) {
    uVar22 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar17 = (int)uVar14 - 1 & uVar16;
    }
    else {
      uVar17 = uVar16;
      if (uVar14 <= uVar16) {
        uVar17 = 0;
        if (uVar14 != 0) {
          uVar17 = uVar16 / uVar14;
        }
        uVar17 = uVar16 - uVar17 * uVar14;
      }
    }
    plVar19 = *(long **)(*(long *)(param_1 + 0xd0) + uVar17 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar19[1] == uVar16) {
            if (*(uint *)(plVar19 + 2) == local_84) goto LAB_01d23948;
          }
          else if ((plVar19[1] & uVar14 - 1) != uVar17) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar19[1];
          if (uVar22 == uVar16) {
            if (*(uint *)(plVar19 + 2) == local_84) goto LAB_01d23948;
          }
          else {
            if (uVar14 <= uVar22) {
              uVar3 = 0;
              if (uVar14 != 0) {
                uVar3 = uVar22 / uVar14;
              }
              uVar22 = uVar22 - uVar3 * uVar14;
            }
            if (uVar22 != uVar17) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  goto LAB_01d245cc;
LAB_01d23948:
  plVar19 = (long *)plVar19[3];
  if (plVar19 != (long *)0x0) {
    lVar23 = plVar19[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d245d0;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar6;
    }
    piVar11 = (int *)(lVar23 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = *piVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar16 = (ulong)local_84;
  }
  uVar14 = *(ulong *)(param_1 + 0x140);
  if (uVar14 != 0) {
    uVar22 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar17 = (int)uVar14 - 1 & uVar16;
    }
    else {
      uVar17 = uVar16;
      if (uVar14 <= uVar16) {
        uVar17 = 0;
        if (uVar14 != 0) {
          uVar17 = uVar16 / uVar14;
        }
        uVar17 = uVar16 - uVar17 * uVar14;
      }
    }
    plVar20 = *(long **)(*plVar20 + uVar17 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar20[1] == uVar16) {
            if (*(uint *)(plVar20 + 2) == local_84) goto LAB_01d23a1c;
          }
          else if ((plVar20[1] & uVar14 - 1) != uVar17) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar20[1];
          if (uVar22 == uVar16) {
            if (*(uint *)(plVar20 + 2) == local_84) goto LAB_01d23a1c;
          }
          else {
            if (uVar14 <= uVar22) {
              uVar3 = 0;
              if (uVar14 != 0) {
                uVar3 = uVar22 / uVar14;
              }
              uVar22 = uVar22 - uVar3 * uVar14;
            }
            if (uVar22 != uVar17) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto LAB_01d245cc;
LAB_01d23a1c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    lVar23 = plVar20[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d245d0;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar6;
    }
    piVar11 = (int *)(lVar23 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = *piVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((puVar10 != (undefined1 *)0xae652fb65c121b9b) && (puVar10 != &DAT_cbf29ce484222645)) {
    plVar7 = (long *)(**(code **)plVar18[10])(plVar18 + 10);
    plVar8 = (long *)FUN_01d2c0cc();
    if (plVar7 == (long *)0x0) {
      plVar25 = (long *)0x0;
    }
    else {
      do {
        if (plVar7 == plVar8) {
          plVar25 = plVar18;
          break;
        }
        plVar7 = (long *)*plVar7;
        plVar25 = (long *)0x0;
      } while (plVar7 != (long *)0x0);
    }
    local_c8 = (long *)*param_3;
    if (local_c8 != (long *)0x0) {
      lVar23 = local_c8[0xb];
      if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d245d0;
      if (*(long *)(lVar23 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
        *(undefined8 *)(lVar23 + 0x10) = uVar6;
      }
      piVar11 = (int *)(lVar23 + 0xc);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_01d2bc30(plVar25,puVar10,&local_c8);
    if (local_c8 != (long *)0x0) {
      lVar23 = local_c8[0xb];
      piVar11 = (int *)(lVar23 + 0xc);
      do {
        iVar5 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*local_c8 + 0x20))();
      }
    }
  }
  plVar7 = (long *)(**(code **)plVar20[10])(plVar20 + 10);
  plVar8 = (long *)FUN_01d2c1ac();
  if (plVar7 == (long *)0x0) {
    plVar25 = (long *)0x0;
  }
  else {
    do {
      if (plVar7 == plVar8) {
        plVar25 = plVar20;
        break;
      }
      plVar7 = (long *)*plVar7;
      plVar25 = (long *)0x0;
    } while (plVar7 != (long *)0x0);
  }
  FUN_009c69bc(&local_90,*param_3);
  (**(code **)(*local_90 + 0x10))(local_78);
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_0087f944(&local_b0,local_78);
  puVar4 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar11 = (int *)(local_78[0] + 1);
    do {
      iVar5 = *piVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_68 = *puVar4;
      FUN_02a44274(lVar23 + 0xd8,&local_68);
    }
  }
  puVar4 = local_b0;
  if (local_b0 == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  else {
    piVar11 = (int *)(local_b0 + 1);
    uVar6 = *local_b0;
    do {
      iVar5 = *piVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 + -1 == 0) {
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_78[0] = (undefined8 *)*puVar4;
      FUN_02a44274(lVar23 + 0xd8,local_78);
    }
  }
  if (local_90 != (long *)0x0) {
    lVar23 = local_90[0xb];
    piVar11 = (int *)(lVar23 + 0xc);
    do {
      iVar5 = *piVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  local_d0 = (long *)*param_3;
  if (local_d0 != (long *)0x0) {
    lVar23 = local_d0[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d245d0;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar9;
    }
    piVar11 = (int *)(lVar23 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = *piVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01d2be7c(plVar25,uVar6,&local_d0);
  if (local_d0 != (long *)0x0) {
    lVar23 = local_d0[0xb];
    piVar11 = (int *)(lVar23 + 0xc);
    do {
      iVar5 = *piVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_d0 + 0x20))();
    }
  }
  puVar24 = (undefined1 *)local_80[0x3e];
  if (puVar24 != (undefined1 *)0xae652fb65c121b9b && puVar24 != &DAT_cbf29ce484222645) {
    plVar7 = (long *)(**(code **)plVar19[10])(plVar19 + 10);
    plVar8 = (long *)FUN_01d2c0cc();
    if (plVar7 == (long *)0x0) {
      plVar25 = (long *)0x0;
    }
    else {
      do {
        if (plVar7 == plVar8) {
          plVar25 = plVar19;
          break;
        }
        plVar7 = (long *)*plVar7;
        plVar25 = (long *)0x0;
      } while (plVar7 != (long *)0x0);
    }
    puVar12 = (undefined1 *)plVar25[0xe];
    if (puVar12 != (undefined1 *)0x0) {
      uVar14 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        puVar15 = (undefined1 *)((ulong)(puVar12 + -1) & (ulong)puVar24);
      }
      else {
        puVar15 = puVar24;
        if (puVar12 <= puVar24) {
          uVar16 = 0;
          if (puVar12 != (undefined1 *)0x0) {
            uVar16 = (ulong)puVar24 / (ulong)puVar12;
          }
          puVar15 = puVar24 + -(uVar16 * (long)puVar12);
        }
      }
      plVar7 = *(long **)(plVar25[0xd] + (long)puVar15 * 8);
      if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
        if (uVar14 < 2) {
          do {
            if ((undefined1 *)plVar7[1] == puVar24) {
              if ((undefined1 *)plVar7[2] == puVar24) goto joined_r0x01d23f34;
            }
            else if ((undefined1 *)((ulong)plVar7[1] & (ulong)(puVar12 + -1)) != puVar15) break;
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
        else {
          do {
            puVar21 = (undefined1 *)plVar7[1];
            if (puVar21 == puVar24) {
              if ((undefined1 *)plVar7[2] == puVar24) goto joined_r0x01d23f34;
            }
            else {
              if (puVar12 <= puVar21) {
                uVar14 = 0;
                if (puVar12 != (undefined1 *)0x0) {
                  uVar14 = (ulong)puVar21 / (ulong)puVar12;
                }
                puVar21 = puVar21 + -(uVar14 * (long)puVar12);
              }
              if (puVar21 != puVar15) break;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
    }
    local_d8 = (long *)*param_3;
    if (local_d8 != (long *)0x0) {
      lVar23 = local_d8[0xb];
      if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d245d0;
      if (*(long *)(lVar23 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
        *(undefined8 *)(lVar23 + 0x10) = uVar6;
      }
      piVar11 = (int *)(lVar23 + 0xc);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_01d2bc30(plVar25,puVar24,&local_d8);
    if (local_d8 != (long *)0x0) {
      lVar23 = local_d8[0xb];
      piVar11 = (int *)(lVar23 + 0xc);
      do {
        iVar5 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*local_d8 + 0x20))();
      }
    }
  }
joined_r0x01d23f34:
  if (plVar20 != (long *)0x0) {
    lVar23 = plVar20[0xb];
    piVar11 = (int *)(lVar23 + 0xc);
    do {
      iVar5 = *piVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
  }
  if (plVar19 != (long *)0x0) {
    lVar23 = plVar19[0xb];
    piVar11 = (int *)(lVar23 + 0xc);
    do {
      iVar5 = *piVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  if (plVar18 == (long *)0x0) goto LAB_01d23ca4;
  lVar23 = plVar18[0xb];
  piVar11 = (int *)(lVar23 + 0xc);
  do {
    iVar5 = *piVar11;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
    if (bVar2) {
      *piVar11 = iVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar5 + -1 != 0) goto LAB_01d23ca4;
  *(undefined8 *)(lVar23 + 0x18) = 0;
  pcVar13 = *(code **)(*plVar18 + 0x20);
  goto LAB_01d2407c;
LAB_01d237e8:
  uVar14 = *(ulong *)(param_1 + 0x70);
  if (uVar14 != 0) {
    uVar22 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar17 = (ulong)((int)uVar14 - 1U & param_2);
    }
    else {
      uVar17 = uVar16;
      if (uVar14 <= uVar16) {
        uVar17 = 0;
        if (uVar14 != 0) {
          uVar17 = uVar16 / uVar14;
        }
        uVar17 = uVar16 - uVar17 * uVar14;
      }
    }
    plVar18 = *(long **)(*(long *)(param_1 + 0x68) + uVar17 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar18[1] == uVar16) {
            if (*(uint *)(plVar18 + 2) == param_2) goto LAB_01d23870;
          }
          else if ((plVar18[1] & uVar14 - 1) != uVar17) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar18[1];
          if (uVar22 == uVar16) {
            if (*(uint *)(plVar18 + 2) == param_2) goto LAB_01d23870;
          }
          else {
            if (uVar14 <= uVar22) {
              uVar3 = 0;
              if (uVar14 != 0) {
                uVar3 = uVar22 / uVar14;
              }
              uVar22 = uVar22 - uVar3 * uVar14;
            }
            if (uVar22 != uVar17) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
LAB_01d245cc:
  FUN_01d2b0c0();
LAB_01d245d0:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


