/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017f28b4; name: FUN_017f28b4
 */


void FUN_017f28b4(long param_1,byte *param_2,long *param_3,int *param_4)

{
  int *piVar1;
  byte *pbVar2;
  long *plVar3;
  ulong *puVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  ulong uVar26;
  long *plVar27;
  ulong uVar28;
  undefined1 *puVar29;
  long *plVar30;
  long lVar31;
  long *plVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  ulong *local_d0;
  undefined8 uStack_c8;
  ulong *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  ulong local_90 [2];
  
  puVar18 = PTR_DAT_0437a668;
  puVar17 = PTR_DAT_0437a660;
  puVar16 = PTR_DAT_043794d8;
  puVar15 = PTR_DAT_043794d0;
  lVar31 = *(long *)(param_1 + 0x70);
  if (lVar31 == 0) {
    return;
  }
  if (*(int *)(lVar31 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar31 + 0xc);
  iVar20 = *(int *)(lVar31 + 0xc);
  do {
    plVar32 = *(long **)(lVar31 + 0x10);
    if (((*puVar18 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar18), iVar19 != 0)) {
      if (((*puVar15 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar15), iVar19 != 0)) {
        uVar21 = FUN_0087f8f0();
        *(undefined8 *)puVar16 = uVar21;
        __cxa_guard_release(puVar15);
      }
      *(undefined **)puVar17 = puVar16;
      __cxa_guard_release(puVar18);
    }
    while( true ) {
      if (plVar32 == (long *)0x0) {
        return;
      }
      if (plVar32 == (long *)puVar17) break;
      plVar32 = (long *)*plVar32;
    }
    iVar19 = *piVar1;
    if (iVar19 == iVar20) {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar20 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 == '\0') {
        lVar31 = *(long *)(lVar31 + 0x18);
        if (lVar31 == 0) {
          return;
        }
        plVar32 = (long *)param_3[6];
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar20 = iVar19;
    if (iVar19 == 0) {
      return;
    }
  } while( true );
joined_r0x017f2a08:
  if (plVar32 != (long *)0x0) {
    do {
      if (*param_2 == 0) {
LAB_017f2a3c:
        if (param_2[0x50] != 0) {
          lVar23 = 0;
          if (*(long **)(param_2 + 0x60) != (long *)0x0) {
            lVar23 = **(long **)(param_2 + 0x60);
          }
          if (lVar23 == plVar32[2]) goto LAB_017f2a1c;
        }
        if (param_2[0xa0] != 0) {
          lVar23 = 0;
          if (*(long **)(param_2 + 0xb0) != (long *)0x0) {
            lVar23 = **(long **)(param_2 + 0xb0);
          }
          if (lVar23 == plVar32[2]) goto LAB_017f2a1c;
        }
        if (param_2[0xf0] != 0) {
          lVar23 = 0;
          if (*(long **)(param_2 + 0x100) != (long *)0x0) {
            lVar23 = **(long **)(param_2 + 0x100);
          }
          if (lVar23 == plVar32[2]) goto LAB_017f2a1c;
        }
        if (param_2[0x140] != 0) {
          lVar23 = 0;
          if (*(long **)(param_2 + 0x150) != (long *)0x0) {
            lVar23 = **(long **)(param_2 + 0x150);
          }
          if (lVar23 == plVar32[2]) goto LAB_017f2a1c;
        }
        if (param_2[400] != 0) {
          lVar23 = 0;
          if (*(long **)(param_2 + 0x1a0) != (long *)0x0) {
            lVar23 = **(long **)(param_2 + 0x1a0);
          }
          if (lVar23 == plVar32[2]) goto LAB_017f2a1c;
        }
        if (param_2[0x1e0] != 0) {
          lVar23 = 0;
          if (*(long **)(param_2 + 0x1f0) != (long *)0x0) {
            lVar23 = **(long **)(param_2 + 0x1f0);
          }
          if (lVar23 == plVar32[2]) goto LAB_017f2a1c;
        }
        if (param_2[0x230] != 0) {
          lVar23 = 0;
          if (*(long **)(param_2 + 0x240) != (long *)0x0) {
            lVar23 = **(long **)(param_2 + 0x240);
          }
          if (lVar23 == plVar32[2]) goto LAB_017f2a1c;
        }
        if (param_2[0x280] != 0) {
          lVar23 = 0;
          if (*(long **)(param_2 + 0x290) != (long *)0x0) {
            lVar23 = **(long **)(param_2 + 0x290);
          }
          if (lVar23 == plVar32[2]) goto LAB_017f2a1c;
        }
        if (param_2[0x2d0] != 0) {
          lVar23 = 0;
          if (*(long **)(param_2 + 0x2e0) != (long *)0x0) {
            lVar23 = **(long **)(param_2 + 0x2e0);
          }
          if (lVar23 == plVar32[2]) goto LAB_017f2a1c;
        }
        if (param_2[800] != 0) {
          lVar23 = 0;
          if (*(long **)(param_2 + 0x330) != (long *)0x0) {
            lVar23 = **(long **)(param_2 + 0x330);
          }
          if (lVar23 == plVar32[2]) goto LAB_017f2a1c;
        }
        if (param_2[0x370] != 0) {
          lVar23 = 0;
          if (*(long **)(param_2 + 0x380) != (long *)0x0) {
            lVar23 = **(long **)(param_2 + 0x380);
          }
          if (lVar23 == plVar32[2]) goto LAB_017f2a1c;
        }
        if (param_2[0x3c0] != 0) {
          lVar23 = 0;
          if (*(long **)(param_2 + 0x3d0) != (long *)0x0) {
            lVar23 = **(long **)(param_2 + 0x3d0);
          }
          if (lVar23 == plVar32[2]) goto LAB_017f2a1c;
        }
        if (param_2[0x410] != 0) {
          lVar23 = 0;
          if (*(long **)(param_2 + 0x420) != (long *)0x0) {
            lVar23 = **(long **)(param_2 + 0x420);
          }
          if (lVar23 == plVar32[2]) goto LAB_017f2a1c;
        }
        if (param_2[0x460] != 0) {
          lVar23 = 0;
          if (*(long **)(param_2 + 0x470) != (long *)0x0) {
            lVar23 = **(long **)(param_2 + 0x470);
          }
          if (lVar23 == plVar32[2]) goto LAB_017f2a1c;
        }
        if (param_2[0x4b0] == 0) goto LAB_017f2c1c;
        lVar23 = 0;
        if (*(long **)(param_2 + 0x4c0) != (long *)0x0) {
          lVar23 = **(long **)(param_2 + 0x4c0);
        }
        if (lVar23 != plVar32[2]) goto LAB_017f2c1c;
      }
      else {
        lVar23 = 0;
        if (*(long **)(param_2 + 0x10) != (long *)0x0) {
          lVar23 = **(long **)(param_2 + 0x10);
        }
        if (lVar23 != plVar32[2]) goto LAB_017f2a3c;
      }
LAB_017f2a1c:
      plVar32 = (long *)*plVar32;
      if (plVar32 == (long *)0x0) break;
    } while( true );
  }
  uVar22 = FUN_017f22f8(param_1);
  uVar14 = DAT_0388a148;
  uVar21 = DAT_0388a140;
  if (((uVar22 & 1) == 0) &&
     ((param_3[0xb] != 0 ||
      ((ulong)param_2[0x50] + (ulong)*param_2 + (ulong)param_2[0xa0] + (ulong)param_2[0xf0] +
       (ulong)param_2[0x140] + (ulong)param_2[400] + (ulong)param_2[0x1e0] + (ulong)param_2[0x230] +
       (ulong)param_2[0x280] + (ulong)param_2[0x2d0] + (ulong)param_2[800] + (ulong)param_2[0x370] +
       (ulong)param_2[0x3c0] + (ulong)param_2[0x410] + (ulong)param_2[0x460] + (ulong)param_2[0x4b0]
       != 0)))) goto LAB_017f39bc;
  pbVar2 = param_2 + 0x500;
  bVar8 = false;
LAB_017f2ca4:
  if (*param_2 != 0) {
    local_d0 = (ulong *)0x0;
    uStack_c8 = 0;
    FUN_00b63974(&local_d0,param_2 + 0x10);
    local_c0 = (ulong *)0x0;
    uStack_b8 = 0;
    FUN_00cfa028(&local_c0,param_2 + 0x20);
    uStack_a8 = *(long *)(param_2 + 0x38);
    local_a0 = *(undefined4 *)(param_2 + 0x40);
    local_b0 = *(long *)(param_2 + 0x30);
    local_90[0] = 0;
    if (local_d0 != (ulong *)0x0) {
      local_90[0] = *local_d0;
    }
    uVar22 = param_3[1];
    if (uVar22 != 0) {
      uVar26 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
      uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar26 < 2) {
        uVar28 = uVar22 - 1 & local_90[0];
      }
      else {
        uVar28 = local_90[0];
        if (uVar22 <= local_90[0]) {
          uVar28 = 0;
          if (uVar22 != 0) {
            uVar28 = local_90[0] / uVar22;
          }
          uVar28 = local_90[0] - uVar28 * uVar22;
        }
      }
      plVar32 = *(long **)(*param_3 + uVar28 * 8);
      if ((plVar32 != (long *)0x0) && (plVar32 = (long *)*plVar32, plVar32 != (long *)0x0)) {
        if (uVar26 < 2) {
          do {
            if (plVar32[1] == local_90[0]) {
              if (plVar32[2] == local_90[0]) goto LAB_017f2e3c;
            }
            else if ((plVar32[1] & uVar22 - 1) != uVar28) break;
            plVar32 = (long *)*plVar32;
          } while (plVar32 != (long *)0x0);
        }
        else {
          do {
            uVar26 = plVar32[1];
            if (uVar26 == local_90[0]) {
              if (plVar32[2] == local_90[0]) goto LAB_017f2e3c;
            }
            else {
              if (uVar22 <= uVar26) {
                uVar9 = 0;
                if (uVar22 != 0) {
                  uVar9 = uVar26 / uVar22;
                }
                uVar26 = uVar26 - uVar9 * uVar22;
              }
              if (uVar26 != uVar28) break;
            }
            plVar32 = (long *)*plVar32;
          } while (plVar32 != (long *)0x0);
        }
      }
    }
    lVar23 = FUN_017f3a40(param_3,local_90);
    FUN_00b63974(lVar23,&local_d0);
    FUN_00cfa028(lVar23 + 0x10,&local_c0);
    bVar5 = false;
    *(long *)(lVar23 + 0x28) = uStack_a8;
    *(undefined4 *)(lVar23 + 0x30) = local_a0;
    *(long *)(lVar23 + 0x20) = local_b0;
    puVar13 = local_c0;
    goto joined_r0x017f37a4;
  }
  goto LAB_017f3920;
LAB_017f2c1c:
  plVar32 = (long *)FUN_01805804(param_3);
  goto joined_r0x017f2a08;
LAB_017f2e3c:
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar23;
  puVar24 = *(undefined1 **)(lVar23 + 0x60);
  fVar38 = 0.0;
  if (puVar24 != (undefined1 *)0x0) {
    uVar22 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      puVar25 = (undefined1 *)((ulong)(puVar24 + -1) & 0x7c08eae870e235e0);
    }
    else {
      puVar25 = &DAT_7c08eae870e235e0;
      if (puVar24 < (undefined1 *)0x7c08eae870e235e1) {
        uVar26 = 0;
        if (puVar24 != (undefined1 *)0x0) {
          uVar26 = 0x7c08eae870e235e0 / (ulong)puVar24;
        }
        puVar25 = &DAT_7c08eae870e235e0 + -(uVar26 * (long)puVar24);
      }
    }
    fVar38 = 0.0;
    plVar27 = *(long **)(*(long *)(lVar23 + 0x58) + (long)puVar25 * 8);
    if (plVar27 != (long *)0x0) {
      plVar27 = (long *)*plVar27;
      fVar38 = 0.0;
      if (plVar27 != (long *)0x0) {
        if (uVar22 < 2) {
          do {
            if ((undefined1 *)plVar27[1] == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar27[2] == &DAT_7c08eae870e235e0) goto LAB_017f2fa4;
            }
            else if ((undefined1 *)((ulong)plVar27[1] & (ulong)(puVar24 + -1)) != puVar25) break;
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
        else {
          do {
            puVar29 = (undefined1 *)plVar27[1];
            if (puVar29 == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar27[2] == &DAT_7c08eae870e235e0) goto LAB_017f2fa4;
            }
            else {
              if (puVar24 <= puVar29) {
                uVar22 = 0;
                if (puVar24 != (undefined1 *)0x0) {
                  uVar22 = (ulong)puVar29 / (ulong)puVar24;
                }
                puVar29 = puVar29 + -(uVar22 * (long)puVar24);
              }
              if (puVar29 != puVar25) break;
            }
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
        fVar38 = 0.0;
      }
    }
  }
LAB_017f30e4:
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar23;
  puVar24 = *(undefined1 **)(lVar23 + 0x60);
  if (puVar24 == (undefined1 *)0x0) {
LAB_017f3508:
    iVar20 = 0;
  }
  else {
    uVar22 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      puVar25 = (undefined1 *)((ulong)(puVar24 + -1) & 0x7c08eae870e235e0);
    }
    else {
      puVar25 = &DAT_7c08eae870e235e0;
      if (puVar24 < (undefined1 *)0x7c08eae870e235e1) {
        uVar26 = 0;
        if (puVar24 != (undefined1 *)0x0) {
          uVar26 = 0x7c08eae870e235e0 / (ulong)puVar24;
        }
        puVar25 = &DAT_7c08eae870e235e0 + -(uVar26 * (long)puVar24);
      }
    }
    plVar27 = *(long **)(*(long *)(lVar23 + 0x58) + (long)puVar25 * 8);
    if ((plVar27 == (long *)0x0) || (plVar27 = (long *)*plVar27, plVar27 == (long *)0x0))
    goto LAB_017f3508;
    if (1 < uVar22) {
      do {
        puVar29 = (undefined1 *)plVar27[1];
        if (puVar29 == &DAT_7c08eae870e235e0) {
          if ((undefined1 *)plVar27[2] == &DAT_7c08eae870e235e0) goto LAB_017f3260;
        }
        else {
          if (puVar24 <= puVar29) {
            uVar22 = 0;
            if (puVar24 != (undefined1 *)0x0) {
              uVar22 = (ulong)puVar29 / (ulong)puVar24;
            }
            puVar29 = puVar29 + -(uVar22 * (long)puVar24);
          }
          if (puVar29 != puVar25) break;
        }
        plVar27 = (long *)*plVar27;
      } while (plVar27 != (long *)0x0);
      goto LAB_017f3508;
    }
    do {
      if ((undefined1 *)plVar27[1] == &DAT_7c08eae870e235e0) {
        if ((undefined1 *)plVar27[2] == &DAT_7c08eae870e235e0) goto LAB_017f3260;
      }
      else if ((undefined1 *)((ulong)plVar27[1] & (ulong)(puVar24 + -1)) != puVar25)
      goto LAB_017f3508;
      plVar27 = (long *)*plVar27;
      iVar20 = 0;
    } while (plVar27 != (long *)0x0);
  }
LAB_017f3390:
  plVar27 = plVar32 + 8;
  fVar33 = (float)*plVar27 * (float)local_b0;
  fVar34 = (float)((ulong)*plVar27 >> 0x20) * local_b0._4_4_;
  fVar35 = (float)plVar32[9] * (float)uStack_a8;
  fVar36 = (float)((ulong)plVar32[9] >> 0x20) * uStack_a8._4_4_;
  auVar37._4_4_ = fVar34;
  auVar37._0_4_ = fVar33;
  auVar37._8_4_ = fVar35;
  auVar37._12_4_ = fVar36;
  auVar10._4_4_ = fVar34;
  auVar10._0_4_ = fVar33;
  auVar10._8_4_ = fVar35;
  auVar10._12_4_ = fVar36;
  auVar37 = NEON_ext(auVar37,auVar10,8,1);
  fVar34 = auVar37._0_4_ + fVar33 + auVar37._4_4_ + fVar34;
  fVar33 = -1.0;
  if ((-1.0 <= fVar34) && (fVar33 = fVar34, 1.0 < fVar34)) {
    fVar33 = 1.0;
  }
  if (fVar33 <= fVar38) {
    *(undefined4 *)(plVar32 + 10) = 0;
  }
  else {
    uVar22 = FUN_017f26fc(param_1);
    if ((uVar22 & 1) != 0) {
      *(int *)(plVar32 + 10) = (int)plVar32[10] + 1;
      plVar32[9] = uStack_a8;
      *plVar27 = local_b0;
    }
    local_110 = (float)uVar21;
    fStack_10c = (float)((ulong)uVar21 >> 0x20);
    fStack_108 = (float)uVar14;
    fStack_104 = (float)((ulong)uVar14 >> 0x20);
    local_110 = (float)*plVar27 * local_110;
    fStack_10c = (float)((ulong)*plVar27 >> 0x20) * fStack_10c;
    fStack_108 = (float)plVar32[9] * fStack_108;
    fStack_104 = (float)((ulong)plVar32[9] >> 0x20) * fStack_104;
    auVar11._4_4_ = fStack_10c;
    auVar11._0_4_ = local_110;
    auVar11._8_4_ = fStack_108;
    auVar11._12_4_ = fStack_104;
    auVar12._4_4_ = fStack_10c;
    auVar12._0_4_ = local_110;
    auVar12._8_4_ = fStack_108;
    auVar12._12_4_ = fStack_104;
    auVar37 = NEON_ext(auVar11,auVar12,8,1);
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar23 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar23;
    puVar24 = *(undefined1 **)(lVar23 + 0x60);
    fVar38 = 0.0;
    if (puVar24 != (undefined1 *)0x0) {
      uVar22 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        puVar25 = (undefined1 *)((ulong)(puVar24 + -1) & 0x7c08eae870e235e0);
      }
      else {
        puVar25 = &DAT_7c08eae870e235e0;
        if (puVar24 < (undefined1 *)0x7c08eae870e235e1) {
          uVar26 = 0;
          if (puVar24 != (undefined1 *)0x0) {
            uVar26 = 0x7c08eae870e235e0 / (ulong)puVar24;
          }
          puVar25 = &DAT_7c08eae870e235e0 + -(uVar26 * (long)puVar24);
        }
      }
      fVar38 = 0.0;
      plVar27 = *(long **)(*(long *)(lVar23 + 0x58) + (long)puVar25 * 8);
      if (plVar27 != (long *)0x0) {
        plVar27 = (long *)*plVar27;
        fVar38 = 0.0;
        if (plVar27 != (long *)0x0) {
          if (uVar22 < 2) {
            do {
              if ((undefined1 *)plVar27[1] == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar27[2] == &DAT_7c08eae870e235e0) goto LAB_017f35b0;
              }
              else if ((undefined1 *)((ulong)plVar27[1] & (ulong)(puVar24 + -1)) != puVar25) break;
              plVar27 = (long *)*plVar27;
            } while (plVar27 != (long *)0x0);
          }
          else {
            do {
              puVar29 = (undefined1 *)plVar27[1];
              if (puVar29 == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar27[2] == &DAT_7c08eae870e235e0) goto LAB_017f35b0;
              }
              else {
                if (puVar24 <= puVar29) {
                  uVar22 = 0;
                  if (puVar24 != (undefined1 *)0x0) {
                    uVar22 = (ulong)puVar29 / (ulong)puVar24;
                  }
                  puVar29 = puVar29 + -(uVar22 * (long)puVar24);
                }
                if (puVar29 != puVar25) break;
              }
              plVar27 = (long *)*plVar27;
            } while (plVar27 != (long *)0x0);
          }
          fVar38 = 0.0;
        }
      }
    }
LAB_017f3760:
    if (fVar38 < auVar37._0_4_ + local_110 + auVar37._4_4_ + fStack_10c) {
      bVar8 = true;
    }
    else if (iVar20 < (int)plVar32[10]) {
      bVar5 = true;
      bVar8 = true;
      puVar13 = local_c0;
      goto joined_r0x017f37a4;
    }
  }
  bVar5 = false;
  puVar13 = local_c0;
joined_r0x017f37a4:
  local_c0 = puVar13;
  if (puVar13 != (ulong *)0x0) {
    puVar4 = puVar13 + 1;
    do {
      iVar20 = (int)*puVar4 + -1;
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar6) {
        *(int *)puVar4 = iVar20;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar20 == 0) {
      puVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_90[0] = *puVar13;
      FUN_02a44274(lVar23 + 0xd8,local_90);
    }
  }
  puVar13 = local_d0;
  if (local_d0 != (ulong *)0x0) {
    puVar4 = local_d0 + 1;
    do {
      iVar20 = (int)*puVar4 + -1;
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar6) {
        *(int *)puVar4 = iVar20;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar20 == 0) {
      local_d0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_90[0] = *puVar13;
      FUN_02a44274(lVar23 + 0xd8,local_90);
    }
  }
  param_2 = param_2 + 0x50;
  if ((param_2 == pbVar2) || (bVar5)) {
LAB_017f3920:
    if (bVar8) {
LAB_017f39bc:
      FUN_0180613c(param_3);
      FUN_01e42f90(1,*param_4,0);
      if (*param_4 - 6U < 2) {
        *(undefined1 *)(param_1 + 0x1080) = 1;
      }
      else if (*param_4 == 4) {
        *(undefined1 *)(param_1 + 0x1081) = 1;
      }
    }
    lVar23 = *(long *)(lVar31 + 8);
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar20 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar20 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*(long *)(lVar31 + -0x50) + 0x20))();
    }
    return;
  }
  goto LAB_017f2ca4;
LAB_017f2fa4:
  plVar27 = (long *)plVar27[3];
  fVar38 = 0.0;
  if (plVar27 != (long *)0x0) {
    plVar3 = plVar27 + 10;
    do {
      cVar7 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar22 = plVar27[0x21];
    fVar38 = 0.0;
    if (uVar22 != 0) {
      uVar26 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
      uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar26 < 2) {
        uVar28 = uVar22 - 1 & 0x2b0d17c10e6b85a2;
      }
      else {
        uVar28 = 0x2b0d17c10e6b85a2;
        if (uVar22 < 0x2b0d17c10e6b85a3) {
          uVar28 = 0;
          if (uVar22 != 0) {
            uVar28 = 0x2b0d17c10e6b85a2 / uVar22;
          }
          uVar28 = 0x2b0d17c10e6b85a2 - uVar28 * uVar22;
        }
      }
      fVar38 = 0.0;
      plVar30 = *(long **)(plVar27[0x20] + uVar28 * 8);
      if (plVar30 != (long *)0x0) {
        plVar30 = (long *)*plVar30;
        fVar38 = 0.0;
        if (plVar30 != (long *)0x0) {
          if (uVar26 < 2) {
            do {
              if (plVar30[1] == 0x2b0d17c10e6b85a2) {
                if (plVar30[2] == 0x2b0d17c10e6b85a2) goto LAB_017f30cc;
              }
              else if ((plVar30[1] & uVar22 - 1) != uVar28) {
                fVar38 = 0.0;
                goto LAB_017f30d0;
              }
              plVar30 = (long *)*plVar30;
            } while (plVar30 != (long *)0x0);
            fVar38 = 0.0;
          }
          else {
            do {
              uVar26 = plVar30[1];
              if (uVar26 == 0x2b0d17c10e6b85a2) {
                if (plVar30[2] == 0x2b0d17c10e6b85a2) goto LAB_017f30cc;
              }
              else {
                if (uVar22 <= uVar26) {
                  uVar9 = 0;
                  if (uVar22 != 0) {
                    uVar9 = uVar26 / uVar22;
                  }
                  uVar26 = uVar26 - uVar9 * uVar22;
                }
                if (uVar26 != uVar28) {
                  fVar38 = 0.0;
                  goto LAB_017f30d0;
                }
              }
              plVar30 = (long *)*plVar30;
            } while (plVar30 != (long *)0x0);
            fVar38 = 0.0;
          }
        }
      }
    }
    goto LAB_017f30d0;
  }
  goto LAB_017f30e4;
LAB_017f30cc:
  fVar38 = *(float *)(plVar30 + 6);
LAB_017f30d0:
  do {
    iVar20 = (int)*plVar3 + -1;
    cVar7 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar20;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar20 == 0) {
    (**(code **)(*plVar27 + 0x10))();
  }
  goto LAB_017f30e4;
LAB_017f3260:
  plVar27 = (long *)plVar27[3];
  if (plVar27 != (long *)0x0) {
    plVar3 = plVar27 + 10;
    do {
      cVar7 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar22 = plVar27[0x14];
    if (uVar22 == 0) {
      iVar20 = 0;
    }
    else {
      uVar26 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
      uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar26 < 2) {
        uVar28 = uVar22 - 1 & 0x160c53a4f029de8c;
      }
      else {
        uVar28 = 0x160c53a4f029de8c;
        if (uVar22 < 0x160c53a4f029de8d) {
          uVar28 = 0;
          if (uVar22 != 0) {
            uVar28 = 0x160c53a4f029de8c / uVar22;
          }
          uVar28 = 0x160c53a4f029de8c - uVar28 * uVar22;
        }
      }
      plVar30 = *(long **)(plVar27[0x13] + uVar28 * 8);
      if (plVar30 == (long *)0x0) {
        iVar20 = 0;
      }
      else {
        plVar30 = (long *)*plVar30;
        if (plVar30 == (long *)0x0) {
          iVar20 = 0;
        }
        else if (uVar26 < 2) {
          do {
            if (plVar30[1] == 0x160c53a4f029de8c) {
              if (plVar30[2] == 0x160c53a4f029de8c) goto LAB_017f3378;
            }
            else if ((plVar30[1] & uVar22 - 1) != uVar28) {
              iVar20 = 0;
              break;
            }
            plVar30 = (long *)*plVar30;
            iVar20 = 0;
          } while (plVar30 != (long *)0x0);
        }
        else {
          do {
            uVar26 = plVar30[1];
            if (uVar26 == 0x160c53a4f029de8c) {
              if (plVar30[2] == 0x160c53a4f029de8c) goto LAB_017f3378;
            }
            else {
              if (uVar22 <= uVar26) {
                uVar9 = 0;
                if (uVar22 != 0) {
                  uVar9 = uVar26 / uVar22;
                }
                uVar26 = uVar26 - uVar9 * uVar22;
              }
              if (uVar26 != uVar28) {
                iVar20 = 0;
                goto LAB_017f337c;
              }
            }
            plVar30 = (long *)*plVar30;
          } while (plVar30 != (long *)0x0);
          iVar20 = 0;
        }
      }
    }
    goto LAB_017f337c;
  }
  goto LAB_017f3508;
LAB_017f3378:
  iVar20 = (int)plVar30[6];
LAB_017f337c:
  do {
    iVar19 = (int)*plVar3 + -1;
    cVar7 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar19;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar19 == 0) {
    (**(code **)(*plVar27 + 0x10))();
  }
  goto LAB_017f3390;
LAB_017f35b0:
  plVar27 = (long *)plVar27[3];
  fVar38 = 0.0;
  if (plVar27 != (long *)0x0) {
    plVar3 = plVar27 + 10;
    do {
      cVar7 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar22 = plVar27[0x21];
    fVar38 = 0.0;
    if (uVar22 != 0) {
      uVar26 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
      uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar26 < 2) {
        uVar28 = uVar22 - 1 & 0xbf9ada94fafaa8e5;
      }
      else {
        uVar28 = 0xbf9ada94fafaa8e5;
        if (uVar22 < 0xbf9ada94fafaa8e6) {
          uVar28 = 0;
          if (uVar22 != 0) {
            uVar28 = 0xbf9ada94fafaa8e5 / uVar22;
          }
          uVar28 = 0xbf9ada94fafaa8e5 - uVar28 * uVar22;
        }
      }
      fVar38 = 0.0;
      plVar30 = *(long **)(plVar27[0x20] + uVar28 * 8);
      if (plVar30 != (long *)0x0) {
        plVar30 = (long *)*plVar30;
        fVar38 = 0.0;
        if (plVar30 != (long *)0x0) {
          if (uVar26 < 2) {
            do {
              if (plVar30[1] == 0xbf9ada94fafaa8e5) {
                if (plVar30[2] == -0x4065256b0505571b) goto LAB_017f3748;
              }
              else if ((plVar30[1] & uVar22 - 1) != uVar28) {
                fVar38 = 0.0;
                goto LAB_017f374c;
              }
              plVar30 = (long *)*plVar30;
            } while (plVar30 != (long *)0x0);
            fVar38 = 0.0;
          }
          else {
            do {
              uVar26 = plVar30[1];
              if (uVar26 == 0xbf9ada94fafaa8e5) {
                if (plVar30[2] == -0x4065256b0505571b) goto LAB_017f3748;
              }
              else {
                if (uVar22 <= uVar26) {
                  uVar9 = 0;
                  if (uVar22 != 0) {
                    uVar9 = uVar26 / uVar22;
                  }
                  uVar26 = uVar26 - uVar9 * uVar22;
                }
                if (uVar26 != uVar28) {
                  fVar38 = 0.0;
                  goto LAB_017f374c;
                }
              }
              plVar30 = (long *)*plVar30;
            } while (plVar30 != (long *)0x0);
            fVar38 = 0.0;
          }
        }
      }
    }
    goto LAB_017f374c;
  }
  goto LAB_017f3760;
LAB_017f3748:
  fVar38 = *(float *)(plVar30 + 6);
LAB_017f374c:
  do {
    iVar19 = (int)*plVar3 + -1;
    cVar7 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar19;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar19 == 0) {
    (**(code **)(*plVar27 + 0x10))();
  }
  goto LAB_017f3760;
}


