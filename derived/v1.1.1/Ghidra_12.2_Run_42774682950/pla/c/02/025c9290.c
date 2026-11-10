/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025c9290; name: FUN_025c9290
 */


void FUN_025c9290(long param_1,uint *param_2)

{
  long *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  undefined1 *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long *plVar23;
  float fVar24;
  float extraout_s0;
  float extraout_s0_00;
  float fVar31;
  float extraout_var;
  undefined1 auVar25 [16];
  float fVar32;
  float extraout_var_01;
  float fVar33;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float extraout_var_00;
  float extraout_var_02;
  undefined1 auVar30 [16];
  float fVar42;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int iVar46;
  int iVar52;
  undefined1 in_q3 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int iVar53;
  undefined1 auVar51 [16];
  float fVar54;
  undefined4 uVar55;
  long *local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78;
  long *local_58;
  
  if (*(long *)(param_1 + 0x240) == 0) {
    local_78 = (long *)0x0;
  }
  else {
    FUN_00cfac20(&local_78);
    if (local_78 != (long *)0x0) {
      local_90 = (long *)0x0;
      uStack_88 = 0;
      FUN_00cf9db0(&local_90,local_78 + 0xf1);
      if (local_90 == (long *)0x0) {
        local_80 = (long *)0x0;
LAB_025ca3f8:
        if (local_80 != (long *)0x0) goto LAB_025ca400;
LAB_025ca514:
        bVar5 = false;
      }
      else {
        FUN_00959eac(&local_80);
        plVar18 = local_90;
        if (local_90 == (long *)0x0) goto LAB_025ca3f8;
        plVar1 = local_90 + 1;
        do {
          iVar46 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar46;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar46 != 0) goto LAB_025ca3f8;
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar46 = __cxa_guard_acquire(PTR_DAT_04379498), iVar46 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_58 = (long *)*plVar18;
        FUN_02a44274(lVar17 + 0xd8,&local_58);
        if (local_80 == (long *)0x0) goto LAB_025ca514;
LAB_025ca400:
        if ((((*param_2 & 0xfffffffe) == 2) && (uVar11 = FUN_02674b78(), (uVar11 & 1) == 0)) &&
           (*(char *)(param_1 + 0x259) == '\0')) {
          *(undefined4 *)(param_1 + 0x1f0) = 2;
          *(undefined1 *)(param_1 + 500) = 1;
          *(undefined8 *)(param_1 + 0x1f8) = 0;
          *(undefined4 *)(param_1 + 0x200) = 0;
        }
        if (local_80 != (long *)0x0) {
          lVar17 = local_80[0xb];
          piVar2 = (int *)(lVar17 + 0xc);
          do {
            iVar46 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar46 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar46 == 1) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_80 + 0x20))();
          }
        }
        bVar5 = true;
      }
      if (local_78 != (long *)0x0) {
        lVar17 = local_78[0xb];
        piVar2 = (int *)(lVar17 + 0xc);
        do {
          iVar46 = *piVar2;
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar3) {
            *piVar2 = iVar46 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar46 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
        }
      }
      if (bVar5) {
        return;
      }
    }
  }
  FUN_025caa60(&local_90,param_1);
  plVar18 = local_90;
  uVar11 = FUN_01bf34a0(local_90);
  if (((uVar11 & 1) != 0) ||
     (((uVar11 = FUN_01bf34a0(plVar18), (uVar11 & 1) != 0 &&
       (uVar11 = FUN_01a5badc(plVar18,plVar18 + 499), (uVar11 & 0xff) != 0)) &&
      ((uVar11 & 0xffffffff00000000) == 0x200000000)))) goto joined_r0x025ca27c;
  if (*param_2 - 2 < 2) {
    *(undefined4 *)(param_1 + 0x1f0) = 2;
    *(undefined1 *)(param_1 + 500) = 1;
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    puVar7 = PTR_DAT_04379660;
    fVar54 = (float)param_2[3];
    if (1.1920929e-07 < fVar54) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar46 = __cxa_guard_acquire(PTR_DAT_04379660), iVar46 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar9 = PTR_DAT_04379670;
      puVar8 = PTR_DAT_04379668;
      lVar17 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar17;
      puVar13 = *(undefined1 **)(lVar17 + 0x60);
      fVar24 = 0.0;
      if (puVar13 != (undefined1 *)0x0) {
        uVar11 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          puVar15 = (undefined1 *)((ulong)(puVar13 + -1) & 0x7c08eae870e235e0);
        }
        else {
          puVar15 = &DAT_7c08eae870e235e0;
          if (puVar13 < (undefined1 *)0x7c08eae870e235e1) {
            uVar20 = 0;
            if (puVar13 != (undefined1 *)0x0) {
              uVar20 = 0x7c08eae870e235e0 / (ulong)puVar13;
            }
            puVar15 = &DAT_7c08eae870e235e0 + -(uVar20 * (long)puVar13);
          }
        }
        plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + (long)puVar15 * 8);
        if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
          if (uVar11 < 2) {
            do {
              if ((undefined1 *)plVar18[1] == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar18[2] == &DAT_7c08eae870e235e0) goto LAB_025c95e8;
              }
              else if ((undefined1 *)((ulong)plVar18[1] & (ulong)(puVar13 + -1)) != puVar15) break;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              puVar19 = (undefined1 *)plVar18[1];
              if (puVar19 == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar18[2] == &DAT_7c08eae870e235e0) goto LAB_025c95e8;
              }
              else {
                if (puVar13 <= puVar19) {
                  uVar11 = 0;
                  if (puVar13 != (undefined1 *)0x0) {
                    uVar11 = (ulong)puVar19 / (ulong)puVar13;
                  }
                  puVar19 = puVar19 + -(uVar11 * (long)puVar13);
                }
                if (puVar19 != puVar15) break;
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
      }
      goto LAB_025c9720;
    }
  }
  else {
    if (*param_2 != 1) goto joined_r0x025ca27c;
    *(undefined4 *)(param_1 + 0x1f0) = 1;
    *(undefined1 *)(param_1 + 500) = 1;
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    puVar7 = PTR_DAT_04379660;
    fVar54 = (float)param_2[3];
    if (1.1920929e-07 < fVar54) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar46 = __cxa_guard_acquire(PTR_DAT_04379660), iVar46 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar9 = PTR_DAT_04379670;
      puVar8 = PTR_DAT_04379668;
      lVar17 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar17;
      puVar13 = *(undefined1 **)(lVar17 + 0x60);
      fVar24 = 0.0;
      if (puVar13 != (undefined1 *)0x0) {
        uVar11 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          puVar15 = (undefined1 *)((ulong)(puVar13 + -1) & 0x7c08eae870e235e0);
        }
        else {
          puVar15 = &DAT_7c08eae870e235e0;
          if (puVar13 < (undefined1 *)0x7c08eae870e235e1) {
            uVar20 = 0;
            if (puVar13 != (undefined1 *)0x0) {
              uVar20 = 0x7c08eae870e235e0 / (ulong)puVar13;
            }
            puVar15 = &DAT_7c08eae870e235e0 + -(uVar20 * (long)puVar13);
          }
        }
        plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + (long)puVar15 * 8);
        if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
          if (uVar11 < 2) {
            do {
              if ((undefined1 *)plVar18[1] == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar18[2] == &DAT_7c08eae870e235e0) goto LAB_025c9cc4;
              }
              else if ((undefined1 *)((ulong)plVar18[1] & (ulong)(puVar13 + -1)) != puVar15) break;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              puVar19 = (undefined1 *)plVar18[1];
              if (puVar19 == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar18[2] == &DAT_7c08eae870e235e0) goto LAB_025c9cc4;
              }
              else {
                if (puVar13 <= puVar19) {
                  uVar11 = 0;
                  if (puVar13 != (undefined1 *)0x0) {
                    uVar11 = (ulong)puVar19 / (ulong)puVar13;
                  }
                  puVar19 = puVar19 + -(uVar11 * (long)puVar13);
                }
                if (puVar19 != puVar15) break;
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
      }
      goto LAB_025c9dfc;
    }
  }
  *(undefined8 *)(param_1 + 0x1fc) = 0;
  if (local_90 == (long *)0x0) {
    return;
  }
  goto LAB_025ca280;
LAB_025c9cc4:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar11 = plVar18[0x21];
    fVar24 = 0.0;
    if (uVar11 != 0) {
      uVar20 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar11 - 1 & 0xa4fa9ccdbac16903;
      }
      else if (uVar11 < 0xa4fa9ccdbac16904) {
        uVar21 = 0;
        if (uVar11 != 0) {
          uVar21 = 0xa4fa9ccdbac16903 / uVar11;
        }
        uVar21 = 0xa4fa9ccdbac16903 - uVar21 * uVar11;
      }
      else {
        uVar21 = 0xa4fa9ccdbac16903;
      }
      plVar23 = *(long **)(plVar18[0x20] + uVar21 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar23[1] == 0xa4fa9ccdbac16903) {
              if (plVar23[2] == -0x5b056332453e96fd) goto LAB_025c9de4;
            }
            else if ((plVar23[1] & uVar11 - 1) != uVar21) break;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar23[1];
            if (uVar20 == 0xa4fa9ccdbac16903) {
              if (plVar23[2] == -0x5b056332453e96fd) goto LAB_025c9de4;
            }
            else {
              if (uVar11 <= uVar20) {
                uVar6 = 0;
                if (uVar11 != 0) {
                  uVar6 = uVar20 / uVar11;
                }
                uVar20 = uVar20 - uVar6 * uVar11;
              }
              if (uVar20 != uVar21) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
    goto LAB_025c9de8;
  }
  goto LAB_025c9dfc;
LAB_025c9de4:
  fVar24 = *(float *)(plVar23 + 6);
LAB_025c9de8:
  do {
    iVar46 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar46;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar46 == 0) {
    (**(code **)(*plVar18 + 0x10))();
  }
LAB_025c9dfc:
  *(float *)(param_1 + 0x200) = fVar54 * fVar24;
  if (((*puVar7 & 1) == 0) && (iVar46 = __cxa_guard_acquire(PTR_DAT_04379660), iVar46 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar17 = *(long *)puVar8;
  *(long *)puVar9 = lVar17;
  puVar13 = *(undefined1 **)(lVar17 + 0x60);
  uVar55 = 0;
  if (puVar13 != (undefined1 *)0x0) {
    uVar11 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar15 = (undefined1 *)((ulong)(puVar13 + -1) & 0x7c08eae870e235e0);
    }
    else {
      puVar15 = &DAT_7c08eae870e235e0;
      if (puVar13 < (undefined1 *)0x7c08eae870e235e1) {
        uVar20 = 0;
        if (puVar13 != (undefined1 *)0x0) {
          uVar20 = 0x7c08eae870e235e0 / (ulong)puVar13;
        }
        puVar15 = &DAT_7c08eae870e235e0 + -(uVar20 * (long)puVar13);
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + (long)puVar15 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if ((undefined1 *)plVar18[1] == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar18[2] == &DAT_7c08eae870e235e0) goto LAB_025c9f58;
          }
          else if ((undefined1 *)((ulong)plVar18[1] & (ulong)(puVar13 + -1)) != puVar15) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          puVar19 = (undefined1 *)plVar18[1];
          if (puVar19 == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar18[2] == &DAT_7c08eae870e235e0) goto LAB_025c9f58;
          }
          else {
            if (puVar13 <= puVar19) {
              uVar11 = 0;
              if (puVar13 != (undefined1 *)0x0) {
                uVar11 = (ulong)puVar19 / (ulong)puVar13;
              }
              puVar19 = puVar19 + -(uVar11 * (long)puVar13);
            }
            if (puVar19 != puVar15) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  goto LAB_025ca090;
LAB_025c9f58:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar11 = plVar18[0x21];
    uVar55 = 0;
    if (uVar11 != 0) {
      uVar20 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar11 - 1 & 0xc09defc47056c86f;
      }
      else if (uVar11 < 0xc09defc47056c870) {
        uVar21 = 0;
        if (uVar11 != 0) {
          uVar21 = 0xc09defc47056c86f / uVar11;
        }
        uVar21 = 0xc09defc47056c86f - uVar21 * uVar11;
      }
      else {
        uVar21 = 0xc09defc47056c86f;
      }
      plVar23 = *(long **)(plVar18[0x20] + uVar21 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar23[1] == 0xc09defc47056c86f) {
              if (plVar23[2] == -0x3f62103b8fa93791) goto LAB_025ca078;
            }
            else if ((plVar23[1] & uVar11 - 1) != uVar21) break;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar23[1];
            if (uVar20 == 0xc09defc47056c86f) {
              if (plVar23[2] == -0x3f62103b8fa93791) goto LAB_025ca078;
            }
            else {
              if (uVar11 <= uVar20) {
                uVar6 = 0;
                if (uVar11 != 0) {
                  uVar6 = uVar20 / uVar11;
                }
                uVar20 = uVar20 - uVar6 * uVar11;
              }
              if (uVar20 != uVar21) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
    goto LAB_025ca07c;
  }
  goto LAB_025ca090;
LAB_025ca078:
  uVar55 = (undefined4)plVar23[6];
LAB_025ca07c:
  do {
    iVar46 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar46;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar46 == 0) {
    (**(code **)(*plVar18 + 0x10))();
  }
LAB_025ca090:
  pbVar14 = PTR_DAT_043794b0;
  lVar17 = *(long *)(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1fc) = uVar55;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794c8;
  piVar2 = (int *)(lVar17 + 0xc);
  puVar16 = (undefined8 *)PTR_DAT_043794b8;
  iVar46 = *(int *)(lVar17 + 0xc);
  do {
    while( true ) {
      puVar22 = *(undefined8 **)(lVar17 + 0x10);
      if (((*pbVar14 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_043794b0), pbVar14 = PTR_DAT_043794b0,
         puVar16 = (undefined8 *)PTR_DAT_043794b8, iVar10 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar10 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar8 = uVar12;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar7 = puVar8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        puVar16 = (undefined8 *)PTR_DAT_043794b8;
        *(undefined **)PTR_DAT_043794b8 = puVar7;
        pbVar14 = PTR_DAT_043794b0;
        __cxa_guard_release(PTR_DAT_043794b0);
      }
      for (; puVar22 != puVar16; puVar22 = (undefined8 *)*puVar22) {
      }
      iVar10 = *piVar2;
      if (iVar10 == iVar46) break;
      ClearExclusiveLocal();
      iVar46 = iVar10;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar46 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    iVar46 = iVar10;
  } while (cVar4 != '\0');
  lVar17 = *(long *)(lVar17 + 0x18);
  plVar18 = (long *)0x0;
  if (lVar17 != 0) {
    plVar18 = (long *)(lVar17 + -0x50);
  }
  (**(code **)(*plVar18 + 0x40))(plVar18);
  auVar34 = *(undefined1 (*) [16])(param_2 + 0x10);
  auVar50._0_8_ = CONCAT44(in_q3._4_4_ - auVar34._4_4_,in_q3._0_4_ - auVar34._0_4_);
  auVar50._8_4_ = in_q3._8_4_ - auVar34._8_4_;
  auVar50._12_4_ = in_q3._12_4_ - auVar34._12_4_;
  if (lVar17 != 0) {
    lVar17 = plVar18[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar46 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar46 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar46 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
      auVar50._8_8_ = auVar50._8_8_;
    }
  }
  auVar48._8_8_ = auVar50._8_8_;
  auVar48._0_4_ = auVar50._0_4_;
  auVar48._4_4_ = 0;
  auVar34._0_4_ = auVar48._0_4_ * auVar48._0_4_;
  auVar34._4_4_ = 0;
  auVar34._8_4_ = auVar50._8_4_ * auVar50._8_4_;
  auVar34._12_4_ = auVar50._12_4_ * auVar50._12_4_;
  auVar50 = NEON_ext(auVar34,auVar34,8,1);
  fVar24 = auVar50._0_4_ + auVar34._0_4_;
  fVar31 = auVar50._4_4_ + 0.0;
  fVar54 = fVar24 + fVar31;
  uVar12 = CONCAT44(fVar24 + fVar31,fVar54);
  if (fVar54 != 0.0) goto LAB_025ca244;
  FUN_0099c748(&local_58,param_1 + 0x220);
  if (local_58 != (long *)0x0) {
    FUN_01a831dc();
    fVar31 = 0.0 - extraout_s0_00;
    fVar32 = 0.0 - extraout_var_00;
    fVar33 = 0.0 - extraout_var_02;
    auVar39._0_4_ = fVar31 * fVar31;
    auVar39._4_4_ = 0;
    auVar39._8_4_ = fVar32 * fVar32;
    auVar39._12_4_ = fVar33 * fVar33;
    auVar34 = NEON_ext(auVar39,auVar39,8,1);
    fVar24 = auVar34._0_4_ + auVar39._0_4_;
    fVar42 = auVar34._4_4_ + 0.0;
    fVar54 = fVar24 + fVar42;
    fVar24 = fVar24 + fVar42;
    if (fVar54 == 0.0) {
      *(undefined8 *)(param_1 + 0x218) = 0;
      *(undefined8 *)(param_1 + 0x210) = 0;
      if (local_58 != (long *)0x0) goto LAB_025ca350;
      goto joined_r0x025ca27c;
    }
    auVar40._8_8_ = CONCAT44(fVar24,fVar54);
    auVar40._0_8_ = CONCAT44(fVar24,fVar54);
    auVar34 = NEON_frsqrte(auVar40,4);
    auVar51._0_4_ = auVar34._0_4_ * fVar54;
    auVar51._4_4_ = auVar34._4_4_ * fVar24;
    auVar51._8_4_ = auVar34._8_4_ * fVar54;
    auVar51._12_4_ = auVar34._12_4_ * fVar24;
    auVar50 = NEON_frsqrts(auVar34,auVar51,4);
    auVar45._0_4_ = auVar34._0_4_ * auVar50._0_4_;
    auVar45._4_4_ = auVar34._4_4_ * auVar50._4_4_;
    auVar45._8_4_ = auVar34._8_4_ * auVar50._8_4_;
    auVar45._12_4_ = auVar34._12_4_ * auVar50._12_4_;
    iVar46 = -(uint)(fVar54 == 0.0);
    iVar10 = -(uint)(fVar24 == 0.0);
    iVar52 = -(uint)(fVar54 == 0.0);
    iVar53 = -(uint)(fVar24 == 0.0);
    auVar41._0_4_ = fVar54 * auVar45._0_4_;
    auVar41._4_4_ = fVar24 * auVar45._4_4_;
    auVar41._8_4_ = fVar54 * auVar45._8_4_;
    auVar41._12_4_ = fVar24 * auVar45._12_4_;
    auVar34 = NEON_frsqrts(auVar45,auVar41,4);
    fVar31 = fVar31 * auVar45._0_4_ * auVar34._0_4_;
    fVar54 = auVar45._4_4_ * auVar34._4_4_ * 0.0;
    fVar32 = fVar32 * auVar45._8_4_ * auVar34._8_4_;
    fVar33 = fVar33 * auVar45._12_4_ * auVar34._12_4_;
    auVar30._0_8_ =
         CONCAT17((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                  CONCAT16((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                           CONCAT15((byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                    CONCAT14(SUB41(fVar54,0) & ~(byte)iVar10,
                                             CONCAT13((byte)((uint)fVar31 >> 0x18) &
                                                      ~(byte)((uint)iVar46 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar31 >> 0x10) &
                                                               ~(byte)((uint)iVar46 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar31 >> 8) &
                                                                        ~(byte)((uint)iVar46 >> 8),
                                                                        SUB41(fVar31,0) &
                                                                        ~(byte)iVar46)))))));
    auVar30[8] = SUB41(fVar32,0) & ~(byte)iVar52;
    auVar30[9] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar52 >> 8);
    auVar30[10] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
    auVar30[0xb] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
    auVar30[0xc] = SUB41(fVar33,0) & ~(byte)iVar53;
    auVar30[0xd] = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar53 >> 8);
    auVar30[0xe] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
    auVar30[0xf] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
    *(long *)(param_1 + 0x218) = auVar30._8_8_;
    *(undefined8 *)(param_1 + 0x210) = auVar30._0_8_;
    if (local_58 == (long *)0x0) goto joined_r0x025ca27c;
LAB_025ca350:
    lVar17 = local_58[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar46 = *piVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar46;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_025ca368;
  }
  goto joined_r0x025ca27c;
LAB_025c95e8:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar11 = plVar18[0x21];
    fVar24 = 0.0;
    if (uVar11 != 0) {
      uVar20 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar11 - 1 & 0xa4fa9ccdbac16903;
      }
      else if (uVar11 < 0xa4fa9ccdbac16904) {
        uVar21 = 0;
        if (uVar11 != 0) {
          uVar21 = 0xa4fa9ccdbac16903 / uVar11;
        }
        uVar21 = 0xa4fa9ccdbac16903 - uVar21 * uVar11;
      }
      else {
        uVar21 = 0xa4fa9ccdbac16903;
      }
      plVar23 = *(long **)(plVar18[0x20] + uVar21 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar23[1] == 0xa4fa9ccdbac16903) {
              if (plVar23[2] == -0x5b056332453e96fd) goto LAB_025c9708;
            }
            else if ((plVar23[1] & uVar11 - 1) != uVar21) break;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar23[1];
            if (uVar20 == 0xa4fa9ccdbac16903) {
              if (plVar23[2] == -0x5b056332453e96fd) goto LAB_025c9708;
            }
            else {
              if (uVar11 <= uVar20) {
                uVar6 = 0;
                if (uVar11 != 0) {
                  uVar6 = uVar20 / uVar11;
                }
                uVar20 = uVar20 - uVar6 * uVar11;
              }
              if (uVar20 != uVar21) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
    goto LAB_025c970c;
  }
  goto LAB_025c9720;
LAB_025c9708:
  fVar24 = *(float *)(plVar23 + 6);
LAB_025c970c:
  do {
    iVar46 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar46;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar46 == 0) {
    (**(code **)(*plVar18 + 0x10))();
  }
LAB_025c9720:
  *(float *)(param_1 + 0x200) = fVar54 * fVar24;
  if (((*puVar7 & 1) == 0) && (iVar46 = __cxa_guard_acquire(PTR_DAT_04379660), iVar46 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar17 = *(long *)puVar8;
  *(long *)puVar9 = lVar17;
  puVar13 = *(undefined1 **)(lVar17 + 0x60);
  uVar55 = 0;
  if (puVar13 != (undefined1 *)0x0) {
    uVar11 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar15 = (undefined1 *)((ulong)(puVar13 + -1) & 0x7c08eae870e235e0);
    }
    else {
      puVar15 = &DAT_7c08eae870e235e0;
      if (puVar13 < (undefined1 *)0x7c08eae870e235e1) {
        uVar20 = 0;
        if (puVar13 != (undefined1 *)0x0) {
          uVar20 = 0x7c08eae870e235e0 / (ulong)puVar13;
        }
        puVar15 = &DAT_7c08eae870e235e0 + -(uVar20 * (long)puVar13);
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + (long)puVar15 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if ((undefined1 *)plVar18[1] == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar18[2] == &DAT_7c08eae870e235e0) goto LAB_025c987c;
          }
          else if ((undefined1 *)((ulong)plVar18[1] & (ulong)(puVar13 + -1)) != puVar15) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          puVar19 = (undefined1 *)plVar18[1];
          if (puVar19 == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar18[2] == &DAT_7c08eae870e235e0) goto LAB_025c987c;
          }
          else {
            if (puVar13 <= puVar19) {
              uVar11 = 0;
              if (puVar13 != (undefined1 *)0x0) {
                uVar11 = (ulong)puVar19 / (ulong)puVar13;
              }
              puVar19 = puVar19 + -(uVar11 * (long)puVar13);
            }
            if (puVar19 != puVar15) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  goto LAB_025c99b4;
LAB_025c987c:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar11 = plVar18[0x21];
    uVar55 = 0;
    if (uVar11 != 0) {
      uVar20 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar11 - 1 & 0xc09df0c47056ca22;
      }
      else if (uVar11 < 0xc09df0c47056ca23) {
        uVar21 = 0;
        if (uVar11 != 0) {
          uVar21 = 0xc09df0c47056ca22 / uVar11;
        }
        uVar21 = 0xc09df0c47056ca22 - uVar21 * uVar11;
      }
      else {
        uVar21 = 0xc09df0c47056ca22;
      }
      plVar23 = *(long **)(plVar18[0x20] + uVar21 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar23[1] == 0xc09df0c47056ca22) {
              if (plVar23[2] == -0x3f620f3b8fa935de) goto LAB_025c999c;
            }
            else if ((plVar23[1] & uVar11 - 1) != uVar21) break;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar23[1];
            if (uVar20 == 0xc09df0c47056ca22) {
              if (plVar23[2] == -0x3f620f3b8fa935de) goto LAB_025c999c;
            }
            else {
              if (uVar11 <= uVar20) {
                uVar6 = 0;
                if (uVar11 != 0) {
                  uVar6 = uVar20 / uVar11;
                }
                uVar20 = uVar20 - uVar6 * uVar11;
              }
              if (uVar20 != uVar21) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
    goto LAB_025c99a0;
  }
  goto LAB_025c99b4;
LAB_025c999c:
  uVar55 = (undefined4)plVar23[6];
LAB_025c99a0:
  do {
    iVar46 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar46;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar46 == 0) {
    (**(code **)(*plVar18 + 0x10))();
  }
LAB_025c99b4:
  pbVar14 = PTR_DAT_043794b0;
  lVar17 = *(long *)(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1fc) = uVar55;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794c8;
  piVar2 = (int *)(lVar17 + 0xc);
  puVar16 = (undefined8 *)PTR_DAT_043794b8;
  iVar46 = *(int *)(lVar17 + 0xc);
  do {
    while( true ) {
      puVar22 = *(undefined8 **)(lVar17 + 0x10);
      if (((*pbVar14 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_043794b0), pbVar14 = PTR_DAT_043794b0,
         puVar16 = (undefined8 *)PTR_DAT_043794b8, iVar10 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar10 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar8 = uVar12;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar7 = puVar8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        puVar16 = (undefined8 *)PTR_DAT_043794b8;
        *(undefined **)PTR_DAT_043794b8 = puVar7;
        pbVar14 = PTR_DAT_043794b0;
        __cxa_guard_release(PTR_DAT_043794b0);
      }
      for (; puVar22 != puVar16; puVar22 = (undefined8 *)*puVar22) {
      }
      iVar10 = *piVar2;
      if (iVar10 == iVar46) break;
      ClearExclusiveLocal();
      iVar46 = iVar10;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar46 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    iVar46 = iVar10;
  } while (cVar4 != '\0');
  lVar17 = *(long *)(lVar17 + 0x18);
  plVar18 = (long *)0x0;
  if (lVar17 != 0) {
    plVar18 = (long *)(lVar17 + -0x50);
  }
  (**(code **)(*plVar18 + 0x40))(plVar18);
  auVar34 = *(undefined1 (*) [16])(param_2 + 0x10);
  auVar47._0_8_ = CONCAT44(in_q3._4_4_ - auVar34._4_4_,in_q3._0_4_ - auVar34._0_4_);
  auVar47._8_4_ = in_q3._8_4_ - auVar34._8_4_;
  auVar47._12_4_ = in_q3._12_4_ - auVar34._12_4_;
  if (lVar17 != 0) {
    lVar17 = plVar18[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar46 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar46 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar46 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
      auVar47._8_8_ = auVar47._8_8_;
    }
  }
  auVar48._8_8_ = auVar47._8_8_;
  auVar48._0_4_ = auVar47._0_4_;
  auVar48._4_4_ = 0;
  auVar25._0_4_ = auVar48._0_4_ * auVar48._0_4_;
  auVar25._4_4_ = 0;
  auVar25._8_4_ = auVar47._8_4_ * auVar47._8_4_;
  auVar25._12_4_ = auVar47._12_4_ * auVar47._12_4_;
  auVar34 = NEON_ext(auVar25,auVar25,8,1);
  fVar24 = auVar34._0_4_ + auVar25._0_4_;
  fVar31 = auVar34._4_4_ + 0.0;
  fVar54 = fVar24 + fVar31;
  uVar12 = CONCAT44(fVar24 + fVar31,fVar54);
  if (fVar54 == 0.0) {
    FUN_0099c748(&local_58,param_1 + 0x220);
    if (local_58 != (long *)0x0) {
      FUN_01a831dc();
      fVar31 = 0.0 - extraout_s0;
      fVar32 = 0.0 - extraout_var;
      fVar33 = 0.0 - extraout_var_01;
      auVar35._0_4_ = fVar31 * fVar31;
      auVar35._4_4_ = 0;
      auVar35._8_4_ = fVar32 * fVar32;
      auVar35._12_4_ = fVar33 * fVar33;
      auVar34 = NEON_ext(auVar35,auVar35,8,1);
      fVar24 = auVar34._0_4_ + auVar35._0_4_;
      fVar42 = auVar34._4_4_ + 0.0;
      fVar54 = fVar24 + fVar42;
      fVar24 = fVar24 + fVar42;
      if (fVar54 == 0.0) {
        *(undefined8 *)(param_1 + 0x218) = 0;
        *(undefined8 *)(param_1 + 0x210) = 0;
      }
      else {
        auVar36._8_8_ = CONCAT44(fVar24,fVar54);
        auVar36._0_8_ = CONCAT44(fVar24,fVar54);
        auVar34 = NEON_frsqrte(auVar36,4);
        auVar49._0_4_ = auVar34._0_4_ * fVar54;
        auVar49._4_4_ = auVar34._4_4_ * fVar24;
        auVar49._8_4_ = auVar34._8_4_ * fVar54;
        auVar49._12_4_ = auVar34._12_4_ * fVar24;
        auVar50 = NEON_frsqrts(auVar34,auVar49,4);
        auVar43._0_4_ = auVar34._0_4_ * auVar50._0_4_;
        auVar43._4_4_ = auVar34._4_4_ * auVar50._4_4_;
        auVar43._8_4_ = auVar34._8_4_ * auVar50._8_4_;
        auVar43._12_4_ = auVar34._12_4_ * auVar50._12_4_;
        iVar46 = -(uint)(fVar54 == 0.0);
        iVar10 = -(uint)(fVar24 == 0.0);
        iVar52 = -(uint)(fVar54 == 0.0);
        iVar53 = -(uint)(fVar24 == 0.0);
        auVar37._0_4_ = fVar54 * auVar43._0_4_;
        auVar37._4_4_ = fVar24 * auVar43._4_4_;
        auVar37._8_4_ = fVar54 * auVar43._8_4_;
        auVar37._12_4_ = fVar24 * auVar43._12_4_;
        auVar34 = NEON_frsqrts(auVar43,auVar37,4);
        fVar31 = fVar31 * auVar43._0_4_ * auVar34._0_4_;
        fVar54 = auVar43._4_4_ * auVar34._4_4_ * 0.0;
        fVar32 = fVar32 * auVar43._8_4_ * auVar34._8_4_;
        fVar33 = fVar33 * auVar43._12_4_ * auVar34._12_4_;
        auVar26._0_8_ =
             CONCAT17((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                      CONCAT16((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                               CONCAT15((byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                        CONCAT14(SUB41(fVar54,0) & ~(byte)iVar10,
                                                 CONCAT13((byte)((uint)fVar31 >> 0x18) &
                                                          ~(byte)((uint)iVar46 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar31 >> 0x10) &
                                                                   ~(byte)((uint)iVar46 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar31 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar46 >> 8),SUB41(fVar31,0) & ~(byte)iVar46))))))
                     );
        auVar26[8] = SUB41(fVar32,0) & ~(byte)iVar52;
        auVar26[9] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar52 >> 8);
        auVar26[10] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
        auVar26[0xb] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
        auVar26[0xc] = SUB41(fVar33,0) & ~(byte)iVar53;
        auVar26[0xd] = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar53 >> 8);
        auVar26[0xe] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
        auVar26[0xf] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
        *(long *)(param_1 + 0x218) = auVar26._8_8_;
        *(undefined8 *)(param_1 + 0x210) = auVar26._0_8_;
      }
      if (local_58 != (long *)0x0) {
        lVar17 = local_58[0xb];
        piVar2 = (int *)(lVar17 + 0xc);
        do {
          iVar46 = *piVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar46;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_025ca368:
        if (iVar46 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
    }
  }
  else {
LAB_025ca244:
    auVar27._8_8_ = uVar12;
    auVar27._0_8_ = uVar12;
    auVar34 = NEON_frsqrte(auVar27,4);
    fVar54 = (float)uVar12;
    auVar44._0_4_ = auVar34._0_4_ * fVar54;
    fVar24 = (float)((ulong)uVar12 >> 0x20);
    auVar44._4_4_ = auVar34._4_4_ * fVar24;
    auVar44._8_4_ = auVar34._8_4_ * fVar54;
    auVar44._12_4_ = auVar34._12_4_ * fVar24;
    auVar50 = NEON_frsqrts(auVar34,auVar44,4);
    auVar38._0_4_ = auVar34._0_4_ * auVar50._0_4_;
    auVar38._4_4_ = auVar34._4_4_ * auVar50._4_4_;
    auVar38._8_4_ = auVar34._8_4_ * auVar50._8_4_;
    auVar38._12_4_ = auVar34._12_4_ * auVar50._12_4_;
    iVar46 = -(uint)(fVar54 == 0.0);
    iVar10 = -(uint)(fVar24 == 0.0);
    iVar52 = -(uint)(fVar54 == 0.0);
    iVar53 = -(uint)(fVar24 == 0.0);
    auVar28._0_4_ = fVar54 * auVar38._0_4_;
    auVar28._4_4_ = fVar24 * auVar38._4_4_;
    auVar28._8_4_ = fVar54 * auVar38._8_4_;
    auVar28._12_4_ = fVar24 * auVar38._12_4_;
    auVar34 = NEON_frsqrts(auVar38,auVar28,4);
    fVar54 = auVar48._0_4_ * auVar38._0_4_ * auVar34._0_4_;
    fVar24 = auVar38._4_4_ * auVar34._4_4_ * 0.0;
    fVar31 = auVar48._8_4_ * auVar38._8_4_ * auVar34._8_4_;
    fVar32 = auVar48._12_4_ * auVar38._12_4_ * auVar34._12_4_;
    auVar29._0_8_ =
         CONCAT17((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                  CONCAT16((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                           CONCAT15((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                    CONCAT14(SUB41(fVar24,0) & ~(byte)iVar10,
                                             CONCAT13((byte)((uint)fVar54 >> 0x18) &
                                                      ~(byte)((uint)iVar46 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar54 >> 0x10) &
                                                               ~(byte)((uint)iVar46 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar54 >> 8) &
                                                                        ~(byte)((uint)iVar46 >> 8),
                                                                        SUB41(fVar54,0) &
                                                                        ~(byte)iVar46)))))));
    auVar29[8] = SUB41(fVar31,0) & ~(byte)iVar52;
    auVar29[9] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar52 >> 8);
    auVar29[10] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
    auVar29[0xb] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
    auVar29[0xc] = SUB41(fVar32,0) & ~(byte)iVar53;
    auVar29[0xd] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar53 >> 8);
    auVar29[0xe] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
    auVar29[0xf] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
    *(long *)(param_1 + 0x218) = auVar29._8_8_;
    *(undefined8 *)(param_1 + 0x210) = auVar29._0_8_;
  }
joined_r0x025ca27c:
  if (local_90 != (long *)0x0) {
LAB_025ca280:
    lVar17 = local_90[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar46 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar46 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar46 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  return;
}


