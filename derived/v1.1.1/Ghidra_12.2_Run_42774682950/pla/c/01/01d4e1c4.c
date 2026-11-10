/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d4e1c4; name: FUN_01d4e1c4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01d4e1c4(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
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
  ulong extraout_x8;
  ulong uVar18;
  ulong uVar19;
  ulong extraout_x9;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *extraout_x10;
  long *plVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  undefined8 *puVar28;
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
  
  puVar9 = PTR_DAT_0437a258;
  puVar8 = PTR_DAT_0437a250;
  puVar7 = PTR_DAT_043795e0;
  puVar6 = PTR_DAT_043795d8;
  lVar26 = *param_3;
  if (lVar26 == 0) {
    return;
  }
  if (*(int *)(lVar26 + 0xc) == 0) {
    return;
  }
  piVar16 = (int *)(lVar26 + 0xc);
  iVar10 = *(int *)(lVar26 + 0xc);
  do {
    plVar23 = *(long **)(lVar26 + 0x10);
    if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar14;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar7 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar6);
      }
      *(undefined **)puVar9 = puVar7;
      __cxa_guard_release(puVar8);
    }
    while( true ) {
      if (plVar23 == (long *)0x0) {
        return;
      }
      if (plVar23 == (long *)puVar9) break;
      plVar23 = (long *)*plVar23;
    }
    iVar11 = *piVar16;
    if (iVar11 == iVar10) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar26 = *(long *)(lVar26 + 0x18);
        if (lVar26 == 0) {
          return;
        }
        puVar12 = (undefined8 *)FUN_0183680c();
        local_7c = 7;
        uVar13 = FUN_01833e7c(param_1,puVar12);
        uVar15 = param_1[0x28];
        plVar23 = param_1 + 0x27;
        if (uVar15 == 0) goto LAB_01d4ec44;
        uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          uVar19 = (ulong)((uint)uVar15 - 1) & 7;
        }
        else {
          uVar19 = 7;
          if (uVar15 < 8) {
            uVar1 = (uint)uVar15 & 0xff;
            uVar4 = 0;
            if ((uVar15 & 0xff) != 0) {
              uVar4 = 7 / uVar1;
            }
            uVar19 = (ulong)(7 - uVar4 * uVar1);
          }
        }
        plVar20 = *(long **)(*plVar23 + uVar19 * 8);
        if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
        goto LAB_01d4ec44;
        if (1 < uVar18) break;
        goto LAB_01d4e338;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar11;
    if (iVar11 == 0) {
      return;
    }
  } while( true );
  do {
    uVar18 = plVar20[1];
    if (uVar18 == 7) {
      if ((int)plVar20[2] == 7) goto LAB_01d4e350;
    }
    else {
      if (uVar15 <= uVar18) {
        uVar5 = 0;
        if (uVar15 != 0) {
          uVar5 = uVar18 / uVar15;
        }
        uVar18 = uVar18 - uVar5 * uVar15;
      }
      if (uVar18 != uVar19) break;
    }
    plVar20 = (long *)*plVar20;
  } while (plVar20 != (long *)0x0);
  goto LAB_01d4ec44;
LAB_01d4e350:
  uVar15 = param_1[0xe];
  plVar20 = param_1;
  if (uVar15 != 0) {
    uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = (ulong)((uint)uVar15 - 1) & 7;
    }
    else {
      uVar19 = 7;
      if (uVar15 < 8) {
        uVar1 = (uint)uVar15 & 0xff;
        uVar4 = 0;
        if ((uVar15 & 0xff) != 0) {
          uVar4 = 7 / uVar1;
        }
        uVar19 = (ulong)(7 - uVar4 * uVar1);
      }
    }
    plVar21 = *(long **)(param_1[0xd] + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 7) {
            if ((int)plVar21[2] == 7) goto LAB_01d4e3d0;
          }
          else if ((plVar21[1] & uVar15 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 7) {
            if ((int)plVar21[2] == 7) goto LAB_01d4e3d0;
          }
          else {
            if (uVar15 <= uVar18) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar18 / uVar15;
              }
              uVar18 = uVar18 - uVar5 * uVar15;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_01d4f1ec:
  do {
    FUN_01d52850();
    uVar15 = extraout_x8;
    uVar19 = extraout_x9;
    plVar21 = extraout_x10;
LAB_01d4f1f0:
    do {
      uVar18 = plVar21[1];
      if (uVar18 == 7) {
        if ((int)plVar21[2] == 7) goto LAB_01d4e490;
      }
      else {
        if (uVar15 <= uVar18) {
          uVar5 = 0;
          if (uVar15 != 0) {
            uVar5 = uVar18 / uVar15;
          }
          uVar18 = uVar18 - uVar5 * uVar15;
        }
        if (uVar18 != uVar19) break;
      }
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
  } while( true );
LAB_01d4e3d0:
  plVar20 = (long *)plVar21[3];
  if (plVar20 != (long *)0x0) {
    lVar24 = plVar20[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01d4ef84;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar24 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar15 = param_1[0x1b];
  if (uVar15 != 0) {
    uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = (ulong)((uint)uVar15 - 1) & 7;
    }
    else {
      uVar19 = 7;
      if (uVar15 < 8) {
        uVar1 = (uint)uVar15 & 0xff;
        uVar4 = 0;
        if ((uVar15 & 0xff) != 0) {
          uVar4 = 7 / uVar1;
        }
        uVar19 = (ulong)(7 - uVar4 * uVar1);
      }
    }
    plVar21 = *(long **)(param_1[0x1a] + uVar19 * 8);
    if (plVar21 != (long *)0x0) {
      plVar21 = (long *)*plVar21;
      if (plVar21 != (long *)0x0) {
        if (1 < uVar18) goto LAB_01d4f1f0;
        do {
          if (plVar21[1] == 7) {
            if ((int)plVar21[2] == 7) goto LAB_01d4e490;
          }
          else if ((plVar21[1] & uVar15 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_01d4f1ec;
LAB_01d4e490:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    lVar24 = plVar21[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01d4ef84;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar24 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar15 = param_1[0x28];
  if (uVar15 != 0) {
    uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = (ulong)((uint)uVar15 - 1) & 7;
    }
    else {
      uVar19 = 7;
      if (uVar15 < 8) {
        uVar1 = (uint)uVar15 & 0xff;
        uVar4 = 0;
        if ((uVar15 & 0xff) != 0) {
          uVar4 = 7 / uVar1;
        }
        uVar19 = (ulong)(7 - uVar4 * uVar1);
      }
    }
    plVar22 = *(long **)(*plVar23 + uVar19 * 8);
    if (plVar22 != (long *)0x0) {
      plVar22 = (long *)*plVar22;
      if (plVar22 != (long *)0x0) {
        if (uVar18 < 2) {
          do {
            if (plVar22[1] == 7) {
              if ((int)plVar22[2] == 7) goto LAB_01d4e550;
            }
            else if ((plVar22[1] & uVar15 - 1) != uVar19) break;
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar22[1];
            if (uVar18 == 7) {
              if ((int)plVar22[2] == 7) goto LAB_01d4e550;
            }
            else {
              if (uVar15 <= uVar18) {
                uVar5 = 0;
                if (uVar15 != 0) {
                  uVar5 = uVar18 / uVar15;
                }
                uVar18 = uVar18 - uVar5 * uVar15;
              }
              if (uVar18 != uVar19) break;
            }
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
      }
    }
  }
  goto LAB_01d4f1ec;
LAB_01d4e550:
  plVar23 = (long *)plVar22[3];
  if (plVar23 != (long *)0x0) {
    lVar24 = plVar23[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01d4ef84;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar24 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((uVar13 & 1) != 0) {
    lVar24 = FUN_01d50d40(plVar20 + 10);
    local_b8 = (long *)*param_2;
    if (local_b8 == (long *)0x0) {
      plVar22 = (long *)0x0;
    }
    else {
      lVar25 = local_b8[0xb];
      if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01d4ef84;
      if (*(long *)(lVar25 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
        *(undefined8 *)(lVar25 + 0x10) = uVar14;
      }
      piVar16 = (int *)(lVar25 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar22 = local_b8;
    }
    local_78[0] = puVar12;
    FUN_01d51168(lVar24 + 0x68,local_78,&local_b8);
    if (plVar22 != (long *)0x0) {
      lVar24 = plVar22[0xb];
      piVar16 = (int *)(lVar24 + 0xc);
      do {
        iVar10 = *piVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar24 + 0x18) = 0;
        (**(code **)(*plVar22 + 0x20))(plVar22);
      }
    }
  }
  puVar12 = (undefined8 *)(**(code **)plVar23[10])(plVar23 + 10);
  FUN_01d51094();
  if (puVar12 == (undefined8 *)0x0) {
    plVar22 = (long *)0x0;
  }
  else {
    do {
      if (puVar12 == (undefined8 *)PTR_DAT_04380760) {
        plVar22 = plVar23;
        break;
      }
      puVar12 = (undefined8 *)*puVar12;
      plVar22 = (long *)0x0;
    } while (puVar12 != (undefined8 *)0x0);
  }
  lVar24 = *(long *)(*param_2 + 0x1a8);
  if ((lVar24 == 0) || (*(int *)(lVar24 + 0xc) == 0)) {
LAB_01d4e65c:
    plVar27 = (long *)0x0;
  }
  else {
    piVar16 = (int *)(lVar24 + 0xc);
    iVar10 = *(int *)(lVar24 + 0xc);
    do {
      local_d8 = *(undefined8 **)(lVar24 + 0x10);
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
      if (local_d8 == (undefined8 *)0x0) goto LAB_01d4e65c;
      while (local_d8 != (undefined8 *)PTR_DAT_043794b8) {
        plVar27 = (long *)0x0;
        local_d8 = (undefined8 *)*local_d8;
        if (local_d8 == (undefined8 *)0x0) goto LAB_01d4e660;
      }
      iVar11 = *piVar16;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar27 = (long *)0x0;
          if (*(long *)(lVar24 + 0x18) != 0) {
            plVar27 = (long *)(*(long *)(lVar24 + 0x18) + -0x50);
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
LAB_01d4e660:
  (**(code **)(*plVar27 + 0x10))(local_78,plVar27);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar12 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar16 = (int *)(local_78[0] + 1);
    do {
      iVar10 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar24 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar24;
      local_68 = *puVar12;
      FUN_02a44274(lVar24 + 0xd8,&local_68);
    }
  }
  puVar12 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    puVar28 = (undefined8 *)0x0;
  }
  else {
    piVar16 = (int *)(local_a8 + 1);
    puVar28 = (undefined8 *)*local_a8;
    do {
      iVar10 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar24 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar24;
      local_78[0] = (undefined8 *)*puVar12;
      FUN_02a44274(lVar24 + 0xd8,local_78);
    }
  }
  if (plVar27 != (long *)0x0) {
    lVar24 = plVar27[0xb];
    piVar16 = (int *)(lVar24 + 0xc);
    do {
      iVar10 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar27 + 0x20))(plVar27);
    }
  }
  local_c0 = (long *)*param_2;
  if (local_c0 == (long *)0x0) {
    plVar27 = (long *)0x0;
  }
  else {
    lVar24 = local_c0[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01d4ef84;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar24 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar27 = local_c0;
  }
  local_78[0] = puVar28;
  FUN_01d51cdc(plVar22 + 0xd,local_78,&local_c0);
  if (plVar27 != (long *)0x0) {
    lVar24 = plVar27[0xb];
    piVar16 = (int *)(lVar24 + 0xc);
    do {
      iVar10 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar27 + 0x20))(plVar27);
    }
  }
  puVar12 = (undefined8 *)FUN_01836804((long *)(lVar26 + -0x50));
  uVar13 = FUN_01833e7c(param_1,puVar12);
  if ((uVar13 & 1) != 0) {
    lVar24 = FUN_01d50d40(plVar21 + 10);
    local_78[0] = puVar12;
    lVar25 = FUN_01d5285c(lVar24 + 0x68,local_78);
    if (lVar25 == 0) {
      local_c8 = (long *)*param_2;
      if (local_c8 == (long *)0x0) {
        plVar22 = (long *)0x0;
      }
      else {
        lVar25 = local_c8[0xb];
        if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01d4ef84;
        if (*(long *)(lVar25 + 0x10) == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
          *(undefined8 *)(lVar25 + 0x10) = uVar14;
        }
        piVar16 = (int *)(lVar25 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar3) {
            *piVar16 = *piVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar22 = local_c8;
      }
      local_78[0] = puVar12;
      FUN_01d51168(lVar24 + 0x68,local_78,&local_c8);
      if (plVar22 != (long *)0x0) {
        lVar24 = plVar22[0xb];
        piVar16 = (int *)(lVar24 + 0xc);
        do {
          iVar10 = *piVar16;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar3) {
            *piVar16 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar24 + 0x18) = 0;
          (**(code **)(*plVar22 + 0x20))(plVar22);
        }
      }
    }
  }
  if (plVar23 != (long *)0x0) {
    lVar24 = plVar23[0xb];
    piVar16 = (int *)(lVar24 + 0xc);
    do {
      iVar10 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar24 = plVar21[0xb];
    piVar16 = (int *)(lVar24 + 0xc);
    do {
      iVar10 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  if (plVar20 == (long *)0x0) goto LAB_01d4e860;
  lVar24 = plVar20[0xb];
  piVar16 = (int *)(lVar24 + 0xc);
  do {
    iVar10 = *piVar16;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
    if (bVar3) {
      *piVar16 = iVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar10 + -1 != 0) goto LAB_01d4e860;
  *(undefined8 *)(lVar24 + 0x18) = 0;
  pcVar17 = *(code **)(*plVar20 + 0x20);
  goto LAB_01d4ea4c;
  while (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0) {
LAB_01d4e338:
    if (plVar20[1] == 7) {
      if ((int)plVar20[2] == 7) goto LAB_01d4e350;
    }
    else if ((plVar20[1] & uVar15 - 1) != uVar19) break;
  }
LAB_01d4ec44:
  lVar24 = param_1[1];
  local_88 = (long *)FUN_018abbb0(local_78,lVar24);
  if (local_88 != (long *)0x0) {
    lVar25 = local_88[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01d4ef84;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar25 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_90 = (long *)FUN_018ac8e8(local_78,lVar24);
  if (local_90 != (long *)0x0) {
    lVar24 = local_90[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01d4ef84;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar24 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar20 = local_88;
  if ((uVar13 & 1) != 0) {
    local_98 = (long *)*param_2;
    if (local_98 == (long *)0x0) {
      plVar21 = (long *)0x0;
    }
    else {
      lVar24 = local_98[0xb];
      if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01d4ef84;
      if (*(long *)(lVar24 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
        *(undefined8 *)(lVar24 + 0x10) = uVar14;
      }
      piVar16 = (int *)(lVar24 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar21 = local_98;
    }
    local_78[0] = puVar12;
    FUN_01d51168(plVar20 + 0xd,local_78,&local_98);
    if (plVar21 != (long *)0x0) {
      lVar24 = plVar21[0xb];
      piVar16 = (int *)(lVar24 + 0xc);
      do {
        iVar10 = *piVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar24 + 0x18) = 0;
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
    }
    FUN_01d518d4(param_1 + 0xd,&local_7c,&local_88);
  }
  puVar7 = PTR_DAT_043794c0;
  puVar6 = PTR_DAT_043794b0;
  lVar24 = *(long *)(*param_2 + 0x1a8);
  if ((lVar24 == 0) || (*(int *)(lVar24 + 0xc) == 0)) {
LAB_01d4ed80:
    plVar20 = (long *)0x0;
  }
  else {
    piVar16 = (int *)(lVar24 + 0xc);
    iVar10 = *(int *)(lVar24 + 0xc);
    do {
      puVar12 = *(undefined8 **)(lVar24 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar14;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
        __cxa_guard_release(puVar6);
      }
      if (puVar12 == (undefined8 *)0x0) goto LAB_01d4ed80;
      while (puVar12 != (undefined8 *)PTR_DAT_043794b8) {
        puVar12 = (undefined8 *)*puVar12;
        plVar20 = (long *)0x0;
        if (puVar12 == (undefined8 *)0x0) goto LAB_01d4ed84;
      }
      iVar11 = *piVar16;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar20 = (long *)0x0;
          if (*(long *)(lVar24 + 0x18) != 0) {
            plVar20 = (long *)(*(long *)(lVar24 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar20 = (long *)0x0;
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01d4ed84:
  (**(code **)(*plVar20 + 0x10))(local_78,plVar20);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar12 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar16 = (int *)(local_78[0] + 1);
    do {
      iVar10 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar24 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar24;
      local_68 = *puVar12;
      FUN_02a44274(lVar24 + 0xd8,&local_68);
    }
  }
  puVar12 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    puVar28 = (undefined8 *)0x0;
  }
  else {
    piVar16 = (int *)(local_a8 + 1);
    puVar28 = (undefined8 *)*local_a8;
    do {
      iVar10 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar24 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar24;
      local_78[0] = (undefined8 *)*puVar12;
      FUN_02a44274(lVar24 + 0xd8,local_78);
    }
  }
  if (plVar20 != (long *)0x0) {
    lVar24 = plVar20[0xb];
    piVar16 = (int *)(lVar24 + 0xc);
    do {
      iVar10 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
  }
  plVar20 = local_90;
  local_b0 = (long *)*param_2;
  if (local_b0 == (long *)0x0) {
    plVar21 = (long *)0x0;
  }
  else {
    lVar24 = local_b0[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) {
LAB_01d4ef84:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar24 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar21 = local_b0;
  }
  local_78[0] = puVar28;
  FUN_01d51cdc(plVar20 + 0xd,local_78,&local_b0);
  if (plVar21 != (long *)0x0) {
    lVar24 = plVar21[0xb];
    piVar16 = (int *)(lVar24 + 0xc);
    do {
      iVar10 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  FUN_01d52448(plVar23,&local_7c,&local_90);
  plVar20 = local_88;
  if (local_90 != (long *)0x0) {
    lVar24 = local_90[0xb];
    piVar16 = (int *)(lVar24 + 0xc);
    do {
      iVar10 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
      plVar20 = local_88;
    }
  }
  local_88 = plVar20;
  if (plVar20 != (long *)0x0) {
    lVar24 = plVar20[0xb];
    piVar16 = (int *)(lVar24 + 0xc);
    do {
      iVar10 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      pcVar17 = *(code **)(*plVar20 + 0x20);
LAB_01d4ea4c:
      (*pcVar17)(plVar20);
    }
  }
LAB_01d4e860:
  lVar24 = *(long *)(lVar26 + 8);
  piVar16 = (int *)(lVar24 + 0xc);
  do {
    iVar10 = *piVar16;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
    if (bVar3) {
      *piVar16 = iVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar24 + 0x18) = 0;
    (**(code **)(*(long *)(lVar26 + -0x50) + 0x20))();
  }
  return;
}


