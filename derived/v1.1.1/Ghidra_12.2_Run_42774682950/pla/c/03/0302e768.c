/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0302e768; name: FUN_0302e768
 */


void FUN_0302e768(long *param_1,ulong param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90 [4];
  
  lVar11 = param_1[7];
  uVar12 = param_2 & 0xffffff;
  lVar10 = lVar11 + uVar12 * 0xc0;
  lVar1 = param_1[0x2a] + (ulong)param_3 * 0x80;
  *(uint *)(lVar10 + 0x80) = param_3;
  puVar13 = (uint *)(lVar1 + 0x48);
  uVar9 = (ulong)*puVar13 & 0xffffff;
  uVar8 = (uint)param_2;
  if ((int)uVar9 == 0xffffff) {
    *puVar13 = uVar8;
    *(uint *)(lVar11 + uVar12 * 0xc0 + 0x84) = uVar8;
    if ((char)param_1[0xd] != '\0') {
      *(undefined4 *)(param_1[0xe] + uVar12 * 4) = 0xffffff;
    }
  }
  else {
    lVar14 = param_1[7];
    puVar7 = (uint *)(lVar14 + uVar9 * 0xc0 + 0x84);
    uVar2 = *puVar7;
    *(uint *)(lVar11 + uVar12 * 0xc0 + 0x84) = uVar2;
    if ((char)param_1[0xd] != '\0') {
      *(uint *)(param_1[0xe] + ((ulong)uVar2 & 0xffffff) * 4) = uVar8;
    }
    *puVar7 = uVar8;
    if ((char)param_1[0xd] != '\0') {
      *(undefined4 *)(param_1[0xe] + uVar12 * 4) = *(undefined4 *)(lVar14 + uVar9 * 0xc0 + 0x50);
    }
  }
  *(uint *)(lVar10 + 0x80) = param_3;
  puVar7 = (uint *)(lVar11 + uVar12 * 0xc0 + 0x54);
  uVar2 = *puVar7;
  uVar8 = uVar2 & 0xfffffffc;
  *puVar7 = uVar8 | 2;
  if ((*(int *)(lVar1 + 0x4c) == 0) || (local_90[0] = 0, *(long *)(lVar1 + 0x40) != 0)) {
    uVar8 = uVar2 & 0xfffffff8 | 2;
  }
  else {
    uVar8 = uVar8 | 6;
  }
  *puVar7 = uVar8;
  lVar14 = lVar11 + uVar12 * 0xc0;
  uVar3 = *(ushort *)(lVar1 + 0x5a);
  uVar17 = (undefined1)uVar3;
  uVar18 = (undefined1)(uVar3 >> 8);
  fVar20 = *(float *)(lVar14 + 0x3c);
  uVar15 = 0;
  uVar16 = 0;
  if ((float)((uint)uVar3 << 0x10) <= fVar20) {
    uVar15 = SUB41(fVar20,0);
    uVar16 = (undefined1)((uint)fVar20 >> 8);
    uVar17 = (undefined1)((uint)fVar20 >> 0x10);
    uVar18 = (undefined1)((uint)fVar20 >> 0x18);
  }
  *(short *)(lVar1 + 0x5a) =
       (short)((uint)((float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) * 1.0039062)
              >> 0x10);
  FUN_02ffec4c(lVar10,lVar1,param_4);
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(lVar14 + 0x78) + 0x18) * 0x200 + 0x18))
            (*(long *)(lVar14 + 0x78),&DAT_03aae430,local_90);
  uVar6 = *(undefined4 *)(lVar10 + 0x1c);
  uStack_98 = (ulong)*(uint *)(lVar10 + 0x2c);
  local_a0 = CONCAT17((char)((uint)uVar6 >> 0x18),
                      CONCAT16((char)((uint)uVar6 >> 0x10),
                               CONCAT15((char)((uint)uVar6 >> 8),
                                        CONCAT14((char)uVar6,*(undefined4 *)(lVar14 + 0xc)))));
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(lVar14 + 0x78) + 0x18) * 0x200 + 0x28))
            (*(long *)(lVar14 + 0x78),&local_a0,local_a8);
  *(short *)(lVar14 + 0x94) = local_a8._2_2_ + 1;
  uVar8 = *puVar13;
  lVar14 = param_1[7];
  uVar9 = (ulong)uVar8 & 0xffffff;
  lVar10 = (**(code **)(*param_1 + 0xb0))(local_a8[0],param_1);
  fVar20 = 1.8446726e+19;
  if ((*(byte *)(lVar10 + (ulong)*(byte *)(lVar14 + uVar9 * 0xc0 + 0x89) * 0x40 + 0x42) & 1) == 0) {
    fVar20 = 1.8446726e+19;
  }
  else {
    local_90[0] = CONCAT44(local_90[0]._4_4_,0x5f7ffff0);
    lVar10 = *(long *)(lVar14 + uVar9 * 0xc0 + 0x78);
    if (lVar10 != 0) {
      iVar21 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar10 + 0x18) * 0x200 + 0x30))
                         (lVar10,local_90);
      fVar20 = 1.8446726e+19;
      if ((-1 < iVar21) && ((float)local_90[0] < 1.8446726e+19)) {
        fVar20 = (float)local_90[0] * 0.5;
        uVar15 = SUB41(fVar20,0);
        uVar16 = (undefined1)((uint)fVar20 >> 8);
        uVar17 = (undefined1)((uint)fVar20 >> 0x10);
        uVar18 = (undefined1)((uint)fVar20 >> 0x18);
        if (fVar20 <= 0.05) {
          uVar15 = 0xcd;
          uVar16 = 0xcc;
          uVar17 = 0x4c;
          uVar18 = 0x3d;
        }
        fVar20 = (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
        if (1.8446726e+19 < (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))) {
          fVar20 = 1.8446726e+19;
        }
        local_90[0] = CONCAT44(local_90[0]._4_4_,
                               CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))));
      }
    }
  }
  lVar10 = param_1[7];
  uVar2 = *(uint *)(lVar10 + uVar9 * 0xc0 + 0x84);
  while (uVar2 != uVar8) {
    uVar9 = (ulong)(uVar2 & 0xffffff);
    lVar14 = (**(code **)(*param_1 + 0xb0))(param_1);
    if ((*(byte *)(lVar14 + (ulong)*(byte *)(lVar10 + uVar9 * 0xc0 + 0x89) * 0x40 + 0x42) & 1) != 0)
    {
      local_90[0] = CONCAT44(local_90[0]._4_4_,0x5f7ffff0);
      lVar10 = *(long *)(lVar10 + uVar9 * 0xc0 + 0x78);
      if (((lVar10 != 0) &&
          (iVar21 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar10 + 0x18) * 0x200 + 0x30))
                              (lVar10,local_90), -1 < iVar21)) &&
         ((float)local_90[0] < 1.8446726e+19)) {
        fVar23 = (float)local_90[0] * 0.5;
        uVar15 = SUB41(fVar23,0);
        uVar16 = (undefined1)((uint)fVar23 >> 8);
        uVar17 = (undefined1)((uint)fVar23 >> 0x10);
        uVar18 = (undefined1)((uint)fVar23 >> 0x18);
        if (fVar23 <= 0.05) {
          uVar15 = 0xcd;
          uVar16 = 0xcc;
          uVar17 = 0x4c;
          uVar18 = 0x3d;
        }
        if ((float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) <= fVar20) {
          fVar20 = (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
        }
        local_90[0] = CONCAT44(local_90[0]._4_4_,
                               CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))));
      }
    }
    lVar10 = param_1[7];
    uVar2 = *(uint *)(lVar10 + uVar9 * 0xc0 + 0x84);
  }
  fVar19 = (float)*(undefined8 *)(lVar1 + 0x68);
  fVar23 = (float)*(undefined8 *)(lVar1 + 0x60);
  fVar23 = fVar23 * fVar23;
  fVar25 = (float)((ulong)*(undefined8 *)(lVar1 + 0x60) >> 0x20);
  fVar25 = fVar25 * fVar25;
  fVar19 = fVar19 * fVar19;
  fVar5 = fVar23 + fVar25 + fVar19;
  fVar19 = fVar23 + fVar25 + fVar19;
  uVar15 = (undefined1)((uint)fVar19 >> 8);
  uVar16 = (undefined1)((uint)fVar19 >> 0x10);
  uVar17 = (undefined1)((uint)fVar19 >> 0x18);
  uVar24 = NEON_frsqrte(CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(SUB41(fVar19,0),
                                                                                 fVar5)))),4);
  fVar23 = (float)uVar24;
  fVar25 = (float)((ulong)uVar24 >> 0x20);
  uVar24 = NEON_frsqrts(CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(SUB41(fVar19,0),
                                                                                 fVar5)))),
                        CONCAT44(fVar25 * fVar25,fVar23 * fVar23),4);
  iVar21 = -(uint)(fVar5 <= 0.0);
  iVar22 = -(uint)(fVar19 <= 0.0);
  fVar5 = fVar5 * fVar23 * (float)uVar24;
  fVar19 = fVar19 * fVar25 * (float)((ulong)uVar24 >> 0x20);
  *(short *)(lVar1 + 0x5c) = (short)((uint)fVar20 >> 0x10);
  iVar21 = (int)((float)param_1[0xa8] * (float)param_1[0xaf] *
                (float)CONCAT13((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                CONCAT12((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10)
                                         ,CONCAT11((byte)((uint)fVar5 >> 8) &
                                                   ~(byte)((uint)iVar21 >> 8),
                                                   SUB41(fVar5,0) & ~(byte)iVar21))));
  iVar22 = (int)((float)((ulong)param_1[0xa8] >> 0x20) * (float)((ulong)param_1[0xaf] >> 0x20) *
                (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                                CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                         ~(byte)((uint)iVar22 >> 0x10),
                                         CONCAT11((byte)((uint)fVar19 >> 8) &
                                                  ~(byte)((uint)iVar22 >> 8),
                                                  SUB41(fVar19,0) & ~(byte)iVar22))));
  uVar15 = (undefined1)iVar22;
  uVar16 = (undefined1)((uint)iVar22 >> 8);
  uVar17 = (undefined1)((uint)iVar22 >> 0x10);
  uVar18 = (undefined1)((uint)iVar22 >> 0x18);
  auVar4[4] = uVar15;
  auVar4._0_4_ = iVar21;
  auVar4[5] = uVar16;
  auVar4[6] = uVar17;
  auVar4[7] = uVar18;
  auVar4._8_4_ = iVar21;
  auVar4._12_4_ =
       (int)(CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,iVar21)))) >> 0x20);
  uVar24 = NEON_sqxtun(CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,iVar21)))),
                       auVar4,4);
  *(short *)(lVar11 + uVar12 * 0xc0 + 0x5c) = (short)uVar24;
  return;
}


