/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335c548; name: FUN_0335c548
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0335c548(long *param_1,float *param_2)

{
  undefined1 (*pauVar1) [12];
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  byte bVar26;
  byte bVar27;
  uint uVar28;
  byte bVar29;
  uint uVar30;
  byte bVar31;
  uint uVar32;
  float local_420 [256];
  float *local_20;
  
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  local_20 = (float *)((ulong)local_420 | 4);
  bVar13 = (byte)_DAT_03889700;
  bVar14 = (byte)((ulong)_DAT_03889700 >> 0x20);
  bVar15 = (byte)_UNK_03889708;
  bVar16 = (byte)((ulong)_UNK_03889708 >> 0x20);
  if ((char)param_1[2] == '\0') {
    do {
      pfVar11 = local_20 + -1;
      pfVar2 = (float *)((long)param_1 + (long)(int)local_20[-1] * 0x80 + *param_1);
      pfVar12 = pfVar2 + 4;
      fVar22 = (float)*(undefined8 *)(pfVar2 + 6);
      fVar23 = (float)((ulong)*(undefined8 *)(pfVar2 + 6) >> 0x20);
      fVar18 = (float)*(undefined8 *)pfVar12;
      fVar20 = (float)((ulong)*(undefined8 *)pfVar12 >> 0x20);
      fVar7 = *pfVar2;
      fVar17 = pfVar2[1];
      fVar19 = pfVar2[2];
      fVar21 = pfVar2[3];
      uVar28 = -(uint)(fVar7 <= fVar18) & -(uint)(fVar17 <= fVar20) & -(uint)(fVar19 <= fVar22) &
               -(uint)(fVar21 <= fVar23);
      bVar29 = (byte)-(uint)(fVar19 <= fVar22);
      bVar26 = (byte)-(uint)(fVar7 <= fVar18);
      bVar27 = (byte)-(uint)(fVar17 <= fVar20);
      bVar31 = (byte)-(uint)(fVar21 <= fVar23);
      if (*(char *)(pfVar2 + 0x1c) == '\0') {
        if (uVar28 == 0) {
          uVar28 = (uint)(bVar26 & bVar13) + (uint)(bVar27 & bVar14) +
                   (uint)(bVar29 & bVar15) + (uint)(bVar31 & bVar16);
          if ((uVar28 & 1) != 0) {
            *pfVar2 = fVar7 + *param_2;
            *pfVar12 = fVar18 + *param_2;
            pfVar2[8] = param_2[1] + pfVar2[8];
            pfVar2[0xc] = param_2[1] + pfVar2[0xc];
            pfVar2[0x10] = param_2[2] + pfVar2[0x10];
            pfVar2[0x14] = param_2[2] + pfVar2[0x14];
            *pfVar11 = pfVar2[0x18];
            pfVar11 = local_20;
          }
          if ((uVar28 >> 1 & 1) != 0) {
            pfVar2[1] = *param_2 + pfVar2[1];
            pfVar2[5] = *param_2 + pfVar2[5];
            pfVar2[9] = param_2[1] + pfVar2[9];
            pfVar2[0xd] = param_2[1] + pfVar2[0xd];
            pfVar2[0x11] = param_2[2] + pfVar2[0x11];
            pfVar2[0x15] = param_2[2] + pfVar2[0x15];
            *pfVar11 = pfVar2[0x19];
            pfVar11 = pfVar11 + 1;
          }
          if ((uVar28 >> 2 & 1) != 0) {
            pfVar2[2] = *param_2 + pfVar2[2];
            pfVar2[6] = *param_2 + pfVar2[6];
            pfVar2[10] = param_2[1] + pfVar2[10];
            pfVar2[0xe] = param_2[1] + pfVar2[0xe];
            pfVar2[0x12] = param_2[2] + pfVar2[0x12];
            pfVar2[0x16] = param_2[2] + pfVar2[0x16];
            *pfVar11 = pfVar2[0x1a];
            pfVar11 = pfVar11 + 1;
          }
          local_20 = pfVar11;
          if ((uVar28 >> 3 & 1) != 0) {
            pfVar2[3] = *param_2 + pfVar2[3];
            pfVar2[7] = *param_2 + pfVar2[7];
            pfVar2[0xb] = param_2[1] + pfVar2[0xb];
            pfVar2[0xf] = param_2[1] + pfVar2[0xf];
            pfVar2[0x13] = param_2[2] + pfVar2[0x13];
            pfVar2[0x17] = param_2[2] + pfVar2[0x17];
            local_20 = pfVar11 + 1;
            *pfVar11 = pfVar2[0x1b];
          }
        }
        else {
          pfVar2[2] = fVar3 + fVar19;
          pfVar2[3] = fVar3 + fVar21;
          *pfVar2 = fVar3 + fVar7;
          pfVar2[1] = fVar3 + fVar17;
          *(ulong *)(pfVar2 + 6) = CONCAT44(fVar3 + fVar23,fVar3 + fVar22);
          *(ulong *)pfVar12 = CONCAT44(fVar3 + fVar20,fVar3 + fVar18);
          *(ulong *)(pfVar2 + 10) =
               CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)(pfVar2 + 10) >> 0x20),
                        fVar4 + (float)*(undefined8 *)(pfVar2 + 10));
          *(ulong *)(pfVar2 + 8) =
               CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)(pfVar2 + 8) >> 0x20),
                        fVar4 + (float)*(undefined8 *)(pfVar2 + 8));
          *(ulong *)(pfVar2 + 0xe) = CONCAT44(fVar4 + pfVar2[0xf],fVar4 + pfVar2[0xe]);
          *(ulong *)(pfVar2 + 0xc) = CONCAT44(fVar4 + pfVar2[0xd],fVar4 + pfVar2[0xc]);
          *(ulong *)(pfVar2 + 0x12) =
               CONCAT44(fVar5 + (float)((ulong)*(undefined8 *)(pfVar2 + 0x12) >> 0x20),
                        fVar5 + (float)*(undefined8 *)(pfVar2 + 0x12));
          *(ulong *)(pfVar2 + 0x10) =
               CONCAT44(fVar5 + (float)((ulong)*(undefined8 *)(pfVar2 + 0x10) >> 0x20),
                        fVar5 + (float)*(undefined8 *)(pfVar2 + 0x10));
          *(ulong *)(pfVar2 + 0x16) = CONCAT44(fVar5 + pfVar2[0x17],fVar5 + pfVar2[0x16]);
          *(ulong *)(pfVar2 + 0x14) = CONCAT44(fVar5 + pfVar2[0x15],fVar5 + pfVar2[0x14]);
          pauVar1 = (undefined1 (*) [12])(pfVar2 + 0x18);
          uVar24 = (undefined4)((ulong)*(undefined8 *)(pfVar2 + 0x1a) >> 0x20);
          auVar25._12_4_ = uVar24;
          auVar25._0_12_ = *pauVar1;
          auVar6._12_4_ = uVar24;
          auVar6._0_12_ = *pauVar1;
          auVar25 = NEON_ext(auVar25,auVar6,8,1);
          *(undefined8 *)pfVar11 = *(undefined8 *)*pauVar1;
          *(long *)(local_20 + 1) = auVar25._0_8_;
          local_20 = local_20 + 3;
        }
      }
      else {
        local_20 = pfVar11;
        if (uVar28 == 0) {
          uVar28 = (uint)(bVar26 & bVar13) + (uint)(bVar27 & bVar14) +
                   (uint)(bVar29 & bVar15) + (uint)(bVar31 & bVar16);
          if ((uVar28 & 1) != 0) {
            *pfVar2 = fVar7 + *param_2;
            *pfVar12 = fVar18 + *param_2;
            pfVar2[8] = param_2[1] + pfVar2[8];
            pfVar2[0xc] = param_2[1] + pfVar2[0xc];
            pfVar2[0x10] = param_2[2] + pfVar2[0x10];
            pfVar2[0x14] = param_2[2] + pfVar2[0x14];
          }
          if ((uVar28 >> 1 & 1) != 0) {
            pfVar2[1] = *param_2 + pfVar2[1];
            pfVar2[5] = *param_2 + pfVar2[5];
            pfVar2[9] = param_2[1] + pfVar2[9];
            pfVar2[0xd] = param_2[1] + pfVar2[0xd];
            pfVar2[0x11] = param_2[2] + pfVar2[0x11];
            pfVar2[0x15] = param_2[2] + pfVar2[0x15];
          }
          if ((uVar28 >> 2 & 1) != 0) {
            pfVar2[2] = *param_2 + pfVar2[2];
            pfVar2[6] = *param_2 + pfVar2[6];
            pfVar2[10] = param_2[1] + pfVar2[10];
            pfVar2[0xe] = param_2[1] + pfVar2[0xe];
            pfVar2[0x12] = param_2[2] + pfVar2[0x12];
            pfVar2[0x16] = param_2[2] + pfVar2[0x16];
          }
          if ((uVar28 >> 3 & 1) != 0) {
            pfVar2[3] = *param_2 + pfVar2[3];
            pfVar2[7] = *param_2 + pfVar2[7];
            pfVar2[0xb] = param_2[1] + pfVar2[0xb];
            pfVar2[0xf] = param_2[1] + pfVar2[0xf];
            pfVar2[0x13] = param_2[2] + pfVar2[0x13];
            pfVar2[0x17] = param_2[2] + pfVar2[0x17];
          }
        }
        else {
          pfVar2[2] = fVar3 + fVar19;
          pfVar2[3] = fVar3 + fVar21;
          *pfVar2 = fVar3 + fVar7;
          pfVar2[1] = fVar3 + fVar17;
          *(ulong *)(pfVar2 + 6) = CONCAT44(fVar3 + fVar23,fVar3 + fVar22);
          *(ulong *)pfVar12 = CONCAT44(fVar3 + fVar20,fVar3 + fVar18);
          *(ulong *)(pfVar2 + 10) =
               CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)(pfVar2 + 10) >> 0x20),
                        fVar4 + (float)*(undefined8 *)(pfVar2 + 10));
          *(ulong *)(pfVar2 + 8) =
               CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)(pfVar2 + 8) >> 0x20),
                        fVar4 + (float)*(undefined8 *)(pfVar2 + 8));
          pfVar2[0xe] = fVar4 + pfVar2[0xe];
          pfVar2[0xf] = fVar4 + pfVar2[0xf];
          pfVar2[0xc] = fVar4 + pfVar2[0xc];
          pfVar2[0xd] = fVar4 + pfVar2[0xd];
          *(ulong *)(pfVar2 + 0x12) =
               CONCAT44(fVar5 + (float)((ulong)*(undefined8 *)(pfVar2 + 0x12) >> 0x20),
                        fVar5 + (float)*(undefined8 *)(pfVar2 + 0x12));
          *(ulong *)(pfVar2 + 0x10) =
               CONCAT44(fVar5 + (float)((ulong)*(undefined8 *)(pfVar2 + 0x10) >> 0x20),
                        fVar5 + (float)*(undefined8 *)(pfVar2 + 0x10));
          *(ulong *)(pfVar2 + 0x16) = CONCAT44(fVar5 + pfVar2[0x17],fVar5 + pfVar2[0x16]);
          *(ulong *)(pfVar2 + 0x14) = CONCAT44(fVar5 + pfVar2[0x15],fVar5 + pfVar2[0x14]);
        }
      }
    } while (local_420 != local_20);
  }
  else if (1 < (int)param_1[1]) {
    lVar8 = 1;
    lVar9 = 0xdc;
    do {
      lVar10 = *param_1;
      pfVar2 = (float *)((long)param_1 + lVar9 + lVar10);
      fVar7 = pfVar2[-0x17];
      fVar21 = (float)*(undefined8 *)(pfVar2 + -0x11);
      fVar18 = (float)((ulong)*(undefined8 *)(pfVar2 + -0x11) >> 0x20);
      fVar17 = (float)*(undefined8 *)(pfVar2 + -0x13);
      fVar19 = (float)((ulong)*(undefined8 *)(pfVar2 + -0x13) >> 0x20);
      uVar28 = -(uint)(pfVar2[-0x16] <= fVar19);
      uVar30 = -(uint)(pfVar2[-0x15] <= fVar21);
      uVar32 = -(uint)(pfVar2[-0x14] <= fVar18);
      if ((-(uint)(fVar7 <= fVar17) & uVar28 & uVar30 & uVar32) == 0) {
        uVar28 = (uint)((byte)-(uint)(fVar7 <= fVar17) & bVar13) + (uint)((byte)uVar28 & bVar14) +
                 (uint)((byte)uVar30 & bVar15) + (uint)((byte)uVar32 & bVar16);
        if ((uVar28 & 1) != 0) {
          pfVar2[-0x17] = fVar7 + *param_2;
          pfVar2[-0x13] = fVar17 + *param_2;
          pfVar2[-0xf] = param_2[1] + pfVar2[-0xf];
          pfVar2[-0xb] = param_2[1] + pfVar2[-0xb];
          pfVar2[-7] = param_2[2] + pfVar2[-7];
          pfVar2[-3] = param_2[2] + pfVar2[-3];
        }
        if ((uVar28 >> 1 & 1) != 0) {
          pfVar2[-0x16] = *param_2 + pfVar2[-0x16];
          pfVar2[-0x12] = *param_2 + pfVar2[-0x12];
          pfVar2[-0xe] = param_2[1] + pfVar2[-0xe];
          pfVar2[-10] = param_2[1] + pfVar2[-10];
          pfVar2[-6] = param_2[2] + pfVar2[-6];
          pfVar2[-2] = param_2[2] + pfVar2[-2];
        }
        if ((uVar28 >> 2 & 1) != 0) {
          pfVar2[-0x15] = *param_2 + pfVar2[-0x15];
          pfVar2[-0x11] = *param_2 + pfVar2[-0x11];
          pfVar2[-0xd] = param_2[1] + pfVar2[-0xd];
          pfVar2[-9] = param_2[1] + pfVar2[-9];
          pfVar2[-5] = param_2[2] + pfVar2[-5];
          pfVar2[-1] = param_2[2] + pfVar2[-1];
        }
        if ((uVar28 >> 3 & 1) != 0) {
          pfVar2[-0x14] = *param_2 + pfVar2[-0x14];
          pfVar2[-0x10] = *param_2 + pfVar2[-0x10];
          pfVar2[-0xc] = param_2[1] + pfVar2[-0xc];
          pfVar2[-8] = param_2[1] + pfVar2[-8];
          pfVar2[-4] = param_2[2] + pfVar2[-4];
          *(float *)((long)param_1 + lVar9 + lVar10) =
               param_2[2] + *(float *)((long)param_1 + lVar9 + lVar10);
        }
      }
      else {
        pfVar2[-0x15] = fVar3 + pfVar2[-0x15];
        pfVar2[-0x14] = fVar3 + pfVar2[-0x14];
        pfVar2[-0x17] = fVar3 + fVar7;
        pfVar2[-0x16] = fVar3 + pfVar2[-0x16];
        *(ulong *)(pfVar2 + -0x11) = CONCAT44(fVar3 + fVar18,fVar3 + fVar21);
        *(ulong *)(pfVar2 + -0x13) = CONCAT44(fVar3 + fVar19,fVar3 + fVar17);
        *(ulong *)(pfVar2 + -0xd) =
             CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)(pfVar2 + -0xd) >> 0x20),
                      fVar4 + (float)*(undefined8 *)(pfVar2 + -0xd));
        *(ulong *)(pfVar2 + -0xf) =
             CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)(pfVar2 + -0xf) >> 0x20),
                      fVar4 + (float)*(undefined8 *)(pfVar2 + -0xf));
        pfVar2[-9] = fVar4 + pfVar2[-9];
        pfVar2[-8] = fVar4 + pfVar2[-8];
        pfVar2[-0xb] = fVar4 + pfVar2[-0xb];
        pfVar2[-10] = fVar4 + pfVar2[-10];
        *(ulong *)(pfVar2 + -5) =
             CONCAT44(fVar5 + (float)((ulong)*(undefined8 *)(pfVar2 + -5) >> 0x20),
                      fVar5 + (float)*(undefined8 *)(pfVar2 + -5));
        *(ulong *)(pfVar2 + -7) =
             CONCAT44(fVar5 + (float)((ulong)*(undefined8 *)(pfVar2 + -7) >> 0x20),
                      fVar5 + (float)*(undefined8 *)(pfVar2 + -7));
        pfVar2[-1] = fVar5 + pfVar2[-1];
        *pfVar2 = fVar5 + *pfVar2;
        pfVar2[-3] = fVar5 + pfVar2[-3];
        pfVar2[-2] = fVar5 + pfVar2[-2];
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x80;
    } while (lVar8 < (int)param_1[1]);
  }
  return;
}


