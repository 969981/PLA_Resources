/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cfe610; name: FUN_01cfe610
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01cfe610(long param_1,long *param_2,long *param_3)

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
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  int *piVar17;
  code *pcVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  long lVar28;
  long *plVar29;
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
  lVar28 = *param_3;
  if (lVar28 == 0) {
    return;
  }
  if (*(int *)(lVar28 + 0xc) == 0) {
    return;
  }
  piVar17 = (int *)(lVar28 + 0xc);
  iVar11 = *(int *)(lVar28 + 0xc);
  do {
    plVar23 = *(long **)(lVar28 + 0x10);
    if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
          uVar27 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar27;
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
    iVar10 = *piVar17;
    if (iVar10 == iVar11) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar28 = *(long *)(lVar28 + 0x18);
        if (lVar28 == 0) {
          return;
        }
        puVar12 = (undefined8 *)FUN_0183680c();
        local_7c = 0x25;
        uVar13 = FUN_01833e7c(param_1,puVar12);
        uVar16 = *(ulong *)(param_1 + 0x140);
        plVar23 = (long *)(param_1 + 0x138);
        if (uVar16 == 0) goto LAB_01cff0a4;
        uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
        uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
        uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar19 < 2) {
          uVar20 = (ulong)((uint)uVar16 - 1) & 0x25;
        }
        else {
          uVar20 = 0x25;
          if (uVar16 < 0x26) {
            uVar1 = (uint)uVar16 & 0xff;
            uVar4 = 0;
            if ((uVar16 & 0xff) != 0) {
              uVar4 = 0x25 / uVar1;
            }
            uVar20 = (ulong)(0x25 - uVar4 * uVar1);
          }
        }
        plVar21 = *(long **)(*plVar23 + uVar20 * 8);
        if ((plVar21 == (long *)0x0) || (plVar21 = (long *)*plVar21, plVar21 == (long *)0x0))
        goto LAB_01cff0a4;
        if (1 < uVar19) break;
        goto LAB_01cfe7c0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar10;
    if (iVar10 == 0) {
      return;
    }
  } while( true );
  do {
    uVar19 = plVar21[1];
    if (uVar19 == 0x25) {
      if ((int)plVar21[2] == 0x25) goto LAB_01cfe7d8;
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
  goto LAB_01cff0a4;
LAB_01cfe894:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    lVar25 = plVar21[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01cff420;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar27 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar27;
    }
    piVar17 = (int *)(lVar25 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = *piVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar16 = *(ulong *)(param_1 + 0xd8);
  if (uVar16 != 0) {
    uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = (ulong)((uint)uVar16 - 1) & 0x25;
    }
    else {
      uVar20 = 0x25;
      if (uVar16 < 0x26) {
        uVar1 = (uint)uVar16 & 0xff;
        uVar4 = 0;
        if ((uVar16 & 0xff) != 0) {
          uVar4 = 0x25 / uVar1;
        }
        uVar20 = (ulong)(0x25 - uVar4 * uVar1);
      }
    }
    plVar22 = *(long **)(*(long *)(param_1 + 0xd0) + uVar20 * 8);
    if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar22[1] == 0x25) {
            if ((int)plVar22[2] == 0x25) goto LAB_01cfe990;
          }
          else if ((plVar22[1] & uVar16 - 1) != uVar20) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar22[1];
          if (uVar19 == 0x25) {
            if ((int)plVar22[2] == 0x25) goto LAB_01cfe990;
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
  goto LAB_01cff41c;
LAB_01cfe990:
  plVar22 = (long *)plVar22[3];
  if (plVar22 != (long *)0x0) {
    lVar25 = plVar22[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01cff420;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar27 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar27;
    }
    piVar17 = (int *)(lVar25 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = *piVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar16 = *(ulong *)(param_1 + 0x140);
  if (uVar16 != 0) {
    uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = (ulong)((uint)uVar16 - 1) & 0x25;
    }
    else {
      uVar20 = 0x25;
      if (uVar16 < 0x26) {
        uVar1 = (uint)uVar16 & 0xff;
        uVar4 = 0;
        if ((uVar16 & 0xff) != 0) {
          uVar4 = 0x25 / uVar1;
        }
        uVar20 = (ulong)(0x25 - uVar4 * uVar1);
      }
    }
    plVar23 = *(long **)(*plVar23 + uVar20 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar23[1] == 0x25) {
            if ((int)plVar23[2] == 0x25) goto LAB_01cfea8c;
          }
          else if ((plVar23[1] & uVar16 - 1) != uVar20) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar23[1];
          if (uVar19 == 0x25) {
            if ((int)plVar23[2] == 0x25) goto LAB_01cfea8c;
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
  goto LAB_01cff41c;
LAB_01cfea8c:
  plVar23 = (long *)plVar23[3];
  if (plVar23 != (long *)0x0) {
    lVar25 = plVar23[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01cff420;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar27 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar27;
    }
    piVar17 = (int *)(lVar25 + 0xc);
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
    lVar25 = FUN_01d00ed4(plVar21 + 10);
    local_b8 = (long *)*param_2;
    if (local_b8 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      lVar24 = local_b8[0xb];
      if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01cff420;
      if (*(long *)(lVar24 + 0x10) == 0) {
        uVar27 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
        *(undefined8 *)(lVar24 + 0x10) = uVar27;
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
      plVar14 = local_b8;
    }
    local_78[0] = puVar12;
    FUN_01d012f4(lVar25 + 0x68,local_78,&local_b8);
    if (plVar14 != (long *)0x0) {
      lVar25 = plVar14[0xb];
      piVar17 = (int *)(lVar25 + 0xc);
      do {
        iVar11 = *piVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
  }
  plVar14 = (long *)(**(code **)plVar23[10])(plVar23 + 10);
  FUN_01d01220();
  for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
    if (plVar14 == (long *)PTR_DAT_04381e20) {
      plVar14 = plVar23;
      goto LAB_01cfeb94;
    }
  }
  plVar14 = (long *)0x0;
LAB_01cfeb94:
  lVar25 = *(long *)(*param_2 + 0x1a8);
  if ((lVar25 == 0) || (*(int *)(lVar25 + 0xc) == 0)) {
LAB_01cfeba0:
    plVar29 = (long *)0x0;
  }
  else {
    piVar17 = (int *)(lVar25 + 0xc);
    iVar11 = *(int *)(lVar25 + 0xc);
    do {
      local_d8 = *(undefined8 **)(lVar25 + 0x10);
      if (((*PTR_DAT_043794b0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar10 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar10 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar27 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar27;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
        __cxa_guard_release(PTR_DAT_043794b0);
      }
      if (local_d8 == (undefined8 *)0x0) goto LAB_01cfeba0;
      while (local_d8 != (undefined8 *)PTR_DAT_043794b8) {
        plVar29 = (long *)0x0;
        local_d8 = (undefined8 *)*local_d8;
        if (local_d8 == (undefined8 *)0x0) goto LAB_01cfeba4;
      }
      iVar10 = *piVar17;
      if (iVar10 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar29 = (long *)0x0;
          if (*(long *)(lVar25 + 0x18) != 0) {
            plVar29 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar29 = (long *)0x0;
      iVar11 = iVar10;
    } while (iVar10 != 0);
  }
LAB_01cfeba4:
  (**(code **)(*plVar29 + 0x10))(local_78,plVar29);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar12 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar17 = (int *)(local_78[0] + 1);
    do {
      iVar11 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_68 = *puVar12;
      FUN_02a44274(lVar25 + 0xd8,&local_68);
    }
  }
  puVar12 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    puVar26 = (undefined8 *)0x0;
  }
  else {
    piVar17 = (int *)(local_a8 + 1);
    puVar26 = (undefined8 *)*local_a8;
    do {
      iVar11 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_78[0] = (undefined8 *)*puVar12;
      FUN_02a44274(lVar25 + 0xd8,local_78);
    }
  }
  if (plVar29 != (long *)0x0) {
    lVar25 = plVar29[0xb];
    piVar17 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar29 + 0x20))(plVar29);
    }
  }
  local_c0 = (long *)*param_2;
  if (local_c0 == (long *)0x0) {
    plVar29 = (long *)0x0;
  }
  else {
    lVar25 = local_c0[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01cff420;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar27 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar27;
    }
    piVar17 = (int *)(lVar25 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = *piVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar29 = local_c0;
  }
  local_78[0] = puVar26;
  FUN_01d01e94(plVar14 + 0xd,local_78,&local_c0);
  if (plVar29 != (long *)0x0) {
    lVar25 = plVar29[0xb];
    piVar17 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar29 + 0x20))(plVar29);
    }
  }
  puVar12 = (undefined8 *)FUN_01836804((long *)(lVar28 + -0x50));
  uVar13 = FUN_01833e7c(param_1,puVar12);
  if ((uVar13 & 1) != 0) {
    lVar25 = FUN_01d00ed4(plVar22 + 10);
    local_78[0] = puVar12;
    lVar24 = FUN_01d02a34(lVar25 + 0x68,local_78);
    if (lVar24 == 0) {
      local_c8 = (long *)*param_2;
      if (local_c8 == (long *)0x0) {
        plVar14 = (long *)0x0;
      }
      else {
        lVar24 = local_c8[0xb];
        if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01cff420;
        if (*(long *)(lVar24 + 0x10) == 0) {
          uVar27 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
          *(undefined8 *)(lVar24 + 0x10) = uVar27;
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
        plVar14 = local_c8;
      }
      local_78[0] = puVar12;
      FUN_01d012f4(lVar25 + 0x68,local_78,&local_c8);
      if (plVar14 != (long *)0x0) {
        lVar25 = plVar14[0xb];
        piVar17 = (int *)(lVar25 + 0xc);
        do {
          iVar11 = *piVar17;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar3) {
            *piVar17 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar25 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
    }
  }
  if (plVar23 != (long *)0x0) {
    lVar25 = plVar23[0xb];
    piVar17 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  if (plVar22 != (long *)0x0) {
    lVar25 = plVar22[0xb];
    piVar17 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
  if (plVar21 == (long *)0x0) goto LAB_01cfedc4;
  lVar25 = plVar21[0xb];
  piVar17 = (int *)(lVar25 + 0xc);
  do {
    iVar11 = *piVar17;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
    if (bVar3) {
      *piVar17 = iVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar11 + -1 != 0) goto LAB_01cfedc4;
  *(undefined8 *)(lVar25 + 0x18) = 0;
  pcVar18 = *(code **)(*plVar21 + 0x20);
  goto LAB_01cfef10;
  while (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0) {
LAB_01cfe7c0:
    if (plVar21[1] == 0x25) {
      if ((int)plVar21[2] == 0x25) goto LAB_01cfe7d8;
    }
    else if ((plVar21[1] & uVar16 - 1) != uVar20) break;
  }
LAB_01cff0a4:
  uVar27 = *(undefined8 *)(param_1 + 8);
  local_88 = (long *)FUN_018a4d48(local_78,uVar27);
  if (local_88 != (long *)0x0) {
    lVar25 = local_88[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01cff420;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar15;
    }
    piVar17 = (int *)(lVar25 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = *piVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_90 = (long *)FUN_018a5a74(local_78,uVar27);
  if (local_90 != (long *)0x0) {
    lVar25 = local_90[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01cff420;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar27 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar27;
    }
    piVar17 = (int *)(lVar25 + 0xc);
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
      lVar25 = local_98[0xb];
      if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01cff420;
      if (*(long *)(lVar25 + 0x10) == 0) {
        uVar27 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
        *(undefined8 *)(lVar25 + 0x10) = uVar27;
      }
      piVar17 = (int *)(lVar25 + 0xc);
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
    FUN_01d012f4(plVar21 + 0xd,local_78,&local_98);
    if (plVar22 != (long *)0x0) {
      lVar25 = plVar22[0xb];
      piVar17 = (int *)(lVar25 + 0xc);
      do {
        iVar11 = *piVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*plVar22 + 0x20))(plVar22);
      }
    }
    FUN_01d01a8c(param_1 + 0x68,&local_7c,&local_88);
  }
  puVar7 = PTR_DAT_043794c0;
  puVar6 = PTR_DAT_043794b0;
  lVar25 = *(long *)(*param_2 + 0x1a8);
  if ((lVar25 == 0) || (*(int *)(lVar25 + 0xc) == 0)) {
LAB_01cff1e0:
    plVar21 = (long *)0x0;
  }
  else {
    piVar17 = (int *)(lVar25 + 0xc);
    iVar11 = *(int *)(lVar25 + 0xc);
    do {
      puVar12 = *(undefined8 **)(lVar25 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar27 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar27;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
        __cxa_guard_release(puVar6);
      }
      if (puVar12 == (undefined8 *)0x0) goto LAB_01cff1e0;
      while (puVar12 != (undefined8 *)PTR_DAT_043794b8) {
        puVar12 = (undefined8 *)*puVar12;
        plVar21 = (long *)0x0;
        if (puVar12 == (undefined8 *)0x0) goto LAB_01cff1e4;
      }
      iVar10 = *piVar17;
      if (iVar10 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar21 = (long *)0x0;
          if (*(long *)(lVar25 + 0x18) != 0) {
            plVar21 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar21 = (long *)0x0;
      iVar11 = iVar10;
    } while (iVar10 != 0);
  }
LAB_01cff1e4:
  (**(code **)(*plVar21 + 0x10))(local_78,plVar21);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar12 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar17 = (int *)(local_78[0] + 1);
    do {
      iVar11 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_68 = *puVar12;
      FUN_02a44274(lVar25 + 0xd8,&local_68);
    }
  }
  puVar12 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    puVar26 = (undefined8 *)0x0;
  }
  else {
    piVar17 = (int *)(local_a8 + 1);
    puVar26 = (undefined8 *)*local_a8;
    do {
      iVar11 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_78[0] = (undefined8 *)*puVar12;
      FUN_02a44274(lVar25 + 0xd8,local_78);
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar25 = plVar21[0xb];
    piVar17 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  plVar21 = local_90;
  local_b0 = (long *)*param_2;
  if (local_b0 == (long *)0x0) {
    plVar22 = (long *)0x0;
  }
  else {
    lVar25 = local_b0[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01cff420;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar27 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar27;
    }
    piVar17 = (int *)(lVar25 + 0xc);
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
  local_78[0] = puVar26;
  FUN_01d01e94(plVar21 + 0xd,local_78,&local_b0);
  if (plVar22 != (long *)0x0) {
    lVar25 = plVar22[0xb];
    piVar17 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
  FUN_01d0262c(plVar23,&local_7c,&local_90);
  plVar21 = local_88;
  if (local_90 != (long *)0x0) {
    lVar25 = local_90[0xb];
    piVar17 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
      plVar21 = local_88;
    }
  }
  local_88 = plVar21;
  if (plVar21 != (long *)0x0) {
    lVar25 = plVar21[0xb];
    piVar17 = (int *)(lVar25 + 0xc);
    do {
      iVar11 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      pcVar18 = *(code **)(*plVar21 + 0x20);
LAB_01cfef10:
      (*pcVar18)(plVar21);
    }
  }
LAB_01cfedc4:
  lVar25 = *(long *)(lVar28 + 8);
  piVar17 = (int *)(lVar25 + 0xc);
  do {
    iVar11 = *piVar17;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
    if (bVar3) {
      *piVar17 = iVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar25 + 0x18) = 0;
    (**(code **)(*(long *)(lVar28 + -0x50) + 0x20))();
  }
  return;
LAB_01cfe7d8:
  uVar16 = *(ulong *)(param_1 + 0x70);
  if (uVar16 != 0) {
    uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = (ulong)((uint)uVar16 - 1) & 0x25;
    }
    else {
      uVar20 = 0x25;
      if (uVar16 < 0x26) {
        uVar1 = (uint)uVar16 & 0xff;
        uVar4 = 0;
        if ((uVar16 & 0xff) != 0) {
          uVar4 = 0x25 / uVar1;
        }
        uVar20 = (ulong)(0x25 - uVar4 * uVar1);
      }
    }
    plVar21 = *(long **)(*(long *)(param_1 + 0x68) + uVar20 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar21[1] == 0x25) {
            if ((int)plVar21[2] == 0x25) goto LAB_01cfe894;
          }
          else if ((plVar21[1] & uVar16 - 1) != uVar20) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar21[1];
          if (uVar19 == 0x25) {
            if ((int)plVar21[2] == 0x25) goto LAB_01cfe894;
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
      }
    }
  }
LAB_01cff41c:
  FUN_01d00980();
LAB_01cff420:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


