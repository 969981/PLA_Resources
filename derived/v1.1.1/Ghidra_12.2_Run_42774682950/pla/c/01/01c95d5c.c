/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c95d5c; name: FUN_01c95d5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c95d5c(long param_1,uint param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined8 *local_e0;
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
  
  plVar24 = (long *)PTR_DAT_0437a258;
  puVar5 = PTR_DAT_0437a250;
  plVar22 = (long *)PTR_DAT_043795e0;
  puVar4 = PTR_DAT_043795d8;
  lVar20 = *param_4;
  if ((lVar20 == 0) || (*(int *)(lVar20 + 0xc) == 0)) {
LAB_01c95d84:
    uVar6 = 0;
  }
  else {
    piVar15 = (int *)(lVar20 + 0xc);
    iVar7 = *(int *)(lVar20 + 0xc);
    do {
      puVar26 = *(undefined8 **)(lVar20 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *plVar22 = (long)PTR_DAT_043794d8;
          __cxa_guard_release(puVar4);
        }
        *plVar24 = (long)plVar22;
        __cxa_guard_release(puVar5);
      }
      if (puVar26 == (undefined8 *)0x0) goto LAB_01c95d84;
      while (puVar26 != plVar24) {
        puVar26 = (undefined8 *)*puVar26;
        uVar6 = 0;
        if (puVar26 == (undefined8 *)0x0) goto LAB_01c95d88;
      }
      iVar8 = *piVar15;
      if (iVar8 == iVar7) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = iVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          lVar20 = *(long *)(lVar20 + 0x18);
          if (lVar20 == 0) goto LAB_01c95d84;
          plVar9 = (long *)FUN_0183680c();
          local_7c = param_2;
          uVar6 = FUN_01833e7c(param_1,plVar9);
          uVar14 = *(ulong *)(param_1 + 0x140);
          plVar23 = (long *)(param_1 + 0x138);
          if (uVar14 == 0) goto LAB_01c9693c;
          uVar17 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
          uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
          uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          uVar21 = (ulong)param_2;
          if (uVar17 < 2) {
            uVar18 = (ulong)((int)uVar14 - 1U & param_2);
          }
          else {
            uVar18 = uVar21;
            if (uVar14 <= uVar21) {
              uVar18 = 0;
              if (uVar14 != 0) {
                uVar18 = uVar21 / uVar14;
              }
              uVar18 = uVar21 - uVar18 * uVar14;
            }
          }
          plVar19 = *(long **)(*plVar23 + uVar18 * 8);
          if ((plVar19 == (long *)0x0) || (plVar19 = (long *)*plVar19, plVar19 == (long *)0x0))
          goto LAB_01c9693c;
          if (1 < uVar17) goto LAB_01c95ee4;
          goto LAB_01c965cc;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar6 = 0;
      iVar7 = iVar8;
    } while (iVar8 != 0);
  }
  goto LAB_01c95d88;
LAB_01c95ee4:
  do {
    uVar17 = plVar19[1];
    if (uVar17 == uVar21) {
      if (*(uint *)(plVar19 + 2) == param_2) goto LAB_01c95efc;
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
  goto LAB_01c9693c;
  while (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0) {
LAB_01c965cc:
    if (plVar19[1] == uVar21) {
      if (*(uint *)(plVar19 + 2) == param_2) goto LAB_01c95efc;
    }
    else if ((plVar19[1] & uVar14 - 1) != uVar18) break;
  }
LAB_01c9693c:
  uVar11 = *(undefined8 *)(param_1 + 8);
  local_88 = (long *)FUN_0187892c(local_78,uVar11);
  if (local_88 != (long *)0x0) {
    lVar10 = local_88[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01c96c70;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar13;
    }
    piVar15 = (int *)(lVar10 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = *piVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  local_90 = (long *)FUN_018795d0(local_78,uVar11);
  if (local_90 != (long *)0x0) {
    lVar10 = local_90[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01c96c70;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar15 = (int *)(lVar10 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = *piVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar22 = local_88;
  if ((uVar6 & 1) != 0) {
    local_98 = (long *)*param_3;
    if (local_98 != (long *)0x0) {
      lVar10 = local_98[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01c96c70;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar11;
      }
      piVar15 = (int *)(lVar10 + 0xc);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = *piVar15 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_01c97ab8(plVar22,plVar9,&local_98);
    if (local_98 != (long *)0x0) {
      lVar10 = local_98[0xb];
      piVar15 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar15;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
      }
    }
    FUN_01c9880c(param_1 + 0x68,&local_7c,&local_88);
  }
  puVar5 = PTR_DAT_043794b8;
  puVar4 = PTR_DAT_043794b0;
  lVar10 = *(long *)(*param_3 + 0x1a8);
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0xc) == 0)) {
LAB_01c96a7c:
    plVar22 = (long *)0x0;
  }
  else {
    piVar15 = (int *)(lVar10 + 0xc);
    iVar7 = *(int *)(lVar10 + 0xc);
    do {
      puVar26 = *(undefined8 **)(lVar10 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar8 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
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
      if (puVar26 == (undefined8 *)0x0) goto LAB_01c96a7c;
      while (puVar26 != (undefined8 *)puVar5) {
        puVar26 = (undefined8 *)*puVar26;
        plVar22 = (long *)0x0;
        if (puVar26 == (undefined8 *)0x0) goto LAB_01c96a80;
      }
      iVar8 = *piVar15;
      if (iVar8 == iVar7) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = iVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          plVar22 = (long *)0x0;
          if (*(long *)(lVar10 + 0x18) != 0) {
            plVar22 = (long *)(*(long *)(lVar10 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar22 = (long *)0x0;
      iVar7 = iVar8;
    } while (iVar8 != 0);
  }
LAB_01c96a80:
  (**(code **)(*plVar22 + 0x10))(local_78,plVar22);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar26 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar15 = (int *)(local_78[0] + 1);
    do {
      iVar7 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_68 = *puVar26;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  puVar26 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    uVar11 = 0;
  }
  else {
    piVar15 = (int *)(local_a8 + 1);
    uVar11 = *local_a8;
    do {
      iVar7 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_78[0] = (undefined8 *)*puVar26;
      FUN_02a44274(lVar10 + 0xd8,local_78);
    }
  }
  if (plVar22 != (long *)0x0) {
    lVar10 = plVar22[0xb];
    piVar15 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
  plVar22 = local_90;
  local_b0 = (long *)*param_3;
  if (local_b0 != (long *)0x0) {
    lVar10 = local_b0[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01c96c70;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar13;
    }
    piVar15 = (int *)(lVar10 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = *piVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01c97d04(plVar22,uVar11,&local_b0);
  if (local_b0 != (long *)0x0) {
    lVar10 = local_b0[0xb];
    piVar15 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  FUN_01c99314(plVar23,&local_7c,&local_90);
  if (local_90 == (long *)0x0) {
LAB_01c96c3c:
    if (local_88 == (long *)0x0) goto LAB_01c964dc;
LAB_01c96c44:
    lVar10 = local_88[0xb];
    piVar15 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01c964dc;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    pcVar16 = *(code **)(*local_88 + 0x20);
    plVar22 = local_88;
    goto LAB_01c96700;
  }
  lVar10 = local_90[0xb];
  piVar15 = (int *)(lVar10 + 0xc);
  do {
    iVar7 = *piVar15;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
    if (bVar2) {
      *piVar15 = iVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar7 + -1 != 0) goto LAB_01c96c3c;
  *(undefined8 *)(lVar10 + 0x18) = 0;
  (**(code **)(*local_90 + 0x20))();
  if (local_88 != (long *)0x0) goto LAB_01c96c44;
  goto LAB_01c964dc;
LAB_01c95f84:
  plVar22 = (long *)plVar19[3];
  if (plVar22 != (long *)0x0) {
    plVar24 = (long *)plVar22[0xb];
    if ((undefined8 *)plVar24[3] == (undefined8 *)0x0) goto LAB_01c96c70;
    if (plVar24[2] == 0) {
      lVar10 = (*(code *)**(undefined8 **)plVar24[3])();
      plVar24[2] = lVar10;
    }
    piVar15 = (int *)((long)plVar24 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = *piVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar14 = *(ulong *)(param_1 + 0xd8);
  if (uVar14 != 0) {
    uVar17 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = (ulong)((int)uVar14 - 1U & param_2);
    }
    else {
      uVar18 = uVar21;
      if (uVar14 <= uVar21) {
        uVar18 = 0;
        if (uVar14 != 0) {
          uVar18 = uVar21 / uVar14;
        }
        uVar18 = uVar21 - uVar18 * uVar14;
      }
    }
    plVar19 = *(long **)(*(long *)(param_1 + 0xd0) + uVar18 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar19[1] == uVar21) {
            if (*(uint *)(plVar19 + 2) == param_2) goto LAB_01c9604c;
          }
          else if ((plVar19[1] & uVar14 - 1) != uVar18) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar19[1];
          if (uVar17 == uVar21) {
            if (*(uint *)(plVar19 + 2) == param_2) goto LAB_01c9604c;
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
      }
    }
  }
  goto LAB_01c96c9c;
LAB_01c9604c:
  plVar24 = (long *)plVar19[3];
  if (plVar24 != (long *)0x0) {
    lVar10 = plVar24[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01c96c70;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar15 = (int *)(lVar10 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = *piVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar14 = *(ulong *)(param_1 + 0x140);
  if (uVar14 != 0) {
    uVar17 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = (ulong)((int)uVar14 - 1U & param_2);
    }
    else {
      uVar18 = uVar21;
      if (uVar14 <= uVar21) {
        uVar18 = 0;
        if (uVar14 != 0) {
          uVar18 = uVar21 / uVar14;
        }
        uVar18 = uVar21 - uVar18 * uVar14;
      }
    }
    plVar19 = *(long **)(*plVar23 + uVar18 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar19[1] == uVar21) {
            if (*(uint *)(plVar19 + 2) == param_2) goto LAB_01c96114;
          }
          else if ((plVar19[1] & uVar14 - 1) != uVar18) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar19[1];
          if (uVar17 == uVar21) {
            if (*(uint *)(plVar19 + 2) == param_2) goto LAB_01c96114;
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
      }
    }
  }
  goto LAB_01c96c9c;
LAB_01c96114:
  plVar23 = (long *)plVar19[3];
  if (plVar23 != (long *)0x0) {
    lVar10 = plVar23[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01c96c70;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar15 = (int *)(lVar10 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = *piVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((uVar6 & 1) != 0) {
    plVar19 = (long *)(**(code **)plVar22[10])(plVar22 + 10);
    plVar12 = (long *)FUN_01c97f50();
    if (plVar19 == (long *)0x0) {
      plVar25 = (long *)0x0;
    }
    else {
      do {
        if (plVar19 == plVar12) {
          plVar25 = plVar22;
          break;
        }
        plVar19 = (long *)*plVar19;
        plVar25 = (long *)0x0;
      } while (plVar19 != (long *)0x0);
    }
    local_b8 = (long *)*param_3;
    if (local_b8 != (long *)0x0) {
      lVar10 = local_b8[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01c96c70;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar11;
      }
      piVar15 = (int *)(lVar10 + 0xc);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = *piVar15 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_01c97ab8(plVar25,plVar9,&local_b8);
    if (local_b8 != (long *)0x0) {
      lVar10 = local_b8[0xb];
      piVar15 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar15;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_b8 + 0x20))();
      }
    }
  }
  plVar19 = (long *)(**(code **)plVar23[10])(plVar23 + 10);
  plVar12 = (long *)FUN_01c98030();
  if (plVar19 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    do {
      if (plVar19 == plVar12) {
        plVar9 = plVar23;
        break;
      }
      plVar19 = (long *)*plVar19;
      plVar9 = (long *)0x0;
    } while (plVar19 != (long *)0x0);
  }
  uVar21 = *(ulong *)(*param_3 + 0x1a8);
  if (uVar21 != 0) goto LAB_01c96ca0;
  goto LAB_01c96194;
LAB_01c95efc:
  uVar14 = *(ulong *)(param_1 + 0x70);
  if (uVar14 != 0) {
    uVar17 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = (ulong)((int)uVar14 - 1U & param_2);
    }
    else {
      uVar18 = uVar21;
      if (uVar14 <= uVar21) {
        uVar18 = 0;
        if (uVar14 != 0) {
          uVar18 = uVar21 / uVar14;
        }
        uVar18 = uVar21 - uVar18 * uVar14;
      }
    }
    plVar19 = *(long **)(*(long *)(param_1 + 0x68) + uVar18 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar19[1] == uVar21) {
            if (*(uint *)(plVar19 + 2) == param_2) goto LAB_01c95f84;
          }
          else if ((plVar19[1] & uVar14 - 1) != uVar18) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar19[1];
          if (uVar17 == uVar21) {
            if (*(uint *)(plVar19 + 2) == param_2) goto LAB_01c95f84;
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
      }
    }
  }
LAB_01c96c9c:
  FUN_01c99730();
LAB_01c96ca0:
  if (*(int *)(uVar21 + 0xc) == 0) {
LAB_01c96194:
    plVar19 = (long *)0x0;
  }
  else {
    piVar15 = (int *)(uVar21 + 0xc);
    iVar7 = *(int *)(uVar21 + 0xc);
    do {
      local_e0 = *(undefined8 **)(uVar21 + 0x10);
      if (((*PTR_DAT_043794b0 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar8 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar8 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
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
      if (local_e0 == (undefined8 *)0x0) goto LAB_01c96194;
      while (local_e0 != (undefined8 *)PTR_DAT_043794b8) {
        plVar19 = (long *)0x0;
        local_e0 = (undefined8 *)*local_e0;
        if (local_e0 == (undefined8 *)0x0) goto LAB_01c96198;
      }
      iVar8 = *piVar15;
      if (iVar8 == iVar7) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = iVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          plVar19 = (long *)0x0;
          if (*(long *)(uVar21 + 0x18) != 0) {
            plVar19 = (long *)(*(long *)(uVar21 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar19 = (long *)0x0;
      iVar7 = iVar8;
    } while (iVar8 != 0);
  }
LAB_01c96198:
  (**(code **)(*plVar19 + 0x10))(local_78,plVar19);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar26 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar15 = (int *)(local_78[0] + 1);
    do {
      iVar7 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_68 = *puVar26;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  puVar26 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    uVar11 = 0;
  }
  else {
    piVar15 = (int *)(local_a8 + 1);
    uVar11 = *local_a8;
    do {
      iVar7 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_78[0] = (undefined8 *)*puVar26;
      FUN_02a44274(lVar10 + 0xd8,local_78);
    }
  }
  if (plVar19 != (long *)0x0) {
    lVar10 = plVar19[0xb];
    piVar15 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  local_c0 = (long *)*param_3;
  if (local_c0 != (long *)0x0) {
    lVar10 = local_c0[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01c96c70;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar13;
    }
    piVar15 = (int *)(lVar10 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = *piVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01c97d04(plVar9,uVar11,&local_c0);
  if (local_c0 != (long *)0x0) {
    lVar10 = local_c0[0xb];
    piVar15 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_c0 + 0x20))();
    }
  }
  uVar14 = FUN_01836804((long *)(lVar20 + -0x50));
  uVar17 = FUN_01833e7c(param_1,uVar14);
  if ((uVar17 & 1) != 0) {
    plVar9 = (long *)(**(code **)plVar24[10])(plVar24 + 10);
    plVar19 = (long *)FUN_01c97f50();
    if (plVar9 == (long *)0x0) {
      plVar12 = (long *)0x0;
      uVar17 = _DAT_00000070;
    }
    else {
      do {
        if (plVar9 == plVar19) {
          plVar12 = plVar24;
          break;
        }
        plVar9 = (long *)*plVar9;
        plVar12 = (long *)0x0;
      } while (plVar9 != (long *)0x0);
      uVar17 = plVar12[0xe];
    }
    if (uVar17 != 0) {
      uVar21 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
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
      plVar9 = *(long **)(plVar12[0xd] + uVar18 * 8);
      if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
        if (uVar21 < 2) {
          do {
            if (plVar9[1] == uVar14) {
              if (plVar9[2] == uVar14) goto joined_r0x01c9647c;
            }
            else if ((plVar9[1] & uVar17 - 1) != uVar18) break;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar9[1];
            if (uVar21 == uVar14) {
              if (plVar9[2] == uVar14) goto joined_r0x01c9647c;
            }
            else {
              if (uVar17 <= uVar21) {
                uVar3 = 0;
                if (uVar17 != 0) {
                  uVar3 = uVar21 / uVar17;
                }
                uVar21 = uVar21 - uVar3 * uVar17;
              }
              if (uVar21 != uVar18) break;
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
    local_c8 = (long *)*param_3;
    if (local_c8 != (long *)0x0) {
      lVar10 = local_c8[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_01c96c70:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar11;
      }
      piVar15 = (int *)(lVar10 + 0xc);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = *piVar15 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_01c97ab8(plVar12,uVar14,&local_c8);
    if (local_c8 != (long *)0x0) {
      lVar10 = local_c8[0xb];
      piVar15 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar15;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_c8 + 0x20))();
      }
    }
  }
joined_r0x01c9647c:
  if (plVar23 != (long *)0x0) {
    lVar10 = plVar23[0xb];
    piVar15 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  if (plVar24 != (long *)0x0) {
    lVar10 = plVar24[0xb];
    piVar15 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
  }
  if (plVar22 != (long *)0x0) {
    lVar10 = plVar22[0xb];
    piVar15 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar2) {
        *piVar15 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      pcVar16 = *(code **)(*plVar22 + 0x20);
LAB_01c96700:
      (*pcVar16)(plVar22);
    }
  }
LAB_01c964dc:
  lVar10 = *(long *)(lVar20 + 8);
  piVar15 = (int *)(lVar10 + 0xc);
  do {
    iVar7 = *piVar15;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
    if (bVar2) {
      *piVar15 = iVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*(long *)(lVar20 + -0x50) + 0x20))();
  }
LAB_01c95d88:
  return uVar6 & 1;
}


