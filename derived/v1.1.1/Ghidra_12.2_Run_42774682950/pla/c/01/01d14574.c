/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d14574; name: FUN_01d14574
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01d14574(long *param_1,uint param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  long *local_e0;
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
  
  puVar7 = PTR_DAT_0437a258;
  puVar6 = PTR_DAT_0437a250;
  puVar5 = PTR_DAT_043795e0;
  puVar4 = PTR_DAT_043795d8;
  lVar25 = *param_4;
  if ((lVar25 == 0) || (*(int *)(lVar25 + 0xc) == 0)) {
LAB_01d1459c:
    uVar8 = 0;
  }
  else {
    plVar27 = (long *)(lVar25 + 0xc);
    iVar9 = *(int *)(lVar25 + 0xc);
    do {
      puVar22 = *(undefined8 **)(lVar25 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar5 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar7 = puVar5;
        __cxa_guard_release(puVar6);
      }
      if (puVar22 == (undefined8 *)0x0) goto LAB_01d1459c;
      while (puVar22 != (undefined8 *)puVar7) {
        puVar22 = (undefined8 *)*puVar22;
        uVar8 = 0;
        if (puVar22 == (undefined8 *)0x0) goto LAB_01d145a0;
      }
      iVar10 = *(int *)plVar27;
      if (iVar10 == iVar9) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar2) {
          *(int *)plVar27 = iVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          lVar25 = *(long *)(lVar25 + 0x18);
          if (lVar25 == 0) goto LAB_01d1459c;
          uVar11 = FUN_0183680c();
          local_7c = param_2;
          uVar8 = FUN_01833e7c(param_1,uVar11);
          uVar14 = param_1[0x28];
          plVar26 = param_1 + 0x27;
          if (uVar14 == 0) goto LAB_01d15140;
          uVar17 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
          uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
          uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          uVar28 = (ulong)param_2;
          if (uVar17 < 2) {
            uVar18 = (ulong)((int)uVar14 - 1U & param_2);
          }
          else {
            uVar18 = uVar28;
            if (uVar14 <= uVar28) {
              uVar18 = 0;
              if (uVar14 != 0) {
                uVar18 = uVar28 / uVar14;
              }
              uVar18 = uVar28 - uVar18 * uVar14;
            }
          }
          plVar19 = *(long **)(*plVar26 + uVar18 * 8);
          if ((plVar19 == (long *)0x0) || (plVar19 = (long *)*plVar19, plVar19 == (long *)0x0))
          goto LAB_01d15140;
          if (1 < uVar17) goto LAB_01d146fc;
          goto LAB_01d14d28;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar8 = 0;
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
  goto LAB_01d145a0;
LAB_01d146fc:
  do {
    uVar17 = plVar19[1];
    if (uVar17 == uVar28) {
      if (*(uint *)(plVar19 + 2) == param_2) goto LAB_01d14714;
    }
    else {
      if (uVar14 <= uVar17) {
        uVar3 = 0;
        if (uVar14 != 0) {
          uVar3 = uVar17 / uVar14;
        }
        uVar17 = uVar17 - uVar3 * uVar14;
      }
      if (uVar17 != uVar18) break;
    }
    plVar19 = (long *)*plVar19;
  } while (plVar19 != (long *)0x0);
  goto LAB_01d15140;
  while (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0) {
LAB_01d14d28:
    if (plVar19[1] == uVar28) {
      if (*(uint *)(plVar19 + 2) == param_2) goto LAB_01d14714;
    }
    else if ((plVar19[1] & uVar14 - 1) != uVar18) break;
  }
LAB_01d15140:
  lVar23 = param_1[1];
  local_88 = (long *)FUN_01892510(local_78,lVar23);
  if (local_88 != (long *)0x0) {
    lVar24 = local_88[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01d15474;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar12;
    }
    piVar15 = (int *)(lVar24 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = *piVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  local_90 = (long *)FUN_018931e4(local_78,lVar23);
  if (local_90 != (long *)0x0) {
    lVar23 = local_90[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d15474;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar12;
    }
    piVar15 = (int *)(lVar23 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = *piVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar27 = local_88;
  if ((uVar8 & 1) != 0) {
    local_98 = (long *)*param_3;
    if (local_98 != (long *)0x0) {
      lVar23 = local_98[0xb];
      if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d15474;
      if (*(long *)(lVar23 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
        *(undefined8 *)(lVar23 + 0x10) = uVar12;
      }
      piVar15 = (int *)(lVar23 + 0xc);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = *piVar15 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_01d16d74(plVar27,uVar11,&local_98);
    if (local_98 != (long *)0x0) {
      lVar23 = local_98[0xb];
      piVar15 = (int *)(lVar23 + 0xc);
      do {
        iVar9 = *piVar15;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
      }
    }
    FUN_01d17ac8(param_1 + 0xd,&local_7c,&local_88);
  }
  puVar5 = PTR_DAT_043794b8;
  puVar4 = PTR_DAT_043794b0;
  lVar23 = *(long *)(*param_3 + 0x1a8);
  if ((lVar23 == 0) || (*(int *)(lVar23 + 0xc) == 0)) {
LAB_01d15280:
    plVar27 = (long *)0x0;
  }
  else {
    piVar15 = (int *)(lVar23 + 0xc);
    iVar9 = *(int *)(lVar23 + 0xc);
    do {
      puVar22 = *(undefined8 **)(lVar23 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar10 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar5 = PTR_DAT_043794c8;
        __cxa_guard_release(puVar4);
      }
      if (puVar22 == (undefined8 *)0x0) goto LAB_01d15280;
      while (puVar22 != (undefined8 *)puVar5) {
        puVar22 = (undefined8 *)*puVar22;
        plVar27 = (long *)0x0;
        if (puVar22 == (undefined8 *)0x0) goto LAB_01d15284;
      }
      iVar10 = *piVar15;
      if (iVar10 == iVar9) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = iVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          plVar27 = (long *)0x0;
          if (*(long *)(lVar23 + 0x18) != 0) {
            plVar27 = (long *)(*(long *)(lVar23 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar27 = (long *)0x0;
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_01d15284:
  (**(code **)(*plVar27 + 0x10))(local_78,plVar27);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar22 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar15 = (int *)(local_78[0] + 1);
    do {
      iVar9 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar9 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_68 = *puVar22;
      FUN_02a44274(lVar23 + 0xd8,&local_68);
    }
  }
  puVar22 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    uVar11 = 0;
  }
  else {
    piVar15 = (int *)(local_a8 + 1);
    uVar11 = *local_a8;
    do {
      iVar9 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar9 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_78[0] = (undefined8 *)*puVar22;
      FUN_02a44274(lVar23 + 0xd8,local_78);
    }
  }
  if (plVar27 != (long *)0x0) {
    lVar23 = plVar27[0xb];
    piVar15 = (int *)(lVar23 + 0xc);
    do {
      iVar9 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar27 + 0x20))(plVar27);
    }
  }
  plVar27 = local_90;
  local_b0 = (long *)*param_3;
  if (local_b0 != (long *)0x0) {
    lVar23 = local_b0[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d15474;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar12;
    }
    piVar15 = (int *)(lVar23 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = *piVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01d16fc0(plVar27,uVar11,&local_b0);
  if (local_b0 != (long *)0x0) {
    lVar23 = local_b0[0xb];
    piVar15 = (int *)(lVar23 + 0xc);
    do {
      iVar9 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  FUN_01d185d0(plVar26,&local_7c,&local_90);
  if (local_90 == (long *)0x0) {
LAB_01d15440:
    if (local_88 == (long *)0x0) goto LAB_01d14cf4;
LAB_01d15448:
    lVar23 = local_88[0xb];
    piVar15 = (int *)(lVar23 + 0xc);
    do {
      iVar9 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar9 + -1 != 0) goto LAB_01d14cf4;
    *(undefined8 *)(lVar23 + 0x18) = 0;
    pcVar16 = *(code **)(*local_88 + 0x20);
    plVar19 = local_88;
    goto LAB_01d14e5c;
  }
  lVar23 = local_90[0xb];
  piVar15 = (int *)(lVar23 + 0xc);
  do {
    iVar9 = *piVar15;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
    if (bVar2) {
      *piVar15 = iVar9 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar9 + -1 != 0) goto LAB_01d15440;
  *(undefined8 *)(lVar23 + 0x18) = 0;
  (**(code **)(*local_90 + 0x20))();
  if (local_88 != (long *)0x0) goto LAB_01d15448;
  goto LAB_01d14cf4;
LAB_01d1479c:
  plVar19 = (long *)plVar20[3];
  if (plVar19 != (long *)0x0) {
    lVar23 = plVar19[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d15474;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar12;
    }
    piVar15 = (int *)(lVar23 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = *piVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar14 = param_1[0x1b];
  if (uVar14 != 0) {
    uVar17 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = (ulong)((int)uVar14 - 1U & param_2);
    }
    else {
      uVar18 = uVar28;
      if (uVar14 <= uVar28) {
        uVar18 = 0;
        if (uVar14 != 0) {
          uVar18 = uVar28 / uVar14;
        }
        uVar18 = uVar28 - uVar18 * uVar14;
      }
    }
    plVar20 = *(long **)(param_1[0x1a] + uVar18 * 8);
    if (plVar20 != (long *)0x0) {
      plVar20 = (long *)*plVar20;
      if (plVar20 != (long *)0x0) {
        if (uVar17 < 2) {
          do {
            if (plVar20[1] == uVar28) {
              if (*(uint *)(plVar20 + 2) == param_2) goto LAB_01d14864;
            }
            else if ((plVar20[1] & uVar14 - 1) != uVar18) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar20[1];
            if (uVar17 == uVar28) {
              if (*(uint *)(plVar20 + 2) == param_2) goto LAB_01d14864;
            }
            else {
              if (uVar14 <= uVar17) {
                uVar3 = 0;
                if (uVar14 != 0) {
                  uVar3 = uVar17 / uVar14;
                }
                uVar17 = uVar17 - uVar3 * uVar14;
              }
              if (uVar17 != uVar18) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
  }
  goto LAB_01d154a0;
LAB_01d14864:
  plVar27 = (long *)plVar20[3];
  if (plVar27 != (long *)0x0) {
    lVar23 = plVar27[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d15474;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar12;
    }
    piVar15 = (int *)(lVar23 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = *piVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar14 = param_1[0x28];
  if (uVar14 != 0) {
    uVar17 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = (ulong)((int)uVar14 - 1U & param_2);
    }
    else {
      uVar18 = uVar28;
      if (uVar14 <= uVar28) {
        uVar18 = 0;
        if (uVar14 != 0) {
          uVar18 = uVar28 / uVar14;
        }
        uVar18 = uVar28 - uVar18 * uVar14;
      }
    }
    plVar20 = *(long **)(*plVar26 + uVar18 * 8);
    if (plVar20 != (long *)0x0) {
      plVar20 = (long *)*plVar20;
      if (plVar20 != (long *)0x0) {
        if (uVar17 < 2) {
          do {
            if (plVar20[1] == uVar28) {
              if (*(uint *)(plVar20 + 2) == param_2) goto LAB_01d1492c;
            }
            else if ((plVar20[1] & uVar14 - 1) != uVar18) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar20[1];
            if (uVar17 == uVar28) {
              if (*(uint *)(plVar20 + 2) == param_2) goto LAB_01d1492c;
            }
            else {
              if (uVar14 <= uVar17) {
                uVar3 = 0;
                if (uVar14 != 0) {
                  uVar3 = uVar17 / uVar14;
                }
                uVar17 = uVar17 - uVar3 * uVar14;
              }
              if (uVar17 != uVar18) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
  }
  goto LAB_01d154a0;
LAB_01d1492c:
  plVar26 = (long *)plVar20[3];
  if (plVar26 != (long *)0x0) {
    lVar23 = plVar26[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d15474;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar12;
    }
    piVar15 = (int *)(lVar23 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = *piVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((uVar8 & 1) != 0) {
    plVar20 = (long *)(**(code **)plVar19[10])(plVar19 + 10);
    plVar13 = (long *)FUN_01d17210();
    if (plVar20 == (long *)0x0) goto LAB_01d154a4;
    do {
      if (plVar20 == plVar13) {
        local_e0 = plVar19;
        break;
      }
      plVar20 = (long *)*plVar20;
      local_e0 = (long *)0x0;
    } while (plVar20 != (long *)0x0);
    goto LAB_01d14f00;
  }
  goto LAB_01d14970;
LAB_01d14714:
  uVar14 = param_1[0xe];
  plVar19 = param_1;
  if (uVar14 != 0) {
    uVar17 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = (ulong)((int)uVar14 - 1U & param_2);
    }
    else {
      uVar18 = uVar28;
      if (uVar14 <= uVar28) {
        uVar18 = 0;
        if (uVar14 != 0) {
          uVar18 = uVar28 / uVar14;
        }
        uVar18 = uVar28 - uVar18 * uVar14;
      }
    }
    plVar20 = *(long **)(param_1[0xd] + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == uVar28) {
            if (*(uint *)(plVar20 + 2) == param_2) goto LAB_01d1479c;
          }
          else if ((plVar20[1] & uVar14 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == uVar28) {
            if (*(uint *)(plVar20 + 2) == param_2) goto LAB_01d1479c;
          }
          else {
            if (uVar14 <= uVar17) {
              uVar3 = 0;
              if (uVar14 != 0) {
                uVar3 = uVar17 / uVar14;
              }
              uVar17 = uVar17 - uVar3 * uVar14;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01d154a0:
  FUN_01d189e0();
LAB_01d154a4:
  local_e0 = (long *)0x0;
LAB_01d14f00:
  local_b8 = (long *)*param_3;
  if (local_b8 != (long *)0x0) {
    lVar23 = local_b8[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d15474;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar12;
    }
    piVar15 = (int *)(lVar23 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = *piVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01d16d74(local_e0,uVar11,&local_b8);
  if (local_b8 != (long *)0x0) {
    lVar23 = local_b8[0xb];
    piVar15 = (int *)(lVar23 + 0xc);
    do {
      iVar9 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_b8 + 0x20))();
    }
  }
LAB_01d14970:
  plVar20 = (long *)(**(code **)plVar26[10])(plVar26 + 10);
  plVar13 = (long *)FUN_01d172f0();
  if (plVar20 == (long *)0x0) {
    plVar21 = (long *)0x0;
  }
  else {
    do {
      if (plVar20 == plVar13) {
        plVar21 = plVar26;
        break;
      }
      plVar20 = (long *)*plVar20;
      plVar21 = (long *)0x0;
    } while (plVar20 != (long *)0x0);
  }
  lVar23 = *(long *)(*param_3 + 0x1a8);
  if ((lVar23 == 0) || (*(int *)(lVar23 + 0xc) == 0)) {
LAB_01d149ac:
    plVar20 = (long *)0x0;
  }
  else {
    piVar15 = (int *)(lVar23 + 0xc);
    iVar9 = *(int *)(lVar23 + 0xc);
    do {
      local_e0 = *(long **)(lVar23 + 0x10);
      if (((*PTR_DAT_043794b0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar10 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar10 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
        __cxa_guard_release(PTR_DAT_043794b0);
      }
      if (local_e0 == (undefined8 *)0x0) goto LAB_01d149ac;
      while (local_e0 != (long *)PTR_DAT_043794b8) {
        plVar20 = (long *)0x0;
        local_e0 = (long *)*local_e0;
        if (local_e0 == (undefined8 *)0x0) goto LAB_01d149b0;
      }
      iVar10 = *piVar15;
      if (iVar10 == iVar9) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = iVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          plVar20 = (long *)0x0;
          if (*(long *)(lVar23 + 0x18) != 0) {
            plVar20 = (long *)(*(long *)(lVar23 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar20 = (long *)0x0;
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_01d149b0:
  (**(code **)(*plVar20 + 0x10))(local_78,plVar20);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar22 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar15 = (int *)(local_78[0] + 1);
    do {
      iVar9 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar9 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_68 = *puVar22;
      FUN_02a44274(lVar23 + 0xd8,&local_68);
    }
  }
  puVar22 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    uVar11 = 0;
  }
  else {
    piVar15 = (int *)(local_a8 + 1);
    uVar11 = *local_a8;
    do {
      iVar9 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar9 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_78[0] = (undefined8 *)*puVar22;
      FUN_02a44274(lVar23 + 0xd8,local_78);
    }
  }
  if (plVar20 != (long *)0x0) {
    lVar23 = plVar20[0xb];
    piVar15 = (int *)(lVar23 + 0xc);
    do {
      iVar9 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
  }
  local_c0 = (long *)*param_3;
  if (local_c0 != (long *)0x0) {
    lVar23 = local_c0[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d15474;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar12;
    }
    piVar15 = (int *)(lVar23 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = *piVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01d16fc0(plVar21,uVar11,&local_c0);
  if (local_c0 != (long *)0x0) {
    lVar23 = local_c0[0xb];
    piVar15 = (int *)(lVar23 + 0xc);
    do {
      iVar9 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_c0 + 0x20))();
    }
  }
  uVar14 = FUN_01836804((long *)(lVar25 + -0x50));
  uVar17 = FUN_01833e7c(param_1,uVar14);
  if ((uVar17 & 1) != 0) {
    plVar20 = (long *)(**(code **)plVar27[10])(plVar27 + 10);
    plVar13 = (long *)FUN_01d17210();
    if (plVar20 == (long *)0x0) {
      plVar21 = (long *)0x0;
      uVar17 = _DAT_00000070;
    }
    else {
      do {
        if (plVar20 == plVar13) {
          plVar21 = plVar27;
          break;
        }
        plVar20 = (long *)*plVar20;
        plVar21 = (long *)0x0;
      } while (plVar20 != (long *)0x0);
      uVar17 = plVar21[0xe];
    }
    if (uVar17 != 0) {
      uVar28 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
      uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar28 < 2) {
        uVar18 = uVar17 - 1 & uVar14;
      }
      else {
        uVar18 = uVar14;
        if (uVar17 <= uVar14) {
          uVar18 = 0;
          if (uVar17 != 0) {
            uVar18 = uVar14 / uVar17;
          }
          uVar18 = uVar14 - uVar18 * uVar17;
        }
      }
      plVar20 = *(long **)(plVar21[0xd] + uVar18 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar28 < 2) {
          do {
            if (plVar20[1] == uVar14) {
              if (plVar20[2] == uVar14) goto joined_r0x01d14c94;
            }
            else if ((plVar20[1] & uVar17 - 1) != uVar18) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar28 = plVar20[1];
            if (uVar28 == uVar14) {
              if (plVar20[2] == uVar14) goto joined_r0x01d14c94;
            }
            else {
              if (uVar17 <= uVar28) {
                uVar3 = 0;
                if (uVar17 != 0) {
                  uVar3 = uVar28 / uVar17;
                }
                uVar28 = uVar28 - uVar3 * uVar17;
              }
              if (uVar28 != uVar18) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    local_c8 = (long *)*param_3;
    if (local_c8 != (long *)0x0) {
      lVar23 = local_c8[0xb];
      if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) {
LAB_01d15474:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar23 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
        *(undefined8 *)(lVar23 + 0x10) = uVar11;
      }
      piVar15 = (int *)(lVar23 + 0xc);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = *piVar15 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_01d16d74(plVar21,uVar14,&local_c8);
    if (local_c8 != (long *)0x0) {
      lVar23 = local_c8[0xb];
      piVar15 = (int *)(lVar23 + 0xc);
      do {
        iVar9 = *piVar15;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*local_c8 + 0x20))();
      }
    }
  }
joined_r0x01d14c94:
  if (plVar26 != (long *)0x0) {
    lVar23 = plVar26[0xb];
    piVar15 = (int *)(lVar23 + 0xc);
    do {
      iVar9 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar26 + 0x20))(plVar26);
    }
  }
  if (plVar27 != (long *)0x0) {
    lVar23 = plVar27[0xb];
    piVar15 = (int *)(lVar23 + 0xc);
    do {
      iVar9 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar27 + 0x20))(plVar27);
    }
  }
  if (plVar19 != (long *)0x0) {
    lVar23 = plVar19[0xb];
    piVar15 = (int *)(lVar23 + 0xc);
    do {
      iVar9 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      pcVar16 = *(code **)(*plVar19 + 0x20);
LAB_01d14e5c:
      (*pcVar16)(plVar19);
    }
  }
LAB_01d14cf4:
  lVar23 = *(long *)(lVar25 + 8);
  piVar15 = (int *)(lVar23 + 0xc);
  do {
    iVar9 = *piVar15;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
    if (bVar2) {
      *piVar15 = iVar9 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar23 + 0x18) = 0;
    (**(code **)(*(long *)(lVar25 + -0x50) + 0x20))();
  }
LAB_01d145a0:
  return uVar8 & 1;
}


