/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033498e0; name: FUN_033498e0
 */


void FUN_033498e0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  undefined *puVar26;
  uint uVar27;
  uint *puVar28;
  long lVar29;
  undefined4 *puVar30;
  undefined1 auStack_2a0 [16];
  long local_290;
  undefined8 local_288;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  
  puVar26 = PTR_PTR_0434a080;
  local_78 = 0;
  local_70 = -0x8000000000000000;
  local_88 = 0;
  local_80 = -0x8000000000000000;
  plVar3 = &local_78;
  if (param_3 != param_2 && param_3 != param_1) {
    plVar3 = param_3;
  }
  plVar4 = &local_88;
  if (param_4 != param_2 && param_4 != param_1) {
    plVar4 = param_4;
  }
  *(undefined4 *)(plVar3 + 1) = 0;
  *(undefined4 *)(plVar4 + 1) = 0;
  iVar19 = (int)param_1[1];
  if (iVar19 < (int)param_2[1]) {
    if (plVar4 != param_1) {
      puVar28 = (uint *)((long)plVar4 + 0xc);
      uVar18 = *puVar28;
      *(undefined4 *)(plVar4 + 1) = 0;
      uVar27 = *(uint *)(param_1 + 1);
      puVar30 = (undefined4 *)*param_1;
      if ((int)(uVar18 & 0x3fffffff) < (int)uVar27) {
        lVar29 = *plVar4;
        if (0x3fffffff < (int)uVar27) {
          FUN_032bd0a8(uVar27);
          uVar18 = *puVar28;
        }
        uVar18 = (uVar18 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar18) {
          uVar18 = 0x3fffffff;
        }
        uVar13 = uVar27;
        if ((int)uVar27 <= (int)uVar18) {
          uVar13 = uVar18;
        }
        puVar8 = (undefined4 *)FUN_032bd1d4(PTR_PTR_0434a080,uVar13,4,lVar29,0,puVar28);
        *plVar4 = (long)puVar8;
      }
      else {
        puVar8 = (undefined4 *)*plVar4;
      }
      if (uVar27 != 0) {
        uVar20 = (long)(int)uVar27 * 4 - 4;
        uVar18 = ((uint)(uVar20 >> 2) & 0x3fffffff) + 1;
        puVar15 = puVar30;
        if ((uVar18 & 3) != 0) {
          lVar29 = -((ulong)uVar18 & 3);
          puVar9 = puVar8;
          puVar14 = puVar30;
          do {
            puVar15 = puVar14 + 1;
            bVar7 = lVar29 != -1;
            lVar29 = lVar29 + 1;
            puVar8 = puVar9 + 1;
            *puVar9 = *puVar14;
            puVar9 = puVar8;
            puVar14 = puVar15;
          } while (bVar7);
        }
        if (0xb < uVar20) {
          do {
            *puVar8 = *puVar15;
            puVar8[1] = puVar15[1];
            puVar8[2] = puVar15[2];
            puVar9 = puVar15 + 3;
            puVar15 = puVar15 + 4;
            puVar8[3] = *puVar9;
            puVar8 = puVar8 + 4;
          } while (puVar15 != puVar30 + (int)uVar27);
        }
      }
      *(uint *)(plVar4 + 1) = uVar27;
    }
    goto LAB_03349a40;
  }
  if ((int)param_2[1] == 0) {
    FUN_0331fefc(auStack_2a0,&local_290,0x200);
    FUN_0332448c(auStack_2a0,"Division by zero");
    iVar19 = FUN_03320b30(0x21b66586,&local_290,
                          "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Math/ExtendedMath/hkMpMath.cpp"
                          ,0x105);
    if (iVar19 != 0) {
      CallSupervisor(0x26);
    }
    FUN_0331ff7c(auStack_2a0);
    goto LAB_03349a40;
  }
  if (plVar4 == param_1) {
    uVar27 = 0;
  }
  else {
    puVar28 = (uint *)((long)plVar4 + 0xc);
    uVar18 = *puVar28;
    *(undefined4 *)(plVar4 + 1) = 0;
    uVar27 = *(uint *)(param_1 + 1);
    puVar30 = (undefined4 *)*param_1;
    if ((int)(uVar18 & 0x3fffffff) < (int)uVar27) {
      lVar29 = *plVar4;
      if (0x3fffffff < (int)uVar27) {
        FUN_032bd0a8(uVar27,param_2,param_3,lVar29);
        uVar18 = *puVar28;
      }
      uVar18 = (uVar18 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar18) {
        uVar18 = 0x3fffffff;
      }
      uVar13 = uVar27;
      if ((int)uVar27 <= (int)uVar18) {
        uVar13 = uVar18;
      }
      puVar8 = (undefined4 *)FUN_032bd1d4(puVar26,uVar13,4,lVar29,0,puVar28);
      *plVar4 = (long)puVar8;
    }
    else {
      puVar8 = (undefined4 *)*plVar4;
    }
    if (uVar27 != 0) {
      uVar20 = (long)(int)uVar27 * 4 - 4;
      uVar18 = ((uint)(uVar20 >> 2) & 0x3fffffff) + 1;
      puVar15 = puVar30;
      if ((uVar18 & 3) != 0) {
        lVar29 = -((ulong)uVar18 & 3);
        puVar9 = puVar8;
        puVar14 = puVar30;
        do {
          puVar15 = puVar14 + 1;
          bVar7 = lVar29 != -1;
          lVar29 = lVar29 + 1;
          puVar8 = puVar9 + 1;
          *puVar9 = *puVar14;
          puVar9 = puVar8;
          puVar14 = puVar15;
        } while (bVar7);
      }
      if (0xb < uVar20) {
        do {
          *puVar8 = *puVar15;
          puVar8[1] = puVar15[1];
          puVar8[2] = puVar15[2];
          puVar9 = puVar15 + 3;
          puVar15 = puVar15 + 4;
          puVar8[3] = *puVar9;
          puVar8 = puVar8 + 4;
        } while (puVar15 != puVar30 + (int)uVar27);
      }
    }
    *(uint *)(plVar4 + 1) = uVar27;
  }
  uVar13 = *(uint *)((long)plVar4 + 0xc);
  uVar18 = uVar27 + 1;
  if ((int)uVar27 < (int)(uVar13 & 0x3fffffff)) {
    lVar29 = *plVar4;
    uVar13 = uVar27;
  }
  else {
    lVar29 = *plVar4;
    if (0x3ffffffe < (int)uVar27) {
      FUN_032bd0a8(uVar18);
      uVar13 = *(uint *)((long)plVar4 + 0xc);
    }
    uVar13 = (uVar13 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar13) {
      uVar13 = 0x3fffffff;
    }
    uVar11 = uVar18;
    if ((int)uVar18 <= (int)uVar13) {
      uVar11 = uVar13;
    }
    lVar29 = FUN_032bd1d4(puVar26,uVar11,4,lVar29,uVar27);
    *plVar4 = lVar29;
    uVar13 = *(uint *)(plVar4 + 1);
  }
  *(undefined4 *)(lVar29 + (long)(int)uVar13 * 4) = 0;
  *(uint *)(plVar4 + 1) = uVar18;
  local_290 = 0;
  local_288 = -0x8000000000000000;
  if ((int)uVar27 < 0) {
    local_288._0_4_ = 0;
    if (-1 < (int)uVar27) goto LAB_03349f38;
LAB_03349df4:
    if ((int)uVar18 < (int)local_288) {
      local_288 = CONCAT44(local_288._4_4_,uVar18);
    }
  }
  else {
    if (0x3ffffffe < (int)uVar27) {
      FUN_032bd0a8(uVar18);
    }
    uVar13 = uVar18;
    if ((int)uVar18 < 1) {
      uVar13 = 0;
    }
    local_290 = FUN_032bd1d4(puVar26,uVar13,4,0,0,(long)&local_288 + 4);
    bVar7 = (int)uVar27 < (int)local_288;
    uVar27 = uVar27 - (int)local_288;
    if (bVar7) goto LAB_03349df4;
LAB_03349f38:
    lVar29 = (long)(int)local_288;
    local_288 = CONCAT44(local_288._4_4_,uVar18);
    memset((void *)(local_290 + lVar29 * 4),0,(ulong)uVar27 * 4 + 4);
  }
  iVar22 = iVar19 - (int)param_2[1];
  puVar28 = (uint *)((long)plVar3 + 0xc);
  uVar18 = *puVar28;
  uVar27 = iVar22 + 1;
  if ((int)(uVar18 & 0x3fffffff) <= iVar22) {
    lVar12 = *plVar3;
    lVar29 = plVar3[1];
    if (0x3ffffffe < iVar22) {
      FUN_032bd0a8(uVar27);
      uVar18 = *puVar28;
    }
    uVar18 = (uVar18 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar18) {
      uVar18 = 0x3fffffff;
    }
    uVar13 = uVar27;
    if ((int)uVar27 <= (int)uVar18) {
      uVar13 = uVar18;
    }
    lVar29 = FUN_032bd1d4(puVar26,uVar13,4,lVar12,(int)lVar29,puVar28);
    *plVar3 = lVar29;
  }
  lVar29 = local_288;
  uVar13 = local_288._4_4_;
  uVar18 = *(uint *)(plVar3 + 1);
  if (((int)uVar18 <= iVar22) || ((int)uVar27 < (int)uVar18)) {
    *(uint *)(plVar3 + 1) = uVar27;
    uVar18 = uVar27;
  }
  if (0 < (int)uVar18) {
    lVar12 = 0;
    do {
      *(undefined4 *)(*plVar3 + lVar12 * 4) = 0;
      uVar18 = *(uint *)(plVar3 + 1);
      lVar12 = lVar12 + 1;
      lVar16 = (long)(int)uVar18;
    } while (lVar12 < lVar16);
    if (0 < (int)uVar18) {
      lVar21 = lVar16 * 4;
      lVar12 = local_290 + lVar21;
      do {
        lVar21 = lVar21 + -4;
        lVar12 = lVar12 + -4;
        lVar17 = lVar16 + -1;
        *(undefined4 *)(*plVar3 + lVar17 * 4) = 0;
        uVar27 = 0x1f;
        do {
          uVar20 = (ulong)*(uint *)(param_2 + 1);
          lVar23 = lVar17;
          if ((int)*(uint *)(param_2 + 1) < 0) {
LAB_0334a11c:
            *(uint *)(*plVar3 + lVar17 * 4) =
                 *(uint *)(*plVar3 + lVar17 * 4) | 1 << (ulong)(uVar27 & 0x1f);
            if (lVar16 <= (int)lVar23) {
              lVar23 = (long)(int)lVar23;
              do {
                lVar24 = (lVar23 + -1) * 4;
                *(undefined4 *)(*plVar4 + lVar24) = *(undefined4 *)(local_290 + lVar24);
                bVar7 = lVar16 < lVar23;
                lVar23 = lVar23 + -1;
              } while (bVar7);
            }
          }
          else {
            if (uVar27 == 0) {
              bVar7 = false;
              uVar10 = 0;
              do {
                uVar18 = *(uint *)(*plVar4 + lVar21 + uVar10 * 4);
                if (uVar10 == (uVar20 & 0xffffffff)) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = *(uint *)(*param_2 + uVar10 * 4);
                }
                uVar5 = (uVar18 - uVar11) - 1;
                uVar25 = uVar5;
                if (!bVar7) {
                  uVar25 = uVar18 - uVar11;
                }
                *(uint *)(lVar12 + uVar10 * 4) = uVar25;
                uVar20 = (ulong)(int)param_2[1];
                bVar1 = !bVar7;
                bVar7 = uVar18 <= uVar5;
                if (bVar1) {
                  bVar7 = uVar18 < uVar11;
                }
                uVar2 = uVar10 + 1;
                bVar1 = (long)uVar10 < (long)uVar20;
                uVar10 = uVar2;
              } while (bVar1);
            }
            else {
              bVar7 = false;
              uVar10 = 0;
              do {
                uVar18 = *(uint *)(*plVar4 + lVar21 + uVar10 * 4);
                if (uVar10 == 0) {
                  uVar11 = 0;
                  if ((uVar20 & 0xffffffff) != 0) goto LAB_0334a07c;
LAB_0334a0ec:
                  uVar25 = 0;
                }
                else {
                  uVar11 = *(uint *)(*param_2 + uVar10 * 4 + -4) >> (ulong)(0x20 - uVar27 & 0x1f);
                  if (uVar10 == (uVar20 & 0xffffffff)) goto LAB_0334a0ec;
LAB_0334a07c:
                  uVar25 = *(int *)(*param_2 + uVar10 * 4) << (ulong)(uVar27 & 0x1f);
                }
                uVar6 = uVar18 - (uVar25 | uVar11);
                uVar5 = uVar6 - 1;
                bVar1 = !bVar7;
                bVar7 = uVar18 <= uVar5;
                if (bVar1) {
                  uVar5 = uVar6;
                  bVar7 = uVar18 < (uVar25 | uVar11);
                }
                *(uint *)(lVar12 + uVar10 * 4) = uVar5;
                uVar20 = (ulong)(int)param_2[1];
                uVar2 = uVar10 + 1;
                bVar1 = (long)uVar10 < (long)uVar20;
                uVar10 = uVar2;
              } while (bVar1);
            }
            lVar23 = lVar16 + uVar2 + -1;
            iVar22 = (int)lVar23;
            if ((bVar7 && iVar19 != iVar22) && (!bVar7 || iVar22 <= iVar19)) {
              lVar23 = (long)iVar22;
              do {
                lVar24 = lVar23 * 4;
                lVar23 = lVar23 + 1;
                iVar22 = *(int *)(*plVar4 + lVar24);
                bVar7 = iVar22 == 0;
                *(int *)(local_290 + lVar24) = iVar22 + -1;
                if (iVar19 <= lVar23) break;
              } while (iVar22 == 0);
            }
            if (!bVar7) goto LAB_0334a11c;
          }
          bVar7 = uVar27 != 0;
          uVar27 = uVar27 - 1;
        } while (bVar7);
        lVar16 = lVar17;
      } while (0 < lVar17);
      uVar18 = *(uint *)(plVar3 + 1);
    }
  }
  if (uVar18 != 0) {
    lVar12 = (long)(int)uVar18;
    do {
      uVar18 = uVar18 - 1;
      if (*(int *)(*plVar3 + -4 + lVar12 * 4) != 0) break;
      lVar12 = lVar12 + -1;
      *(uint *)(plVar3 + 1) = uVar18;
    } while (lVar12 != 0);
  }
  iVar19 = (int)plVar4[1];
  lVar12 = (long)iVar19;
  if (iVar19 != 0) {
    do {
      iVar19 = iVar19 + -1;
      if (*(int *)(*plVar4 + -4 + lVar12 * 4) != 0) break;
      lVar12 = lVar12 + -1;
      *(int *)(plVar4 + 1) = iVar19;
    } while (lVar12 != 0);
  }
  local_288 = (ulong)local_288._4_4_ << 0x20;
  if ((-1 < lVar29) && (local_290 != 0)) {
    FUN_032cf244(puVar26,local_290,4,uVar13 & 0x3fffffff);
  }
LAB_03349a40:
  if ((plVar3 != param_3) && (param_3 == param_1 || param_3 == param_2)) {
    puVar28 = (uint *)((long)param_3 + 0xc);
    uVar18 = *puVar28;
    *(undefined4 *)(param_3 + 1) = 0;
    uVar27 = *(uint *)(plVar3 + 1);
    puVar30 = (undefined4 *)*plVar3;
    if ((int)(uVar18 & 0x3fffffff) < (int)uVar27) {
      lVar29 = *param_3;
      if (0x3fffffff < (int)uVar27) {
        FUN_032bd0a8(uVar27);
        uVar18 = *puVar28;
      }
      uVar18 = (uVar18 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar18) {
        uVar18 = 0x3fffffff;
      }
      uVar13 = uVar27;
      if ((int)uVar27 <= (int)uVar18) {
        uVar13 = uVar18;
      }
      puVar8 = (undefined4 *)FUN_032bd1d4(PTR_PTR_0434a080,uVar13,4,lVar29,0,puVar28);
      *param_3 = (long)puVar8;
    }
    else {
      puVar8 = (undefined4 *)*param_3;
    }
    if (uVar27 != 0) {
      uVar20 = (long)(int)uVar27 * 4 - 4;
      uVar18 = ((uint)(uVar20 >> 2) & 0x3fffffff) + 1;
      puVar15 = puVar30;
      if ((uVar18 & 3) != 0) {
        lVar29 = -((ulong)uVar18 & 3);
        puVar9 = puVar8;
        puVar14 = puVar30;
        do {
          puVar15 = puVar14 + 1;
          bVar7 = lVar29 != -1;
          lVar29 = lVar29 + 1;
          puVar8 = puVar9 + 1;
          *puVar9 = *puVar14;
          puVar9 = puVar8;
          puVar14 = puVar15;
        } while (bVar7);
      }
      if (0xb < uVar20) {
        do {
          *puVar8 = *puVar15;
          puVar8[1] = puVar15[1];
          puVar8[2] = puVar15[2];
          puVar9 = puVar15 + 3;
          puVar15 = puVar15 + 4;
          puVar8[3] = *puVar9;
          puVar8 = puVar8 + 4;
        } while (puVar15 != puVar30 + (int)uVar27);
      }
    }
    *(uint *)(param_3 + 1) = uVar27;
  }
  if ((plVar4 == param_4) || (param_4 != param_1 && param_4 != param_2)) {
    puVar26 = PTR_PTR_0434a080;
  }
  else {
    puVar28 = (uint *)((long)param_4 + 0xc);
    uVar18 = *puVar28;
    *(undefined4 *)(param_4 + 1) = 0;
    puVar26 = PTR_PTR_0434a080;
    uVar27 = *(uint *)(plVar4 + 1);
    puVar30 = (undefined4 *)*plVar4;
    if ((int)(uVar18 & 0x3fffffff) < (int)uVar27) {
      lVar29 = *param_4;
      if (0x3fffffff < (int)uVar27) {
        FUN_032bd0a8(uVar27);
        uVar18 = *puVar28;
      }
      uVar18 = (uVar18 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar18) {
        uVar18 = 0x3fffffff;
      }
      uVar13 = uVar27;
      if ((int)uVar27 <= (int)uVar18) {
        uVar13 = uVar18;
      }
      puVar8 = (undefined4 *)FUN_032bd1d4(puVar26,uVar13,4,lVar29,0,puVar28);
      *param_4 = (long)puVar8;
    }
    else {
      puVar8 = (undefined4 *)*param_4;
    }
    if (uVar27 != 0) {
      uVar20 = (long)(int)uVar27 * 4 - 4;
      uVar18 = ((uint)(uVar20 >> 2) & 0x3fffffff) + 1;
      puVar15 = puVar30;
      if ((uVar18 & 3) != 0) {
        lVar29 = -((ulong)uVar18 & 3);
        puVar9 = puVar8;
        puVar14 = puVar30;
        do {
          puVar15 = puVar14 + 1;
          bVar7 = lVar29 != -1;
          lVar29 = lVar29 + 1;
          puVar8 = puVar9 + 1;
          *puVar9 = *puVar14;
          puVar9 = puVar8;
          puVar14 = puVar15;
        } while (bVar7);
      }
      if (0xb < uVar20) {
        do {
          *puVar8 = *puVar15;
          puVar8[1] = puVar15[1];
          puVar8[2] = puVar15[2];
          puVar9 = puVar15 + 3;
          puVar15 = puVar15 + 4;
          puVar8[3] = *puVar9;
          puVar8 = puVar8 + 4;
        } while (puVar15 != puVar30 + (int)uVar27);
      }
    }
    *(uint *)(param_4 + 1) = uVar27;
  }
  lVar29 = local_80;
  uVar27 = local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar29) && (local_88 != 0)) {
    FUN_032cf244(puVar26,local_88,4,uVar27 & 0x3fffffff);
  }
  lVar29 = local_70;
  uVar27 = local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar29) && (local_78 != 0)) {
    FUN_032cf244(puVar26,local_78,4,uVar27 & 0x3fffffff);
  }
  return;
}


