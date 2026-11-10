/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c711c8; name: FUN_01c711c8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01c711c8(long *param_1,long *param_2,long *param_3)

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
  long lVar15;
  ulong uVar16;
  int *piVar17;
  code *pcVar18;
  ulong extraout_x8;
  ulong uVar19;
  ulong uVar20;
  ulong extraout_x9;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *extraout_x10;
  long lVar24;
  long *plVar25;
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
  piVar17 = (int *)(lVar26 + 0xc);
  iVar10 = *(int *)(lVar26 + 0xc);
  do {
    plVar25 = *(long **)(lVar26 + 0x10);
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
      if (plVar25 == (long *)0x0) {
        return;
      }
      if (plVar25 == (long *)puVar9) break;
      plVar25 = (long *)*plVar25;
    }
    iVar11 = *piVar17;
    if (iVar11 == iVar10) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar26 = *(long *)(lVar26 + 0x18);
        if (lVar26 == 0) {
          return;
        }
        puVar12 = (undefined8 *)FUN_0183680c();
        local_7c = 0x1e;
        uVar13 = FUN_01833e7c(param_1,puVar12);
        uVar16 = param_1[0x28];
        plVar25 = param_1 + 0x27;
        if (uVar16 == 0) goto LAB_01c71c48;
        uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
        uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
        uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar19 < 2) {
          uVar20 = (ulong)((uint)uVar16 - 1) & 0x1e;
        }
        else {
          uVar20 = 0x1e;
          if (uVar16 < 0x1f) {
            uVar1 = (uint)uVar16 & 0xff;
            uVar4 = 0;
            if ((uVar16 & 0xff) != 0) {
              uVar4 = 0x1e / uVar1;
            }
            uVar20 = (ulong)(0x1e - uVar4 * uVar1);
          }
        }
        plVar21 = *(long **)(*plVar25 + uVar20 * 8);
        if ((plVar21 == (long *)0x0) || (plVar21 = (long *)*plVar21, plVar21 == (long *)0x0))
        goto LAB_01c71c48;
        if (1 < uVar19) break;
        goto LAB_01c7133c;
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
    uVar19 = plVar21[1];
    if (uVar19 == 0x1e) {
      if ((int)plVar21[2] == 0x1e) goto LAB_01c71354;
    }
    else {
      if (uVar16 <= uVar19) {
        uVar5 = 0;
        if (uVar16 != 0) {
          uVar5 = uVar19 / uVar16;
        }
        uVar19 = uVar19 - uVar5 * uVar16;
      }
      if (uVar19 != uVar20) break;
    }
    plVar21 = (long *)*plVar21;
  } while (plVar21 != (long *)0x0);
  goto LAB_01c71c48;
LAB_01c71354:
  uVar16 = param_1[0xe];
  plVar21 = param_1;
  if (uVar16 != 0) {
    uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = (ulong)((uint)uVar16 - 1) & 0x1e;
    }
    else {
      uVar20 = 0x1e;
      if (uVar16 < 0x1f) {
        uVar1 = (uint)uVar16 & 0xff;
        uVar4 = 0;
        if ((uVar16 & 0xff) != 0) {
          uVar4 = 0x1e / uVar1;
        }
        uVar20 = (ulong)(0x1e - uVar4 * uVar1);
      }
    }
    plVar22 = *(long **)(param_1[0xd] + uVar20 * 8);
    if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar22[1] == 0x1e) {
            if ((int)plVar22[2] == 0x1e) goto LAB_01c713d4;
          }
          else if ((plVar22[1] & uVar16 - 1) != uVar20) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar22[1];
          if (uVar19 == 0x1e) {
            if ((int)plVar22[2] == 0x1e) goto LAB_01c713d4;
          }
          else {
            if (uVar16 <= uVar19) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar19 / uVar16;
              }
              uVar19 = uVar19 - uVar5 * uVar16;
            }
            if (uVar19 != uVar20) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
LAB_01c721f0:
  do {
    FUN_01c733e0();
    uVar16 = extraout_x8;
    uVar20 = extraout_x9;
    plVar22 = extraout_x10;
LAB_01c721f4:
    do {
      uVar19 = plVar22[1];
      if (uVar19 == 0x1e) {
        if ((int)plVar22[2] == 0x1e) goto LAB_01c71494;
      }
      else {
        if (uVar16 <= uVar19) {
          uVar5 = 0;
          if (uVar16 != 0) {
            uVar5 = uVar19 / uVar16;
          }
          uVar19 = uVar19 - uVar5 * uVar16;
        }
        if (uVar19 != uVar20) break;
      }
      plVar22 = (long *)*plVar22;
    } while (plVar22 != (long *)0x0);
  } while( true );
LAB_01c713d4:
  plVar21 = (long *)plVar22[3];
  if (plVar21 != (long *)0x0) {
    lVar24 = plVar21[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01c71f78;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar14;
    }
    piVar17 = (int *)(lVar24 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = *piVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar16 = param_1[0x1b];
  if (uVar16 != 0) {
    uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = (ulong)((uint)uVar16 - 1) & 0x1e;
    }
    else {
      uVar20 = 0x1e;
      if (uVar16 < 0x1f) {
        uVar1 = (uint)uVar16 & 0xff;
        uVar4 = 0;
        if ((uVar16 & 0xff) != 0) {
          uVar4 = 0x1e / uVar1;
        }
        uVar20 = (ulong)(0x1e - uVar4 * uVar1);
      }
    }
    plVar22 = *(long **)(param_1[0x1a] + uVar20 * 8);
    if (plVar22 != (long *)0x0) {
      plVar22 = (long *)*plVar22;
      if (plVar22 != (long *)0x0) {
        if (1 < uVar19) goto LAB_01c721f4;
        do {
          if (plVar22[1] == 0x1e) {
            if ((int)plVar22[2] == 0x1e) goto LAB_01c71494;
          }
          else if ((plVar22[1] & uVar16 - 1) != uVar20) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
  goto LAB_01c721f0;
LAB_01c71494:
  plVar22 = (long *)plVar22[3];
  if (plVar22 != (long *)0x0) {
    lVar24 = plVar22[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01c71f78;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar14;
    }
    piVar17 = (int *)(lVar24 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = *piVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar16 = param_1[0x28];
  if (uVar16 != 0) {
    uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = (ulong)((uint)uVar16 - 1) & 0x1e;
    }
    else {
      uVar20 = 0x1e;
      if (uVar16 < 0x1f) {
        uVar1 = (uint)uVar16 & 0xff;
        uVar4 = 0;
        if ((uVar16 & 0xff) != 0) {
          uVar4 = 0x1e / uVar1;
        }
        uVar20 = (ulong)(0x1e - uVar4 * uVar1);
      }
    }
    plVar23 = *(long **)(*plVar25 + uVar20 * 8);
    if (plVar23 != (long *)0x0) {
      plVar23 = (long *)*plVar23;
      if (plVar23 != (long *)0x0) {
        if (uVar19 < 2) {
          do {
            if (plVar23[1] == 0x1e) {
              if ((int)plVar23[2] == 0x1e) goto LAB_01c71554;
            }
            else if ((plVar23[1] & uVar16 - 1) != uVar20) break;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar19 = plVar23[1];
            if (uVar19 == 0x1e) {
              if ((int)plVar23[2] == 0x1e) goto LAB_01c71554;
            }
            else {
              if (uVar16 <= uVar19) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar19 / uVar16;
                }
                uVar19 = uVar19 - uVar5 * uVar16;
              }
              if (uVar19 != uVar20) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
  }
  goto LAB_01c721f0;
LAB_01c71554:
  plVar25 = (long *)plVar23[3];
  if (plVar25 != (long *)0x0) {
    lVar24 = plVar25[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01c71f78;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar14;
    }
    piVar17 = (int *)(lVar24 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = *piVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((uVar13 & 1) != 0) {
    lVar24 = FUN_01c736ec(plVar21 + 10);
    local_b8 = (long *)*param_2;
    if (local_b8 == (long *)0x0) {
      plVar23 = (long *)0x0;
    }
    else {
      lVar15 = local_b8[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01c71f78;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar14;
      }
      piVar17 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = *piVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar23 = local_b8;
    }
    local_78[0] = puVar12;
    FUN_01c73b14(lVar24 + 0x68,local_78,&local_b8);
    if (plVar23 != (long *)0x0) {
      lVar24 = plVar23[0xb];
      piVar17 = (int *)(lVar24 + 0xc);
      do {
        iVar10 = *piVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar24 + 0x18) = 0;
        (**(code **)(*plVar23 + 0x20))(plVar23);
      }
    }
  }
  puVar12 = (undefined8 *)(**(code **)plVar25[10])(plVar25 + 10);
  FUN_01c73a40();
  if (puVar12 == (undefined8 *)0x0) {
    plVar23 = (long *)0x0;
  }
  else {
    do {
      if (puVar12 == (undefined8 *)PTR_DAT_04381d00) {
        plVar23 = plVar25;
        break;
      }
      puVar12 = (undefined8 *)*puVar12;
      plVar23 = (long *)0x0;
    } while (puVar12 != (undefined8 *)0x0);
  }
  lVar24 = *(long *)(*param_2 + 0x1a8);
  if ((lVar24 == 0) || (*(int *)(lVar24 + 0xc) == 0)) {
LAB_01c715d8:
    plVar27 = (long *)0x0;
  }
  else {
    piVar17 = (int *)(lVar24 + 0xc);
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
      if (local_d8 == (undefined8 *)0x0) goto LAB_01c715d8;
      while (local_d8 != (undefined8 *)PTR_DAT_043794b8) {
        plVar27 = (long *)0x0;
        local_d8 = (undefined8 *)*local_d8;
        if (local_d8 == (undefined8 *)0x0) goto LAB_01c715dc;
      }
      iVar11 = *piVar17;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = iVar10 + 1;
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
LAB_01c715dc:
  (**(code **)(*plVar27 + 0x10))(local_78,plVar27);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar12 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar17 = (int *)(local_78[0] + 1);
    do {
      iVar10 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar10 + -1;
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
    piVar17 = (int *)(local_a8 + 1);
    puVar28 = (undefined8 *)*local_a8;
    do {
      iVar10 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar10 + -1;
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
    piVar17 = (int *)(lVar24 + 0xc);
    do {
      iVar10 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar10 + -1;
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
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01c71f78;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar14;
    }
    piVar17 = (int *)(lVar24 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = *piVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar27 = local_c0;
  }
  local_78[0] = puVar28;
  FUN_01c74684(plVar23 + 0xd,local_78,&local_c0);
  if (plVar27 != (long *)0x0) {
    lVar24 = plVar27[0xb];
    piVar17 = (int *)(lVar24 + 0xc);
    do {
      iVar10 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar10 + -1;
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
    lVar24 = FUN_01c736ec(plVar22 + 10);
    local_78[0] = puVar12;
    lVar15 = FUN_01c751f4(lVar24 + 0x68,local_78);
    if (lVar15 == 0) {
      local_c8 = (long *)*param_2;
      if (local_c8 == (long *)0x0) {
        plVar23 = (long *)0x0;
      }
      else {
        lVar15 = local_c8[0xb];
        if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01c71f78;
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar14;
        }
        piVar17 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar3) {
            *piVar17 = *piVar17 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar23 = local_c8;
      }
      local_78[0] = puVar12;
      FUN_01c73b14(lVar24 + 0x68,local_78,&local_c8);
      if (plVar23 != (long *)0x0) {
        lVar24 = plVar23[0xb];
        piVar17 = (int *)(lVar24 + 0xc);
        do {
          iVar10 = *piVar17;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar3) {
            *piVar17 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar24 + 0x18) = 0;
          (**(code **)(*plVar23 + 0x20))(plVar23);
        }
      }
    }
  }
  if (plVar25 != (long *)0x0) {
    lVar24 = plVar25[0xb];
    piVar17 = (int *)(lVar24 + 0xc);
    do {
      iVar10 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar25 + 0x20))(plVar25);
    }
  }
  if (plVar22 != (long *)0x0) {
    lVar24 = plVar22[0xb];
    piVar17 = (int *)(lVar24 + 0xc);
    do {
      iVar10 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
  if (plVar21 == (long *)0x0) goto LAB_01c71878;
  lVar24 = plVar21[0xb];
  piVar17 = (int *)(lVar24 + 0xc);
  do {
    iVar10 = *piVar17;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
    if (bVar3) {
      *piVar17 = iVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar10 + -1 != 0) goto LAB_01c71878;
  *(undefined8 *)(lVar24 + 0x18) = 0;
  pcVar18 = *(code **)(*plVar21 + 0x20);
  goto LAB_01c71a44;
  while (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0) {
LAB_01c7133c:
    if (plVar21[1] == 0x1e) {
      if ((int)plVar21[2] == 0x1e) goto LAB_01c71354;
    }
    else if ((plVar21[1] & uVar16 - 1) != uVar20) break;
  }
LAB_01c71c48:
  lVar24 = param_1[1];
  local_88 = (long *)FUN_01894270(local_78,lVar24);
  if (local_88 != (long *)0x0) {
    lVar15 = local_88[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01c71f78;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar14;
    }
    piVar17 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = *piVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_90 = (long *)FUN_01894fa8(local_78,lVar24);
  if (local_90 != (long *)0x0) {
    lVar24 = local_90[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01c71f78;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar14;
    }
    piVar17 = (int *)(lVar24 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = *piVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar21 = local_88;
  if ((uVar13 & 1) != 0) {
    local_98 = (long *)*param_2;
    if (local_98 == (long *)0x0) {
      plVar22 = (long *)0x0;
    }
    else {
      lVar24 = local_98[0xb];
      if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01c71f78;
      if (*(long *)(lVar24 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
        *(undefined8 *)(lVar24 + 0x10) = uVar14;
      }
      piVar17 = (int *)(lVar24 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = *piVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar22 = local_98;
    }
    local_78[0] = puVar12;
    FUN_01c73b14(plVar21 + 0xd,local_78,&local_98);
    if (plVar22 != (long *)0x0) {
      lVar24 = plVar22[0xb];
      piVar17 = (int *)(lVar24 + 0xc);
      do {
        iVar10 = *piVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar24 + 0x18) = 0;
        (**(code **)(*plVar22 + 0x20))(plVar22);
      }
    }
    FUN_01c74280(param_1 + 0xd,&local_7c,&local_88);
  }
  puVar7 = PTR_DAT_043794c0;
  puVar6 = PTR_DAT_043794b0;
  lVar24 = *(long *)(*param_2 + 0x1a8);
  if ((lVar24 == 0) || (*(int *)(lVar24 + 0xc) == 0)) {
LAB_01c71d84:
    plVar21 = (long *)0x0;
  }
  else {
    piVar17 = (int *)(lVar24 + 0xc);
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
      if (puVar12 == (undefined8 *)0x0) goto LAB_01c71d84;
      while (puVar12 != (undefined8 *)PTR_DAT_043794b8) {
        puVar12 = (undefined8 *)*puVar12;
        plVar21 = (long *)0x0;
        if (puVar12 == (undefined8 *)0x0) goto LAB_01c71d88;
      }
      iVar11 = *piVar17;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar21 = (long *)0x0;
          if (*(long *)(lVar24 + 0x18) != 0) {
            plVar21 = (long *)(*(long *)(lVar24 + 0x18) + -0x50);
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
LAB_01c71d88:
  (**(code **)(*plVar21 + 0x10))(local_78,plVar21);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar12 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar17 = (int *)(local_78[0] + 1);
    do {
      iVar10 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar10 + -1;
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
    piVar17 = (int *)(local_a8 + 1);
    puVar28 = (undefined8 *)*local_a8;
    do {
      iVar10 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar10 + -1;
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
  if (plVar21 != (long *)0x0) {
    lVar24 = plVar21[0xb];
    piVar17 = (int *)(lVar24 + 0xc);
    do {
      iVar10 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  plVar21 = local_90;
  local_b0 = (long *)*param_2;
  if (local_b0 == (long *)0x0) {
    plVar22 = (long *)0x0;
  }
  else {
    lVar24 = local_b0[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) {
LAB_01c71f78:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar14;
    }
    piVar17 = (int *)(lVar24 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = *piVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar22 = local_b0;
  }
  local_78[0] = puVar28;
  FUN_01c74684(plVar21 + 0xd,local_78,&local_b0);
  if (plVar22 != (long *)0x0) {
    lVar24 = plVar22[0xb];
    piVar17 = (int *)(lVar24 + 0xc);
    do {
      iVar10 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
  FUN_01c74df0(plVar25,&local_7c,&local_90);
  plVar21 = local_88;
  if (local_90 != (long *)0x0) {
    lVar24 = local_90[0xb];
    piVar17 = (int *)(lVar24 + 0xc);
    do {
      iVar10 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
      plVar21 = local_88;
    }
  }
  local_88 = plVar21;
  if (plVar21 != (long *)0x0) {
    lVar24 = plVar21[0xb];
    piVar17 = (int *)(lVar24 + 0xc);
    do {
      iVar10 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      pcVar18 = *(code **)(*plVar21 + 0x20);
LAB_01c71a44:
      (*pcVar18)(plVar21);
    }
  }
LAB_01c71878:
  lVar24 = *(long *)(lVar26 + 8);
  piVar17 = (int *)(lVar24 + 0xc);
  do {
    iVar10 = *piVar17;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
    if (bVar3) {
      *piVar17 = iVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar24 + 0x18) = 0;
    (**(code **)(*(long *)(lVar26 + -0x50) + 0x20))();
  }
  return;
}


