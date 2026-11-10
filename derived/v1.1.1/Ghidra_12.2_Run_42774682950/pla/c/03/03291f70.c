/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03291f70; name: FUN_03291f70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03291f70(float param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                 undefined8 param_6,undefined8 param_7)

{
  float *pfVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar9 = PTR_PTR_0434a080;
  uVar4 = *(uint *)(param_2 + 1);
  uVar16 = (ulong)uVar4;
  puVar18 = (uint *)((long)param_4 + 0xc);
  uVar10 = *puVar18;
  if ((int)(uVar10 & 0x3fffffff) < (int)uVar4) {
    lVar15 = *param_4;
    lVar14 = param_4[1];
    if (0x3fffffff < (int)uVar4) {
      FUN_032bd0a8(uVar4,param_3,param_4,lVar15,(int)lVar14);
      uVar10 = *puVar18;
    }
    uVar10 = (uVar10 & 0x3fffffff) << 1;
    uVar19 = (ulong)uVar10;
    if (0x3ffffffe < uVar10) {
      uVar19 = 0x3fffffff;
    }
    uVar20 = uVar16;
    if ((int)uVar4 <= (int)uVar19) {
      uVar20 = uVar19;
    }
    lVar14 = FUN_032bd1d4(puVar9,uVar20,4,lVar15,(int)lVar14,puVar18);
    *param_4 = lVar14;
  }
  if (*(uint *)(param_4 + 1) != uVar4) {
    *(uint *)(param_4 + 1) = uVar4;
  }
  if ((int)param_5[1] != uVar4 + 4) {
    *(uint *)(param_5 + 1) = uVar4 + 4;
  }
  if (0 < (int)uVar4) {
    fVar21 = param_1 * 0.5;
    lVar14 = 0;
    uVar19 = 0;
    do {
      puVar5 = (undefined8 *)(*param_2 + uVar19 * 0x10);
      uVar8 = puVar5[1];
      uVar7 = *puVar5;
      uStack_88 = CONCAT44((float)((ulong)uVar8 >> 0x20) - fVar21,(float)uVar8 - fVar21);
      local_90 = CONCAT44((float)((ulong)uVar7 >> 0x20) - fVar21,(float)uVar7 - fVar21);
      puVar5 = (undefined8 *)(*param_2 + uVar19 * 0x10);
      uVar8 = puVar5[1];
      uVar7 = *puVar5;
      uStack_78 = CONCAT44(fVar21 + (float)((ulong)uVar8 >> 0x20),fVar21 + (float)uVar8);
      local_80 = CONCAT44(fVar21 + (float)((ulong)uVar7 >> 0x20),fVar21 + (float)uVar7);
      FUN_032bab40(*param_5 + lVar14,&local_90,uVar19 & 0xffffffff);
      uVar19 = uVar19 + 1;
      lVar14 = lVar14 + 0x20;
    } while (uVar16 != uVar19);
  }
  uVar8 = _UNK_0388a398;
  uVar7 = _DAT_0388a390;
  puVar5 = (undefined8 *)(*param_5 + (long)(int)uVar4 * 0x20);
  puVar5[1] = _UNK_0388a398;
  *puVar5 = uVar7;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[5] = uVar8;
  puVar5[4] = uVar7;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = uVar8;
  puVar5[8] = uVar7;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = uVar8;
  puVar5[0xc] = uVar7;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  FUN_032ba940(*param_5,uVar16,param_6,param_7);
  if (0 < (int)uVar4) {
    lVar14 = 0;
    uVar20 = 0;
    uVar19 = 1;
    do {
      iVar17 = *(int *)(*param_5 + uVar20 * 0x20 + 0xc);
      lVar15 = (long)iVar17;
      if (iVar17 != -1) {
        lVar12 = *param_2;
        *(int *)(*param_4 + lVar15 * 4) = (int)param_3[1];
        pfVar1 = (float *)(lVar12 + lVar15 * 0x10);
        iVar17 = (int)param_3[1];
        uVar11 = *(uint *)((long)param_3 + 0xc);
        uVar10 = iVar17 + 1;
        if (iVar17 < (int)(uVar11 & 0x3fffffff)) {
          lVar12 = *param_3;
        }
        else {
          lVar12 = *param_3;
          if (0x3ffffffe < iVar17) {
            FUN_032bd0a8(uVar10);
            uVar11 = *(uint *)((long)param_3 + 0xc);
          }
          uVar11 = (uVar11 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar11) {
            uVar11 = 0x3fffffff;
          }
          uVar3 = uVar10;
          if ((int)uVar10 <= (int)uVar11) {
            uVar3 = uVar11;
          }
          lVar12 = FUN_032bd1d4(puVar9,uVar3,0x10,lVar12,iVar17,(uint *)((long)param_3 + 0xc));
          *param_3 = lVar12;
          iVar17 = (int)param_3[1];
        }
        puVar5 = (undefined8 *)(lVar12 + (long)iVar17 * 0x10);
        puVar5[1] = *(undefined8 *)(pfVar1 + 2);
        *puVar5 = *(undefined8 *)pfVar1;
        *(uint *)(param_3 + 1) = uVar10;
        if ((long)(uVar20 + 1) < (long)(int)uVar4) {
          lVar12 = lVar14;
          uVar13 = uVar16;
          do {
            lVar2 = *param_5 + lVar12;
            if (*(uint *)(*param_5 + uVar20 * 0x20 + 0x10) < *(uint *)(lVar2 + 0x20)) break;
            iVar17 = *(int *)(lVar2 + 0x2c);
            if (iVar17 != -1) {
              puVar5 = (undefined8 *)(*param_2 + (long)iVar17 * 0x10);
              uVar8 = puVar5[1];
              uVar7 = *puVar5;
              fVar21 = *pfVar1 - (float)uVar7;
              fVar22 = pfVar1[1] - (float)((ulong)uVar7 >> 0x20);
              fVar23 = pfVar1[2] - (float)uVar8;
              fVar24 = pfVar1[3] - (float)((ulong)uVar8 >> 0x20);
              fVar21 = fVar21 * fVar21;
              fVar22 = fVar22 * fVar22;
              fVar23 = fVar23 * fVar23;
              fVar24 = fVar24 * fVar24;
              auVar25._4_4_ = fVar22;
              auVar25._0_4_ = fVar21;
              auVar25._8_4_ = fVar23;
              auVar25._12_4_ = fVar24;
              auVar6._4_4_ = fVar22;
              auVar6._0_4_ = fVar21;
              auVar6._8_4_ = fVar23;
              auVar6._12_4_ = fVar24;
              auVar25 = NEON_ext(auVar25,auVar6,8,1);
              if (fVar21 + fVar22 + auVar25._0_4_ <= param_1 * param_1) {
                *(undefined4 *)(*param_4 + (long)iVar17 * 4) =
                     *(undefined4 *)(*param_4 + lVar15 * 4);
                *(undefined4 *)(*param_5 + lVar12 + 0x2c) = 0xffffffff;
              }
            }
            uVar13 = uVar13 - 1;
            lVar12 = lVar12 + 0x20;
          } while (uVar19 != uVar13);
        }
      }
      uVar20 = uVar20 + 1;
      uVar19 = uVar19 + 1;
      lVar14 = lVar14 + 0x20;
    } while (uVar20 != uVar16);
  }
  return;
}


