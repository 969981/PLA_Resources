/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01de56cc; name: FUN_01de56cc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01de56cc(long param_1,uint param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  int *piVar18;
  code *pcVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong uVar29;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  uint local_7c;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar8 = PTR_DAT_0437a258;
  puVar7 = PTR_DAT_0437a250;
  puVar6 = PTR_DAT_043795e0;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar28 = *param_4;
  if ((lVar28 == 0) || (*(int *)(lVar28 + 0xc) == 0)) {
LAB_01de56f4:
    uVar9 = 0;
  }
  else {
    piVar18 = (int *)(lVar28 + 0xc);
    iVar11 = *(int *)(lVar28 + 0xc);
    do {
      puVar27 = *(undefined8 **)(lVar28 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar10 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar12;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar6 = puVar5;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      if (puVar27 == (undefined8 *)0x0) goto LAB_01de56f4;
      while (puVar27 != (undefined8 *)puVar8) {
        puVar27 = (undefined8 *)*puVar27;
        uVar9 = 0;
        if (puVar27 == (undefined8 *)0x0) goto LAB_01de56f8;
      }
      iVar10 = *piVar18;
      if (iVar10 == iVar11) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar2) {
          *piVar18 = iVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          lVar28 = *(long *)(lVar28 + 0x18);
          if (lVar28 == 0) goto LAB_01de56f4;
          uVar12 = FUN_0183680c();
          local_7c = param_2;
          uVar9 = FUN_01833e7c(param_1,uVar12);
          uVar17 = *(ulong *)(param_1 + 0x140);
          plVar24 = (long *)(param_1 + 0x138);
          if (uVar17 == 0) goto LAB_01de62cc;
          uVar20 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
          uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
          uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          uVar29 = (ulong)param_2;
          if (uVar20 < 2) {
            uVar21 = (ulong)((int)uVar17 - 1U & param_2);
          }
          else {
            uVar21 = uVar29;
            if (uVar17 <= uVar29) {
              uVar21 = 0;
              if (uVar17 != 0) {
                uVar21 = uVar29 / uVar17;
              }
              uVar21 = uVar29 - uVar21 * uVar17;
            }
          }
          plVar22 = *(long **)(*plVar24 + uVar21 * 8);
          if ((plVar22 == (long *)0x0) || (plVar22 = (long *)*plVar22, plVar22 == (long *)0x0))
          goto LAB_01de62cc;
          if (1 < uVar20) goto LAB_01de5858;
          goto LAB_01de5f40;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar9 = 0;
      iVar11 = iVar10;
    } while (iVar10 != 0);
  }
  goto LAB_01de56f8;
LAB_01de5858:
  do {
    uVar20 = plVar22[1];
    if (uVar20 == uVar29) {
      if (*(uint *)(plVar22 + 2) == param_2) goto LAB_01de5870;
    }
    else {
      if (uVar17 <= uVar20) {
        uVar3 = 0;
        if (uVar17 != 0) {
          uVar3 = uVar20 / uVar17;
        }
        uVar20 = uVar20 - uVar3 * uVar17;
      }
      if (uVar20 != uVar21) break;
    }
    plVar22 = (long *)*plVar22;
  } while (plVar22 != (long *)0x0);
  goto LAB_01de62cc;
LAB_01de5900:
  plVar22 = (long *)plVar22[3];
  if (plVar22 != (long *)0x0) {
    lVar25 = plVar22[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01de6620;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar13;
    }
    piVar18 = (int *)(lVar25 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = *piVar18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar17 = *(ulong *)(param_1 + 0xd8);
  if (uVar17 != 0) {
    uVar20 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar21 = (ulong)((int)uVar17 - 1U & param_2);
    }
    else {
      uVar21 = uVar29;
      if (uVar17 <= uVar29) {
        uVar21 = 0;
        if (uVar17 != 0) {
          uVar21 = uVar29 / uVar17;
        }
        uVar21 = uVar29 - uVar21 * uVar17;
      }
    }
    plVar23 = *(long **)(*(long *)(param_1 + 0xd0) + uVar21 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar23[1] == uVar29) {
            if (*(uint *)(plVar23 + 2) == param_2) goto LAB_01de59d0;
          }
          else if ((plVar23[1] & uVar17 - 1) != uVar21) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar23[1];
          if (uVar20 == uVar29) {
            if (*(uint *)(plVar23 + 2) == param_2) goto LAB_01de59d0;
          }
          else {
            if (uVar17 <= uVar20) {
              uVar3 = 0;
              if (uVar17 != 0) {
                uVar3 = uVar20 / uVar17;
              }
              uVar20 = uVar20 - uVar3 * uVar17;
            }
            if (uVar20 != uVar21) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
  }
  goto LAB_01de661c;
LAB_01de59d0:
  plVar23 = (long *)plVar23[3];
  if (plVar23 != (long *)0x0) {
    lVar25 = plVar23[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01de6620;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar13;
    }
    piVar18 = (int *)(lVar25 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = *piVar18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar17 = *(ulong *)(param_1 + 0x140);
  if (uVar17 != 0) {
    uVar20 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar21 = (ulong)((int)uVar17 - 1U & param_2);
    }
    else {
      uVar21 = uVar29;
      if (uVar17 <= uVar29) {
        uVar21 = 0;
        if (uVar17 != 0) {
          uVar21 = uVar29 / uVar17;
        }
        uVar21 = uVar29 - uVar21 * uVar17;
      }
    }
    plVar24 = *(long **)(*plVar24 + uVar21 * 8);
    if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar24[1] == uVar29) {
            if (*(uint *)(plVar24 + 2) == param_2) goto LAB_01de5a9c;
          }
          else if ((plVar24[1] & uVar17 - 1) != uVar21) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar24[1];
          if (uVar20 == uVar29) {
            if (*(uint *)(plVar24 + 2) == param_2) goto LAB_01de5a9c;
          }
          else {
            if (uVar17 <= uVar20) {
              uVar3 = 0;
              if (uVar17 != 0) {
                uVar3 = uVar20 / uVar17;
              }
              uVar20 = uVar20 - uVar3 * uVar17;
            }
            if (uVar20 != uVar21) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
  goto LAB_01de661c;
LAB_01de5a9c:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    lVar25 = plVar24[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01de6620;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar13;
    }
    piVar18 = (int *)(lVar25 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = *piVar18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((uVar9 & 1) != 0) {
    plVar14 = (long *)(**(code **)plVar22[10])(plVar22 + 10);
    plVar15 = (long *)FUN_01dea524();
    if (plVar14 == (long *)0x0) {
      plVar26 = (long *)0x0;
    }
    else {
      do {
        if (plVar14 == plVar15) {
          plVar26 = plVar22;
          break;
        }
        plVar14 = (long *)*plVar14;
        plVar26 = (long *)0x0;
      } while (plVar14 != (long *)0x0);
    }
    local_c0 = (long *)*param_3;
    if (local_c0 != (long *)0x0) {
      lVar25 = local_c0[0xb];
      if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01de6620;
      if (*(long *)(lVar25 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
        *(undefined8 *)(lVar25 + 0x10) = uVar13;
      }
      piVar18 = (int *)(lVar25 + 0xc);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar2) {
          *piVar18 = *piVar18 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_01dea084(plVar26,uVar12,&local_c0);
    if (local_c0 != (long *)0x0) {
      lVar25 = local_c0[0xb];
      piVar18 = (int *)(lVar25 + 0xc);
      do {
        iVar11 = *piVar18;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar2) {
          *piVar18 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*local_c0 + 0x20))();
      }
    }
  }
  plVar14 = (long *)(**(code **)plVar24[10])(plVar24 + 10);
  plVar15 = (long *)FUN_01dea604();
  if (plVar14 == (long *)0x0) {
    plVar26 = (long *)0x0;
  }
  else {
    do {
      if (plVar14 == plVar15) {
        plVar26 = plVar24;
        break;
      }
      plVar14 = (long *)*plVar14;
      plVar26 = (long *)0x0;
    } while (plVar14 != (long *)0x0);
  }
  FUN_009c69bc(&local_88,*param_3);
  (**(code **)(*local_88 + 0x10))(local_78);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar27 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar18 = (int *)(local_78[0] + 1);
    do {
      iVar11 = *piVar18;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = iVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar11 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_68 = *puVar27;
      FUN_02a44274(lVar25 + 0xd8,&local_68);
    }
  }
  puVar27 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    uVar12 = 0;
  }
  else {
    piVar18 = (int *)(local_a8 + 1);
    uVar12 = *local_a8;
    do {
      iVar11 = *piVar18;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = iVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar11 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_78[0] = (undefined8 *)*puVar27;
      FUN_02a44274(lVar25 + 0xd8,local_78);
    }
  }
  if (local_88 != (long *)0x0) {
    lVar25 = local_88[0xb];
    piVar18 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar18;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = iVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  local_c8 = (long *)*param_3;
  if (local_c8 != (long *)0x0) {
    lVar25 = local_c8[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01de6620;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar13;
    }
    piVar18 = (int *)(lVar25 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = *piVar18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01dea2d4(plVar26,uVar12,&local_c8);
  if (local_c8 != (long *)0x0) {
    lVar25 = local_c8[0xb];
    piVar18 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar18;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = iVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*local_c8 + 0x20))();
    }
  }
  uVar17 = FUN_01836804((long *)(lVar28 + -0x50));
  uVar20 = FUN_01833e7c(param_1,uVar17);
  if ((uVar20 & 1) == 0) {
LAB_01de5eac:
    if (plVar24 == (long *)0x0) goto LAB_01de5ecc;
LAB_01de5eb0:
    lVar25 = plVar24[0xb];
    piVar18 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar18;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = iVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar11 + -1 != 0) goto LAB_01de5ecc;
    *(undefined8 *)(lVar25 + 0x18) = 0;
    (**(code **)(*plVar24 + 0x20))(plVar24);
    if (plVar23 != (long *)0x0) goto LAB_01de5ed0;
LAB_01de5eec:
    if (plVar22 == (long *)0x0) goto LAB_01de5f0c;
LAB_01de5ef0:
    lVar25 = plVar22[0xb];
    piVar18 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar18;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = iVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar11 + -1 != 0) goto LAB_01de5f0c;
    *(undefined8 *)(lVar25 + 0x18) = 0;
    pcVar19 = *(code **)(*plVar22 + 0x20);
    goto LAB_01de6070;
  }
  plVar14 = (long *)(**(code **)plVar23[10])(plVar23 + 10);
  plVar15 = (long *)FUN_01dea524();
  if (plVar14 == (long *)0x0) {
    plVar26 = (long *)0x0;
    uVar20 = _DAT_00000070;
  }
  else {
    do {
      if (plVar14 == plVar15) {
        plVar26 = plVar23;
        break;
      }
      plVar14 = (long *)*plVar14;
      plVar26 = (long *)0x0;
    } while (plVar14 != (long *)0x0);
    uVar20 = plVar26[0xe];
  }
  if (uVar20 != 0) {
    uVar29 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
    uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar29 < 2) {
      uVar21 = uVar20 - 1 & uVar17;
    }
    else {
      uVar21 = uVar17;
      if (uVar20 <= uVar17) {
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = uVar17 / uVar20;
        }
        uVar21 = uVar17 - uVar21 * uVar20;
      }
    }
    plVar14 = *(long **)(plVar26[0xd] + uVar21 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar29 < 2) {
        do {
          if (plVar14[1] == uVar17) {
            if (plVar14[2] == uVar17) goto LAB_01de5eac;
          }
          else if ((plVar14[1] & uVar20 - 1) != uVar21) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar29 = plVar14[1];
          if (uVar29 == uVar17) {
            if (plVar14[2] == uVar17) goto LAB_01de5eac;
          }
          else {
            if (uVar20 <= uVar29) {
              uVar3 = 0;
              if (uVar20 != 0) {
                uVar3 = uVar29 / uVar20;
              }
              uVar29 = uVar29 - uVar3 * uVar20;
            }
            if (uVar29 != uVar21) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  local_d0 = (long *)*param_3;
  if (local_d0 != (long *)0x0) {
    lVar25 = local_d0[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01de6620;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar12;
    }
    piVar18 = (int *)(lVar25 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = *piVar18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01dea084(plVar26,uVar17,&local_d0);
  if (local_d0 == (long *)0x0) goto LAB_01de5eac;
  lVar25 = local_d0[0xb];
  piVar18 = (int *)(lVar25 + 0xc);
  do {
    iVar11 = *piVar18;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
    if (bVar2) {
      *piVar18 = iVar11 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar11 + -1 != 0) goto LAB_01de5eac;
  *(undefined8 *)(lVar25 + 0x18) = 0;
  (**(code **)(*local_d0 + 0x20))();
  if (plVar24 != (long *)0x0) goto LAB_01de5eb0;
LAB_01de5ecc:
  if (plVar23 == (long *)0x0) goto LAB_01de5eec;
LAB_01de5ed0:
  lVar25 = plVar23[0xb];
  piVar18 = (int *)(lVar25 + 0xc);
  do {
    iVar11 = *piVar18;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
    if (bVar2) {
      *piVar18 = iVar11 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar11 + -1 != 0) goto LAB_01de5eec;
  *(undefined8 *)(lVar25 + 0x18) = 0;
  (**(code **)(*plVar23 + 0x20))(plVar23);
  if (plVar22 != (long *)0x0) goto LAB_01de5ef0;
  goto LAB_01de5f0c;
  while (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0) {
LAB_01de5f40:
    if (plVar22[1] == uVar29) {
      if (*(uint *)(plVar22 + 2) == param_2) goto LAB_01de5870;
    }
    else if ((plVar22[1] & uVar17 - 1) != uVar21) break;
  }
LAB_01de62cc:
  uVar13 = *(undefined8 *)(param_1 + 8);
  local_88 = (long *)FUN_01876c68(local_78,uVar13);
  if (local_88 != (long *)0x0) {
    lVar25 = local_88[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01de6620;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar16;
    }
    piVar18 = (int *)(lVar25 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = *piVar18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  local_90 = (long *)FUN_01877910(local_78,uVar13);
  if (local_90 != (long *)0x0) {
    lVar25 = local_90[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01de6620;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar13;
    }
    piVar18 = (int *)(lVar25 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = *piVar18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar22 = local_88;
  if ((uVar9 & 1) != 0) {
    local_98 = (long *)*param_3;
    if (local_98 != (long *)0x0) {
      lVar25 = local_98[0xb];
      if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01de6620;
      if (*(long *)(lVar25 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
        *(undefined8 *)(lVar25 + 0x10) = uVar13;
      }
      piVar18 = (int *)(lVar25 + 0xc);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar2) {
          *piVar18 = *piVar18 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_01dea084(plVar22,uVar12,&local_98);
    if (local_98 != (long *)0x0) {
      lVar25 = local_98[0xb];
      piVar18 = (int *)(lVar25 + 0xc);
      do {
        iVar11 = *piVar18;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar2) {
          *piVar18 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
      }
    }
    FUN_01deadec(param_1 + 0x68,&local_7c,&local_88);
  }
  FUN_009c69bc(&local_b0,*param_3);
  (**(code **)(*local_b0 + 0x10))(local_78);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar27 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar18 = (int *)(local_78[0] + 1);
    do {
      iVar11 = *piVar18;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = iVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar11 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_68 = *puVar27;
      FUN_02a44274(lVar25 + 0xd8,&local_68);
    }
  }
  puVar27 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    uVar12 = 0;
  }
  else {
    piVar18 = (int *)(local_a8 + 1);
    uVar12 = *local_a8;
    do {
      iVar11 = *piVar18;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = iVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar11 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_78[0] = (undefined8 *)*puVar27;
      FUN_02a44274(lVar25 + 0xd8,local_78);
    }
  }
  if (local_b0 != (long *)0x0) {
    lVar25 = local_b0[0xb];
    piVar18 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar18;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = iVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  plVar22 = local_90;
  local_b8 = (long *)*param_3;
  if (local_b8 != (long *)0x0) {
    lVar25 = local_b8[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01de6620;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar13;
    }
    piVar18 = (int *)(lVar25 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = *piVar18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01dea2d4(plVar22,uVar12,&local_b8);
  if (local_b8 != (long *)0x0) {
    lVar25 = local_b8[0xb];
    piVar18 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar18;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = iVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  FUN_01deb908(plVar24,&local_7c,&local_90);
  plVar22 = local_88;
  if (local_90 != (long *)0x0) {
    lVar25 = local_90[0xb];
    piVar18 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar18;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = iVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
      plVar22 = local_88;
    }
  }
  local_88 = plVar22;
  if (plVar22 != (long *)0x0) {
    lVar25 = plVar22[0xb];
    piVar18 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar18;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar2) {
        *piVar18 = iVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      pcVar19 = *(code **)(*plVar22 + 0x20);
LAB_01de6070:
      (*pcVar19)(plVar22);
    }
  }
LAB_01de5f0c:
  lVar25 = *(long *)(lVar28 + 8);
  piVar18 = (int *)(lVar25 + 0xc);
  do {
    iVar11 = *piVar18;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
    if (bVar2) {
      *piVar18 = iVar11 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar25 + 0x18) = 0;
    (**(code **)(*(long *)(lVar28 + -0x50) + 0x20))();
  }
LAB_01de56f8:
  return uVar9 & 1;
LAB_01de5870:
  uVar17 = *(ulong *)(param_1 + 0x70);
  if (uVar17 != 0) {
    uVar20 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar21 = (ulong)((int)uVar17 - 1U & param_2);
    }
    else {
      uVar21 = uVar29;
      if (uVar17 <= uVar29) {
        uVar21 = 0;
        if (uVar17 != 0) {
          uVar21 = uVar29 / uVar17;
        }
        uVar21 = uVar29 - uVar21 * uVar17;
      }
    }
    plVar22 = *(long **)(*(long *)(param_1 + 0x68) + uVar21 * 8);
    if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar22[1] == uVar29) {
            if (*(uint *)(plVar22 + 2) == param_2) goto LAB_01de5900;
          }
          else if ((plVar22[1] & uVar17 - 1) != uVar21) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar22[1];
          if (uVar20 == uVar29) {
            if (*(uint *)(plVar22 + 2) == param_2) goto LAB_01de5900;
          }
          else {
            if (uVar17 <= uVar20) {
              uVar3 = 0;
              if (uVar17 != 0) {
                uVar3 = uVar20 / uVar17;
              }
              uVar20 = uVar20 - uVar3 * uVar17;
            }
            if (uVar20 != uVar21) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
LAB_01de661c:
  FUN_01de9d90();
LAB_01de6620:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


