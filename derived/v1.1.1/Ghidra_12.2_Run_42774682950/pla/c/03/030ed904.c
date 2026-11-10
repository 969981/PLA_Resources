/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ed904; name: FUN_030ed904
 */


void FUN_030ed904(float param_1,long param_2,long param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  long extraout_x1;
  long extraout_x1_00;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined1 auVar20 [16];
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *local_68;
  
  if (0 < (int)param_4[1]) {
    lVar9 = 0;
    lVar19 = 0xc;
    do {
      *(undefined1 *)(*param_4 + lVar19) = 0;
      lVar9 = lVar9 + 1;
      lVar19 = lVar19 + 0x30;
    } while (lVar9 < (int)param_4[1]);
  }
  lVar9 = param_3;
  if (0 < *(int *)(param_2 + 0x28)) {
    lVar19 = 0;
    do {
      plVar2 = (long *)(*(long *)(param_2 + 0x20) + lVar19 * 0x40);
      if (*(float *)(plVar2 + 6) <= param_1) {
        uVar16 = *(uint *)(param_4 + 1);
        puVar17 = (undefined8 *)*param_4;
        if (0 < (int)uVar16) {
          lVar10 = 0;
          lVar6 = 0;
          piVar13 = (int *)(puVar17 + 1);
          do {
            if ((*(long *)(piVar13 + -2) == *plVar2) && (*piVar13 == (int)plVar2[1])) {
              if ((int)lVar10 != 1) {
                lVar6 = lVar6 >> 0x20;
                *(undefined1 *)((long)puVar17 + lVar6 * 0x30 + 0xc) = 1;
                lVar10 = plVar2[2];
                puVar17[lVar6 * 6 + 3] = plVar2[3];
                puVar17[lVar6 * 6 + 2] = lVar10;
                lVar10 = plVar2[4];
                puVar17[lVar6 * 6 + 5] = plVar2[5];
                puVar17[lVar6 * 6 + 4] = lVar10;
                goto LAB_030edb78;
              }
              break;
            }
            lVar10 = lVar10 + -1;
            lVar6 = lVar6 + 0x100000000;
            piVar13 = piVar13 + 0xc;
          } while (-lVar10 != (ulong)uVar16);
        }
        uVar14 = *(uint *)((long)param_4 + 0xc);
        uVar15 = uVar14 & 0x3fffffff;
        uVar1 = uVar16 + 1;
        puVar18 = puVar17;
        if ((int)uVar15 <= (int)uVar16) {
          if (0x3ffffffe < (int)uVar16) {
            FUN_032bd0a8(uVar1);
            uVar14 = *(uint *)((long)param_4 + 0xc);
            uVar15 = uVar14 & 0x3fffffff;
          }
          puVar3 = PTR_PTR_0434a080;
          uVar4 = (uVar14 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar4) {
            uVar4 = 0x3fffffff;
          }
          local_7c = uVar1;
          if ((int)uVar1 <= (int)uVar4) {
            local_7c = uVar4;
          }
          local_88 = (ulong)local_7c * 0x30;
          if (((int)local_7c < (int)uVar15) || (0x3fffffff < (int)local_7c)) {
            local_78 = 1;
            local_68 = &local_7c;
            local_70 = &DAT_0411b3b8;
            FUN_03320b50(0x65816502,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x5a,"Invalid requestedCapacity {}",&local_78);
            uVar14 = *(uint *)((long)param_4 + 0xc);
            uVar15 = uVar14 & 0x3fffffff;
          }
          auVar20 = (**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_88,&local_88);
          lVar9 = auVar20._8_8_;
          puVar18 = auVar20._0_8_;
          if (0 < (int)uVar16) {
            uVar8 = puVar17[5];
            puVar18[3] = puVar17[3];
            puVar18[5] = uVar8;
            puVar18[1] = puVar17[1];
            *puVar18 = *puVar17;
            uVar8 = puVar17[2];
            puVar18[4] = puVar17[4];
            puVar18[2] = uVar8;
            if (uVar16 != 1) {
              uVar8 = puVar17[0xb];
              puVar18[9] = puVar17[9];
              puVar18[0xb] = uVar8;
              puVar18[7] = puVar17[7];
              puVar18[6] = puVar17[6];
              uVar8 = puVar17[8];
              puVar18[10] = puVar17[10];
              puVar18[8] = uVar8;
              if (uVar16 != 2) {
                uVar8 = puVar17[0x11];
                puVar18[0xf] = puVar17[0xf];
                puVar18[0x11] = uVar8;
                puVar18[0xd] = puVar17[0xd];
                puVar18[0xc] = puVar17[0xc];
                uVar8 = puVar17[0xe];
                puVar18[0x10] = puVar17[0x10];
                puVar18[0xe] = uVar8;
                if (uVar16 != 3) {
                  lVar6 = (ulong)uVar16 - 3;
                  puVar11 = puVar17 + 0x12;
                  puVar12 = puVar18 + 0x12;
                  do {
                    uVar8 = puVar11[5];
                    lVar6 = lVar6 + -1;
                    puVar12[3] = puVar11[3];
                    puVar12[5] = uVar8;
                    puVar12[1] = puVar11[1];
                    *puVar12 = *puVar11;
                    uVar8 = puVar11[2];
                    puVar12[4] = puVar11[4];
                    puVar12[2] = uVar8;
                    puVar11 = puVar11 + 6;
                    puVar12 = puVar12 + 6;
                  } while (lVar6 != 0);
                }
              }
            }
          }
          if (-1 < (int)uVar14) {
            (**(code **)(*(long *)puVar3 + 0x18))(puVar3,puVar17,(ulong)uVar15 * 0x30);
            lVar9 = extraout_x1_00;
          }
          if (local_88 < 0xbffffffd0) {
            uVar5 = (undefined4)(local_88 / 0x30);
          }
          else {
            uVar5 = 0x3fffffff;
          }
          *(undefined4 *)((long)param_4 + 0xc) = uVar5;
          uVar16 = *(uint *)(param_4 + 1);
          *param_4 = (long)puVar18;
        }
        lVar6 = plVar2[5];
        plVar7 = puVar18 + (long)(int)uVar16 * 6;
        plVar7[3] = plVar2[3];
        plVar7[5] = lVar6;
        plVar7[1] = plVar2[1];
        *plVar7 = *plVar2;
        lVar6 = plVar2[2];
        plVar7[4] = plVar2[4];
        plVar7[2] = lVar6;
        *(uint *)(param_4 + 1) = uVar1;
      }
LAB_030edb78:
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)(param_2 + 0x28));
  }
  if (0 < *(int *)(param_3 + 0x28)) {
    lVar19 = 0;
    do {
      plVar2 = (long *)(*(long *)(param_3 + 0x20) + lVar19 * 0x40);
      if (*(float *)(plVar2 + 6) <= 0.0) {
        uVar16 = *(uint *)(param_4 + 1);
        puVar17 = (undefined8 *)*param_4;
        if (0 < (int)uVar16) {
          lVar10 = 0;
          lVar6 = 0;
          piVar13 = (int *)(puVar17 + 1);
          do {
            if ((*(long *)(piVar13 + -2) == *plVar2) && (*piVar13 == (int)plVar2[1])) {
              if ((int)lVar10 != 1) {
                lVar6 = lVar6 >> 0x20;
                *(undefined1 *)((long)puVar17 + lVar6 * 0x30 + 0xc) = 1;
                lVar10 = plVar2[2];
                puVar17[lVar6 * 6 + 3] = plVar2[3];
                puVar17[lVar6 * 6 + 2] = lVar10;
                lVar10 = plVar2[4];
                puVar17[lVar6 * 6 + 5] = plVar2[5];
                puVar17[lVar6 * 6 + 4] = lVar10;
                goto LAB_030eda54;
              }
              break;
            }
            lVar10 = lVar10 + -1;
            lVar6 = lVar6 + 0x100000000;
            piVar13 = piVar13 + 0xc;
          } while (-lVar10 != (ulong)uVar16);
        }
        uVar14 = *(uint *)((long)param_4 + 0xc);
        uVar15 = uVar14 & 0x3fffffff;
        uVar1 = uVar16 + 1;
        puVar18 = puVar17;
        if ((int)uVar15 <= (int)uVar16) {
          if (0x3ffffffe < (int)uVar16) {
            FUN_032bd0a8(uVar1,lVar9,&local_7c,"Invalid requestedCapacity {}",0x40000000,0x65816502,
                         0x5a);
            uVar14 = *(uint *)((long)param_4 + 0xc);
            uVar15 = uVar14 & 0x3fffffff;
          }
          puVar3 = PTR_PTR_0434a080;
          uVar4 = (uVar14 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar4) {
            uVar4 = 0x3fffffff;
          }
          local_7c = uVar1;
          if ((int)uVar1 <= (int)uVar4) {
            local_7c = uVar4;
          }
          local_88 = (ulong)local_7c * 0x30;
          if (((int)local_7c < (int)uVar15) || (0x3fffffff < (int)local_7c)) {
            local_78 = 1;
            local_70 = &DAT_0411b3b8;
            local_68 = &local_7c;
            FUN_03320b50(0x65816502,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x5a,"Invalid requestedCapacity {}",&local_78);
            uVar14 = *(uint *)((long)param_4 + 0xc);
            uVar15 = uVar14 & 0x3fffffff;
          }
          auVar20 = (**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_88,&local_88);
          lVar9 = auVar20._8_8_;
          puVar18 = auVar20._0_8_;
          if (0 < (int)uVar16) {
            uVar8 = puVar17[5];
            puVar18[3] = puVar17[3];
            puVar18[5] = uVar8;
            puVar18[1] = puVar17[1];
            *puVar18 = *puVar17;
            uVar8 = puVar17[2];
            puVar18[4] = puVar17[4];
            puVar18[2] = uVar8;
            if (uVar16 != 1) {
              uVar8 = puVar17[0xb];
              puVar18[9] = puVar17[9];
              puVar18[0xb] = uVar8;
              puVar18[7] = puVar17[7];
              puVar18[6] = puVar17[6];
              uVar8 = puVar17[8];
              puVar18[10] = puVar17[10];
              puVar18[8] = uVar8;
              if (uVar16 != 2) {
                uVar8 = puVar17[0x11];
                puVar18[0xf] = puVar17[0xf];
                puVar18[0x11] = uVar8;
                puVar18[0xd] = puVar17[0xd];
                puVar18[0xc] = puVar17[0xc];
                uVar8 = puVar17[0xe];
                puVar18[0x10] = puVar17[0x10];
                puVar18[0xe] = uVar8;
                if (uVar16 != 3) {
                  lVar6 = (ulong)uVar16 - 3;
                  puVar11 = puVar17 + 0x12;
                  puVar12 = puVar18 + 0x12;
                  do {
                    uVar8 = puVar11[5];
                    lVar6 = lVar6 + -1;
                    puVar12[3] = puVar11[3];
                    puVar12[5] = uVar8;
                    puVar12[1] = puVar11[1];
                    *puVar12 = *puVar11;
                    uVar8 = puVar11[2];
                    puVar12[4] = puVar11[4];
                    puVar12[2] = uVar8;
                    puVar11 = puVar11 + 6;
                    puVar12 = puVar12 + 6;
                  } while (lVar6 != 0);
                }
              }
            }
          }
          if (-1 < (int)uVar14) {
            (**(code **)(*(long *)puVar3 + 0x18))(puVar3,puVar17,(ulong)uVar15 * 0x30);
            lVar9 = extraout_x1;
          }
          if (local_88 < 0xbffffffd0) {
            uVar5 = (undefined4)(local_88 / 0x30);
          }
          else {
            uVar5 = 0x3fffffff;
          }
          uVar16 = *(uint *)(param_4 + 1);
          *(undefined4 *)((long)param_4 + 0xc) = uVar5;
          *param_4 = (long)puVar18;
        }
        lVar6 = plVar2[5];
        plVar7 = puVar18 + (long)(int)uVar16 * 6;
        plVar7[3] = plVar2[3];
        plVar7[5] = lVar6;
        plVar7[1] = plVar2[1];
        *plVar7 = *plVar2;
        lVar6 = plVar2[2];
        plVar7[4] = plVar2[4];
        plVar7[2] = lVar6;
        *(uint *)(param_4 + 1) = uVar1;
      }
LAB_030eda54:
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)(param_3 + 0x28));
  }
  return;
}


