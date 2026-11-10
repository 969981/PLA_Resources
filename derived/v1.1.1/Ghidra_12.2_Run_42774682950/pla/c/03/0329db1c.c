/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329db1c; name: FUN_0329db1c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0329db1c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float *pfVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar49;
  float fVar50;
  undefined1 auVar48 [16];
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar9 = (ulong)uVar3;
  if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) < (int)uVar3) {
    uVar4 = FUN_032676cc(PTR_PTR_0434a080,uVar3,*param_3,*(undefined4 *)(param_3 + 1));
    *param_3 = uVar4;
  }
  if (*(uint *)(param_3 + 1) != uVar3) {
    *(uint *)(param_3 + 1) = uVar3;
  }
  uVar44 = param_2[1];
  uVar39 = *param_2;
  uVar25 = param_2[3];
  uVar22 = param_2[2];
  auVar52._0_4_ = ABS((float)uVar22 + (float)_DAT_03889960);
  auVar52._4_4_ = ABS((float)((ulong)uVar22 >> 0x20) + (float)((ulong)_DAT_03889960 >> 0x20));
  auVar52._8_4_ = ABS((float)uVar25 + (float)_UNK_03889968);
  auVar52._12_4_ = ABS((float)((ulong)uVar25 >> 0x20) + (float)((ulong)_UNK_03889968 >> 0x20));
  auVar48._0_4_ = ABS((float)uVar39 + (float)_DAT_038896c0);
  auVar48._4_4_ = ABS((float)((ulong)uVar39 >> 0x20) + (float)((ulong)_DAT_038896c0 >> 0x20));
  auVar48._8_4_ = ABS((float)uVar44 + (float)_UNK_038896c8);
  auVar48._12_4_ = ABS((float)((ulong)uVar44 >> 0x20) + (float)((ulong)_UNK_038896c8 >> 0x20));
  auVar48 = NEON_fmax(auVar48,auVar52,4);
  uVar34 = param_2[5];
  uVar29 = param_2[4];
  uVar18 = param_2[7];
  uVar4 = param_2[6];
  auVar53._0_4_ = ABS((float)uVar4 + (float)_DAT_03889ef0);
  auVar53._4_4_ = ABS((float)((ulong)uVar4 >> 0x20) + (float)((ulong)_DAT_03889ef0 >> 0x20));
  auVar53._8_4_ = ABS((float)uVar18 + (float)_UNK_03889ef8);
  auVar53._12_4_ = ABS((float)((ulong)uVar18 >> 0x20) + (float)((ulong)_UNK_03889ef8 >> 0x20));
  auVar54._4_4_ = ABS((float)((ulong)uVar29 >> 0x20) + (float)((ulong)_DAT_0388a4f0 >> 0x20));
  auVar54._0_4_ = ABS((float)uVar29 + (float)_DAT_0388a4f0);
  auVar54._8_4_ = ABS((float)uVar34 + (float)_UNK_0388a4f8);
  auVar54._12_4_ = ABS((float)((ulong)uVar34 >> 0x20) + (float)((ulong)_UNK_0388a4f8 >> 0x20));
  auVar54 = NEON_fmax(auVar54,auVar53,4);
  auVar54 = NEON_fmax(auVar48,auVar54,4);
  param_3 = (undefined8 *)*param_3;
  puVar7 = *(undefined8 **)(param_1 + 0x18);
  if (1e-05 < auVar54._12_4_ ||
      (1e-05 < auVar54._8_4_ || (1e-05 < auVar54._0_4_ || 1e-05 < auVar54._4_4_))) {
    if (*(int *)(param_1 + 0x30) < 1) {
      if (0 < (int)uVar3) {
        puVar7 = puVar7 + 4;
        pfVar8 = (float *)(param_3 + 4);
        while( true ) {
          uVar9 = uVar9 - 1;
          fVar10 = *(float *)(puVar7 + -4);
          fVar13 = *(float *)((long)puVar7 + -0x1c);
          fVar16 = *(float *)(puVar7 + -3);
          fVar19 = *(float *)((long)puVar7 + -0x14);
          fVar12 = *(float *)(puVar7 + -2);
          fVar15 = *(float *)((long)puVar7 + -0xc);
          fVar17 = *(float *)(puVar7 + -1);
          fVar20 = *(float *)((long)puVar7 + -4);
          fVar30 = (float)uVar39;
          fVar31 = (float)((ulong)uVar39 >> 0x20);
          fVar32 = (float)uVar44;
          fVar33 = (float)((ulong)uVar44 >> 0x20);
          fVar47 = (float)uVar22;
          fVar21 = (float)((ulong)uVar22 >> 0x20);
          fVar49 = (float)uVar25;
          fVar23 = (float)((ulong)uVar25 >> 0x20);
          fVar35 = (float)*puVar7;
          fVar40 = (float)puVar7[2];
          fVar36 = (float)((ulong)*puVar7 >> 0x20);
          fVar41 = (float)((ulong)puVar7[2] >> 0x20);
          fVar24 = (float)uVar29;
          fVar26 = (float)((ulong)uVar29 >> 0x20);
          fVar27 = (float)uVar34;
          fVar28 = (float)((ulong)uVar34 >> 0x20);
          fVar37 = (float)puVar7[1];
          fVar42 = (float)puVar7[3];
          fVar11 = (float)uVar4;
          fVar14 = (float)((ulong)uVar4 >> 0x20);
          fVar50 = (float)uVar18;
          fVar51 = (float)((ulong)uVar18 >> 0x20);
          fVar38 = (float)((ulong)puVar7[1] >> 0x20);
          fVar43 = (float)((ulong)puVar7[3] >> 0x20);
          *(ulong *)(pfVar8 + -6) =
               CONCAT44(fVar51 * fVar19 + fVar28 * fVar16 + fVar33 * fVar10 + fVar23 * fVar13,
                        fVar50 * fVar19 + fVar27 * fVar16 + fVar32 * fVar10 + fVar49 * fVar13);
          *(ulong *)(pfVar8 + -8) =
               CONCAT44(fVar14 * fVar19 + fVar26 * fVar16 + fVar31 * fVar10 + fVar21 * fVar13,
                        fVar11 * fVar19 + fVar24 * fVar16 + fVar30 * fVar10 + fVar47 * fVar13);
          *(ulong *)(pfVar8 + -2) =
               CONCAT44(fVar51 * fVar20 + fVar28 * fVar17 + fVar33 * fVar12 + fVar23 * fVar15,
                        fVar50 * fVar20 + fVar27 * fVar17 + fVar32 * fVar12 + fVar49 * fVar15);
          *(ulong *)(pfVar8 + -4) =
               CONCAT44(fVar14 * fVar20 + fVar26 * fVar17 + fVar31 * fVar12 + fVar21 * fVar15,
                        fVar11 * fVar20 + fVar24 * fVar17 + fVar30 * fVar12 + fVar47 * fVar15);
          pfVar8[2] = fVar50 * fVar38 + fVar27 * fVar37 + fVar32 * fVar35 + fVar49 * fVar36;
          pfVar8[3] = fVar51 * fVar38 + fVar28 * fVar37 + fVar33 * fVar35 + fVar23 * fVar36;
          *pfVar8 = fVar11 * fVar38 + fVar24 * fVar37 + fVar30 * fVar35 + fVar47 * fVar36;
          pfVar8[1] = fVar14 * fVar38 + fVar26 * fVar37 + fVar31 * fVar35 + fVar21 * fVar36;
          *(ulong *)(pfVar8 + 6) =
               CONCAT44(fVar51 * fVar43 + fVar28 * fVar42 + fVar33 * fVar40 + fVar23 * fVar41,
                        fVar50 * fVar43 + fVar27 * fVar42 + fVar32 * fVar40 + fVar49 * fVar41);
          *(ulong *)(pfVar8 + 4) =
               CONCAT44(fVar14 * fVar43 + fVar26 * fVar42 + fVar31 * fVar40 + fVar21 * fVar41,
                        fVar11 * fVar43 + fVar24 * fVar42 + fVar30 * fVar40 + fVar47 * fVar41);
          if (uVar9 == 0) break;
          uVar44 = param_2[1];
          uVar39 = *param_2;
          uVar25 = param_2[3];
          uVar22 = param_2[2];
          puVar7 = puVar7 + 8;
          pfVar8 = pfVar8 + 0x10;
          uVar34 = param_2[5];
          uVar29 = param_2[4];
          uVar18 = param_2[7];
          uVar4 = param_2[6];
        }
      }
    }
    else if (0 < (int)uVar3) {
      puVar7 = puVar7 + 4;
      param_3 = param_3 + 4;
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
      while( true ) {
        uVar9 = uVar9 - 1;
        fVar10 = *(float *)(puVar7 + -4);
        fVar13 = *(float *)((long)puVar7 + -0x1c);
        fVar16 = *(float *)(puVar7 + -3);
        fVar19 = *(float *)((long)puVar7 + -0x14);
        fVar12 = *(float *)(puVar7 + -2);
        fVar15 = *(float *)((long)puVar7 + -0xc);
        fVar17 = *(float *)(puVar7 + -1);
        fVar20 = *(float *)((long)puVar7 + -4);
        fVar37 = (float)uVar39;
        fVar40 = (float)((ulong)uVar39 >> 0x20);
        fVar42 = (float)uVar44;
        fVar45 = (float)((ulong)uVar44 >> 0x20);
        fVar47 = (float)uVar22;
        fVar49 = (float)((ulong)uVar22 >> 0x20);
        fVar24 = (float)uVar25;
        fVar26 = (float)((ulong)uVar25 >> 0x20);
        fVar55 = (float)*puVar7;
        fVar21 = (float)puVar7[2];
        fVar56 = (float)((ulong)*puVar7 >> 0x20);
        fVar23 = (float)((ulong)puVar7[2] >> 0x20);
        fVar27 = (float)uVar29;
        fVar30 = (float)((ulong)uVar29 >> 0x20);
        fVar32 = (float)uVar34;
        fVar35 = (float)((ulong)uVar34 >> 0x20);
        fVar57 = (float)puVar7[1];
        fVar59 = (float)puVar7[3];
        fVar11 = (float)uVar4;
        fVar14 = (float)((ulong)uVar4 >> 0x20);
        fVar50 = (float)uVar18;
        fVar51 = (float)((ulong)uVar18 >> 0x20);
        fVar28 = fVar11 * fVar19 + fVar27 * fVar16 + fVar37 * fVar10 + fVar47 * fVar13;
        fVar31 = fVar14 * fVar19 + fVar30 * fVar16 + fVar40 * fVar10 + fVar49 * fVar13;
        fVar33 = fVar50 * fVar19 + fVar32 * fVar16 + fVar42 * fVar10 + fVar24 * fVar13;
        fVar36 = fVar51 * fVar19 + fVar35 * fVar16 + fVar45 * fVar10 + fVar26 * fVar13;
        fVar38 = fVar11 * fVar20 + fVar27 * fVar17 + fVar37 * fVar12 + fVar47 * fVar15;
        fVar41 = fVar14 * fVar20 + fVar30 * fVar17 + fVar40 * fVar12 + fVar49 * fVar15;
        fVar43 = fVar50 * fVar20 + fVar32 * fVar17 + fVar42 * fVar12 + fVar24 * fVar15;
        fVar46 = fVar51 * fVar20 + fVar35 * fVar17 + fVar45 * fVar12 + fVar26 * fVar15;
        fVar58 = (float)((ulong)puVar7[1] >> 0x20);
        fVar10 = (float)((ulong)puVar7[3] >> 0x20);
        fVar12 = fVar11 * fVar10 + fVar27 * fVar59 + fVar37 * fVar21 + fVar47 * fVar23;
        fVar15 = fVar14 * fVar10 + fVar30 * fVar59 + fVar40 * fVar21 + fVar49 * fVar23;
        fVar17 = fVar50 * fVar10 + fVar32 * fVar59 + fVar42 * fVar21 + fVar24 * fVar23;
        fVar20 = fVar51 * fVar10 + fVar35 * fVar59 + fVar45 * fVar21 + fVar26 * fVar23;
        fVar10 = *(float *)(puVar6 + -2);
        fVar13 = *(float *)((long)puVar6 + -0xc);
        fVar16 = *(float *)(puVar6 + -1);
        fVar19 = *(float *)((long)puVar6 + -4);
        fVar21 = (float)puVar6[-4];
        fVar23 = (float)((ulong)puVar6[-4] >> 0x20);
        uVar4 = puVar6[1];
        uVar18 = puVar6[3];
        fVar47 = fVar11 * fVar58 + fVar27 * fVar57 + fVar37 * fVar55 + fVar47 * fVar56;
        fVar49 = fVar14 * fVar58 + fVar30 * fVar57 + fVar40 * fVar55 + fVar49 * fVar56;
        fVar50 = fVar50 * fVar58 + fVar32 * fVar57 + fVar42 * fVar55 + fVar24 * fVar56;
        fVar51 = fVar51 * fVar58 + fVar35 * fVar57 + fVar45 * fVar55 + fVar26 * fVar56;
        fVar24 = (float)*puVar6;
        fVar30 = (float)puVar6[2];
        fVar26 = (float)((ulong)*puVar6 >> 0x20);
        fVar32 = (float)((ulong)puVar6[2] >> 0x20);
        fVar11 = (float)puVar6[-3];
        fVar14 = (float)((ulong)puVar6[-3] >> 0x20);
        fVar27 = (float)uVar4;
        param_3[-3] = CONCAT44(fVar20 * fVar14 + fVar51 * fVar11 + fVar36 * fVar21 + fVar46 * fVar23
                               ,fVar17 * fVar14 +
                                fVar50 * fVar11 + fVar33 * fVar21 + fVar43 * fVar23);
        param_3[-4] = CONCAT44(fVar15 * fVar14 + fVar49 * fVar11 + fVar31 * fVar21 + fVar41 * fVar23
                               ,fVar12 * fVar14 +
                                fVar47 * fVar11 + fVar28 * fVar21 + fVar38 * fVar23);
        param_3[-1] = CONCAT44(fVar20 * fVar19 + fVar51 * fVar16 + fVar36 * fVar10 + fVar46 * fVar13
                               ,fVar17 * fVar19 +
                                fVar50 * fVar16 + fVar33 * fVar10 + fVar43 * fVar13);
        param_3[-2] = CONCAT44(fVar15 * fVar19 + fVar49 * fVar16 + fVar31 * fVar10 + fVar41 * fVar13
                               ,fVar12 * fVar19 +
                                fVar47 * fVar16 + fVar28 * fVar10 + fVar38 * fVar13);
        fVar13 = (float)uVar18;
        fVar10 = (float)((ulong)uVar4 >> 0x20);
        fVar16 = (float)((ulong)uVar18 >> 0x20);
        param_3[1] = CONCAT44(fVar20 * fVar10 + fVar51 * fVar27 + fVar36 * fVar24 + fVar46 * fVar26,
                              fVar17 * fVar10 + fVar50 * fVar27 + fVar33 * fVar24 + fVar43 * fVar26)
        ;
        *param_3 = CONCAT44(fVar15 * fVar10 + fVar49 * fVar27 + fVar31 * fVar24 + fVar41 * fVar26,
                            fVar12 * fVar10 + fVar47 * fVar27 + fVar28 * fVar24 + fVar38 * fVar26);
        param_3[3] = CONCAT44(fVar20 * fVar16 + fVar51 * fVar13 + fVar36 * fVar30 + fVar46 * fVar32,
                              fVar17 * fVar16 + fVar50 * fVar13 + fVar33 * fVar30 + fVar43 * fVar32)
        ;
        param_3[2] = CONCAT44(fVar15 * fVar16 + fVar49 * fVar13 + fVar31 * fVar30 + fVar41 * fVar32,
                              fVar12 * fVar16 + fVar47 * fVar13 + fVar28 * fVar30 + fVar38 * fVar32)
        ;
        if (uVar9 == 0) break;
        uVar44 = param_2[1];
        uVar39 = *param_2;
        uVar25 = param_2[3];
        uVar22 = param_2[2];
        puVar7 = puVar7 + 8;
        puVar6 = puVar6 + 8;
        uVar34 = param_2[5];
        uVar29 = param_2[4];
        uVar18 = param_2[7];
        uVar4 = param_2[6];
        param_3 = param_3 + 8;
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) < 1) {
    iVar5 = uVar3 * 4;
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        uVar1 = *(undefined4 *)(puVar7 + 1);
        uVar2 = *(undefined4 *)((long)puVar7 + 0xc);
        *param_3 = *puVar7;
        *(undefined4 *)(param_3 + 1) = uVar1;
        *(undefined4 *)((long)param_3 + 0xc) = uVar2;
        puVar7 = puVar7 + 2;
        param_3 = param_3 + 2;
      } while (iVar5 != 0);
    }
  }
  else if (0 < (int)uVar3) {
    param_3 = param_3 + 4;
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
    puVar7 = puVar7 + 4;
    do {
      uVar9 = uVar9 - 1;
      fVar15 = (float)((ulong)puVar6[-2] >> 0x20);
      fVar47 = (float)puVar7[-2];
      fVar49 = (float)((ulong)puVar7[-2] >> 0x20);
      fVar24 = (float)puVar7[-1];
      fVar27 = (float)((ulong)puVar7[-1] >> 0x20);
      fVar10 = (float)puVar6[-4];
      fVar11 = (float)puVar7[-4];
      fVar14 = (float)((ulong)puVar7[-4] >> 0x20);
      fVar50 = (float)puVar7[-3];
      fVar51 = (float)((ulong)puVar7[-3] >> 0x20);
      fVar13 = (float)((ulong)puVar6[-4] >> 0x20);
      fVar32 = (float)puVar6[1];
      fVar33 = (float)((ulong)puVar6[1] >> 0x20);
      fVar30 = (float)*puVar6;
      fVar31 = (float)((ulong)*puVar6 >> 0x20);
      fVar12 = (float)puVar6[-2];
      fVar35 = (float)puVar6[2];
      fVar36 = (float)((ulong)puVar6[2] >> 0x20);
      fVar16 = (float)puVar6[-3];
      fVar21 = (float)*puVar7;
      fVar23 = (float)((ulong)*puVar7 >> 0x20);
      fVar26 = (float)puVar7[1];
      fVar28 = (float)((ulong)puVar7[1] >> 0x20);
      fVar19 = (float)((ulong)puVar6[-3] >> 0x20);
      fVar40 = (float)puVar7[2];
      fVar41 = (float)((ulong)puVar7[2] >> 0x20);
      fVar42 = (float)puVar7[3];
      fVar43 = (float)((ulong)puVar7[3] >> 0x20);
      fVar17 = (float)puVar6[-1];
      fVar20 = (float)((ulong)puVar6[-1] >> 0x20);
      fVar37 = (float)puVar6[3];
      fVar38 = (float)((ulong)puVar6[3] >> 0x20);
      param_3[1] = CONCAT44(fVar51 * fVar30 + fVar27 * fVar31 + fVar28 * fVar32 + fVar43 * fVar33,
                            fVar50 * fVar30 + fVar24 * fVar31 + fVar26 * fVar32 + fVar42 * fVar33);
      *param_3 = CONCAT44(fVar14 * fVar30 + fVar49 * fVar31 + fVar23 * fVar32 + fVar41 * fVar33,
                          fVar11 * fVar30 + fVar47 * fVar31 + fVar21 * fVar32 + fVar40 * fVar33);
      param_3[3] = CONCAT44(fVar51 * fVar35 + fVar27 * fVar36 + fVar28 * fVar37 + fVar43 * fVar38,
                            fVar50 * fVar35 + fVar24 * fVar36 + fVar26 * fVar37 + fVar42 * fVar38);
      param_3[2] = CONCAT44(fVar14 * fVar35 + fVar49 * fVar36 + fVar23 * fVar37 + fVar41 * fVar38,
                            fVar11 * fVar35 + fVar47 * fVar36 + fVar21 * fVar37 + fVar40 * fVar38);
      param_3[-3] = CONCAT44(fVar51 * fVar10 + fVar27 * fVar13 + fVar28 * fVar16 + fVar43 * fVar19,
                             fVar50 * fVar10 + fVar24 * fVar13 + fVar26 * fVar16 + fVar42 * fVar19);
      param_3[-4] = CONCAT44(fVar14 * fVar10 + fVar49 * fVar13 + fVar23 * fVar16 + fVar41 * fVar19,
                             fVar11 * fVar10 + fVar47 * fVar13 + fVar21 * fVar16 + fVar40 * fVar19);
      param_3[-1] = CONCAT44(fVar51 * fVar12 + fVar27 * fVar15 + fVar28 * fVar17 + fVar43 * fVar20,
                             fVar50 * fVar12 + fVar24 * fVar15 + fVar26 * fVar17 + fVar42 * fVar20);
      param_3[-2] = CONCAT44(fVar14 * fVar12 + fVar49 * fVar15 + fVar23 * fVar17 + fVar41 * fVar20,
                             fVar11 * fVar12 + fVar47 * fVar15 + fVar21 * fVar17 + fVar40 * fVar20);
      param_3 = param_3 + 8;
      puVar6 = puVar6 + 8;
      puVar7 = puVar7 + 8;
    } while (uVar9 != 0);
  }
  return;
}


