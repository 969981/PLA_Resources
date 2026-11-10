/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319dc9c; name: FUN_0319dc9c
 */


void FUN_0319dc9c(long *param_1,long param_2,ulong param_3,float *param_4,float *param_5)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  float fVar6;
  undefined *puVar7;
  short sVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  int iVar13;
  int *piVar14;
  float *pfVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar31;
  int iVar32;
  undefined8 uVar33;
  int iVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  
  *(uint *)(param_1 + 4) = (uint)param_3;
  puVar7 = PTR_PTR_0434a080;
  lVar19 = *(long *)(*(long *)(param_2 + 0x38) + (param_3 >> 0x16 & 0x3ff) * 0xf0);
  lVar11 = *(long *)(lVar19 + 0x20);
  uVar9 = (uint)param_3 & 0x3fffff;
  uVar10 = (ulong)uVar9;
  if ((int)uVar9 < *(int *)(lVar11 + 0x20)) {
    if ((*(int *)(lVar11 + 0x98) == 0) ||
       (uVar9 = *(uint *)(*(long *)(lVar11 + 0x90) + uVar10 * 4), uVar9 != 0xffffffff)) {
      piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + (long)(int)uVar9 * 0x10);
    }
    else {
      piVar20 = (int *)(*(long *)(lVar11 + 0x18) + uVar10 * 0x10);
    }
  }
  else {
    piVar20 = (int *)(*(long *)(lVar11 + 0xd0) + (long)(int)(uVar9 - *(int *)(lVar11 + 0x20)) * 0x10
                     );
  }
  sVar8 = (short)piVar20[2];
  uVar10 = (ulong)sVar8;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < (int)sVar8) {
    uVar9 = (*(uint *)((long)param_1 + 0xc) & 0x3fffffff) * 2;
    if (uVar9 < 0x3fffffff) {
      uVar16 = (ulong)uVar9;
      if ((int)sVar8 <= (int)uVar9) goto LAB_0319e00c;
    }
    else {
      uVar16 = 0x3fffffff;
      if (sVar8 < 0x40000000) {
LAB_0319e00c:
        uVar10 = uVar16;
      }
    }
    lVar11 = FUN_032bd1d4(PTR_PTR_0434a080,uVar10,0x14,*param_1,(int)param_1[1]);
    *param_1 = lVar11;
    uVar10 = (ulong)(short)piVar20[2];
  }
  iVar32 = (int)uVar10;
  sVar8 = (short)uVar10;
  if ((int)(*(uint *)((long)param_1 + 0x34) & 0x3fffffff) < iVar32) {
    uVar9 = (*(uint *)((long)param_1 + 0x34) & 0x3fffffff) * 2;
    if (uVar9 < 0x3fffffff) {
      uVar16 = (ulong)uVar9;
      if (iVar32 <= (int)uVar9) goto LAB_0319e020;
    }
    else {
      uVar16 = 0x3fffffff;
      if (iVar32 < 0x40000000) {
LAB_0319e020:
        uVar10 = uVar16;
      }
    }
    lVar11 = FUN_032bd1d4(puVar7,uVar10,4,param_1[5],(int)param_1[6]);
    param_1[5] = lVar11;
    sVar8 = (short)piVar20[2];
  }
  if (sVar8 < 1) {
    iVar32 = (int)param_1[6] + -1;
    if (iVar32 == 0 || (int)param_1[6] < 1) goto LAB_0319dec0;
  }
  else {
    iVar34 = 0;
    do {
      iVar32 = iVar34 + *piVar20;
      lVar11 = *(long *)(lVar19 + 0x20);
      if (iVar32 < *(int *)(lVar11 + 0x30)) {
        lVar18 = *(long *)(lVar11 + 0x28);
        iVar13 = iVar32;
        if (*(int *)(lVar11 + 0x78) != 0) {
          iVar13 = *(int *)(*(long *)(lVar11 + 0x70) + (long)iVar32 * 4);
        }
        if (iVar13 != -1) {
          plVar17 = (long *)(lVar11 + 0xc0);
          iVar32 = iVar13;
          goto LAB_0319e040;
        }
      }
      else {
        plVar17 = (long *)(lVar11 + 0xe0);
        iVar32 = iVar32 - *(int *)(lVar11 + 0x30);
LAB_0319e040:
        lVar18 = *plVar17;
      }
      piVar14 = (int *)(lVar18 + (long)iVar32 * 0x14);
      iVar32 = *piVar14;
      iVar13 = *(int *)(lVar11 + 0x40);
      fVar22 = *(float *)(lVar19 + 0x60);
      fVar24 = *(float *)(lVar19 + 100);
      fVar26 = *(float *)(lVar19 + 0x68);
      fVar27 = *(float *)(lVar19 + 0x6c);
      fVar28 = *(float *)(lVar19 + 0x70);
      fVar36 = *(float *)(lVar19 + 0x74);
      fVar38 = *(float *)(lVar19 + 0x78);
      fVar6 = *(float *)(lVar19 + 0x7c);
      uVar37 = *(undefined8 *)(lVar19 + 0x88);
      uVar31 = *(undefined8 *)(lVar19 + 0x80);
      uVar35 = *(undefined8 *)(lVar19 + 0x98);
      uVar33 = *(undefined8 *)(lVar19 + 0x90);
      plVar17 = (long *)(lVar11 + 0x38);
      if (iVar13 <= iVar32) {
        plVar17 = (long *)(lVar11 + 0xf0);
      }
      iVar2 = 0;
      if (iVar13 <= iVar32) {
        iVar2 = iVar13;
      }
      puVar3 = (undefined8 *)(*plVar17 + (long)(iVar32 - iVar2) * 0x10);
      fVar25 = (float)puVar3[1];
      uVar5 = *puVar3;
      fVar21 = (float)uVar5;
      fVar23 = (float)((ulong)uVar5 >> 0x20);
      lVar11 = param_1[1];
      *(int *)(param_1 + 1) = (int)lVar11 + 1;
      pfVar12 = (float *)(*param_1 + (long)(int)lVar11 * 0x14);
      iVar34 = iVar34 + 1;
      fVar22 = (float)uVar33 + (float)uVar31 * fVar25 + fVar22 * fVar21 + fVar28 * fVar23;
      fVar24 = (float)((ulong)uVar33 >> 0x20) +
               (float)((ulong)uVar31 >> 0x20) * fVar25 + fVar24 * fVar21 + fVar36 * fVar23;
      fVar26 = (float)uVar35 + (float)uVar37 * fVar25 + fVar26 * fVar21 + fVar38 * fVar23;
      fVar27 = (float)((ulong)uVar35 >> 0x20) +
               (float)((ulong)uVar37 >> 0x20) * fVar25 + fVar27 * fVar21 + fVar6 * fVar23;
      auVar29._0_4_ = fVar22 * *param_4;
      auVar29._4_4_ = fVar24 * param_4[1];
      auVar29._8_4_ = fVar26 * param_4[2];
      auVar29._12_4_ = fVar27 * param_4[3];
      auVar30 = NEON_ext(auVar29,auVar29,8,1);
      *pfVar12 = auVar29._0_4_ + auVar29._4_4_ + auVar30._0_4_;
      fVar22 = fVar22 * *param_5;
      fVar24 = fVar24 * param_5[1];
      fVar26 = fVar26 * param_5[2];
      fVar27 = fVar27 * param_5[3];
      auVar30._4_4_ = fVar24;
      auVar30._0_4_ = fVar22;
      auVar30._8_4_ = fVar26;
      auVar30._12_4_ = fVar27;
      auVar4._4_4_ = fVar24;
      auVar4._0_4_ = fVar22;
      auVar4._8_4_ = fVar26;
      auVar4._12_4_ = fVar27;
      auVar30 = NEON_ext(auVar30,auVar4,8,1);
      pfVar12[1] = fVar22 + fVar24 + auVar30._0_4_;
      iVar32 = (int)param_1[6];
      *(int *)(param_1[5] + (long)iVar32 * 4) = *piVar14;
      *(int *)(param_1 + 6) = iVar32 + 1;
    } while (iVar34 < (short)piVar20[2]);
    if (iVar32 == 0 || iVar32 + 1 < 1) goto LAB_0319dec0;
  }
  FUN_0319e430(param_1[5],0,iVar32);
LAB_0319dec0:
  uVar10 = (ulong)*(uint *)(param_1 + 1);
  param_1[2] = 0x7f7fffee7f7fffee;
  param_1[3] = -0x80001100800012;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    lVar11 = 0;
    uVar16 = 0;
    do {
      uVar1 = uVar16 + 1;
      lVar19 = 0;
      if (uVar1 != (uVar10 & 0xffffffff)) {
        lVar19 = uVar16 + 1;
      }
      pfVar15 = (float *)(*param_1 + lVar19 * 0x14);
      pfVar12 = (float *)(*param_1 + lVar11);
      lVar11 = lVar11 + 0x14;
      fVar28 = *pfVar12;
      fVar22 = fVar28 - *pfVar15;
      pfVar12[2] = fVar22;
      fVar24 = pfVar15[1];
      pfVar12[3] = fVar22;
      pfVar12[2] = -(pfVar12[1] - fVar24);
      fVar26 = (float)*(undefined8 *)(pfVar12 + 2);
      fVar27 = (float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20);
      fVar22 = fVar26 * fVar26 + fVar27 * fVar27;
      fVar24 = fVar26 * fVar26 + fVar27 * fVar27;
      uVar31 = CONCAT44(fVar24,fVar22);
      uVar37 = NEON_frsqrte(uVar31,4);
      fVar36 = (float)uVar37;
      fVar38 = (float)((ulong)uVar37 >> 0x20);
      uVar37 = NEON_frsqrts(uVar31,CONCAT44(fVar38 * fVar38,fVar36 * fVar36),4);
      fVar36 = fVar36 * (float)uVar37;
      fVar38 = fVar38 * (float)((ulong)uVar37 >> 0x20);
      iVar32 = -(uint)(fVar22 <= 0.0);
      iVar34 = -(uint)(fVar24 <= 0.0);
      uVar31 = NEON_frsqrts(uVar31,CONCAT44(fVar38 * fVar38,fVar36 * fVar36),4);
      fVar36 = (float)uVar31 * fVar36;
      fVar38 = (float)((ulong)uVar31 >> 0x20) * fVar38;
      fVar22 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                               CONCAT12((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar36 >> 8) &
                                                  ~(byte)((uint)iVar32 >> 8),
                                                  SUB41(fVar36,0) & ~(byte)iVar32)));
      *(ulong *)(pfVar12 + 2) =
           CONCAT44(fVar27 * (float)(CONCAT17((byte)((uint)fVar38 >> 0x18) &
                                              ~(byte)((uint)iVar34 >> 0x18),
                                              CONCAT16((byte)((uint)fVar38 >> 0x10) &
                                                       ~(byte)((uint)iVar34 >> 0x10),
                                                       CONCAT15((byte)((uint)fVar38 >> 8) &
                                                                ~(byte)((uint)iVar34 >> 8),
                                                                CONCAT14(SUB41(fVar38,0) &
                                                                         ~(byte)iVar34,fVar22)))) >>
                                    0x20),fVar26 * fVar22);
      pfVar12[4] = -(pfVar12[1] * pfVar12[3] + fVar28 * fVar26 * fVar22);
      fVar22 = *(float *)(param_1 + 2);
      if (fVar28 <= *(float *)(param_1 + 2)) {
        fVar22 = fVar28;
      }
      *(float *)(param_1 + 2) = fVar22;
      fVar22 = *(float *)((long)param_1 + 0x14);
      if (pfVar12[1] <= *(float *)((long)param_1 + 0x14)) {
        fVar22 = pfVar12[1];
      }
      *(float *)((long)param_1 + 0x14) = fVar22;
      fVar22 = *(float *)(param_1 + 3);
      if (*(float *)(param_1 + 3) <= *pfVar12) {
        fVar22 = *pfVar12;
      }
      *(float *)(param_1 + 3) = fVar22;
      uVar10 = (ulong)(int)param_1[1];
      fVar22 = *(float *)((long)param_1 + 0x1c);
      if (*(float *)((long)param_1 + 0x1c) <= pfVar12[1]) {
        fVar22 = pfVar12[1];
      }
      *(float *)((long)param_1 + 0x1c) = fVar22;
      uVar16 = uVar1;
    } while ((long)uVar1 < (long)uVar10);
  }
  return;
}


