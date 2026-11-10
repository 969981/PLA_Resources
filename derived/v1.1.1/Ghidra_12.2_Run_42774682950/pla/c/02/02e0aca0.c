/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e0aca0; name: FUN_02e0aca0
 */


void FUN_02e0aca0(float param_1,float param_2,float param_3,float param_4,float *param_5,
                 float *param_6,float *param_7,uint param_8)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  if ((param_2 != param_1) || (param_4 != param_3)) {
    if (param_8 != 0) {
      param_2 = param_2 - param_1;
      param_4 = param_4 - param_3;
      pfVar3 = param_7;
      do {
        fVar8 = *param_5 * param_1;
        fVar1 = param_3 * *param_6;
        param_1 = param_1 + param_2 / (float)param_8;
        param_3 = param_3 + param_4 / (float)param_8;
        pfVar4 = pfVar3 + 1;
        *pfVar3 = fVar8 + fVar1;
        param_5 = param_5 + 1;
        param_6 = param_6 + 1;
        pfVar3 = pfVar4;
      } while (pfVar4 < param_7 + param_8);
    }
    return;
  }
  pfVar3 = param_7 + param_8;
  if ((param_8 & 0x1f) == 0) {
    if (param_8 != 0) {
      do {
        pfVar4 = param_5 + 2;
        uVar5 = *(undefined8 *)param_5;
        uVar7 = *(undefined8 *)(param_5 + 6);
        uVar6 = *(undefined8 *)(param_5 + 4);
        uVar21 = *(undefined8 *)(param_5 + 10);
        uVar20 = *(undefined8 *)(param_5 + 8);
        uVar23 = *(undefined8 *)(param_5 + 0xe);
        uVar22 = *(undefined8 *)(param_5 + 0xc);
        pfVar2 = param_6 + 2;
        uVar9 = *(undefined8 *)param_6;
        uVar17 = *(undefined8 *)(param_6 + 6);
        uVar14 = *(undefined8 *)(param_6 + 4);
        uVar26 = *(undefined8 *)(param_6 + 10);
        uVar24 = *(undefined8 *)(param_6 + 8);
        uVar30 = *(undefined8 *)(param_6 + 0xe);
        uVar28 = *(undefined8 *)(param_6 + 0xc);
        uVar33 = *(undefined8 *)(param_5 + 0x12);
        uVar32 = *(undefined8 *)(param_5 + 0x10);
        uVar35 = *(undefined8 *)(param_5 + 0x16);
        uVar34 = *(undefined8 *)(param_5 + 0x14);
        uVar12 = *(undefined8 *)(param_6 + 0x12);
        uVar10 = *(undefined8 *)(param_6 + 0x10);
        uVar18 = *(undefined8 *)(param_6 + 0x16);
        uVar15 = *(undefined8 *)(param_6 + 0x14);
        uVar27 = *(undefined8 *)(param_5 + 0x1a);
        uVar25 = *(undefined8 *)(param_5 + 0x18);
        uVar31 = *(undefined8 *)(param_5 + 0x1e);
        uVar29 = *(undefined8 *)(param_5 + 0x1c);
        param_5 = param_5 + 0x20;
        uVar13 = *(undefined8 *)(param_6 + 0x1a);
        uVar11 = *(undefined8 *)(param_6 + 0x18);
        uVar19 = *(undefined8 *)(param_6 + 0x1e);
        uVar16 = *(undefined8 *)(param_6 + 0x1c);
        param_6 = param_6 + 0x20;
        *(ulong *)(param_7 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar4 >> 0x20) * param_2 +
                      param_4 * (float)((ulong)*(undefined8 *)pfVar2 >> 0x20),
                      (float)*(undefined8 *)pfVar4 * param_2 +
                      param_4 * (float)*(undefined8 *)pfVar2);
        *(ulong *)param_7 =
             CONCAT44((float)((ulong)uVar5 >> 0x20) * param_2 +
                      param_4 * (float)((ulong)uVar9 >> 0x20),
                      (float)uVar5 * param_2 + param_4 * (float)uVar9);
        *(ulong *)(param_7 + 6) =
             CONCAT44((float)((ulong)uVar7 >> 0x20) * param_2 +
                      param_4 * (float)((ulong)uVar17 >> 0x20),
                      (float)uVar7 * param_2 + param_4 * (float)uVar17);
        *(ulong *)(param_7 + 4) =
             CONCAT44((float)((ulong)uVar6 >> 0x20) * param_2 +
                      param_4 * (float)((ulong)uVar14 >> 0x20),
                      (float)uVar6 * param_2 + param_4 * (float)uVar14);
        *(ulong *)(param_7 + 10) =
             CONCAT44((float)((ulong)uVar21 >> 0x20) * param_2 +
                      param_4 * (float)((ulong)uVar26 >> 0x20),
                      (float)uVar21 * param_2 + param_4 * (float)uVar26);
        *(ulong *)(param_7 + 8) =
             CONCAT44((float)((ulong)uVar20 >> 0x20) * param_2 +
                      param_4 * (float)((ulong)uVar24 >> 0x20),
                      (float)uVar20 * param_2 + param_4 * (float)uVar24);
        *(ulong *)(param_7 + 0xe) =
             CONCAT44((float)((ulong)uVar23 >> 0x20) * param_2 +
                      param_4 * (float)((ulong)uVar30 >> 0x20),
                      (float)uVar23 * param_2 + param_4 * (float)uVar30);
        *(ulong *)(param_7 + 0xc) =
             CONCAT44((float)((ulong)uVar22 >> 0x20) * param_2 +
                      param_4 * (float)((ulong)uVar28 >> 0x20),
                      (float)uVar22 * param_2 + param_4 * (float)uVar28);
        *(ulong *)(param_7 + 0x12) =
             CONCAT44((float)((ulong)uVar33 >> 0x20) * param_2 +
                      param_4 * (float)((ulong)uVar12 >> 0x20),
                      (float)uVar33 * param_2 + param_4 * (float)uVar12);
        *(ulong *)(param_7 + 0x10) =
             CONCAT44((float)((ulong)uVar32 >> 0x20) * param_2 +
                      param_4 * (float)((ulong)uVar10 >> 0x20),
                      (float)uVar32 * param_2 + param_4 * (float)uVar10);
        *(ulong *)(param_7 + 0x16) =
             CONCAT44((float)((ulong)uVar35 >> 0x20) * param_2 +
                      param_4 * (float)((ulong)uVar18 >> 0x20),
                      (float)uVar35 * param_2 + param_4 * (float)uVar18);
        *(ulong *)(param_7 + 0x14) =
             CONCAT44((float)((ulong)uVar34 >> 0x20) * param_2 +
                      param_4 * (float)((ulong)uVar15 >> 0x20),
                      (float)uVar34 * param_2 + param_4 * (float)uVar15);
        *(ulong *)(param_7 + 0x1a) =
             CONCAT44((float)((ulong)uVar27 >> 0x20) * param_2 +
                      param_4 * (float)((ulong)uVar13 >> 0x20),
                      (float)uVar27 * param_2 + param_4 * (float)uVar13);
        *(ulong *)(param_7 + 0x18) =
             CONCAT44((float)((ulong)uVar25 >> 0x20) * param_2 +
                      param_4 * (float)((ulong)uVar11 >> 0x20),
                      (float)uVar25 * param_2 + param_4 * (float)uVar11);
        *(ulong *)(param_7 + 0x1e) =
             CONCAT44((float)((ulong)uVar31 >> 0x20) * param_2 +
                      param_4 * (float)((ulong)uVar19 >> 0x20),
                      (float)uVar31 * param_2 + param_4 * (float)uVar19);
        *(ulong *)(param_7 + 0x1c) =
             CONCAT44((float)((ulong)uVar29 >> 0x20) * param_2 +
                      param_4 * (float)((ulong)uVar16 >> 0x20),
                      (float)uVar29 * param_2 + param_4 * (float)uVar16);
        param_7 = param_7 + 0x20;
      } while (param_7 < pfVar3);
    }
  }
  else if (param_8 != 0) {
    do {
      uVar5 = *(undefined8 *)param_5;
      uVar6 = *(undefined8 *)param_6;
      pfVar4 = param_7 + 4;
      *(ulong *)(param_7 + 2) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20) * param_2 +
                    param_4 * (float)((ulong)*(undefined8 *)(param_6 + 2) >> 0x20),
                    (float)*(undefined8 *)(param_5 + 2) * param_2 +
                    param_4 * (float)*(undefined8 *)(param_6 + 2));
      *(ulong *)param_7 =
           CONCAT44((float)((ulong)uVar5 >> 0x20) * param_2 +
                    param_4 * (float)((ulong)uVar6 >> 0x20),
                    (float)uVar5 * param_2 + param_4 * (float)uVar6);
      param_5 = param_5 + 4;
      param_6 = param_6 + 4;
      param_7 = pfVar4;
    } while (pfVar4 < pfVar3);
  }
  return;
}


