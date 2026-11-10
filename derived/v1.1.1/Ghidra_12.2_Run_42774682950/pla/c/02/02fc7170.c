/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc7170; name: FUN_02fc7170
 */


/* WARNING: Removing unreachable block (ram,0x02fc72f4) */

void FUN_02fc7170(long param_1,long *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  float *pfVar4;
  byte *pbVar5;
  float *pfVar6;
  uint uVar7;
  undefined4 uVar8;
  byte bVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined *puVar14;
  byte bVar15;
  long *plVar16;
  long *plVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  uint uVar29;
  uint uVar30;
  byte bVar31;
  long lVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[3] = 0x7f7fffee7f7fffee;
  param_2[2] = 0x7f7fffee7f7fffee;
  param_2[5] = -0x80001100800012;
  param_2[4] = -0x80001100800012;
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_02fcb1fc(param_1,&local_98);
  puVar14 = PTR_PTR_0434a080;
  iVar20 = local_88._4_4_ * 2;
  uVar10 = iVar20 - 1;
  local_78 = CONCAT44(local_78._4_4_,iVar20);
  if (iVar20 < 1) {
    plVar16 = (long *)0x0;
    uVar30 = 0x80000000;
  }
  else {
    plVar16 = (long *)FUN_032cf190(PTR_PTR_0434a080,0x20,&local_78);
    uVar30 = (uint)local_78;
  }
  lVar32 = 0;
  if (local_98 != 0) {
    lVar32 = (long)&local_98 + local_98;
  }
  lVar23 = *(long *)(lVar32 + 0x30);
  plVar16[1] = *(long *)(lVar32 + 0x38);
  *plVar16 = lVar23;
  lVar23 = *(long *)(lVar32 + 0x40);
  plVar16[3] = *(long *)(lVar32 + 0x48);
  plVar16[2] = lVar23;
  uVar29 = *(uint *)(param_2 + 1);
  if (uVar29 == uVar10) goto LAB_02fc7390;
  uVar24 = *(uint *)((long)param_2 + 0xc);
  if (*(uint *)((long)param_2 + 0xc) == 0) {
    *(uint *)((long)param_2 + 0xc) = uVar29;
    uVar24 = uVar29;
  }
  if ((int)uVar29 < (int)uVar10) {
    uVar7 = uVar24 & 0x7fffffff;
    if ((int)(uVar24 & 0x7fffffff) <= (int)uVar29) {
      uVar7 = uVar29;
    }
    if ((int)uVar7 < (int)uVar10) {
      uVar29 = iVar20 - 2U | (int)(iVar20 - 2U) >> 0x10;
      uVar29 = uVar29 | (int)uVar29 >> 8;
      uVar29 = uVar29 | (int)uVar29 >> 4;
      uVar29 = uVar29 | (int)uVar29 >> 2;
      uVar29 = (uVar29 | (int)uVar29 >> 1) + 1;
      if ((int)uVar29 < (int)uVar10) {
        local_68 = 0;
        local_78 = 0;
        puStack_70 = PTR_DAT_04372528;
        FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow",&local_78);
      }
      lVar32 = tpidr_el0;
      lVar23 = *(long *)(lVar32 + 0x38d490);
      if (lVar23 == 0) {
        lVar23 = FUN_0333d16c(0,1);
        *(long *)(lVar32 + 0x38d490) = lVar23;
      }
      plVar17 = *(long **)(*(long *)(lVar23 + 8) + 0x58);
      puVar18 = (undefined4 *)(**(code **)(*plVar17 + 0x10))(plVar17,(long)(int)uVar29 * 6,0);
      uVar24 = *(uint *)(param_2 + 1);
      puVar3 = (undefined4 *)0x0;
      if (*param_2 != 0) {
        puVar3 = (undefined4 *)(*param_2 + (long)param_2);
      }
      if (0 < (int)uVar24) {
        if (uVar24 == 1) {
          lVar23 = 0;
        }
        else {
          lVar23 = 0;
          puVar27 = puVar3;
          puVar28 = puVar18;
          do {
            uVar8 = *puVar27;
            lVar23 = lVar23 + 2;
            *(undefined2 *)(puVar28 + 1) = *(undefined2 *)(puVar27 + 1);
            *puVar28 = uVar8;
            uVar8 = *(undefined4 *)((long)puVar27 + 6);
            *(undefined2 *)((long)puVar28 + 10) = *(undefined2 *)((long)puVar27 + 10);
            *(undefined4 *)((long)puVar28 + 6) = uVar8;
            puVar28 = puVar28 + 3;
            puVar27 = puVar27 + 3;
          } while ((ulong)uVar24 - ((ulong)uVar24 & 1) != lVar23);
          if ((uVar24 & 1) == 0) goto LAB_02fc736c;
        }
        puVar3 = (undefined4 *)((long)puVar3 + lVar23 * 6);
        puVar28 = (undefined4 *)((long)puVar18 + lVar23 * 6);
        uVar8 = *puVar3;
        *(undefined2 *)(puVar28 + 1) = *(undefined2 *)(puVar3 + 1);
        *puVar28 = uVar8;
      }
LAB_02fc736c:
      if ((int)*(uint *)((long)param_2 + 0xc) < 0) {
        uVar24 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
        if ((int)uVar24 <= (int)*(uint *)(param_2 + 1)) {
          uVar24 = *(uint *)(param_2 + 1);
        }
        lVar23 = 0;
        if (*param_2 != 0) {
          lVar23 = *param_2 + (long)param_2;
        }
        lVar26 = *(long *)(lVar32 + 0x38d490);
        if (lVar26 == 0) {
          lVar26 = FUN_0333d16c(0,1);
          *(long *)(lVar32 + 0x38d490) = lVar26;
        }
        plVar17 = *(long **)(*(long *)(lVar26 + 8) + 0x58);
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar23,(ulong)uVar24 * 6);
      }
      lVar32 = 0;
      if (puVar18 != (undefined4 *)0x0) {
        lVar32 = (long)puVar18 - (long)param_2;
      }
      *param_2 = lVar32;
      *(uint *)((long)param_2 + 0xc) = uVar29 | 0x80000000;
    }
  }
  *(uint *)(param_2 + 1) = uVar10;
LAB_02fc7390:
  lVar32 = *plVar16;
  param_2[3] = plVar16[1];
  param_2[2] = lVar32;
  lVar32 = plVar16[2];
  param_2[5] = plVar16[3];
  param_2[4] = lVar32;
  lVar32 = 0;
  if (local_98 != 0) {
    lVar32 = (long)&local_98 + local_98;
  }
  if (0 < (int)uVar10) {
    uVar25 = 0;
    do {
      lVar26 = *param_2;
      uVar1 = uVar25 + 1;
      puVar19 = (undefined8 *)(lVar32 + uVar1 * 0x30);
      uVar37 = puVar19[1];
      uVar34 = *puVar19;
      uVar39 = puVar19[3];
      uVar38 = puVar19[2];
      pbVar22 = (byte *)((long)param_2 + uVar25 * 6 + lVar26);
      uVar29 = *(uint *)(puVar19 + 5);
      pfVar4 = (float *)(plVar16 + (long)*(int *)(puVar19 + 4) * 4);
      lVar23 = 0;
      pbVar2 = pbVar22 + 1;
      pbVar21 = pbVar22 + 2;
      pbVar22[0] = 0;
      pbVar22[1] = 0;
      *pbVar21 = 0;
      do {
        pbVar5 = (byte *)((long)param_2 + lVar23 + uVar25 * 6 + lVar26);
        iVar20 = (int)lVar23;
        if (iVar20 == 0) {
          bVar15 = *pbVar5;
          do {
            bVar31 = bVar15;
            if (0xef < bVar31) goto LAB_02fc753c;
            *pbVar5 = bVar31 + 0x10;
            bVar15 = bVar31 + 0x10;
          } while (*pfVar4 + (pfVar4[4] - *pfVar4) * 0.0044247787 *
                             (float)(byte)((*pbVar22 >> 4) * (*pbVar22 >> 4)) <= (float)uVar34);
LAB_02fc7538:
          *pbVar5 = bVar31;
        }
        else {
          if (iVar20 == 1) {
            bVar15 = *pbVar5;
            do {
              bVar31 = bVar15;
              if (0xef < bVar31) goto LAB_02fc753c;
              *pbVar5 = bVar31 + 0x10;
              bVar15 = bVar31 + 0x10;
            } while (pfVar4[1] +
                     (pfVar4[5] - pfVar4[1]) * 0.0044247787 *
                     (float)(byte)((*pbVar2 >> 4) * (*pbVar2 >> 4)) <=
                     (float)((ulong)uVar34 >> 0x20));
            goto LAB_02fc7538;
          }
          bVar31 = *pbVar5;
          bVar15 = bVar31;
          if (lVar23 == 2) {
            do {
              bVar31 = bVar15;
              if (0xef < bVar31) goto LAB_02fc753c;
              *pbVar5 = bVar31 + 0x10;
              bVar15 = bVar31 + 0x10;
            } while (pfVar4[2] +
                     (pfVar4[6] - pfVar4[2]) * 0.0044247787 *
                     (float)(byte)((*pbVar21 >> 4) * (*pbVar21 >> 4)) <= (float)uVar37);
            goto LAB_02fc7538;
          }
          if (0.0 <= (float)((ulong)uVar37 >> 0x20)) {
            if (bVar31 < 0xf0) {
              bVar31 = bVar31 + (-bVar31 - 0x11 & 0xf0) + 0x10;
              goto LAB_02fc7538;
            }
          }
          else if (bVar31 < 0xf0) {
            *pbVar5 = bVar31 + 0x10;
            goto LAB_02fc7538;
          }
        }
LAB_02fc753c:
        bVar15 = bVar31;
        if (iVar20 == 0) {
          do {
            bVar31 = bVar15;
            if ((~bVar31 & 0xf) == 0) goto LAB_02fc7470;
            *pbVar5 = bVar31 + 1;
            fVar33 = pfVar4[4];
            bVar15 = bVar31 + 1;
          } while ((float)uVar38 <=
                   fVar33 + (fVar33 - *pfVar4) * -0.0044247787 *
                            (float)(byte)((*pbVar22 & 0xf) * (*pbVar22 & 0xf)));
LAB_02fc746c:
          *pbVar5 = bVar31;
        }
        else {
          if (iVar20 == 1) {
            do {
              bVar31 = bVar15;
              if ((~bVar31 & 0xf) == 0) goto LAB_02fc7470;
              *pbVar5 = bVar31 + 1;
              bVar15 = bVar31 + 1;
            } while ((float)((ulong)uVar38 >> 0x20) <=
                     pfVar4[5] +
                     (pfVar4[5] - pfVar4[1]) * -0.0044247787 *
                     (float)(byte)((*pbVar2 & 0xf) * (*pbVar2 & 0xf)));
            goto LAB_02fc746c;
          }
          if (lVar23 == 2) {
            do {
              bVar31 = bVar15;
              if ((~bVar31 & 0xf) == 0) goto LAB_02fc7470;
              *pbVar5 = bVar31 + 1;
              bVar15 = bVar31 + 1;
            } while ((float)uVar39 <=
                     pfVar4[6] +
                     (pfVar4[6] - pfVar4[2]) * -0.0044247787 *
                     (float)(byte)((*pbVar21 & 0xf) * (*pbVar21 & 0xf)));
            goto LAB_02fc746c;
          }
          if ((float)((ulong)uVar39 >> 0x20) <= 0.0) {
            if ((bVar31 & 0xf) != 0xf) {
              do {
                bVar31 = bVar31 + 1;
              } while ((~bVar31 & 0xf) != 0);
              goto LAB_02fc746c;
            }
          }
          else if ((bVar31 & 0xf) != 0xf) {
            *pbVar5 = bVar31 + 1;
            goto LAB_02fc746c;
          }
        }
LAB_02fc7470:
        lVar23 = lVar23 + 1;
      } while (lVar23 != 3);
      bVar11 = *pbVar22 >> 4;
      bVar15 = *pbVar22 & 0xf;
      pfVar6 = (float *)(plVar16 + uVar1 * 4);
      fVar33 = ((float)*(long *)(pfVar4 + 4) - (float)*(long *)pfVar4) * 0.0044247787;
      fVar35 = ((float)((ulong)*(long *)(pfVar4 + 4) >> 0x20) -
               (float)((ulong)*(long *)pfVar4 >> 0x20)) * 0.0044247787;
      fVar36 = ((float)*(long *)(pfVar4 + 6) - (float)*(long *)(pfVar4 + 2)) * 0.0044247787;
      bVar31 = *pbVar2;
      bVar9 = *pbVar21;
      pfVar6[4] = 0.0;
      pfVar6[5] = 0.0;
      pfVar6[6] = 0.0;
      pfVar6[7] = 0.0;
      pfVar6[0] = 0.0;
      pfVar6[1] = 0.0;
      pfVar6[2] = 0.0;
      pfVar6[3] = 0.0;
      bVar12 = bVar31 >> 4;
      bVar13 = bVar9 >> 4;
      bVar31 = bVar31 & 0xf;
      bVar9 = bVar9 & 0xf;
      *pfVar6 = *pfVar4 + (float)(byte)(bVar11 * bVar11) * fVar33;
      pfVar6[1] = (float)(byte)(bVar12 * bVar12) * fVar35 + pfVar4[1];
      pfVar6[2] = (float)(byte)(bVar13 * bVar13) * fVar36 + pfVar4[2];
      pfVar6[4] = pfVar4[4] - (float)(byte)(bVar15 * bVar15) * fVar33;
      pfVar6[5] = pfVar4[5] - (float)(byte)(bVar31 * bVar31) * fVar35;
      pfVar6[6] = pfVar4[6] - (float)(byte)(bVar9 * bVar9) * fVar36;
      if (*(int *)(lVar32 + uVar1 * 0x30 + 0x24) == 0) {
        bVar15 = (byte)(uVar29 >> 0x10) & 0x7f;
      }
      else {
        uVar24 = uVar29 + ~(uint)uVar25;
        uVar29 = uVar24 >> 1;
        bVar15 = (byte)(uVar24 >> 0x11) | 0x80;
      }
      lVar26 = uVar25 * 6 + lVar26;
      *(byte *)((long)param_2 + lVar26 + 3) = bVar15;
      *(short *)((long)param_2 + lVar26 + 4) = (short)uVar29;
      uVar25 = uVar1;
    } while (uVar1 != uVar10);
  }
  if (-1 < (int)uVar30) {
    (**(code **)(*(long *)puVar14 + 0x18))(puVar14,plVar16,(ulong)(uVar30 & 0x3fffffff) << 5);
  }
  if (local_90 < 0) {
    uVar10 = local_90._4_4_ & 0x7fffffff;
    if ((int)(local_90._4_4_ & 0x7fffffff) <= (int)(uint)local_90) {
      uVar10 = (uint)local_90;
    }
    lVar32 = 0;
    if (local_98 != 0) {
      lVar32 = (long)&local_98 + local_98;
    }
    lVar23 = tpidr_el0;
    lVar26 = *(long *)(lVar23 + 0x38d490);
    if (lVar26 == 0) {
      lVar26 = FUN_0333d16c(0,1);
      *(long *)(lVar23 + 0x38d490) = lVar26;
    }
    plVar16 = *(long **)(*(long *)(lVar26 + 8) + 0x58);
    (**(code **)(*plVar16 + 0x18))(plVar16,lVar32,(ulong)uVar10 * 0x30);
  }
  return;
}


