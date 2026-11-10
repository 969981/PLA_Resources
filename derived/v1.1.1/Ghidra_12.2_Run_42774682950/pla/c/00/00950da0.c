/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00950da0; name: FUN_00950da0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00950da0(long param_1)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *pcVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  undefined8 *puVar25;
  long *plVar26;
  long *local_128;
  long *local_120;
  long *local_118;
  long *local_110;
  code *local_108;
  undefined8 local_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  
  puVar13 = PTR_DAT_043796e8;
  puVar12 = PTR_DAT_043796e0;
  puVar11 = PTR_DAT_043794d8;
  puVar10 = PTR_DAT_043794d0;
  lVar24 = *(long *)(param_1 + 0xd8);
  if ((lVar24 == 0) || (*(int *)(lVar24 + 0xc) == 0)) {
LAB_00950dcc:
    plVar22 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar24 + 0xc);
    iVar16 = *(int *)(lVar24 + 0xc);
    do {
      puVar20 = *(undefined8 **)(lVar24 + 0x10);
      if (((*puVar12 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar12), iVar15 != 0)) {
        if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
          uVar18 = FUN_0087f8f0();
          *(undefined8 *)puVar11 = uVar18;
          __cxa_guard_release(puVar10);
        }
        *(undefined **)puVar13 = puVar11;
        __cxa_guard_release(puVar12);
      }
      if (puVar20 == (undefined8 *)0x0) goto LAB_00950dcc;
      while (puVar20 != (undefined8 *)puVar13) {
        puVar20 = (undefined8 *)*puVar20;
        plVar22 = (long *)0x0;
        if (puVar20 == (undefined8 *)0x0) goto LAB_00950dd0;
      }
      iVar15 = *piVar1;
      if (iVar15 == iVar16) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          plVar22 = (long *)0x0;
          if (*(long *)(lVar24 + 0x18) != 0) {
            plVar22 = (long *)(*(long *)(lVar24 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar22 = (long *)0x0;
      iVar16 = iVar15;
    } while (iVar15 != 0);
  }
LAB_00950dd0:
  FUN_0199d14c(&local_110,plVar22);
  if (local_110 == (long *)0x0) {
    local_118 = (long *)0x0;
LAB_00950de8:
    if (plVar22 == (long *)0x0) goto LAB_00950e08;
LAB_00950dec:
    lVar24 = plVar22[0xb];
    piVar1 = (int *)(lVar24 + 0xc);
    do {
      iVar16 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 + -1 != 0) goto LAB_00950e08;
    *(undefined8 *)(lVar24 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
    if (local_118 != (long *)0x0) goto LAB_00950e10;
LAB_00950f18:
    lVar24 = *(long *)(param_1 + 0xd8);
    pbVar8 = PTR_DAT_043794d0;
    puVar20 = (undefined8 *)PTR_DAT_043794d8;
    pbVar9 = PTR_DAT_043796e0;
    puVar21 = (undefined8 *)PTR_DAT_043796e8;
  }
  else {
    FUN_00959d38(&local_118);
    plVar23 = local_110;
    if (local_110 == (long *)0x0) goto LAB_00950de8;
    plVar26 = local_110 + 1;
    do {
      iVar16 = (int)*plVar26 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar7) {
        *(int *)plVar26 = iVar16;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 != 0) goto LAB_00950de8;
    local_110[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar24 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar24;
    local_88 = *plVar23;
    FUN_02a44274(lVar24 + 0xd8,&local_88);
    if (plVar22 != (long *)0x0) goto LAB_00950dec;
LAB_00950e08:
    if (local_118 == (long *)0x0) goto LAB_00950f18;
LAB_00950e10:
    plVar22 = local_118;
    uVar17 = FUN_00ab0c78();
    iVar16 = 2;
    if ((uVar17 & 1) == 0) {
      iVar16 = 5;
    }
    if ((int)plVar22[0xe] != iVar16) {
      lVar19 = plVar22[0x21];
      uVar17 = *(ulong *)(lVar19 + 0xa8);
      lVar24 = *(long *)(lVar19 + 0x70);
      if (*(long *)(lVar19 + 0x78) != lVar24) {
        uVar3 = *(long *)(lVar19 + 0xb0) + uVar17;
        puVar20 = (undefined8 *)(*(long *)(lVar24 + (uVar17 / 0x38) * 8) + (uVar17 % 0x38) * 0x48);
        puVar21 = (undefined8 *)(*(long *)(lVar24 + (uVar3 / 0x38) * 8) + (uVar3 % 0x38) * 0x48);
        if (puVar21 != puVar20) {
          plVar23 = (long *)(lVar24 + (uVar17 / 0x38) * 8);
          do {
            while( true ) {
              puVar20[7] = 0;
              puVar20[8] = 0;
              puVar20[5] = 0;
              puVar20[6] = 0;
              puVar20[3] = 0;
              puVar20[4] = 0;
              puVar20[1] = 0;
              puVar20[2] = 0;
              puVar25 = puVar20 + 9;
              *puVar20 = 0;
              if ((long)puVar25 - *plVar23 == 0xfc0) break;
              puVar20 = puVar25;
              if (puVar21 == puVar25) goto LAB_00950ed4;
            }
            plVar23 = plVar23 + 1;
            puVar20 = (undefined8 *)*plVar23;
          } while (puVar21 != puVar20);
        }
      }
LAB_00950ed4:
      FUN_02604e3c(plVar22,1);
      *(undefined4 *)(plVar22 + 0x2f) = 0;
      plVar22[0x30] = plVar22[0x30] & 0xfffffffffffffff8;
    }
    *(int *)(plVar22 + 0xe) = iVar16;
    if (local_118 == (long *)0x0) goto LAB_00950f18;
    lVar24 = local_118[0xb];
    piVar1 = (int *)(lVar24 + 0xc);
    do {
      iVar16 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 + -1 != 0) goto LAB_00950f18;
    *(undefined8 *)(lVar24 + 0x18) = 0;
    (**(code **)(*local_118 + 0x20))();
    lVar24 = *(long *)(param_1 + 0xd8);
    pbVar8 = PTR_DAT_043794d0;
    puVar20 = (undefined8 *)PTR_DAT_043794d8;
    pbVar9 = PTR_DAT_043796e0;
    puVar21 = (undefined8 *)PTR_DAT_043796e8;
  }
  PTR_DAT_043794d0 = pbVar8;
  PTR_DAT_043794d8 = (undefined *)puVar20;
  PTR_DAT_043796e0 = pbVar9;
  PTR_DAT_043796e8 = (undefined *)puVar21;
  if ((lVar24 != 0) && (*(int *)(lVar24 + 0xc) != 0)) {
    piVar1 = (int *)(lVar24 + 0xc);
    iVar16 = *(int *)(lVar24 + 0xc);
    do {
      puVar25 = *(undefined8 **)(lVar24 + 0x10);
      if (((*pbVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar9), iVar15 != 0)) {
        if (((*pbVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar8), iVar15 != 0)) {
          uVar18 = FUN_0087f8f0();
          *puVar20 = uVar18;
          __cxa_guard_release(pbVar8);
        }
        *puVar21 = puVar20;
        __cxa_guard_release(pbVar9);
      }
      while( true ) {
        if (puVar25 == (undefined8 *)0x0) goto LAB_00950f20;
        if (puVar25 == puVar21) break;
        puVar25 = (undefined8 *)*puVar25;
      }
      iVar15 = *piVar1;
      if (iVar15 == iVar16) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_009519b4;
        lVar24 = *(long *)(lVar24 + 0x18);
        if (lVar24 != 0) {
          plVar22 = *(long **)(lVar24 + 0x48);
          if (plVar22 == (long *)0x0) goto LAB_00951a34;
          lVar19 = plVar22[0xb];
          if (*(undefined8 **)(lVar19 + 0x18) != (undefined8 *)0x0) {
            if (*(long *)(lVar19 + 0x10) == 0) {
              uVar18 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
              *(undefined8 *)(lVar19 + 0x10) = uVar18;
            }
            piVar1 = (int *)(lVar19 + 0xc);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = *piVar1 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_00951a34:
            lVar19 = *(long *)(lVar24 + 8);
            piVar1 = (int *)(lVar19 + 0xc);
            do {
              iVar16 = *piVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar16 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar16 + -1 == 0) {
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*(long *)(lVar24 + -0x50) + 0x20))();
            }
            goto joined_r0x00951a84;
          }
          goto LAB_00951a5c;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_009519b4:
      iVar16 = iVar15;
    } while (iVar15 != 0);
  }
LAB_00950f20:
  plVar22 = _DAT_00000098;
  if (_DAT_00000098 == (long *)0x0) {
joined_r0x00951a84:
    if (plVar22 != (long *)0x0) goto LAB_00950f64;
LAB_00950fbc:
    lVar24 = *(long *)(param_1 + 0xd8);
    pbVar8 = PTR_DAT_043794d0;
    puVar20 = (undefined8 *)PTR_DAT_043794d8;
    pbVar9 = PTR_DAT_043796e0;
    puVar21 = (undefined8 *)PTR_DAT_043796e8;
  }
  else {
    lVar24 = _DAT_00000098[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) {
LAB_00951a5c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar18;
    }
    piVar1 = (int *)(lVar24 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_00950f64:
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    FUN_00cf9db0(&local_110,plVar22 + 0xf1);
    if (local_110 == (long *)0x0) {
      local_118 = (long *)0x0;
    }
    else {
      FUN_00959eac(&local_118);
      plVar23 = local_110;
      if (local_110 != (long *)0x0) {
        plVar26 = local_110 + 1;
        do {
          iVar16 = (int)*plVar26 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar7) {
            *(int *)plVar26 = iVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 == 0) {
          local_110[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar24 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar24;
          local_88 = *plVar23;
          FUN_02a44274(lVar24 + 0xd8,&local_88);
        }
      }
    }
    if (local_118 != (long *)0x0) {
      local_110 = (long *)0x0;
      local_108 = (code *)0x0;
      FUN_00ac3fa4(&local_110,local_118 + 0x49);
      if (local_110 == (long *)0x0) {
        local_120 = (long *)0x0;
      }
      else {
        FUN_0095a0ac(&local_120);
        plVar23 = local_110;
        if (local_110 != (long *)0x0) {
          plVar26 = local_110 + 1;
          do {
            iVar16 = (int)*plVar26 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar7) {
              *(int *)plVar26 = iVar16;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 == 0) {
            local_110[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar24 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar24;
            local_88 = *plVar23;
            FUN_02a44274(lVar24 + 0xd8,&local_88);
          }
        }
      }
      if (local_120 != (long *)0x0) {
        lVar24 = local_120[0xb];
        piVar1 = (int *)(lVar24 + 0xc);
        *(undefined1 *)((long)local_120 + 0xc61) = 0;
        do {
          iVar16 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar16 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar24 + 0x18) = 0;
          (**(code **)(*local_120 + 0x20))();
        }
      }
      if (local_118 != (long *)0x0) {
        lVar24 = local_118[0xb];
        piVar1 = (int *)(lVar24 + 0xc);
        do {
          iVar16 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar16 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar24 + 0x18) = 0;
          (**(code **)(*local_118 + 0x20))();
        }
      }
    }
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    FUN_01b0043c(&local_110,plVar22 + 0xcd);
    plVar23 = local_110;
    puVar13 = PTR_DAT_04379e70;
    puVar12 = PTR_DAT_04379e68;
    puVar11 = PTR_DAT_043795e0;
    puVar10 = PTR_DAT_043794d0;
    if (local_110 != (long *)0x0) {
      if (*(int *)((long)local_110 + 0xc) != 0) {
        piVar1 = (int *)((long)local_110 + 0xc);
        iVar16 = *(int *)((long)local_110 + 0xc);
        do {
          plVar26 = (long *)plVar23[2];
          if (((*puVar12 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar12), iVar15 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar15 != 0)) {
              if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
                uVar18 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar18;
                __cxa_guard_release(puVar10);
              }
              *(undefined **)puVar11 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar13 = puVar11;
            __cxa_guard_release(puVar12);
          }
          while( true ) {
            if (plVar26 == (long *)0x0) goto LAB_00951b70;
            if (plVar26 == (long *)puVar13) break;
            plVar26 = (long *)*plVar26;
          }
          iVar15 = *piVar1;
          if (iVar15 == iVar16) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar16 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              lVar24 = plVar23[3];
              plVar23 = (long *)0x0;
              plVar26 = local_110;
              if (lVar24 != 0) {
                plVar23 = (long *)(lVar24 + -0x50);
              }
              goto joined_r0x00951b3c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar16 = iVar15;
        } while (iVar15 != 0);
      }
LAB_00951b70:
      plVar23 = (long *)0x0;
      plVar26 = local_110;
joined_r0x00951b3c:
      local_110 = plVar26;
      if (plVar26 != (long *)0x0) {
        plVar2 = plVar26 + 1;
        do {
          iVar16 = (int)*plVar2 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *(int *)plVar2 = iVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 == 0) {
          plVar26[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar24 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar24;
          local_88 = *plVar26;
          FUN_02a44274(lVar24 + 0xd8,&local_88);
        }
      }
      if (plVar23 != (long *)0x0) {
        local_110 = (long *)0x2;
        FUN_025eb18c(plVar23,&local_110);
        lVar24 = plVar23[0xb];
        piVar1 = (int *)(lVar24 + 0xc);
        do {
          iVar16 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar16 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar24 + 0x18) = 0;
          (**(code **)(*plVar23 + 0x20))(plVar23);
        }
      }
    }
    lVar24 = plVar22[0xb];
    piVar1 = (int *)(lVar24 + 0xc);
    do {
      iVar16 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 + -1 != 0) goto LAB_00950fbc;
    *(undefined8 *)(lVar24 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
    lVar24 = *(long *)(param_1 + 0xd8);
    pbVar8 = PTR_DAT_043794d0;
    puVar20 = (undefined8 *)PTR_DAT_043794d8;
    pbVar9 = PTR_DAT_043796e0;
    puVar21 = (undefined8 *)PTR_DAT_043796e8;
  }
  PTR_DAT_043794d0 = pbVar8;
  PTR_DAT_043794d8 = (undefined *)puVar20;
  PTR_DAT_043796e0 = pbVar9;
  PTR_DAT_043796e8 = (undefined *)puVar21;
  if ((lVar24 != 0) && (*(int *)(lVar24 + 0xc) != 0)) {
    piVar1 = (int *)(lVar24 + 0xc);
    iVar16 = *(int *)(lVar24 + 0xc);
    do {
      puVar25 = *(undefined8 **)(lVar24 + 0x10);
      if (((*pbVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar9), iVar15 != 0)) {
        if (((*pbVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar8), iVar15 != 0)) {
          uVar18 = FUN_0087f8f0();
          *puVar20 = uVar18;
          __cxa_guard_release(pbVar8);
        }
        *puVar21 = puVar20;
        __cxa_guard_release(pbVar9);
      }
      while( true ) {
        if (puVar25 == (undefined8 *)0x0) goto LAB_00950fc4;
        if (puVar25 == puVar21) break;
        puVar25 = (undefined8 *)*puVar25;
      }
      iVar15 = *piVar1;
      if (iVar15 == iVar16) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_00951cb8;
        lVar24 = *(long *)(lVar24 + 0x18);
        if (lVar24 != 0) {
          plVar22 = (long *)(lVar24 + -0x50);
          FUN_0199ce80(&local_110,plVar22);
          if (local_110 == (long *)0x0) {
            local_118 = (long *)0x0;
          }
          else {
            FUN_0095a2ac(&local_118);
            plVar23 = local_110;
            if (local_110 != (long *)0x0) {
              plVar26 = local_110 + 1;
              do {
                iVar16 = (int)*plVar26 + -1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                if (bVar7) {
                  *(int *)plVar26 = iVar16;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar16 == 0) {
                local_110[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_88 = *plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_88);
              }
            }
          }
          if (local_118 != (long *)0x0) {
            local_110 = (long *)0x0;
            local_108 = (code *)0x0;
            FUN_00cf9db0(&local_110,local_118 + 0x15);
            if (local_110 == (long *)0x0) {
              local_120 = (long *)0x0;
            }
            else {
              FUN_00959eac(&local_120);
              plVar23 = local_110;
              if (local_110 != (long *)0x0) {
                plVar26 = local_110 + 1;
                do {
                  iVar16 = (int)*plVar26 + -1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                  if (bVar7) {
                    *(int *)plVar26 = iVar16;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar16 == 0) {
                  local_110[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_88 = *plVar23;
                  FUN_02a44274(lVar19 + 0xd8,&local_88);
                }
              }
            }
            if (local_120 != (long *)0x0) {
              FUN_00956dac(&local_128,local_120 + 0x35);
              FUN_00aae454(&local_110,&local_128);
              plVar23 = local_110;
              puVar11 = PTR_DAT_04379e80;
              puVar10 = PTR_DAT_04379e78;
              if (local_110 == (long *)0x0) {
                plVar23 = (long *)0x0;
              }
              else {
                if (*(int *)((long)local_110 + 0xc) == 0) {
LAB_009521d4:
                  plVar23 = (long *)0x0;
                  plVar26 = local_110;
                }
                else {
                  piVar1 = (int *)((long)local_110 + 0xc);
                  iVar16 = *(int *)((long)local_110 + 0xc);
                  while( true ) {
                    plVar26 = (long *)plVar23[2];
                    if (((*puVar10 & 1) == 0) &&
                       (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
                      uVar18 = FUN_0095a420();
                      *(undefined8 *)puVar11 = uVar18;
                      __cxa_guard_release(puVar10);
                      if (plVar26 != (long *)0x0) goto LAB_00952108;
                      goto LAB_009521d4;
                    }
                    while( true ) {
                      if (plVar26 == (long *)0x0) goto LAB_009521d4;
LAB_00952108:
                      if (plVar26 == (long *)puVar11) break;
                      plVar26 = (long *)*plVar26;
                    }
                    iVar15 = *piVar1;
                    if (iVar15 == iVar16) break;
                    ClearExclusiveLocal();
LAB_009520f0:
                    iVar16 = iVar15;
                    if (iVar15 == 0) goto LAB_009521d4;
                  }
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar7) {
                    *piVar1 = iVar16 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 != '\0') goto LAB_009520f0;
                  lVar19 = plVar23[3];
                  plVar23 = (long *)0x0;
                  plVar26 = local_110;
                  if (lVar19 != 0) {
                    plVar23 = (long *)(lVar19 + -0x50);
                  }
                }
                local_110 = plVar26;
                if (plVar26 != (long *)0x0) {
                  plVar2 = plVar26 + 1;
                  do {
                    iVar16 = (int)*plVar2 + -1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar7) {
                      *(int *)plVar2 = iVar16;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar16 == 0) {
                    plVar26[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar19 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar19;
                    local_88 = *plVar26;
                    FUN_02a44274(lVar19 + 0xd8,&local_88);
                  }
                }
              }
              if (local_128 != (long *)0x0) {
                lVar19 = *(long *)((long)local_128 + 0x58);
                piVar1 = (int *)(lVar19 + 0xc);
                do {
                  iVar16 = *piVar1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar7) {
                    *piVar1 = iVar16 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar16 + -1 == 0) {
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  (**(code **)(*local_128 + 0x20))();
                }
              }
              if (plVar23 != (long *)0x0) {
                uVar5 = *(uint *)((long)plVar23 + 0x214);
                uVar4 = uVar5 & 0xfffffff7;
                bVar7 = (uVar5 != 0) == ((uVar5 & 0xfffffff7) != 0);
                if ((((uVar4 == uVar5) || (uVar4 != 0)) || (*(int *)((long)plVar23 + 0x21c) == 0))
                   || (*(int *)((long)plVar23 + 0x224) == 0)) {
                  if (!bVar7) goto LAB_00951e9c;
LAB_00951db8:
                  *(uint *)((long)plVar23 + 0x214) = uVar4;
                  if ((*(uint *)((long)plVar23 + 0x210) != uVar4) &&
                     (*(int *)((long)plVar23 + 0x21c) == 0)) {
                    *(uint *)((long)plVar23 + 0x210) = uVar4;
                  }
                }
                else {
                  if (!(!bVar7 || *(int *)((long)plVar23 + 0x21c) == 1)) goto LAB_00951db8;
LAB_00951e9c:
                  FUN_01bdbf3c(plVar23,uVar4);
                  *(uint *)((long)plVar23 + 0x214) = uVar4;
                }
                FUN_01bdbed8(0x3f800000,plVar23);
                lVar19 = *(long *)((long)plVar23 + 0x58);
                piVar1 = (int *)(lVar19 + 0xc);
                do {
                  iVar16 = *piVar1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar7) {
                    *piVar1 = iVar16 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar16 + -1 == 0) {
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  (**(code **)(*plVar23 + 0x20))(plVar23);
                }
              }
              if (local_120 != (long *)0x0) {
                lVar19 = local_120[0xb];
                piVar1 = (int *)(lVar19 + 0xc);
                do {
                  iVar16 = *piVar1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar7) {
                    *piVar1 = iVar16 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar16 + -1 == 0) {
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  (**(code **)(*local_120 + 0x20))();
                }
              }
            }
            if (local_118 != (long *)0x0) {
              lVar19 = local_118[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar16 = *piVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                  *piVar1 = iVar16 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar16 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*local_118 + 0x20))();
              }
            }
          }
          lVar24 = *(long *)(lVar24 + 8);
          piVar1 = (int *)(lVar24 + 0xc);
          do {
            iVar16 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar16 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(lVar24 + 0x18) = 0;
            (**(code **)(*plVar22 + 0x20))(plVar22);
          }
        }
        break;
      }
      ClearExclusiveLocal();
LAB_00951cb8:
      iVar16 = iVar15;
    } while (iVar15 != 0);
  }
LAB_00950fc4:
  local_110 = (long *)0x0;
  local_108 = (code *)0x0;
  FUN_0095e070(&local_110,param_1 + 0xe8);
  FUN_0095a500(*(long *)(param_1 + 0xa0) + 0x218,&local_110);
  plVar22 = local_110;
  if (local_110 != (long *)0x0) {
    plVar23 = local_110 + 1;
    do {
      iVar16 = (int)*plVar23 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar7) {
        *(int *)plVar23 = iVar16;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 == 0) {
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar24 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar24;
      local_88 = *plVar22;
      FUN_02a44274(lVar24 + 0xd8,&local_88);
    }
  }
  puVar13 = PTR_DAT_043796e8;
  puVar12 = PTR_DAT_043796e0;
  puVar11 = PTR_DAT_043794d8;
  puVar10 = PTR_DAT_043794d0;
  lVar24 = *(long *)(param_1 + 0xd8);
  if ((lVar24 != 0) && (*(int *)(lVar24 + 0xc) != 0)) {
    piVar1 = (int *)(lVar24 + 0xc);
    iVar16 = *(int *)(lVar24 + 0xc);
    do {
      plVar22 = *(long **)(lVar24 + 0x10);
      if (((*puVar12 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar12), iVar15 != 0)) {
        if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
          uVar18 = FUN_0087f8f0();
          *(undefined8 *)puVar11 = uVar18;
          __cxa_guard_release(puVar10);
        }
        *(undefined **)puVar13 = puVar11;
        __cxa_guard_release(puVar12);
      }
      while( true ) {
        if (plVar22 == (long *)0x0) goto LAB_0095104c;
        if (plVar22 == (long *)puVar13) break;
        plVar22 = (long *)*plVar22;
      }
      iVar15 = *piVar1;
      if (iVar15 == iVar16) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          lVar24 = *(long *)(lVar24 + 0x18);
          if (lVar24 != 0) {
            plVar23 = (long *)(lVar24 + -0x50);
            FUN_019a034c(&local_110,plVar23);
            plVar22 = local_110;
            puVar12 = PTR_DAT_04379c40;
            if (local_110 == (long *)0x0) goto LAB_0095227c;
            if (*(int *)((long)local_110 + 0xc) == 0) goto LAB_009525a4;
            piVar1 = (int *)((long)local_110 + 0xc);
            iVar16 = *(int *)((long)local_110 + 0xc);
            goto LAB_00952444;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar16 = iVar15;
    } while (iVar15 != 0);
  }
  goto LAB_0095104c;
LAB_00952444:
  do {
    plVar26 = (long *)plVar22[2];
    if (((*puVar12 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar12), iVar15 != 0)) {
      if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
        uVar18 = FUN_0087f8f0();
        *(undefined8 *)puVar11 = uVar18;
        __cxa_guard_release(puVar10);
      }
      *(undefined **)PTR_DAT_04379c48 = puVar11;
      __cxa_guard_release(puVar12);
    }
    while( true ) {
      if (plVar26 == (long *)0x0) goto LAB_009525a4;
      if (plVar26 == (long *)PTR_DAT_04379c48) break;
      plVar26 = (long *)*plVar26;
    }
    iVar15 = *piVar1;
    if (iVar15 == iVar16) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        lVar19 = plVar22[3];
        plVar22 = (long *)0x0;
        plVar26 = local_110;
        if (lVar19 != 0) {
          plVar22 = (long *)(lVar19 + -0x50);
        }
        goto joined_r0x00952490;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar16 = iVar15;
  } while (iVar15 != 0);
LAB_009525a4:
  plVar22 = (long *)0x0;
  plVar26 = local_110;
joined_r0x00952490:
  local_110 = plVar26;
  if (plVar26 != (long *)0x0) {
    plVar2 = plVar26 + 1;
    do {
      iVar16 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar16;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 == 0) {
      plVar26[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar19;
      local_88 = *plVar26;
      FUN_02a44274(lVar19 + 0xd8,&local_88);
    }
  }
  if (plVar22 != (long *)0x0) {
    *(undefined1 *)(plVar22 + 0xd) = 1;
    FUN_01e80640(*(undefined8 *)(lVar24 + 0x210));
    *(undefined1 *)(plVar22 + 0xd) = 0;
    uVar17 = FUN_018d0dc0(plVar22);
    if ((uVar17 & 1) != 0) {
      FUN_018d0e7c(plVar22,1);
    }
    lVar19 = plVar22[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar16 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
LAB_0095227c:
  FUN_019a0430(&local_110,plVar23);
  if (local_110 == (long *)0x0) {
    local_118 = (long *)0x0;
  }
  else {
    FUN_009591d8(&local_118);
    plVar22 = local_110;
    if (local_110 != (long *)0x0) {
      plVar26 = local_110 + 1;
      do {
        iVar16 = (int)*plVar26 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar7) {
          *(int *)plVar26 = iVar16;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar16 == 0) {
        local_110[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_88 = *plVar22;
        FUN_02a44274(lVar19 + 0xd8,&local_88);
      }
    }
  }
  if (local_118 != (long *)0x0) {
    uVar17 = FUN_018cee14();
    if ((uVar17 & 1) == 0) {
      FUN_018ce4a4(local_118,5);
    }
    if (local_118 != (long *)0x0) {
      lVar19 = local_118[0xb];
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        iVar16 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_118 + 0x20))();
      }
    }
  }
  lVar24 = *(long *)(lVar24 + 8);
  piVar1 = (int *)(lVar24 + 0xc);
  do {
    iVar16 = *piVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar16 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar16 + -1 == 0) {
    *(undefined8 *)(lVar24 + 0x18) = 0;
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
LAB_0095104c:
  lVar24 = *(long *)(param_1 + 0x98);
  if (*(char *)(lVar24 + 0x414) == '\0') {
LAB_009512dc:
    uVar17 = FUN_008c25f0(lVar24);
    if ((uVar17 & 1) != 0) {
      FUN_00953a58(param_1);
      goto LAB_00951144;
    }
    uVar17 = FUN_008c27a4(*(undefined8 *)(param_1 + 0x98));
    if ((uVar17 & 1) != 0) {
      FUN_00953d28(param_1);
      goto LAB_00951144;
    }
    if (*(char *)(*(long *)(param_1 + 0x98) + 0x356) != '\0') {
      FUN_00953f1c(param_1);
      goto LAB_00951144;
    }
    uVar17 = FUN_008c2ba8();
    if ((uVar17 & 1) != 0) {
      FUN_009540a4(param_1);
      goto LAB_00951144;
    }
    uVar17 = FUN_008c2c7c(*(undefined8 *)(param_1 + 0x98));
    if ((uVar17 & 1) != 0) {
      FUN_00954204(param_1);
      goto LAB_00951144;
    }
    if (*(char *)(*(long *)(param_1 + 0x98) + 0x348) == '\0') {
      if (*(char *)(*(long *)(param_1 + 0x98) + 0x354) == '\0') {
        FUN_009543f4(param_1);
      }
      else {
        FUN_00954364(param_1);
      }
      goto LAB_00951144;
    }
    local_110 = (long *)0x3ab985b3f2eeb66c;
    local_108 = (code *)0x38b63f4;
    local_100 = 0x18;
    local_f8 = (long *)0x0;
    FUN_00ab9db4(&local_110,0);
    plVar22 = local_f8;
  }
  else {
    uVar17 = FUN_008c2df0();
    if (((uVar17 & 1) == 0) &&
       (uVar17 = FUN_008c2f60(*(undefined8 *)(param_1 + 0x98)), (uVar17 & 1) == 0)) {
      uVar17 = FUN_008c25f0(*(undefined8 *)(param_1 + 0x98));
      if ((uVar17 & 1) == 0) {
        lVar24 = *(long *)(param_1 + 0x98);
        goto LAB_009512dc;
      }
      iVar16 = *(int *)(*(long *)(param_1 + 0xa0) + 0x54);
      if (((*PTR_DAT_04379c28 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      uVar18 = *(undefined8 *)PTR_DAT_04379c30;
      *(undefined8 *)PTR_DAT_04379c38 = uVar18;
      if (iVar16 == 1) {
        local_88 = -0x75506c1e4f8e303b;
        pcStack_80 = "SET_STATE_BOSS01_AREA01_END";
        local_78 = 0x1b;
      }
      else {
        local_88 = -0x58f63e02f7edb81a;
        pcStack_80 = "SET_STATE_CAUTION_BOSS_MID_OFF";
        local_78 = 0x1e;
      }
    }
    else {
      iVar16 = *(int *)(*(long *)(param_1 + 0xa0) + 0x54);
      if (((*PTR_DAT_04379c28 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      uVar18 = *(undefined8 *)PTR_DAT_04379c30;
      *(undefined8 *)PTR_DAT_04379c38 = uVar18;
      if (iVar16 == 1) {
        local_88 = -0x53af2e845fdca6da;
        pcStack_80 = "SET_STATE_VS_NUSHI_AP_0";
        local_78 = 0x17;
      }
      else {
        local_88 = 0x6750396d6ead0c05;
        pcStack_80 = "SET_STATE_VS_NUSHI_OFF";
        local_78 = 0x16;
      }
    }
    local_70 = (long *)0x0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (long *)0x0;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    FUN_02913338(uVar18,&local_88,&local_110,0,0,0);
    pcVar14 = local_108;
    if (local_108 == (code *)0x0) {
      local_108 = (code *)0x0;
      plVar22 = local_70;
    }
    else {
      local_100 = 0;
      local_f8 = (long *)0x0;
      local_110 = (long *)0x0;
      local_108 = (code *)0x0;
      (*pcVar14)(&local_f0);
      plVar22 = local_70;
    }
  }
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x20))();
  }
LAB_00951144:
  lVar24 = *(long *)(*(long *)(param_1 + 0x98) + 0x340);
  if (lVar24 != 0) {
    plVar22 = *(long **)(param_1 + 0xa0);
    if (plVar22 == (long *)0x0) {
      local_110 = (long *)0x0;
    }
    else {
      plVar23 = plVar22 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar7) {
          *(int *)plVar23 = (int)*plVar23 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar7) {
          *(int *)plVar23 = (int)*plVar23 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      lVar24 = *(long *)(*(long *)(param_1 + 0x98) + 0x340);
      local_110 = plVar22;
    }
    local_100 = 0;
    local_f8 = (long *)0x0;
    local_108 = (code *)0x0;
    FUN_009548a8(*(undefined8 *)(lVar24 + 0x80),&local_110);
    pcVar14 = local_108;
    if (local_108 != (code *)0x0) {
      plVar23 = (long *)((long)local_108 + 8);
      do {
        iVar16 = (int)*plVar23 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar7) {
          *(int *)plVar23 = iVar16;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar16 == 0) {
        *(long *)((long)local_108 + 0x10) = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar24 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar24;
        local_88 = *(long *)pcVar14;
        FUN_02a44274(lVar24 + 0xd8,&local_88);
      }
    }
    if (local_110 != (long *)0x0) {
      plVar23 = local_110 + 10;
      do {
        iVar16 = (int)*plVar23 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar7) {
          *(int *)plVar23 = iVar16;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar16 == 0) {
        (**(code **)(*local_110 + 0x10))();
      }
    }
    if (plVar22 != (long *)0x0) {
      plVar23 = plVar22 + 10;
      do {
        iVar16 = (int)*plVar23 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar7) {
          *(int *)plVar23 = iVar16;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar16 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  FUN_009571cc(*(long *)(param_1 + 0xb8) + 200);
  FUN_0095f808();
  return;
}


