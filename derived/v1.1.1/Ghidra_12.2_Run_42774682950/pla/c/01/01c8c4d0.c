/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c8c4d0; name: FUN_01c8c4d0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01c8c4d0(long *param_1,long *param_2,long *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  code *pcVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  undefined8 *puVar29;
  undefined8 *local_d8;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined4 local_7c;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  plVar27 = (long *)PTR_DAT_0437a258;
  puVar9 = PTR_DAT_0437a250;
  puVar8 = PTR_DAT_043795e0;
  puVar7 = PTR_DAT_043795d8;
  lVar25 = *param_3;
  if (lVar25 == 0) {
    return;
  }
  if (*(uint *)(lVar25 + 0xc) == 0) {
    return;
  }
  puVar1 = (uint *)(lVar25 + 0xc);
  uVar2 = *(uint *)(lVar25 + 0xc);
  do {
    plVar26 = (long *)(ulong)uVar2;
    plVar22 = *(long **)(lVar25 + 0x10);
    if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar9), iVar10 != 0)) {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar14;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar8 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar7);
      }
      *plVar27 = (long)puVar8;
      __cxa_guard_release(puVar9);
    }
    while( true ) {
      if (plVar22 == (long *)0x0) {
        return;
      }
      if (plVar22 == plVar27) break;
      plVar22 = (long *)*plVar22;
    }
    uVar3 = *puVar1;
    if (uVar3 == uVar2) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar25 = *(long *)(lVar25 + 0x18);
        if (lVar25 == 0) {
          return;
        }
        puVar12 = (undefined8 *)FUN_0183680c();
        local_7c = 0xd;
        uVar13 = FUN_01833e7c(param_1,puVar12);
        uVar15 = param_1[0x28];
        uVar28 = uVar13 & 0xffffffff;
        plVar22 = param_1 + 0x27;
        if (uVar15 == 0) goto LAB_01c8cf90;
        uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          uVar19 = (ulong)((uint)uVar15 - 1) & 0xd;
        }
        else {
          uVar19 = 0xd;
          if (uVar15 < 0xe) {
            uVar2 = (uint)uVar15 & 0xff;
            uVar3 = 0;
            if ((uVar15 & 0xff) != 0) {
              uVar3 = 0xd / uVar2;
            }
            uVar19 = (ulong)(0xd - uVar3 * uVar2);
          }
        }
        plVar20 = *(long **)(*plVar22 + uVar19 * 8);
        if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
        goto LAB_01c8cf90;
        if (1 < uVar18) break;
        goto LAB_01c8cc80;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    uVar2 = uVar3;
    if (uVar3 == 0) {
      return;
    }
  } while( true );
  do {
    uVar18 = plVar20[1];
    if (uVar18 == 0xd) {
      if ((int)plVar20[2] == 0xd) goto LAB_01c8c668;
    }
    else {
      if (uVar15 <= uVar18) {
        uVar6 = 0;
        if (uVar15 != 0) {
          uVar6 = uVar18 / uVar15;
        }
        uVar18 = uVar18 - uVar6 * uVar15;
      }
      if (uVar18 != uVar19) break;
    }
    plVar20 = (long *)*plVar20;
  } while (plVar20 != (long *)0x0);
  goto LAB_01c8cf90;
  while (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0) {
LAB_01c8cc80:
    if (plVar20[1] == 0xd) {
      if ((int)plVar20[2] == 0xd) goto LAB_01c8c668;
    }
    else if ((plVar20[1] & uVar15 - 1) != uVar19) break;
  }
LAB_01c8cf90:
  lVar23 = param_1[1];
  local_88 = (long *)FUN_018a1170(local_78,lVar23);
  if (local_88 != (long *)0x0) {
    lVar24 = local_88[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01c8d2c0;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar24 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = *piVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_90 = (long *)FUN_018a1ea0(local_78,lVar23);
  if (local_90 != (long *)0x0) {
    lVar23 = local_90[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01c8d2c0;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar23 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = *piVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar27 = local_88;
  if ((uVar13 & 1) != 0) {
    local_98 = (long *)*param_2;
    if (local_98 == (long *)0x0) {
      plVar26 = (long *)0x0;
    }
    else {
      lVar23 = local_98[0xb];
      if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01c8d2c0;
      if (*(long *)(lVar23 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
        *(undefined8 *)(lVar23 + 0x10) = uVar14;
      }
      piVar16 = (int *)(lVar23 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar5) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar26 = local_98;
    }
    local_78[0] = puVar12;
    FUN_01c903e0(plVar27 + 0xd,local_78,&local_98);
    if (plVar26 != (long *)0x0) {
      lVar23 = plVar26[0xb];
      piVar16 = (int *)(lVar23 + 0xc);
      do {
        iVar10 = *piVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar5) {
          *piVar16 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*plVar26 + 0x20))(plVar26);
      }
    }
    FUN_01c90b84(param_1 + 0xd,&local_7c,&local_88);
  }
  puVar8 = PTR_DAT_043794c0;
  puVar7 = PTR_DAT_043794b0;
  lVar23 = *(long *)(*param_2 + 0x1a8);
  if ((lVar23 == 0) || (*(int *)(lVar23 + 0xc) == 0)) {
LAB_01c8d0cc:
    plVar27 = (long *)0x0;
  }
  else {
    piVar16 = (int *)(lVar23 + 0xc);
    iVar10 = *(int *)(lVar23 + 0xc);
    do {
      puVar12 = *(undefined8 **)(lVar23 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar14;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
        __cxa_guard_release(puVar7);
      }
      if (puVar12 == (undefined8 *)0x0) goto LAB_01c8d0cc;
      while (puVar12 != (undefined8 *)PTR_DAT_043794b8) {
        puVar12 = (undefined8 *)*puVar12;
        plVar27 = (long *)0x0;
        if (puVar12 == (undefined8 *)0x0) goto LAB_01c8d0d0;
      }
      iVar11 = *piVar16;
      if (iVar11 == iVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar5) {
          *piVar16 = iVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
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
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c8d0d0:
  (**(code **)(*plVar27 + 0x10))(local_78,plVar27);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar12 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar16 = (int *)(local_78[0] + 1);
    do {
      iVar10 = *piVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_68 = *puVar12;
      FUN_02a44274(lVar23 + 0xd8,&local_68);
    }
  }
  puVar12 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    puVar29 = (undefined8 *)0x0;
  }
  else {
    piVar16 = (int *)(local_a8 + 1);
    puVar29 = (undefined8 *)*local_a8;
    do {
      iVar10 = *piVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_78[0] = (undefined8 *)*puVar12;
      FUN_02a44274(lVar23 + 0xd8,local_78);
    }
  }
  if (plVar27 != (long *)0x0) {
    lVar23 = plVar27[0xb];
    piVar16 = (int *)(lVar23 + 0xc);
    do {
      iVar10 = *piVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar27 + 0x20))(plVar27);
    }
  }
  plVar27 = local_90;
  local_b0 = (long *)*param_2;
  if (local_b0 == (long *)0x0) {
    plVar26 = (long *)0x0;
  }
  else {
    lVar23 = local_b0[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01c8d2c0;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar23 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = *piVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar26 = local_b0;
  }
  local_78[0] = puVar29;
  FUN_01c90f88(plVar27 + 0xd,local_78,&local_b0);
  if (plVar26 != (long *)0x0) {
    lVar23 = plVar26[0xb];
    piVar16 = (int *)(lVar23 + 0xc);
    do {
      iVar10 = *piVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar26 + 0x20))(plVar26);
    }
  }
  FUN_01c9172c(plVar22,&local_7c,&local_90);
  plVar20 = local_88;
  if (local_90 != (long *)0x0) {
    lVar23 = local_90[0xb];
    piVar16 = (int *)(lVar23 + 0xc);
    do {
      iVar10 = *piVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
      plVar20 = local_88;
    }
  }
  local_88 = plVar20;
  if (plVar20 == (long *)0x0) goto LAB_01c8cc38;
  lVar23 = *(long *)((long)plVar20 + 0x58);
  piVar16 = (int *)(lVar23 + 0xc);
  do {
    iVar10 = *piVar16;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
    if (bVar5) {
      *piVar16 = iVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 + -1 != 0) goto LAB_01c8cc38;
  *(undefined8 *)(lVar23 + 0x18) = 0;
  pcVar17 = *(code **)(*plVar20 + 0x20);
  goto LAB_01c8cda4;
LAB_01c8c6f4:
  plVar20 = (long *)plVar21[3];
  if (plVar20 != (long *)0x0) {
    lVar23 = plVar20[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01c8d2c0;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar23 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = *piVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar15 = param_1[0x1b];
  if (uVar15 != 0) {
    uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = (ulong)((uint)uVar15 - 1) & 0xd;
    }
    else {
      uVar19 = 0xd;
      if (uVar15 < 0xe) {
        uVar2 = (uint)uVar15 & 0xff;
        uVar3 = 0;
        if ((uVar15 & 0xff) != 0) {
          uVar3 = 0xd / uVar2;
        }
        uVar19 = (ulong)(0xd - uVar3 * uVar2);
      }
    }
    plVar21 = *(long **)(param_1[0x1a] + uVar19 * 8);
    if (plVar21 != (long *)0x0) {
      plVar21 = (long *)*plVar21;
      if (plVar21 != (long *)0x0) {
        if (uVar18 < 2) {
          do {
            if (plVar21[1] == 0xd) {
              if ((int)plVar21[2] == 0xd) goto LAB_01c8c7c0;
            }
            else if ((plVar21[1] & uVar15 - 1) != uVar19) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar21[1];
            if (uVar18 == 0xd) {
              if ((int)plVar21[2] == 0xd) goto LAB_01c8c7c0;
            }
            else {
              if (uVar15 <= uVar18) {
                uVar6 = 0;
                if (uVar15 != 0) {
                  uVar6 = uVar18 / uVar15;
                }
                uVar18 = uVar18 - uVar6 * uVar15;
              }
              if (uVar18 != uVar19) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
  }
  goto LAB_01c8d2ec;
LAB_01c8c7c0:
  plVar26 = (long *)plVar21[3];
  if (plVar26 != (long *)0x0) {
    lVar23 = plVar26[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01c8d2c0;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar23 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = *piVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar15 = param_1[0x28];
  if (uVar15 != 0) {
    uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = (ulong)((uint)uVar15 - 1) & 0xd;
    }
    else {
      uVar19 = 0xd;
      if (uVar15 < 0xe) {
        uVar2 = (uint)uVar15 & 0xff;
        uVar3 = 0;
        if ((uVar15 & 0xff) != 0) {
          uVar3 = 0xd / uVar2;
        }
        uVar19 = (ulong)(0xd - uVar3 * uVar2);
      }
    }
    plVar21 = *(long **)(*plVar22 + uVar19 * 8);
    if (plVar21 != (long *)0x0) {
      plVar21 = (long *)*plVar21;
      if (plVar21 != (long *)0x0) {
        if (uVar18 < 2) {
          do {
            if (plVar21[1] == 0xd) {
              if ((int)plVar21[2] == 0xd) goto LAB_01c8c88c;
            }
            else if ((plVar21[1] & uVar15 - 1) != uVar19) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar21[1];
            if (uVar18 == 0xd) {
              if ((int)plVar21[2] == 0xd) goto LAB_01c8c88c;
            }
            else {
              if (uVar15 <= uVar18) {
                uVar6 = 0;
                if (uVar15 != 0) {
                  uVar6 = uVar18 / uVar15;
                }
                uVar18 = uVar18 - uVar6 * uVar15;
              }
              if (uVar18 != uVar19) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
  }
  goto LAB_01c8d2ec;
LAB_01c8c88c:
  plVar22 = (long *)plVar21[3];
  if (plVar22 != (long *)0x0) {
    lVar23 = plVar22[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01c8d2c0;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar23 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = *piVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((uVar13 & 1) != 0) {
    lVar23 = FUN_01c8ffc0(plVar20 + 10);
    local_b8 = (long *)*param_2;
    if (local_b8 == (long *)0x0) {
      plVar27 = (long *)0x0;
    }
    else {
      lVar24 = local_b8[0xb];
      if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01c8d2c0;
      if (*(long *)(lVar24 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
        *(undefined8 *)(lVar24 + 0x10) = uVar14;
      }
      piVar16 = (int *)(lVar24 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar5) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar27 = local_b8;
    }
    local_78[0] = puVar12;
    FUN_01c903e0(lVar23 + 0x68,local_78,&local_b8);
    if (plVar27 != (long *)0x0) {
      lVar23 = plVar27[0xb];
      piVar16 = (int *)(lVar23 + 0xc);
      do {
        iVar10 = *piVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar5) {
          *piVar16 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*plVar27 + 0x20))(plVar27);
      }
    }
  }
  puVar12 = (undefined8 *)(**(code **)plVar22[10])(plVar22 + 10);
  FUN_01c9030c();
  if (puVar12 == (undefined8 *)0x0) {
    plVar27 = (long *)0x0;
  }
  else {
    do {
      if (puVar12 == (undefined8 *)PTR_DAT_04381de0) {
        plVar27 = plVar22;
        break;
      }
      puVar12 = (undefined8 *)*puVar12;
      plVar27 = (long *)0x0;
    } while (puVar12 != (undefined8 *)0x0);
  }
  uVar28 = *(ulong *)(*param_2 + 0x1a8);
  if (uVar28 != 0) goto LAB_01c8d2f0;
  goto LAB_01c8c998;
LAB_01c8c668:
  uVar15 = param_1[0xe];
  plVar20 = param_1;
  if (uVar15 != 0) {
    uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = (ulong)((uint)uVar15 - 1) & 0xd;
    }
    else {
      uVar19 = 0xd;
      if (uVar15 < 0xe) {
        uVar2 = (uint)uVar15 & 0xff;
        uVar3 = 0;
        if ((uVar15 & 0xff) != 0) {
          uVar3 = 0xd / uVar2;
        }
        uVar19 = (ulong)(0xd - uVar3 * uVar2);
      }
    }
    plVar21 = *(long **)(param_1[0xd] + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xd) {
            if ((int)plVar21[2] == 0xd) goto LAB_01c8c6f4;
          }
          else if ((plVar21[1] & uVar15 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xd) {
            if ((int)plVar21[2] == 0xd) goto LAB_01c8c6f4;
          }
          else {
            if (uVar15 <= uVar18) {
              uVar6 = 0;
              if (uVar15 != 0) {
                uVar6 = uVar18 / uVar15;
              }
              uVar18 = uVar18 - uVar6 * uVar15;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_01c8d2ec:
  FUN_01c8efd0();
LAB_01c8d2f0:
  if (*(int *)(uVar28 + 0xc) == 0) {
LAB_01c8c998:
    plVar21 = (long *)0x0;
  }
  else {
    piVar16 = (int *)(uVar28 + 0xc);
    iVar10 = *(int *)(uVar28 + 0xc);
    do {
      local_d8 = *(undefined8 **)(uVar28 + 0x10);
      if (((*PTR_DAT_043794b0 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar11 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar11 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar14;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
        __cxa_guard_release(PTR_DAT_043794b0);
      }
      if (local_d8 == (undefined8 *)0x0) goto LAB_01c8c998;
      while (local_d8 != (undefined8 *)PTR_DAT_043794b8) {
        plVar21 = (long *)0x0;
        local_d8 = (undefined8 *)*local_d8;
        if (local_d8 == (undefined8 *)0x0) goto LAB_01c8c99c;
      }
      iVar11 = *piVar16;
      if (iVar11 == iVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar5) {
          *piVar16 = iVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          plVar21 = (long *)0x0;
          if (*(long *)(uVar28 + 0x18) != 0) {
            plVar21 = (long *)(*(long *)(uVar28 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar21 = (long *)0x0;
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c8c99c:
  (**(code **)(*plVar21 + 0x10))(local_78,plVar21);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar12 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar16 = (int *)(local_78[0] + 1);
    do {
      iVar10 = *piVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_68 = *puVar12;
      FUN_02a44274(lVar23 + 0xd8,&local_68);
    }
  }
  puVar12 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    puVar29 = (undefined8 *)0x0;
  }
  else {
    piVar16 = (int *)(local_a8 + 1);
    puVar29 = (undefined8 *)*local_a8;
    do {
      iVar10 = *piVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_78[0] = (undefined8 *)*puVar12;
      FUN_02a44274(lVar23 + 0xd8,local_78);
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar23 = plVar21[0xb];
    piVar16 = (int *)(lVar23 + 0xc);
    do {
      iVar10 = *piVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  local_c0 = (long *)*param_2;
  if (local_c0 == (long *)0x0) {
    plVar21 = (long *)0x0;
  }
  else {
    lVar23 = local_c0[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01c8d2c0;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar23 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = *piVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar21 = local_c0;
  }
  local_78[0] = puVar29;
  FUN_01c90f88(plVar27 + 0xd,local_78,&local_c0);
  if (plVar21 != (long *)0x0) {
    lVar23 = plVar21[0xb];
    piVar16 = (int *)(lVar23 + 0xc);
    do {
      iVar10 = *piVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  puVar12 = (undefined8 *)FUN_01836804((long *)(lVar25 + -0x50));
  uVar13 = FUN_01833e7c(param_1,puVar12);
  if ((uVar13 & 1) != 0) {
    lVar23 = FUN_01c8ffc0(plVar26 + 10);
    local_78[0] = puVar12;
    lVar24 = FUN_01c91b30(lVar23 + 0x68,local_78);
    if (lVar24 == 0) {
      local_c8 = (long *)*param_2;
      if (local_c8 == (long *)0x0) {
        plVar27 = (long *)0x0;
      }
      else {
        lVar24 = local_c8[0xb];
        if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) {
LAB_01c8d2c0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar24 + 0x10) == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
          *(undefined8 *)(lVar24 + 0x10) = uVar14;
        }
        piVar16 = (int *)(lVar24 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar5) {
            *piVar16 = *piVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar27 = local_c8;
      }
      local_78[0] = puVar12;
      FUN_01c903e0(lVar23 + 0x68,local_78,&local_c8);
      if (plVar27 != (long *)0x0) {
        lVar23 = plVar27[0xb];
        piVar16 = (int *)(lVar23 + 0xc);
        do {
          iVar10 = *piVar16;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar5) {
            *piVar16 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar23 + 0x18) = 0;
          (**(code **)(*plVar27 + 0x20))(plVar27);
        }
      }
    }
  }
  if (plVar22 != (long *)0x0) {
    lVar23 = plVar22[0xb];
    piVar16 = (int *)(lVar23 + 0xc);
    do {
      iVar10 = *piVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
  if (plVar26 != (long *)0x0) {
    lVar23 = plVar26[0xb];
    piVar16 = (int *)(lVar23 + 0xc);
    do {
      iVar10 = *piVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar26 + 0x20))(plVar26);
    }
  }
  if (plVar20 != (long *)0x0) {
    lVar23 = plVar20[0xb];
    piVar16 = (int *)(lVar23 + 0xc);
    do {
      iVar10 = *piVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      pcVar17 = *(code **)(*plVar20 + 0x20);
LAB_01c8cda4:
      (*pcVar17)(plVar20);
    }
  }
LAB_01c8cc38:
  lVar23 = *(long *)(lVar25 + 8);
  piVar16 = (int *)(lVar23 + 0xc);
  do {
    iVar10 = *piVar16;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
    if (bVar5) {
      *piVar16 = iVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar23 + 0x18) = 0;
    (**(code **)(*(long *)(lVar25 + -0x50) + 0x20))();
  }
  return;
}


