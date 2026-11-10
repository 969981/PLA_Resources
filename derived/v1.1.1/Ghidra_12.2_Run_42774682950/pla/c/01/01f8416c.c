/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f8416c; name: FUN_01f8416c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f8416c(long param_1,long param_2)

{
  undefined1 (*pauVar1) [12];
  int *piVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  float extraout_s0;
  float fVar23;
  float extraout_s0_00;
  float extraout_var;
  float fVar25;
  float extraout_var_00;
  undefined8 uVar24;
  float extraout_var_01;
  float fVar26;
  float extraout_var_02;
  float extraout_var_03;
  float fVar27;
  float extraout_var_04;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_88;
  long *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar9 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar11 = PTR_DAT_04379670;
  puVar10 = PTR_DAT_04379668;
  lVar19 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  fVar29 = 0.0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xa3844e428bab2015;
    }
    else {
      uVar18 = 0xa3844e428bab2015;
      if (uVar16 < 0xa3844e428bab2016) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xa3844e428bab2015 / uVar16;
        }
        uVar18 = 0xa3844e428bab2015 - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xa3844e428bab2015) {
            if (plVar20[2] == -0x5c7bb1bd7454dfeb) goto LAB_01f8425c;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xa3844e428bab2015) {
            if (plVar20[2] == -0x5c7bb1bd7454dfeb) goto LAB_01f8425c;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar6 = 0;
              if (uVar16 != 0) {
                uVar6 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar6 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01f843b8:
  bVar3 = *puVar9;
joined_r0x01f84750:
  if (((bVar3 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar10;
  *(long *)puVar11 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  fVar30 = 0.0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xa3844e428bab2015;
    }
    else {
      uVar18 = 0xa3844e428bab2015;
      if (uVar16 < 0xa3844e428bab2016) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xa3844e428bab2015 / uVar16;
        }
        uVar18 = 0xa3844e428bab2015 - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xa3844e428bab2015) {
            if (plVar20[2] == -0x5c7bb1bd7454dfeb) goto LAB_01f84454;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xa3844e428bab2015) {
            if (plVar20[2] == -0x5c7bb1bd7454dfeb) goto LAB_01f84454;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar6 = 0;
              if (uVar16 != 0) {
                uVar6 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar6 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto LAB_01f845b0;
LAB_01f8425c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar22 = plVar20 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar16 = plVar20[0x21];
    fVar29 = 0.0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x687c5b88435e09e6;
      }
      else if (uVar16 < 0x687c5b88435e09e7) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x687c5b88435e09e6 / uVar16;
        }
        uVar18 = 0x687c5b88435e09e6 - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x687c5b88435e09e6;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0x687c5b88435e09e6) {
              if (plVar21[2] == 0x687c5b88435e09e6) goto LAB_01f843a0;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0x687c5b88435e09e6) {
              if (plVar21[2] == 0x687c5b88435e09e6) goto LAB_01f843a0;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar6 = 0;
                if (uVar16 != 0) {
                  uVar6 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar6 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01f843a4;
  }
  goto LAB_01f843b8;
LAB_01f843a0:
  fVar29 = *(float *)(plVar21 + 6);
LAB_01f843a4:
  do {
    iVar12 = (int)*plVar22 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar5) {
      *(int *)plVar22 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 != 0) goto LAB_01f843b8;
  (**(code **)(*plVar20 + 0x10))();
  bVar3 = *puVar9;
  goto joined_r0x01f84750;
LAB_01f84454:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01f845b0;
  plVar22 = plVar20 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar5) {
      *(int *)plVar22 = (int)*plVar22 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar16 = plVar20[0x21];
  fVar30 = 0.0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0x687c5c88435e0b99;
    }
    else if (uVar16 < 0x687c5c88435e0b9a) {
      uVar18 = 0;
      if (uVar16 != 0) {
        uVar18 = 0x687c5c88435e0b99 / uVar16;
      }
      uVar18 = 0x687c5c88435e0b99 - uVar18 * uVar16;
    }
    else {
      uVar18 = 0x687c5c88435e0b99;
    }
    plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar21[1] == 0x687c5c88435e0b99) {
            if (plVar21[2] == 0x687c5c88435e0b99) goto LAB_01f84598;
          }
          else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar21[1];
          if (uVar17 == 0x687c5c88435e0b99) {
            if (plVar21[2] == 0x687c5c88435e0b99) goto LAB_01f84598;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar6 = 0;
              if (uVar16 != 0) {
                uVar6 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar6 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_01f8459c;
LAB_01f84598:
  fVar30 = *(float *)(plVar21 + 6);
LAB_01f8459c:
  do {
    iVar12 = (int)*plVar22 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar5) {
      *(int *)plVar22 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar20 + 0x10))();
  }
LAB_01f845b0:
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_00b636fc(&local_78,param_1 + (long)*(int *)(param_2 + 8) * 0x20 + 0x1f8);
  FUN_00bf5c04(&local_80,&local_78);
  puVar8 = local_78;
  if (local_80 != (long *)0x0) {
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    FUN_00ac3fa4(&local_a0,local_80 + 0x49);
    FUN_0099c748(&local_88,&local_a0);
    puVar8 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_a0 + 1);
      do {
        iVar12 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_68 = *puVar8;
        FUN_02a44274(lVar19 + 0xd8,&local_68);
      }
    }
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    FUN_00ae8374(&local_a0,local_88 + 0x44);
    puVar8 = local_a0;
    puVar10 = PTR_DAT_04379e80;
    puVar9 = PTR_DAT_04379e78;
    if (local_a0 != (undefined8 *)0x0) {
      if (*(int *)((long)local_a0 + 0xc) != 0) {
        piVar2 = (int *)((long)local_a0 + 0xc);
        iVar12 = *(int *)((long)local_a0 + 0xc);
        do {
          plVar20 = (long *)puVar8[2];
          if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
            uVar24 = FUN_0095a420();
            *(undefined8 *)puVar10 = uVar24;
            __cxa_guard_release(puVar9);
          }
          while( true ) {
            if (plVar20 == (long *)0x0) goto LAB_01f8498c;
            if (plVar20 == (long *)puVar10) break;
            plVar20 = (long *)*plVar20;
          }
          iVar13 = *piVar2;
          if (iVar13 == iVar12) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar19 = puVar8[3];
              plVar20 = (long *)0x0;
              puVar8 = local_a0;
              if (lVar19 != 0) {
                plVar20 = (long *)(lVar19 + -0x50);
              }
              goto joined_r0x01f849b0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = iVar13;
        } while (iVar13 != 0);
      }
LAB_01f8498c:
      plVar20 = (long *)0x0;
      puVar8 = local_a0;
joined_r0x01f849b0:
      local_a0 = puVar8;
      if (puVar8 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar8 + 1);
        do {
          iVar12 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          puVar8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar19 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar19;
          local_68 = *puVar8;
          FUN_02a44274(lVar19 + 0xd8,&local_68);
        }
      }
      if (plVar20 != (long *)0x0) {
        FUN_00aae1c0(&local_a0,plVar20);
        puVar8 = local_a0;
        if (local_a0 != (undefined8 *)0x0) {
          if (*(int *)((long)local_a0 + 0xc) != 0) {
            piVar2 = (int *)((long)local_a0 + 0xc);
            iVar12 = *(int *)((long)local_a0 + 0xc);
            do {
              plVar22 = (long *)puVar8[2];
              lVar19 = FUN_00a3edb8();
              while( true ) {
                if (plVar22 == (long *)0x0) goto LAB_01f84b30;
                if (plVar22 == (long *)lVar19) break;
                plVar22 = (long *)*plVar22;
              }
              iVar13 = *piVar2;
              if (iVar13 == iVar12) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = iVar12 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') {
                  lVar19 = puVar8[3];
                  plVar22 = (long *)0x0;
                  puVar8 = local_a0;
                  if (lVar19 != 0) {
                    plVar22 = (long *)(lVar19 + -0x50);
                  }
                  goto joined_r0x01f84b28;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar12 = iVar13;
            } while (iVar13 != 0);
          }
LAB_01f84b30:
          plVar22 = (long *)0x0;
          puVar8 = local_a0;
joined_r0x01f84b28:
          local_a0 = puVar8;
          if (puVar8 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar8 + 1);
            do {
              iVar12 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar12 + -1 == 0) {
              puVar8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_68 = *puVar8;
              FUN_02a44274(lVar19 + 0xd8,&local_68);
            }
          }
          if (plVar22 != (long *)0x0) {
            pfVar14 = (float *)FUN_01a7555c(local_80);
            if (0.0 < *pfVar14) {
              pfVar14 = (float *)FUN_01a7555c(local_80);
              fVar23 = 0.0;
              fVar26 = 0.0;
              fVar27 = 0.0;
              fVar25 = *pfVar14;
            }
            else {
              pauVar1 = (undefined1 (*) [12])(plVar22 + 0x52);
              fVar25 = (float)((ulong)plVar22[0x53] >> 0x20);
              uVar24 = *(undefined8 *)*pauVar1;
              auVar28._12_4_ = fVar25;
              auVar28._0_12_ = *pauVar1;
              auVar7._12_4_ = fVar25;
              auVar7._0_12_ = *pauVar1;
              auVar28 = NEON_ext(auVar28,auVar7,8,1);
              FUN_01a883ec(local_88);
              fVar23 = (float)uVar24 - extraout_s0;
              fVar25 = ((float)((ulong)uVar24 >> 0x20) + fVar25 + -0.1) - extraout_var;
              fVar26 = auVar28._0_4_ - extraout_var_01;
              fVar27 = 0.0 - extraout_var_03;
            }
            FUN_01a883ec(local_88);
            uStack_98 = CONCAT44(fVar27 + extraout_var_04,fVar26 + extraout_var_02);
            local_a0 = (undefined8 *)CONCAT44(fVar25 + extraout_var_00,fVar23 + extraout_s0_00);
            uVar24 = FUN_01832ce8(&local_a0);
            if (((*PTR_DAT_04379690 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379690), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379690);
            }
            lVar19 = *(long *)PTR_DAT_04379698;
            *(long *)PTR_DAT_043796a0 = lVar19;
            if ((lVar19 != 0) &&
               (plVar21 = *(long **)(*(long *)(lVar19 + 0x50) + 0x30), plVar21 != (long *)0x0)) {
              lVar19 = plVar21[0xb];
              if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl("","","",0);
              }
              if (*(long *)(lVar19 + 0x10) == 0) {
                uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x18))((float)uVar24);
                *(undefined8 *)(lVar19 + 0x10) = uVar15;
              }
              piVar2 = (int *)(lVar19 + 0xc);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = *piVar2 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              FUN_0146a220(plVar21,*(undefined4 *)(param_1 + 0x310));
              FUN_01444e20(fVar29 + (float)uVar24,fVar30 + (float)((ulong)uVar24 >> 0x20));
              lVar19 = plVar21[0xb];
              piVar2 = (int *)(lVar19 + 0xc);
              do {
                iVar12 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = iVar12 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar12 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*plVar21 + 0x20))(plVar21);
              }
            }
            lVar19 = plVar22[0xb];
            piVar2 = (int *)(lVar19 + 0xc);
            do {
              iVar12 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*plVar22 + 0x20))(plVar22);
            }
          }
        }
        lVar19 = plVar20[0xb];
        piVar2 = (int *)(lVar19 + 0xc);
        do {
          iVar12 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*plVar20 + 0x20))(plVar20);
        }
      }
    }
    if (local_88 != (long *)0x0) {
      lVar19 = local_88[0xb];
      piVar2 = (int *)(lVar19 + 0xc);
      do {
        iVar12 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
    puVar8 = local_78;
    if (local_80 != (long *)0x0) {
      lVar19 = local_80[0xb];
      piVar2 = (int *)(lVar19 + 0xc);
      do {
        iVar12 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
        puVar8 = local_78;
      }
    }
  }
  if (puVar8 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar8 + 1);
    do {
      iVar12 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar8[2] = 0;
      local_78 = puVar8;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar19;
      local_a0 = (undefined8 *)*puVar8;
      FUN_02a44274(lVar19 + 0xd8,&local_a0);
    }
  }
  return;
}


