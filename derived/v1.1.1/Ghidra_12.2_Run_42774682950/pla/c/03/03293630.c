/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03293630; name: FUN_03293630
 */


void FUN_03293630(undefined8 param_1,long param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar21;
  undefined8 uVar20;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  
  puVar10 = PTR_PTR_0434a080;
  if (param_4 != 0) {
    param_4 = param_4 + -1;
    fVar14 = (float)param_1;
    do {
      iVar7 = *(int *)(param_2 + 0x20);
      uVar13 = *(uint *)(param_2 + 0x24);
      uVar2 = iVar7 + 3;
      iVar8 = *(int *)(param_2 + 0x30);
      iVar12 = iVar8;
      if ((int)(uVar13 & 0x3fffffff) < (int)uVar2) {
        uVar20 = *(undefined8 *)(param_2 + 0x18);
        if (0x3fffffff < (int)uVar2) {
          FUN_032bd0a8(uVar2);
          uVar13 = *(uint *)(param_2 + 0x24);
        }
        uVar13 = (uVar13 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar13) {
          uVar13 = 0x3fffffff;
        }
        uVar6 = uVar2;
        if ((int)uVar2 <= (int)uVar13) {
          uVar6 = uVar13;
        }
        uVar20 = FUN_032bd1d4(puVar10,uVar6,0x10,uVar20,iVar7,(uint *)(param_2 + 0x24));
        iVar12 = *(int *)(param_2 + 0x30);
        *(undefined8 *)(param_2 + 0x18) = uVar20;
      }
      *(uint *)(param_2 + 0x20) = uVar2;
      iVar3 = iVar12 + 3;
      lVar11 = *(long *)(param_2 + 0x28);
      if ((int)(*(uint *)(param_2 + 0x34) & 0x3fffffff) < iVar3) {
        lVar11 = FUN_02fada68(puVar10,iVar3,lVar11,iVar12,param_2 + 0x34);
        *(long *)(param_2 + 0x28) = lVar11;
      }
      piVar4 = (int *)(lVar11 + (long)param_3 * 0x10);
      *(int *)(param_2 + 0x30) = iVar3;
      lVar11 = *(long *)(param_2 + 0x18);
      iVar3 = *piVar4;
      iVar12 = piVar4[1];
      puVar9 = (undefined8 *)(lVar11 + (long)iVar12 * 0x10);
      uVar22 = puVar9[1];
      uVar27 = *puVar9;
      puVar9 = (undefined8 *)(lVar11 + (long)iVar3 * 0x10);
      uVar18 = puVar9[1];
      uVar20 = *puVar9;
      iVar24 = piVar4[2];
      fVar15 = (float)uVar20 + (float)uVar27;
      fVar16 = (float)((ulong)uVar20 >> 0x20) + (float)((ulong)uVar27 >> 0x20);
      fVar17 = (float)uVar18 + (float)uVar22;
      fVar19 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
      fVar21 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
      uVar20 = CONCAT44(fVar21,fVar19);
      uVar27 = NEON_frsqrte(uVar20,4);
      fVar26 = (float)uVar27;
      fVar28 = (float)((ulong)uVar27 >> 0x20);
      uVar27 = NEON_frsqrts(uVar20,CONCAT44(fVar28 * fVar28,fVar26 * fVar26),4);
      fVar26 = fVar26 * (float)uVar27;
      fVar28 = fVar28 * (float)((ulong)uVar27 >> 0x20);
      iVar23 = -(uint)(fVar19 <= 0.0);
      iVar25 = -(uint)(fVar21 <= 0.0);
      uVar20 = NEON_frsqrts(uVar20,CONCAT44(fVar28 * fVar28,fVar26 * fVar26),4);
      fVar26 = (float)uVar20 * fVar26;
      fVar28 = (float)((ulong)uVar20 >> 0x20) * fVar28;
      fVar19 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                               CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar26 >> 8) &
                                                  ~(byte)((uint)iVar23 >> 8),
                                                  SUB41(fVar26,0) & ~(byte)iVar23)));
      fVar26 = (float)(CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                CONCAT16((byte)((uint)fVar28 >> 0x10) &
                                         ~(byte)((uint)iVar25 >> 0x10),
                                         CONCAT15((byte)((uint)fVar28 >> 8) &
                                                  ~(byte)((uint)iVar25 >> 8),
                                                  CONCAT14(SUB41(fVar28,0) & ~(byte)iVar25,fVar19)))
                               ) >> 0x20);
      puVar9 = (undefined8 *)(lVar11 + (long)iVar7 * 0x10);
      puVar9[1] = CONCAT44(fVar14 * ((float)((ulong)uVar18 >> 0x20) + (float)((ulong)uVar22 >> 0x20)
                                    ) * fVar26,fVar14 * fVar17 * fVar19);
      *puVar9 = CONCAT44(fVar14 * fVar16 * fVar26,fVar14 * fVar15 * fVar19);
      puVar9 = (undefined8 *)(lVar11 + (long)iVar12 * 0x10);
      uVar18 = puVar9[1];
      uVar20 = *puVar9;
      iVar12 = iVar7 + 1;
      puVar9 = (undefined8 *)(lVar11 + (long)iVar24 * 0x10);
      uVar22 = puVar9[1];
      uVar27 = *puVar9;
      fVar15 = (float)uVar20 + (float)uVar27;
      fVar16 = (float)((ulong)uVar20 >> 0x20) + (float)((ulong)uVar27 >> 0x20);
      fVar17 = (float)uVar18 + (float)uVar22;
      fVar19 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
      fVar21 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
      uVar20 = CONCAT44(fVar21,fVar19);
      uVar27 = NEON_frsqrte(uVar20,4);
      fVar26 = (float)uVar27;
      fVar28 = (float)((ulong)uVar27 >> 0x20);
      uVar27 = NEON_frsqrts(uVar20,CONCAT44(fVar28 * fVar28,fVar26 * fVar26),4);
      fVar26 = fVar26 * (float)uVar27;
      fVar28 = fVar28 * (float)((ulong)uVar27 >> 0x20);
      iVar23 = -(uint)(fVar19 <= 0.0);
      iVar25 = -(uint)(fVar21 <= 0.0);
      uVar20 = NEON_frsqrts(uVar20,CONCAT44(fVar28 * fVar28,fVar26 * fVar26),4);
      fVar26 = (float)uVar20 * fVar26;
      fVar28 = (float)((ulong)uVar20 >> 0x20) * fVar28;
      fVar19 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                               CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar26 >> 8) &
                                                  ~(byte)((uint)iVar23 >> 8),
                                                  SUB41(fVar26,0) & ~(byte)iVar23)));
      fVar26 = (float)(CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                CONCAT16((byte)((uint)fVar28 >> 0x10) &
                                         ~(byte)((uint)iVar25 >> 0x10),
                                         CONCAT15((byte)((uint)fVar28 >> 8) &
                                                  ~(byte)((uint)iVar25 >> 8),
                                                  CONCAT14(SUB41(fVar28,0) & ~(byte)iVar25,fVar19)))
                               ) >> 0x20);
      puVar9 = (undefined8 *)(lVar11 + (long)iVar12 * 0x10);
      puVar9[1] = CONCAT44(fVar14 * ((float)((ulong)uVar18 >> 0x20) + (float)((ulong)uVar22 >> 0x20)
                                    ) * fVar26,fVar14 * fVar17 * fVar19);
      *puVar9 = CONCAT44(fVar14 * fVar16 * fVar26,fVar14 * fVar15 * fVar19);
      puVar9 = (undefined8 *)(lVar11 + (long)iVar24 * 0x10);
      uVar18 = puVar9[1];
      uVar20 = *puVar9;
      puVar9 = (undefined8 *)(lVar11 + (long)iVar3 * 0x10);
      uVar22 = puVar9[1];
      uVar27 = *puVar9;
      iVar3 = iVar7 + 2;
      fVar15 = (float)uVar20 + (float)uVar27;
      fVar16 = (float)((ulong)uVar20 >> 0x20) + (float)((ulong)uVar27 >> 0x20);
      fVar17 = (float)uVar18 + (float)uVar22;
      fVar19 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
      fVar21 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
      uVar20 = CONCAT44(fVar21,fVar19);
      uVar27 = NEON_frsqrte(uVar20,4);
      fVar26 = (float)uVar27;
      fVar28 = (float)((ulong)uVar27 >> 0x20);
      uVar27 = NEON_frsqrts(uVar20,CONCAT44(fVar28 * fVar28,fVar26 * fVar26),4);
      fVar26 = fVar26 * (float)uVar27;
      fVar28 = fVar28 * (float)((ulong)uVar27 >> 0x20);
      iVar24 = -(uint)(fVar19 <= 0.0);
      iVar23 = -(uint)(fVar21 <= 0.0);
      uVar20 = NEON_frsqrts(uVar20,CONCAT44(fVar28 * fVar28,fVar26 * fVar26),4);
      fVar26 = (float)uVar20 * fVar26;
      fVar28 = (float)((ulong)uVar20 >> 0x20) * fVar28;
      fVar19 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                               CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar26 >> 8) &
                                                  ~(byte)((uint)iVar24 >> 8),
                                                  SUB41(fVar26,0) & ~(byte)iVar24)));
      fVar26 = (float)(CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                                CONCAT16((byte)((uint)fVar28 >> 0x10) &
                                         ~(byte)((uint)iVar23 >> 0x10),
                                         CONCAT15((byte)((uint)fVar28 >> 8) &
                                                  ~(byte)((uint)iVar23 >> 8),
                                                  CONCAT14(SUB41(fVar28,0) & ~(byte)iVar23,fVar19)))
                               ) >> 0x20);
      puVar9 = (undefined8 *)(lVar11 + (long)iVar3 * 0x10);
      puVar9[1] = CONCAT44(fVar14 * ((float)((ulong)uVar18 >> 0x20) + (float)((ulong)uVar22 >> 0x20)
                                    ) * fVar26,fVar14 * fVar17 * fVar19);
      *puVar9 = CONCAT44(fVar14 * fVar16 * fVar26,fVar14 * fVar15 * fVar19);
      lVar11 = *(long *)(param_2 + 0x28);
      piVar5 = (int *)(lVar11 + (long)iVar8 * 0x10);
      piVar1 = (int *)(lVar11 + (long)(iVar8 + 1) * 0x10);
      *piVar5 = *piVar4;
      piVar5[1] = iVar7;
      piVar5[2] = iVar3;
      *piVar1 = iVar7;
      piVar5 = (int *)(lVar11 + (long)(iVar8 + 2) * 0x10);
      piVar1[1] = piVar4[1];
      piVar1[2] = iVar12;
      *piVar5 = iVar3;
      piVar5[1] = iVar12;
      piVar5[2] = piVar4[2];
      *piVar4 = iVar7;
      piVar4[1] = iVar12;
      piVar4[2] = iVar3;
      FUN_03293630(param_1,param_2,iVar8,param_4);
      FUN_03293630(param_1,param_2,iVar8 + 1,param_4);
      FUN_03293630(param_1,param_2,iVar8 + 2,param_4);
      param_4 = param_4 + -1;
    } while (param_4 != -1);
  }
  return;
}


