/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ec0bc; name: FUN_031ec0bc
 */


void FUN_031ec0bc(long param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  void *__dest;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  int *piVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  int iVar29;
  undefined4 *puVar30;
  uint uVar31;
  int *piVar32;
  uint *puVar33;
  uint *puVar34;
  int *piVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  ulong local_c0;
  int *local_a8;
  undefined8 local_a0;
  long local_98;
  ulong local_90;
  uint local_84;
  undefined8 local_80;
  undefined *local_78;
  uint *local_70;
  uint *local_68;
  
  lVar7 = tpidr_el0;
  if (*(long *)(lVar7 + 0x38d490) == 0) {
    lVar18 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar18;
    local_98 = *(long *)(lVar18 + 0x10);
  }
  else {
    local_98 = *(long *)(*(long *)(lVar7 + 0x38d490) + 0x10);
  }
  if (local_98 != 0) {
    puVar36 = *(undefined8 **)(local_98 + 8);
    uVar15 = (long)puVar36 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= *(ulong *)(local_98 + 0x10)) &&
       (*(ulong *)(local_98 + 8) = uVar15, puVar36 != (undefined8 *)0x0)) {
      *puVar36 = "TtapplyPendingUpdatesLimited";
      uVar19 = nn::os::GetSystemTick();
      puVar36[1] = uVar19;
    }
  }
  puVar6 = PTR_PTR_0434a080;
  iVar13 = *(int *)(param_1 + 0xc0);
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) < iVar13) {
    lVar7 = FUN_031f044c(PTR_PTR_0434a080,iVar13,*param_2,(int)param_2[1]);
    *param_2 = lVar7;
  }
  iVar21 = (int)param_2[1];
  lVar18 = (long)iVar21;
  lVar7 = (long)iVar13;
  if (iVar21 < iVar13) {
    lVar20 = *param_2;
    lVar26 = lVar20 + lVar18 * 0x38;
    lVar22 = lVar20 + lVar7 * 0x38;
    *(int *)(param_2 + 1) = iVar13;
    *(undefined8 *)(lVar26 + 8) = 0;
    *(undefined8 *)(lVar26 + 0x10) = 0x8000000000000000;
    *(undefined8 *)(lVar26 + 0x18) = 0;
    *(undefined8 *)(lVar26 + 0x20) = 0x8000000000000000;
    *(undefined8 *)(lVar26 + 0x28) = 0;
    *(undefined8 *)(lVar26 + 0x30) = 0x8000000000000000;
    if (lVar26 + 0x38 != lVar22) {
      *(undefined8 *)(lVar26 + 0x40) = 0;
      *(undefined8 *)(lVar26 + 0x48) = 0x8000000000000000;
      *(undefined8 *)(lVar26 + 0x50) = 0;
      *(undefined8 *)(lVar26 + 0x58) = 0x8000000000000000;
      *(undefined8 *)(lVar26 + 0x60) = 0;
      *(undefined8 *)(lVar26 + 0x68) = 0x8000000000000000;
      if (lVar26 + 0x70 != lVar22) {
        lVar22 = lVar18 * -0x38 + lVar7 * 0x38 + -0x70;
        lVar7 = lVar18 * 0x38 + lVar20 + 0xa4;
        do {
          *(undefined8 *)(lVar7 + -0x2c) = 0;
          lVar22 = lVar22 + -0x38;
          *(undefined8 *)(lVar7 + -0x24) = 0x8000000000000000;
          *(undefined8 *)(lVar7 + -0x1c) = 0;
          *(undefined8 *)(lVar7 + -0x14) = 0x8000000000000000;
          *(undefined8 *)(lVar7 + -0xc) = 0;
          *(undefined8 *)(lVar7 + -4) = 0x8000000000000000;
          lVar7 = lVar7 + 0x38;
        } while (lVar22 != 0);
      }
    }
  }
  else if (iVar13 < iVar21) {
    *(int *)(param_2 + 1) = iVar13;
    lVar7 = lVar18 * -0x38 + lVar7 * 0x38;
    puVar30 = (undefined4 *)(*param_2 + lVar18 * 0x38 + -0x18);
    do {
      puVar30[4] = 0;
      if ((-1 < (int)puVar30[5]) && (*(long *)(puVar30 + 2) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x18))
                  (puVar6,*(long *)(puVar30 + 2),((ulong)(uint)puVar30[5] & 0x3fffffff) << 5);
      }
      *(undefined8 *)(puVar30 + 2) = 0;
      puVar30[5] = 0x80000000;
      *puVar30 = 0;
      if ((-1 < (int)puVar30[1]) && (*(long *)(puVar30 + -2) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x18))(puVar6,*(long *)(puVar30 + -2),puVar30[1] << 2);
      }
      *(undefined8 *)(puVar30 + -2) = 0;
      puVar30[1] = 0x80000000;
      puVar30[-4] = 0;
      if ((-1 < (int)puVar30[-3]) && (*(long *)(puVar30 + -6) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x18))(puVar6,*(long *)(puVar30 + -6),puVar30[-3] << 2);
      }
      *(undefined8 *)(puVar30 + -6) = 0;
      lVar7 = lVar7 + 0x38;
      puVar30[-3] = 0x80000000;
      puVar30 = puVar30 + -0xe;
    } while (lVar7 != 0);
  }
  local_a8 = (int *)0x0;
  local_a0 = -0x8000000000000000;
  iVar13 = *(int *)(param_1 + 0x98);
  if (0 < iVar13) {
    lVar7 = 0;
    do {
      lVar18 = *(long *)(param_1 + 0x90);
      if ((*(char *)(lVar18 + lVar7 * 0xd0 + 200) != '\0') &&
         (piVar32 = (int *)(lVar18 + lVar7 * 0xd0 + 0xc0), 0 < *piVar32)) {
        lVar22 = 0;
        lVar20 = 0;
        do {
          local_80 = CONCAT44(local_80._4_4_,(int)lVar7);
          local_78 = (undefined *)(*(long *)(lVar18 + lVar7 * 0xd0 + 0xb8) + lVar22);
          FUN_031ece68(&local_a8,&local_80);
          lVar20 = lVar20 + 1;
          lVar22 = lVar22 + 0x40;
        } while (lVar20 < *piVar32);
        iVar13 = *(int *)(param_1 + 0x98);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar13);
    if (((int)local_a0 != 0) && (iVar13 = *(int *)(param_1 + 0x188), 0 < iVar13)) {
      do {
        iVar21 = *local_a8;
        lVar22 = *(long *)(local_a8 + 2);
        FUN_031f0cfc(&local_a8);
        lVar7 = *(long *)(param_1 + 0x90);
        lVar18 = (long)*(int *)(lVar7 + (long)iVar21 * 0xd0);
        lVar20 = *param_2;
        if (0 < *(int *)(lVar22 + 0x38)) {
          lVar16 = lVar20 + lVar18 * 0x38;
          lVar26 = 0;
          piVar32 = (int *)(lVar16 + 0x10);
          piVar35 = (int *)(lVar16 + 0x20);
          do {
            iVar29 = *(int *)(*(long *)(lVar22 + 0x30) + lVar26 * 4);
            if (*(int *)(*(long *)(lVar7 + (long)iVar21 * 0xd0 + 0xa8) + (long)iVar29 * 0x10 + 8) ==
                0) {
              iVar12 = *piVar35;
              lVar11 = *(long *)(lVar16 + 0x18);
              iVar9 = iVar12 + 1;
              if ((int)(*(uint *)(lVar16 + 0x24) & 0x3fffffff) <= iVar12) {
                lVar11 = FUN_0315f314(puVar6,iVar9,lVar11,iVar12,(uint *)(lVar16 + 0x24));
                *(long *)(lVar16 + 0x18) = lVar11;
                iVar12 = *piVar35;
              }
              *(int *)(lVar11 + (long)iVar12 * 4) = iVar29;
              *piVar35 = iVar9;
            }
            else {
              iVar12 = *piVar32;
              lVar11 = *(long *)(lVar16 + 8);
              iVar9 = iVar12 + 1;
              if ((int)(*(uint *)(lVar16 + 0x14) & 0x3fffffff) <= iVar12) {
                lVar11 = FUN_0315f314(puVar6,iVar9,lVar11,iVar12,(uint *)(lVar16 + 0x14));
                *(long *)(lVar16 + 8) = lVar11;
                iVar12 = *piVar32;
              }
              *(int *)(lVar11 + (long)iVar12 * 4) = iVar29;
              *piVar32 = iVar9;
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 < *(int *)(lVar22 + 0x38));
        }
        lVar20 = lVar20 + lVar18 * 0x38;
        puVar36 = *(undefined8 **)(lVar20 + 0x28);
        puVar33 = (uint *)(lVar20 + 0x30);
        uVar31 = *puVar33;
        puVar34 = (uint *)(lVar20 + 0x34);
        uVar17 = *puVar34;
        uVar14 = uVar17 & 0x3fffffff;
        uVar1 = uVar31 + 1;
        if ((int)uVar31 < (int)uVar14) {
          puVar8 = puVar36;
        }
        else {
          if (0x3ffffffe < (int)uVar31) {
            FUN_032bd0a8(uVar1);
            uVar17 = *puVar34;
            uVar14 = uVar17 & 0x3fffffff;
          }
          uVar17 = (uVar17 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar17) {
            uVar17 = 0x3fffffff;
          }
          local_84 = uVar1;
          if ((int)uVar1 <= (int)uVar17) {
            local_84 = uVar17;
          }
          local_90 = (ulong)local_84 << 5;
          if ((int)local_84 < (int)uVar14 || 0x3fffffff < (int)local_84) {
            local_80 = 1;
            local_70 = &local_84;
            local_78 = &DAT_0411b3b8;
            FUN_03320b50(0x65816502,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x5a,"Invalid requestedCapacity {}",&local_80);
          }
          uVar14 = *puVar34;
          puVar8 = (undefined8 *)(**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_90,&local_90);
          if (0 < (int)uVar31) {
            uVar19 = puVar36[3];
            puVar8[1] = puVar36[1];
            puVar8[3] = uVar19;
            uVar19 = *puVar36;
            puVar8[2] = puVar36[2];
            *puVar8 = uVar19;
            if (uVar31 != 1) {
              lVar7 = (ulong)uVar31 - 1;
              puVar37 = puVar8;
              puVar5 = puVar36;
              do {
                uVar19 = puVar5[7];
                lVar7 = lVar7 + -1;
                puVar37[5] = puVar5[5];
                puVar37[7] = uVar19;
                uVar19 = puVar5[4];
                puVar37[6] = puVar5[6];
                puVar37[4] = uVar19;
                puVar37 = puVar37 + 4;
                puVar5 = puVar5 + 4;
              } while (lVar7 != 0);
            }
          }
          if (-1 < (int)uVar14) {
            (**(code **)(*(long *)puVar6 + 0x18))(puVar6,puVar36,((ulong)uVar14 & 0x3fffffff) << 5);
          }
          if (local_90 < 0x7ffffffe0) {
            uVar14 = (uint)(local_90 >> 5);
          }
          else {
            uVar14 = 0x3fffffff;
          }
          *puVar34 = uVar14;
          *(undefined8 **)(lVar20 + 0x28) = puVar8;
          uVar31 = *puVar33;
        }
        uVar19 = *(undefined8 *)(lVar22 + 0x28);
        puVar8 = puVar8 + (long)(int)uVar31 * 4;
        puVar8[1] = *(undefined8 *)(lVar22 + 0x18);
        puVar8[3] = uVar19;
        uVar19 = *(undefined8 *)(lVar22 + 0x10);
        puVar8[2] = *(undefined8 *)(lVar22 + 0x20);
        *puVar8 = uVar19;
        *puVar33 = uVar1;
        iVar21 = *(int *)(lVar22 + 0x38);
        *(undefined4 *)(lVar22 + 0x38) = 0;
        iVar13 = iVar13 - iVar21;
        if ((-1 < *(int *)(lVar22 + 0x3c)) && (*(long *)(lVar22 + 0x30) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))
                    (puVar6,*(long *)(lVar22 + 0x30),*(int *)(lVar22 + 0x3c) << 2);
        }
        *(undefined8 *)(lVar22 + 0x30) = 0;
        *(undefined4 *)(lVar22 + 0x3c) = 0x80000000;
      } while ((0 < iVar13) && ((int)local_a0 != 0));
    }
  }
  if (0 < (int)param_2[1]) {
    lVar18 = 0;
    lVar7 = 0;
    do {
      *(int *)(*param_2 + lVar18) = (int)lVar7;
      FUN_031ecd10(*param_2 + lVar18 + 8);
      FUN_031ecd10(*param_2 + lVar18 + 0x18);
      lVar7 = lVar7 + 1;
      lVar18 = lVar18 + 0x38;
    } while (lVar7 < (int)param_2[1]);
  }
  iVar13 = *(int *)(param_1 + 0x98);
  if (iVar13 == 0) {
LAB_031ec87c:
    lVar7 = local_a0;
    uVar15 = (ulong)local_a0._4_4_;
    local_a0 = (ulong)local_a0._4_4_ << 0x20;
    if ((-1 < lVar7) && (local_a8 != (int *)0x0)) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_a8,(uVar15 & 0x3fffffff) << 4);
    }
    if (local_98 != 0) {
      puVar36 = *(undefined8 **)(local_98 + 8);
      uVar15 = (long)puVar36 + 0x17U & 0xfffffffffffffff8;
      if ((uVar15 <= *(ulong *)(local_98 + 0x10)) &&
         (*(ulong *)(local_98 + 8) = uVar15, puVar36 != (undefined8 *)0x0)) {
        *puVar36 = &DAT_0390f40e;
        uVar19 = nn::os::GetSystemTick();
        puVar36[1] = uVar19;
      }
    }
    return;
  }
  piVar35 = *(int **)(param_1 + 0x90);
  cVar4 = (char)piVar35[0x32];
  piVar32 = piVar35;
  do {
    if ((cVar4 != '\0') && (uVar15 = (ulong)piVar32[0x30], 0 < piVar32[0x30])) {
LAB_031ec584:
      do {
        uVar15 = uVar15 - 1;
        lVar18 = *param_2 + (long)*piVar32 * 0x38;
        lVar7 = *(long *)(piVar32 + 0x2e) + uVar15 * 0x40;
        lVar20 = *(long *)(lVar18 + 8);
        lVar18 = *(long *)(lVar18 + 0x18);
        piVar23 = (int *)(lVar7 + 0x38);
        uVar24 = (ulong)*piVar23;
        if (0 < *piVar23) {
          lVar22 = *param_2 + (long)*piVar32 * 0x38;
          iVar21 = *(int *)(lVar22 + 0x10);
          iVar29 = *(int *)(lVar22 + 0x20);
          plVar2 = (long *)(lVar7 + 0x30);
          if (iVar21 < 1) {
            if (0 < iVar29) {
              do {
                lVar7 = *plVar2;
                uVar24 = uVar24 - 1;
                iVar21 = 0;
                iVar9 = *(int *)(lVar7 + uVar24 * 4);
                iVar12 = iVar29;
                do {
                  iVar10 = iVar12 + iVar21;
                  if (iVar10 < 0) {
                    iVar10 = iVar10 + 1;
                  }
                  iVar10 = iVar10 >> 1;
                  if (*(int *)(lVar18 + (long)iVar10 * 4) < iVar9) {
                    iVar21 = iVar10 + 1;
                  }
                  else {
                    iVar12 = iVar10;
                  }
                } while (iVar21 < iVar12);
                if ((iVar12 < iVar29) &&
                   (iVar12 != -1 && *(int *)(lVar18 + (long)iVar12 * 4) <= iVar9)) {
                  uVar28 = (long)*piVar23 - 1;
                  *piVar23 = (int)uVar28;
                  if (uVar24 != (uVar28 & 0xffffffff)) {
                    *(undefined4 *)(lVar7 + uVar24 * 4) = *(undefined4 *)(lVar7 + uVar28 * 4);
                  }
                }
              } while (0 < (long)uVar24);
            }
          }
          else if (iVar29 < 1) {
            do {
              lVar7 = *plVar2;
              uVar24 = uVar24 - 1;
              iVar29 = 0;
              iVar9 = *(int *)(lVar7 + uVar24 * 4);
              iVar12 = iVar21;
              do {
                iVar10 = iVar12 + iVar29;
                if (iVar10 < 0) {
                  iVar10 = iVar10 + 1;
                }
                iVar10 = iVar10 >> 1;
                if (*(int *)(lVar20 + (long)iVar10 * 4) < iVar9) {
                  iVar29 = iVar10 + 1;
                }
                else {
                  iVar12 = iVar10;
                }
              } while (iVar29 < iVar12);
              if ((iVar12 < iVar21) &&
                 (iVar12 != -1 && *(int *)(lVar20 + (long)iVar12 * 4) <= iVar9)) {
                uVar28 = (long)*piVar23 - 1;
                *piVar23 = (int)uVar28;
                if (uVar24 != (uVar28 & 0xffffffff)) {
                  *(undefined4 *)(lVar7 + uVar24 * 4) = *(undefined4 *)(lVar7 + uVar28 * 4);
                }
              }
            } while (0 < (long)uVar24);
          }
          else {
            do {
              lVar7 = *plVar2;
              uVar24 = uVar24 - 1;
              iVar9 = 0;
              iVar12 = *(int *)(lVar7 + uVar24 * 4);
              iVar10 = iVar21;
              do {
                iVar3 = iVar10 + iVar9;
                if (iVar3 < 0) {
                  iVar3 = iVar3 + 1;
                }
                iVar3 = iVar3 >> 1;
                if (*(int *)(lVar20 + (long)iVar3 * 4) < iVar12) {
                  iVar9 = iVar3 + 1;
                }
                else {
                  iVar10 = iVar3;
                }
              } while (iVar9 < iVar10);
              if ((iVar10 < iVar21) &&
                 (iVar10 != -1 && *(int *)(lVar20 + (long)iVar10 * 4) <= iVar12)) {
LAB_031ec67c:
                uVar28 = (long)*piVar23 - 1;
                *piVar23 = (int)uVar28;
                if (uVar24 != (uVar28 & 0xffffffff)) {
                  *(undefined4 *)(lVar7 + uVar24 * 4) = *(undefined4 *)(lVar7 + uVar28 * 4);
                }
              }
              else {
                iVar9 = 0;
                iVar10 = iVar29;
                do {
                  iVar3 = iVar10 + iVar9;
                  if (iVar3 < 0) {
                    iVar3 = iVar3 + 1;
                  }
                  iVar3 = iVar3 >> 1;
                  if (*(int *)(lVar18 + (long)iVar3 * 4) < iVar12) {
                    iVar9 = iVar3 + 1;
                  }
                  else {
                    iVar10 = iVar3;
                  }
                } while (iVar9 < iVar10);
                if ((iVar10 < iVar29) &&
                   (iVar10 != -1 && *(int *)(lVar18 + (long)iVar10 * 4) <= iVar12))
                goto LAB_031ec67c;
              }
            } while (0 < (long)uVar24);
          }
        }
        lVar7 = *(long *)(piVar32 + 0x2e) + uVar15 * 0x40;
        if (*(int *)(lVar7 + 0x38) != 0) {
LAB_031ec57c:
          if ((long)uVar15 < 1) break;
          goto LAB_031ec584;
        }
        *(int *)(lVar7 + 0x38) = 0;
        iVar21 = *(int *)(lVar7 + 0x3c);
        if ((-1 < iVar21) && (lVar18 = *(long *)(lVar7 + 0x30), lVar18 != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))
                    ("Array size overflow {}*{}",puVar6,lVar18,iVar21 << 2);
        }
        *(long *)(lVar7 + 0x30) = 0;
        *(int *)(lVar7 + 0x3c) = -0x80000000;
        uVar24 = (long)piVar32[0x30] - 1;
        piVar32[0x30] = (int)uVar24;
        if (uVar15 == (uVar24 & 0xffffffff)) goto LAB_031ec57c;
        puVar36 = (undefined8 *)(*(long *)(piVar32 + 0x2e) + uVar24 * 0x40);
        puVar8 = (undefined8 *)(*(long *)(piVar32 + 0x2e) + uVar15 * 0x40);
        puVar8[1] = puVar36[1];
        *puVar8 = *puVar36;
        uVar25 = puVar36[3];
        puVar8[5] = puVar36[5];
        uVar19 = puVar36[2];
        uVar27 = puVar36[4];
        puVar8[3] = uVar25;
        puVar8[4] = uVar27;
        puVar8[2] = uVar19;
        puVar8[6] = 0;
        puVar8[7] = 0x8000000000000000;
        piVar23 = (int *)((long)puVar36 + 0x3c);
        iVar21 = *piVar23;
        puVar37 = puVar36 + 6;
        if (iVar21 < 0) {
          local_84 = 4;
          puVar33 = (uint *)(puVar36 + 7);
          uVar1 = *puVar33;
          local_90 = (long)(int)uVar1 << 2;
          if ((int)uVar1 < 0) {
            local_78 = &DAT_0411b3a0;
            local_80 = 2;
            local_68 = &local_84;
            local_70 = puVar33;
            FUN_03320b50(0x77a36e5f,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x27,"Array size overflow {}*{}",&local_80);
            if (*puVar33 != 0) goto LAB_031ecbf0;
LAB_031ec868:
            *piVar23 = 0;
            *puVar37 = 0;
          }
          else {
            if (uVar1 == 0) goto LAB_031ec868;
LAB_031ecbf0:
            __dest = (void *)(**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_90,&local_90);
            if (__dest != (void *)0x0) {
              local_c0 = local_90 >> 2;
              if (0x3ffffffe < local_c0) {
                local_c0 = 0x3fffffff;
              }
              memcpy(__dest,(void *)*puVar37,local_90);
              *puVar37 = __dest;
              *piVar23 = (int)local_c0;
            }
          }
          iVar21 = *piVar23;
        }
        puVar8[6] = *puVar37;
        *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(puVar36 + 7);
        *(int *)((long)puVar8 + 0x3c) = iVar21;
        *puVar37 = 0;
        puVar36[7] = 0;
        *piVar23 = -0x80000000;
      } while (0 < (long)uVar15);
    }
    if (piVar32 + 0x34 == piVar35 + (long)iVar13 * 0x34) goto LAB_031ec87c;
    cVar4 = (char)piVar32[0x66];
    piVar32 = piVar32 + 0x34;
  } while( true );
}


