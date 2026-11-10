/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02605ff8; name: FUN_02605ff8
 */


void FUN_02605ff8(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined2 *puVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  undefined2 *puVar24;
  bool bVar25;
  long *plVar26;
  char local_c0;
  undefined7 uStack_bf;
  undefined8 *local_b0;
  undefined8 *local_a0;
  long *local_70;
  long *local_68;
  undefined8 local_58;
  
  if (((*PTR_DAT_043796b8 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043796b8);
  }
  lVar23 = *(long *)PTR_DAT_043796c0;
  *(long *)PTR_DAT_043796c8 = lVar23;
  if ((*(byte *)(lVar23 + 0x117) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x160) = 0;
LAB_02606054:
    uVar17 = *(ulong *)(param_1 + 0x168);
    uVar18 = uVar17 & 0xfffffffffffffff8;
    if ((uVar17 & 2) != 0) {
      uVar18 = uVar17 | 4;
    }
    uVar18 = uVar18 & 0xfffffffffffffffc;
  }
  else {
    uVar13 = *(uint *)(param_1 + 0x160);
    *(uint *)(param_1 + 0x160) = uVar13 + 1;
    if (0xfffffffe < uVar13) goto LAB_02606054;
    uVar17 = *(ulong *)(param_1 + 0x168);
    uVar18 = uVar17 | 1;
    if ((uVar17 & 2) != 0) {
      uVar18 = uVar17 & 0xfffffffffffffff8;
    }
    uVar18 = uVar18 & 0xfffffffffffffff9 | 2;
  }
  *(ulong *)(param_1 + 0x168) = uVar18;
  puVar24 = (undefined2 *)(param_2 + 6);
  *(undefined1 *)puVar24 = 0;
  *(undefined2 *)(param_2 + 4) = 0;
  *(undefined2 *)(param_2 + 0x22) = 0;
  if (*(long *)(param_1 + 0xd0) == 0) {
    local_68 = (long *)0x0;
LAB_02606098:
    uVar13 = 0;
    bVar12 = false;
    bVar11 = false;
  }
  else {
    FUN_00cfac20(&local_68);
    if (local_68 == (long *)0x0) goto LAB_02606098;
    FUN_01aed8d0(&local_c0);
    if (CONCAT71(uStack_bf,local_c0) == 0) {
      local_70 = (long *)0x0;
LAB_026066f4:
      if (local_70 == (long *)0x0) goto LAB_02606bf4;
LAB_026066fc:
      uVar13 = FUN_01b0de78();
      if (local_70 != (long *)0x0) {
        lVar19 = local_70[0xb];
        piVar2 = (int *)(lVar19 + 0xc);
        do {
          iVar14 = *piVar2;
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*local_70 + 0x20))();
        }
      }
    }
    else {
      FUN_0095dafc(&local_70);
      puVar6 = (undefined8 *)CONCAT71(uStack_bf,local_c0);
      if (puVar6 == (undefined8 *)0x0) goto LAB_026066f4;
      piVar2 = (int *)(puVar6 + 1);
      do {
        iVar14 = *piVar2;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = iVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 + -1 != 0) goto LAB_026066f4;
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar19;
      local_58 = *puVar6;
      FUN_02a44274(lVar19 + 0xd8,&local_58);
      if (local_70 != (long *)0x0) goto LAB_026066fc;
LAB_02606bf4:
      uVar13 = 0;
    }
    FUN_01aeda28(&local_c0,local_68);
    if (CONCAT71(uStack_bf,local_c0) == 0) {
      local_70 = (long *)0x0;
LAB_02606740:
      if (local_70 == (long *)0x0) goto LAB_02606b04;
LAB_02606748:
      FUN_01f2bf7c(&local_c0);
      bVar11 = local_c0 != '\0';
      if (local_c0 != '\0') {
        if (local_a0 != (undefined8 *)0x0) {
          piVar2 = (int *)(local_a0 + 1);
          do {
            iVar14 = *piVar2;
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar14 + -1 == 0) {
            local_a0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar19 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar19;
            local_58 = *local_a0;
            FUN_02a44274(lVar19 + 0xd8,&local_58);
          }
        }
        if (local_b0 != (undefined8 *)0x0) {
          piVar2 = (int *)(local_b0 + 1);
          do {
            iVar14 = *piVar2;
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar14 + -1 == 0) {
            local_b0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar19 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar19;
            local_58 = *local_b0;
            FUN_02a44274(lVar19 + 0xd8,&local_58);
          }
        }
      }
      local_c0 = '\0';
      if (local_70 != (long *)0x0) {
        lVar19 = local_70[0xb];
        piVar2 = (int *)(lVar19 + 0xc);
        do {
          iVar14 = *piVar2;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*local_70 + 0x20))();
        }
      }
    }
    else {
      FUN_009b8830(&local_70);
      puVar6 = (undefined8 *)CONCAT71(uStack_bf,local_c0);
      if (puVar6 == (undefined8 *)0x0) goto LAB_02606740;
      piVar2 = (int *)(puVar6 + 1);
      do {
        iVar14 = *piVar2;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = iVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 + -1 != 0) goto LAB_02606740;
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar19;
      local_58 = *puVar6;
      FUN_02a44274(lVar19 + 0xd8,&local_58);
      if (local_70 != (long *)0x0) goto LAB_02606748;
LAB_02606b04:
      bVar11 = false;
    }
    FUN_01aeda18(&local_c0,local_68);
    if (CONCAT71(uStack_bf,local_c0) == 0) {
      local_70 = (long *)0x0;
    }
    else {
      FUN_00959eac(&local_70);
      puVar6 = (undefined8 *)CONCAT71(uStack_bf,local_c0);
      if (puVar6 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar6 + 1);
        do {
          iVar14 = *piVar2;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 == 0) {
          puVar6[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar19 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar19;
          local_58 = *puVar6;
          FUN_02a44274(lVar19 + 0xd8,&local_58);
        }
      }
    }
    bVar12 = local_70 != (long *)0x0;
    if (local_70 != (long *)0x0) {
      lVar19 = local_70[0xb];
      piVar2 = (int *)(lVar19 + 0xc);
      do {
        iVar14 = *piVar2;
        cVar4 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar25) {
          *piVar2 = iVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
    if (local_68 != (long *)0x0) {
      lVar19 = local_68[0xb];
      piVar2 = (int *)(lVar19 + 0xc);
      do {
        iVar14 = *piVar2;
        cVar4 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar25) {
          *piVar2 = iVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  iVar14 = *(int *)(param_1 + 0x188);
  iVar15 = iVar14 + -1;
  if (iVar14 < 1) {
    bVar25 = true;
    iVar15 = iVar14;
    if ((*(byte *)(param_1 + 0x168) & 1) == 0) goto joined_r0x0260662c;
LAB_026061c4:
    puVar8 = PTR_DAT_04379670;
    puVar7 = PTR_DAT_04379668;
    if (!(bool)(bVar12 | bVar11)) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar19 = *(long *)puVar7;
      *(long *)puVar8 = lVar19;
      uVar18 = *(ulong *)(lVar19 + 0x60);
      if (uVar18 != 0) {
        uVar17 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          uVar21 = uVar18 - 1 & 0x79479c9171128967;
        }
        else if (uVar18 < 0x79479c9171128968) {
          uVar21 = 0;
          if (uVar18 != 0) {
            uVar21 = 0x79479c9171128967 / uVar18;
          }
          uVar21 = 0x79479c9171128967 - uVar21 * uVar18;
        }
        else {
          uVar21 = 0x79479c9171128967;
        }
        plVar26 = *(long **)(*(long *)(lVar19 + 0x58) + uVar21 * 8);
        iVar15 = 0;
        if (plVar26 != (long *)0x0) {
          plVar26 = (long *)*plVar26;
          if (plVar26 == (long *)0x0) goto LAB_02606a04;
          if (uVar17 < 2) {
            do {
              if (plVar26[1] == 0x79479c9171128967) {
                if (plVar26[2] == 0x79479c9171128967) goto LAB_02606408;
              }
              else if ((plVar26[1] & uVar18 - 1) != uVar21) goto LAB_02606a04;
              plVar26 = (long *)*plVar26;
              iVar15 = 0;
            } while (plVar26 != (long *)0x0);
          }
          else {
            do {
              uVar17 = plVar26[1];
              if (uVar17 == 0x79479c9171128967) {
                if (plVar26[2] == 0x79479c9171128967) goto LAB_02606408;
              }
              else {
                if (uVar18 <= uVar17) {
                  uVar5 = 0;
                  if (uVar18 != 0) {
                    uVar5 = uVar17 / uVar18;
                  }
                  uVar17 = uVar17 - uVar5 * uVar18;
                }
                if (uVar17 != uVar21) goto LAB_02606a04;
              }
              plVar26 = (long *)*plVar26;
              iVar15 = 0;
            } while (plVar26 != (long *)0x0);
          }
        }
        goto LAB_0260656c;
      }
LAB_02606a04:
      *(undefined4 *)(param_1 + 0x188) = 0;
      iVar15 = 0;
      goto joined_r0x0260662c;
    }
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar19 = *(long *)puVar7;
    *(long *)puVar8 = lVar19;
    uVar18 = *(ulong *)(lVar19 + 0x60);
    if (uVar18 == 0) goto LAB_02606a04;
    uVar17 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar21 = uVar18 - 1 & 0x79479c9171128967;
    }
    else if (uVar18 < 0x79479c9171128968) {
      uVar21 = 0;
      if (uVar18 != 0) {
        uVar21 = 0x79479c9171128967 / uVar18;
      }
      uVar21 = 0x79479c9171128967 - uVar21 * uVar18;
    }
    else {
      uVar21 = 0x79479c9171128967;
    }
    plVar26 = *(long **)(*(long *)(lVar19 + 0x58) + uVar21 * 8);
    iVar15 = 0;
    if (plVar26 != (long *)0x0) {
      plVar26 = (long *)*plVar26;
      if (plVar26 == (long *)0x0) goto LAB_02606a04;
      if (uVar17 < 2) {
        do {
          if (plVar26[1] == 0x79479c9171128967) {
            if (plVar26[2] == 0x79479c9171128967) goto LAB_0260628c;
          }
          else if ((plVar26[1] & uVar18 - 1) != uVar21) goto LAB_02606a04;
          plVar26 = (long *)*plVar26;
          iVar15 = 0;
        } while (plVar26 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar26[1];
          if (uVar17 == 0x79479c9171128967) {
            if (plVar26[2] == 0x79479c9171128967) goto LAB_0260628c;
          }
          else {
            if (uVar18 <= uVar17) {
              uVar5 = 0;
              if (uVar18 != 0) {
                uVar5 = uVar17 / uVar18;
              }
              uVar17 = uVar17 - uVar5 * uVar18;
            }
            if (uVar17 != uVar21) goto LAB_02606a04;
          }
          plVar26 = (long *)*plVar26;
          iVar15 = 0;
        } while (plVar26 != (long *)0x0);
      }
    }
    goto LAB_0260656c;
  }
  bVar25 = false;
  *(int *)(param_1 + 0x188) = iVar15;
  if ((*(byte *)(param_1 + 0x168) & 1) != 0) goto LAB_026061c4;
  goto joined_r0x0260662c;
LAB_02606408:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) goto LAB_02606a04;
  plVar1 = plVar26 + 10;
  do {
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar18 = plVar26[0x14];
  if (uVar18 == 0) {
    iVar15 = 0;
  }
  else {
    uVar17 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar21 = uVar18 - 1 & 0x9e364aea82a9526a;
    }
    else if (uVar18 < 0x9e364aea82a9526b) {
      uVar21 = 0;
      if (uVar18 != 0) {
        uVar21 = 0x9e364aea82a9526a / uVar18;
      }
      uVar21 = 0x9e364aea82a9526a - uVar21 * uVar18;
    }
    else {
      uVar21 = 0x9e364aea82a9526a;
    }
    plVar22 = *(long **)(plVar26[0x13] + uVar21 * 8);
    if (plVar22 == (long *)0x0) {
      iVar15 = 0;
    }
    else {
      plVar22 = (long *)*plVar22;
      if (plVar22 == (long *)0x0) {
        iVar15 = 0;
      }
      else if (uVar17 < 2) {
        do {
          if (plVar22[1] == 0x9e364aea82a9526a) {
            if (plVar22[2] == -0x61c9b5157d56ad96) goto LAB_0260660c;
          }
          else if ((plVar22[1] & uVar18 - 1) != uVar21) {
            iVar15 = 0;
            break;
          }
          plVar22 = (long *)*plVar22;
          iVar15 = 0;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar22[1];
          if (uVar17 == 0x9e364aea82a9526a) {
            if (plVar22[2] == -0x61c9b5157d56ad96) goto LAB_0260660c;
          }
          else {
            if (uVar18 <= uVar17) {
              uVar5 = 0;
              if (uVar18 != 0) {
                uVar5 = uVar17 / uVar18;
              }
              uVar17 = uVar17 - uVar5 * uVar18;
            }
            if (uVar17 != uVar21) {
              iVar15 = 0;
              goto LAB_02606610;
            }
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
        iVar15 = 0;
      }
    }
  }
  goto LAB_02606610;
LAB_0260660c:
  iVar15 = (int)plVar22[6];
LAB_02606610:
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *(int *)plVar1 = iVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar14 == 0) {
    lVar19 = *plVar26;
    goto LAB_02606590;
  }
  goto LAB_02606624;
LAB_0260628c:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) goto LAB_02606a04;
  plVar1 = plVar26 + 10;
  do {
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar18 = plVar26[0x14];
  if (uVar18 != 0) {
    uVar17 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar21 = uVar18 - 1 & 0x474a790b76a8de30;
    }
    else if (uVar18 < 0x474a790b76a8de31) {
      uVar21 = 0;
      if (uVar18 != 0) {
        uVar21 = 0x474a790b76a8de30 / uVar18;
      }
      uVar21 = 0x474a790b76a8de30 - uVar21 * uVar18;
    }
    else {
      uVar21 = 0x474a790b76a8de30;
    }
    plVar22 = *(long **)(plVar26[0x13] + uVar21 * 8);
    if (plVar22 == (long *)0x0) {
      uVar18 = 0;
    }
    else {
      plVar22 = (long *)*plVar22;
      if (plVar22 == (long *)0x0) {
        uVar18 = 0;
      }
      else if (uVar17 < 2) {
        uVar17 = uVar18 - 1;
        do {
          if (plVar22[1] == 0x474a790b76a8de30) {
            if (plVar22[2] == 0x474a790b76a8de30) goto LAB_02606554;
          }
          else if ((plVar22[1] & uVar17) != uVar21) {
            uVar18 = 0;
            break;
          }
          plVar22 = (long *)*plVar22;
          uVar18 = 0;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar22[1];
          if (uVar17 == 0x474a790b76a8de30) {
            if (plVar22[2] == 0x474a790b76a8de30) goto LAB_02606554;
          }
          else {
            if (uVar18 <= uVar17) {
              uVar5 = 0;
              if (uVar18 != 0) {
                uVar5 = uVar17 / uVar18;
              }
              uVar17 = uVar17 - uVar5 * uVar18;
            }
            if (uVar17 != uVar21) {
              uVar18 = 0;
              goto LAB_02606558;
            }
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
        uVar18 = 0;
      }
    }
  }
  goto LAB_02606558;
LAB_02606554:
  uVar18 = (ulong)*(uint *)(plVar22 + 6);
LAB_02606558:
  do {
    iVar15 = (int)uVar18;
    iVar14 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *(int *)plVar1 = iVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar14 == 0) {
    lVar19 = *plVar26;
LAB_02606590:
    (**(code **)(lVar19 + 0x10))();
LAB_02606624:
    *(int *)(param_1 + 0x188) = iVar15;
joined_r0x0260662c:
    if ((uVar13 & 1) != 0) goto LAB_02606574;
LAB_026060b8:
    bVar3 = *(byte *)(param_1 + 0x168);
  }
  else {
LAB_0260656c:
    *(int *)(param_1 + 0x188) = iVar15;
    if ((uVar13 & 1) == 0) goto LAB_026060b8;
LAB_02606574:
    iVar15 = 0;
    *(undefined4 *)(param_1 + 0x188) = 0;
    bVar3 = *(byte *)(param_1 + 0x168);
  }
  if (((bVar3 >> 1 & 1) != 0) && (iVar15 == 0)) {
    *(byte *)(param_2 + 4) = *(byte *)(param_1 + 0x18c) ^ 1;
    *(undefined1 *)(param_2 + 5) = 1;
    *(undefined1 *)(param_1 + 0x18c) = 1;
    if ((uVar13 & 1) == 0 && !bVar25) {
      *(undefined1 *)(param_2 + 0x23) = 1;
      bVar3 = *(byte *)(param_1 + 0x168);
      goto joined_r0x026060c8;
    }
  }
  bVar3 = *(byte *)(param_1 + 0x168);
joined_r0x026060c8:
  if ((bVar3 >> 2 & 1) == 0) {
    cVar4 = *(char *)(param_1 + 0x150);
  }
  else {
    if ((*(char *)(param_1 + 0x18c) != '\0') || (((uVar13 ^ 1) & 1) != 0)) {
      puVar20 = puVar24;
      if (*(char *)(param_1 + 0x18c) == '\0') {
        puVar20 = (undefined2 *)(param_2 + 0x22);
      }
      *(undefined1 *)puVar20 = 1;
    }
    *(undefined1 *)(param_1 + 0x18c) = 0;
    cVar4 = *(char *)(param_1 + 0x150);
  }
  if (((cVar4 != '\0') && (*(char *)(param_1 + 0x121) != '\0')) &&
     ((*(byte *)(lVar23 + 0x117) & 1) == 0)) {
    *(undefined1 *)puVar24 = 1;
  }
  *(undefined1 *)(param_2 + 0x1f) = *(undefined1 *)(param_2 + 4);
  *(undefined2 *)(param_2 + 0x20) = *(undefined2 *)(param_2 + 5);
  puVar10 = PTR_DAT_043796e8;
  puVar9 = PTR_DAT_043796e0;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  lVar23 = *(long *)(param_1 + 0xf0);
  if ((lVar23 != 0) && (*(int *)(lVar23 + 0xc) != 0)) {
    piVar2 = (int *)(lVar23 + 0xc);
    iVar14 = *(int *)(lVar23 + 0xc);
    do {
      plVar26 = *(long **)(lVar23 + 0x10);
      if (((*puVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar9), iVar15 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar7), iVar15 != 0)) {
          uVar16 = FUN_0087f8f0();
          *(undefined8 *)puVar8 = uVar16;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar10 = puVar8;
        __cxa_guard_release(puVar9);
      }
      while( true ) {
        if (plVar26 == (long *)0x0) {
          return;
        }
        if (plVar26 == (long *)puVar10) break;
        plVar26 = (long *)*plVar26;
      }
      iVar15 = *piVar2;
      if (iVar15 == iVar14) {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = iVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar23 = *(long *)(lVar23 + 0x18);
          if (lVar23 == 0) {
            return;
          }
          plVar26 = (long *)(lVar23 + -0x50);
          FUN_0199f17c(&local_c0,plVar26);
          if (CONCAT71(uStack_bf,local_c0) != 0) {
            iVar14 = *(int *)(CONCAT71(uStack_bf,local_c0) + 0xc);
            puVar6 = (undefined8 *)CONCAT71(uStack_bf,local_c0);
            if (puVar6 != (undefined8 *)0x0) {
              piVar2 = (int *)(puVar6 + 1);
              do {
                iVar15 = *piVar2;
                cVar4 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar11) {
                  *piVar2 = iVar15 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar15 + -1 == 0) {
                puVar6[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_58 = *puVar6;
                FUN_02a44274(lVar19 + 0xd8,&local_58);
              }
            }
            if (iVar14 != 0) {
              *(undefined1 *)(param_2 + 4) = 0;
              *(undefined1 *)(param_2 + 6) = 0;
            }
          }
          lVar23 = *(long *)(lVar23 + 8);
          piVar2 = (int *)(lVar23 + 0xc);
          do {
            iVar14 = *piVar2;
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar11) {
              *piVar2 = iVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar14 + -1 == 0) {
            *(undefined8 *)(lVar23 + 0x18) = 0;
            (**(code **)(*plVar26 + 0x20))(plVar26);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar14 = iVar15;
    } while (iVar15 != 0);
  }
  return;
}


