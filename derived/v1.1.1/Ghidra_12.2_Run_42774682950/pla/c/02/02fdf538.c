/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fdf538; name: FUN_02fdf538
 */


void FUN_02fdf538(long param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [12])

{
  int iVar1;
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined *puVar29;
  uint *puVar30;
  undefined8 *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [12];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar53;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar54 [16];
  undefined8 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined4 uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined4 uVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar78 [16];
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) | 0x40;
  puVar29 = PTR_DAT_043723a0;
  if (iVar1 == 0) {
    puVar30 = (uint *)0x0;
  }
  else {
    puVar30 = (uint *)((long)iVar1 + param_1 + 0x40);
  }
  if (param_3 == (undefined1 (*) [12])0x0) {
    uVar20 = *(uint *)(*param_2 + 4);
    uVar21 = *(uint *)(*param_2 + 8);
    uVar16 = *(uint *)(param_2[1] + 4);
    uVar17 = *(uint *)(param_2[1] + 8);
    uVar22 = *(uint *)(param_2[1] + 4);
    uVar23 = *(uint *)(param_2[1] + 8);
    uVar18 = *(uint *)(PTR_DAT_043723a0 + 4);
    uVar19 = *(uint *)(PTR_DAT_043723a0 + 8);
    *puVar30 = *(uint *)param_2[1] ^
               (*(uint *)param_2[1] ^ *(uint *)*param_2) & *(uint *)PTR_DAT_043723a0;
    puVar30[1] = uVar16 ^ (uVar22 ^ uVar20) & uVar18;
    puVar30[2] = uVar17 ^ (uVar23 ^ uVar21) & uVar19;
    uVar18 = *(uint *)(puVar29 + 0x14);
    uVar19 = *(uint *)(puVar29 + 0x18);
    uVar20 = *(uint *)(*param_2 + 4);
    uVar21 = *(uint *)(*param_2 + 8);
    uVar16 = *(uint *)(param_2[1] + 4);
    uVar17 = *(uint *)(param_2[1] + 8);
    uVar22 = *(uint *)(param_2[1] + 4);
    uVar23 = *(uint *)(param_2[1] + 8);
    puVar30[3] = *(uint *)param_2[1] ^
                 (*(uint *)param_2[1] ^ *(uint *)*param_2) & *(uint *)(puVar29 + 0x10);
    puVar30[4] = uVar16 ^ (uVar22 ^ uVar20) & uVar18;
    puVar30[5] = uVar17 ^ (uVar23 ^ uVar21) & uVar19;
    uVar18 = *(uint *)(puVar29 + 0x24);
    uVar19 = *(uint *)(puVar29 + 0x28);
    uVar20 = *(uint *)(*param_2 + 4);
    uVar21 = *(uint *)(*param_2 + 8);
    uVar16 = *(uint *)(param_2[1] + 4);
    uVar17 = *(uint *)(param_2[1] + 8);
    uVar22 = *(uint *)(param_2[1] + 4);
    uVar23 = *(uint *)(param_2[1] + 8);
    puVar30[6] = *(uint *)param_2[1] ^
                 (*(uint *)param_2[1] ^ *(uint *)*param_2) & *(uint *)(puVar29 + 0x20);
    puVar30[7] = uVar16 ^ (uVar22 ^ uVar20) & uVar18;
    puVar30[8] = uVar17 ^ (uVar23 ^ uVar21) & uVar19;
    uVar18 = *(uint *)(puVar29 + 0x34);
    uVar19 = *(uint *)(puVar29 + 0x38);
    uVar20 = *(uint *)(*param_2 + 4);
    uVar21 = *(uint *)(*param_2 + 8);
    uVar16 = *(uint *)(param_2[1] + 4);
    uVar17 = *(uint *)(param_2[1] + 8);
    uVar22 = *(uint *)(param_2[1] + 4);
    uVar23 = *(uint *)(param_2[1] + 8);
    puVar30[9] = *(uint *)param_2[1] ^
                 (*(uint *)param_2[1] ^ *(uint *)*param_2) & *(uint *)(puVar29 + 0x30);
    puVar30[10] = uVar16 ^ (uVar22 ^ uVar20) & uVar18;
    puVar30[0xb] = uVar17 ^ (uVar23 ^ uVar21) & uVar19;
    uVar18 = *(uint *)(puVar29 + 0x44);
    uVar19 = *(uint *)(puVar29 + 0x48);
    uVar20 = *(uint *)(*param_2 + 4);
    uVar21 = *(uint *)(*param_2 + 8);
    uVar16 = *(uint *)(param_2[1] + 4);
    uVar17 = *(uint *)(param_2[1] + 8);
    uVar22 = *(uint *)(param_2[1] + 4);
    uVar23 = *(uint *)(param_2[1] + 8);
    puVar30[0xc] = *(uint *)param_2[1] ^
                   (*(uint *)param_2[1] ^ *(uint *)*param_2) & *(uint *)(puVar29 + 0x40);
    puVar30[0xd] = uVar16 ^ (uVar22 ^ uVar20) & uVar18;
    puVar30[0xe] = uVar17 ^ (uVar23 ^ uVar21) & uVar19;
    uVar18 = *(uint *)(puVar29 + 0x54);
    uVar19 = *(uint *)(puVar29 + 0x58);
    uVar20 = *(uint *)(*param_2 + 4);
    uVar21 = *(uint *)(*param_2 + 8);
    uVar16 = *(uint *)(param_2[1] + 4);
    uVar17 = *(uint *)(param_2[1] + 8);
    uVar22 = *(uint *)(param_2[1] + 4);
    uVar23 = *(uint *)(param_2[1] + 8);
    puVar30[0xf] = *(uint *)param_2[1] ^
                   (*(uint *)param_2[1] ^ *(uint *)*param_2) & *(uint *)(puVar29 + 0x50);
    puVar30[0x10] = uVar16 ^ (uVar22 ^ uVar20) & uVar18;
    puVar30[0x11] = uVar17 ^ (uVar23 ^ uVar21) & uVar19;
    uVar18 = *(uint *)(puVar29 + 100);
    uVar19 = *(uint *)(puVar29 + 0x68);
    uVar20 = *(uint *)(*param_2 + 4);
    uVar21 = *(uint *)(*param_2 + 8);
    uVar16 = *(uint *)(param_2[1] + 4);
    uVar17 = *(uint *)(param_2[1] + 8);
    uVar22 = *(uint *)(param_2[1] + 4);
    uVar23 = *(uint *)(param_2[1] + 8);
    puVar30[0x12] =
         *(uint *)param_2[1] ^ (*(uint *)param_2[1] ^ *(uint *)*param_2) & *(uint *)(puVar29 + 0x60)
    ;
    puVar30[0x13] = uVar16 ^ (uVar22 ^ uVar20) & uVar18;
    puVar30[0x14] = uVar17 ^ (uVar23 ^ uVar21) & uVar19;
    auVar35 = *(undefined1 (*) [12])param_2[1] ^
              (*(undefined1 (*) [12])param_2[1] ^ SUB1612(*param_2,0)) &
              SUB1612(*(undefined1 (*) [16])(puVar29 + 0x70),0);
  }
  else {
    auVar35 = *(undefined1 (*) [12])param_2[1] ^
              (*(undefined1 (*) [12])param_2[1] ^ SUB1612(*param_2,0)) &
              SUB1612(*(undefined1 (*) [16])PTR_DAT_043723a0,0);
    uVar52 = *(undefined8 *)(*param_3 + 8);
    uVar60 = *(undefined8 *)param_3[2];
    uVar4 = *(undefined8 *)(param_3[3] + 4);
    fVar33 = *(float *)(param_3[4] + 8);
    fVar34 = auVar35._0_4_;
    fVar36 = auVar35._4_4_;
    fVar37 = auVar35._8_4_;
    *(ulong *)puVar30 =
         CONCAT44(*(float *)(param_3[4] + 4) +
                  (float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fVar37 +
                  (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * fVar34 +
                  (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) * fVar36,
                  *(float *)param_3[4] +
                  (float)*(undefined8 *)(param_3[2] + 8) * fVar37 +
                  (float)*(undefined8 *)*param_3 * fVar34 +
                  (float)*(undefined8 *)(param_3[1] + 4) * fVar36);
    puVar30[2] = (uint)(fVar33 + (float)uVar4 * fVar37 +
                                 (float)uVar52 * fVar34 + (float)uVar60 * fVar36);
    auVar35 = *(undefined1 (*) [12])param_2[1] ^
              (*(undefined1 (*) [12])param_2[1] ^ *(undefined1 (*) [12])*param_2) &
              SUB1612(*(undefined1 (*) [16])(puVar29 + 0x10),0);
    uVar52 = *(undefined8 *)(*param_3 + 8);
    uVar60 = *(undefined8 *)param_3[2];
    uVar4 = *(undefined8 *)(param_3[3] + 4);
    fVar33 = *(float *)(param_3[4] + 8);
    fVar34 = auVar35._0_4_;
    fVar36 = auVar35._4_4_;
    fVar37 = auVar35._8_4_;
    *(ulong *)(puVar30 + 3) =
         CONCAT44(*(float *)(param_3[4] + 4) +
                  (float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fVar37 +
                  (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * fVar34 +
                  (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) * fVar36,
                  *(float *)param_3[4] +
                  (float)*(undefined8 *)(param_3[2] + 8) * fVar37 +
                  (float)*(undefined8 *)*param_3 * fVar34 +
                  (float)*(undefined8 *)(param_3[1] + 4) * fVar36);
    puVar30[5] = (uint)(fVar33 + (float)uVar4 * fVar37 +
                                 (float)uVar52 * fVar34 + (float)uVar60 * fVar36);
    auVar35 = *(undefined1 (*) [12])param_2[1] ^
              (*(undefined1 (*) [12])param_2[1] ^ *(undefined1 (*) [12])*param_2) &
              SUB1612(*(undefined1 (*) [16])(puVar29 + 0x20),0);
    uVar52 = *(undefined8 *)(*param_3 + 8);
    uVar60 = *(undefined8 *)param_3[2];
    uVar4 = *(undefined8 *)(param_3[3] + 4);
    fVar33 = *(float *)(param_3[4] + 8);
    fVar34 = auVar35._0_4_;
    fVar36 = auVar35._4_4_;
    fVar37 = auVar35._8_4_;
    *(ulong *)(puVar30 + 6) =
         CONCAT44(*(float *)(param_3[4] + 4) +
                  (float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fVar37 +
                  (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * fVar34 +
                  (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) * fVar36,
                  *(float *)param_3[4] +
                  (float)*(undefined8 *)(param_3[2] + 8) * fVar37 +
                  (float)*(undefined8 *)*param_3 * fVar34 +
                  (float)*(undefined8 *)(param_3[1] + 4) * fVar36);
    puVar30[8] = (uint)(fVar33 + (float)uVar4 * fVar37 +
                                 (float)uVar52 * fVar34 + (float)uVar60 * fVar36);
    auVar35 = *(undefined1 (*) [12])param_2[1] ^
              (*(undefined1 (*) [12])param_2[1] ^ *(undefined1 (*) [12])*param_2) &
              SUB1612(*(undefined1 (*) [16])(puVar29 + 0x30),0);
    uVar52 = *(undefined8 *)(*param_3 + 8);
    uVar60 = *(undefined8 *)param_3[2];
    uVar4 = *(undefined8 *)(param_3[3] + 4);
    fVar33 = *(float *)(param_3[4] + 8);
    fVar34 = auVar35._0_4_;
    fVar36 = auVar35._4_4_;
    fVar37 = auVar35._8_4_;
    *(ulong *)(puVar30 + 9) =
         CONCAT44(*(float *)(param_3[4] + 4) +
                  (float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fVar37 +
                  (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * fVar34 +
                  (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) * fVar36,
                  *(float *)param_3[4] +
                  (float)*(undefined8 *)(param_3[2] + 8) * fVar37 +
                  (float)*(undefined8 *)*param_3 * fVar34 +
                  (float)*(undefined8 *)(param_3[1] + 4) * fVar36);
    puVar30[0xb] = (uint)(fVar33 + (float)uVar4 * fVar37 +
                                   (float)uVar52 * fVar34 + (float)uVar60 * fVar36);
    auVar35 = *(undefined1 (*) [12])param_2[1] ^
              (*(undefined1 (*) [12])param_2[1] ^ *(undefined1 (*) [12])*param_2) &
              SUB1612(*(undefined1 (*) [16])(puVar29 + 0x40),0);
    uVar52 = *(undefined8 *)(*param_3 + 8);
    uVar60 = *(undefined8 *)param_3[2];
    uVar4 = *(undefined8 *)(param_3[3] + 4);
    fVar33 = *(float *)(param_3[4] + 8);
    fVar34 = auVar35._0_4_;
    fVar36 = auVar35._4_4_;
    fVar37 = auVar35._8_4_;
    *(ulong *)(puVar30 + 0xc) =
         CONCAT44(*(float *)(param_3[4] + 4) +
                  (float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fVar37 +
                  (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * fVar34 +
                  (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) * fVar36,
                  *(float *)param_3[4] +
                  (float)*(undefined8 *)(param_3[2] + 8) * fVar37 +
                  (float)*(undefined8 *)*param_3 * fVar34 +
                  (float)*(undefined8 *)(param_3[1] + 4) * fVar36);
    puVar30[0xe] = (uint)(fVar33 + (float)uVar4 * fVar37 +
                                   (float)uVar52 * fVar34 + (float)uVar60 * fVar36);
    auVar35 = *(undefined1 (*) [12])param_2[1] ^
              (*(undefined1 (*) [12])param_2[1] ^ *(undefined1 (*) [12])*param_2) &
              SUB1612(*(undefined1 (*) [16])(puVar29 + 0x50),0);
    uVar52 = *(undefined8 *)(*param_3 + 8);
    uVar60 = *(undefined8 *)param_3[2];
    uVar4 = *(undefined8 *)(param_3[3] + 4);
    fVar33 = *(float *)(param_3[4] + 8);
    fVar34 = auVar35._0_4_;
    fVar36 = auVar35._4_4_;
    fVar37 = auVar35._8_4_;
    *(ulong *)(puVar30 + 0xf) =
         CONCAT44(*(float *)(param_3[4] + 4) +
                  (float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fVar37 +
                  (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * fVar34 +
                  (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) * fVar36,
                  *(float *)param_3[4] +
                  (float)*(undefined8 *)(param_3[2] + 8) * fVar37 +
                  (float)*(undefined8 *)*param_3 * fVar34 +
                  (float)*(undefined8 *)(param_3[1] + 4) * fVar36);
    puVar30[0x11] =
         (uint)(fVar33 + (float)uVar4 * fVar37 + (float)uVar52 * fVar34 + (float)uVar60 * fVar36);
    auVar35 = *(undefined1 (*) [12])param_2[1] ^
              (*(undefined1 (*) [12])param_2[1] ^ *(undefined1 (*) [12])*param_2) &
              SUB1612(*(undefined1 (*) [16])(puVar29 + 0x60),0);
    uVar52 = *(undefined8 *)(*param_3 + 8);
    uVar60 = *(undefined8 *)param_3[2];
    uVar4 = *(undefined8 *)(param_3[3] + 4);
    fVar33 = *(float *)(param_3[4] + 8);
    fVar34 = auVar35._0_4_;
    fVar36 = auVar35._4_4_;
    fVar37 = auVar35._8_4_;
    *(ulong *)(puVar30 + 0x12) =
         CONCAT44(*(float *)(param_3[4] + 4) +
                  (float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fVar37 +
                  (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * fVar34 +
                  (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) * fVar36,
                  *(float *)param_3[4] +
                  (float)*(undefined8 *)(param_3[2] + 8) * fVar37 +
                  (float)*(undefined8 *)*param_3 * fVar34 +
                  (float)*(undefined8 *)(param_3[1] + 4) * fVar36);
    puVar30[0x14] =
         (uint)(fVar33 + (float)uVar4 * fVar37 + (float)uVar52 * fVar34 + (float)uVar60 * fVar36);
    auVar35 = *(undefined1 (*) [12])param_2[1] ^
              (*(undefined1 (*) [12])param_2[1] ^ *(undefined1 (*) [12])*param_2) &
              SUB1612(*(undefined1 (*) [16])(puVar29 + 0x70),0);
    fVar33 = auVar35._0_4_;
    fVar34 = auVar35._4_4_;
    fVar36 = auVar35._8_4_;
    auVar35._0_4_ =
         (float)*(undefined8 *)param_3[4] +
         (float)*(undefined8 *)(param_3[2] + 8) * fVar36 +
         *(float *)*param_3 * fVar33 + (float)*(undefined8 *)(param_3[1] + 4) * fVar34;
    auVar35._4_4_ =
         (float)((ulong)*(undefined8 *)param_3[4] >> 0x20) +
         (float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fVar36 +
         *(float *)(*param_3 + 4) * fVar33 +
         (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) * fVar34;
    auVar35._8_4_ =
         (float)*(undefined8 *)(param_3[4] + 8) +
         (float)*(undefined8 *)(param_3[3] + 4) * fVar36 +
         *(float *)(*param_3 + 8) * fVar33 + (float)*(undefined8 *)param_3[2] * fVar34;
  }
  *(long *)(puVar30 + 0x15) = auVar35._0_8_;
  puVar30[0x17] = auVar35._8_4_;
  if ((*(ushort *)(param_1 + 0x1a) >> 1 & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) | 0x80;
    uVar28 = DAT_0388a870;
    uVar4 = DAT_0388a868;
    uVar60 = DAT_0388a7e8;
    uVar52 = DAT_0388a618;
    if (iVar1 == 0) {
      puVar31 = (undefined8 *)0x0;
    }
    else {
      puVar31 = (undefined8 *)((long)iVar1 + param_1 + 0x48);
    }
    fVar36 = (float)DAT_0388a618;
    uVar24 = (ulong)DAT_0388a618 >> 0x20;
    fVar37 = (float)DAT_0388a870;
    uVar25 = (ulong)DAT_0388a870 >> 0x20;
    fVar39 = (float)DAT_0388a7e8;
    uVar26 = (ulong)DAT_0388a7e8 >> 0x20;
    fVar44 = (float)DAT_0388a868;
    uVar27 = (ulong)DAT_0388a868 >> 0x20;
    fVar33 = -*(float *)param_2[1];
    puVar31[1] = (ulong)(uint)fVar33 << 0x20;
    *puVar31 = uVar52;
    fVar34 = *(float *)*param_2;
    puVar31[3] = (ulong)(uint)fVar34 << 0x20;
    puVar31[2] = uVar28;
    fVar38 = -*(float *)(param_2[1] + 4);
    puVar31[5] = (ulong)(uint)fVar38 << 0x20;
    puVar31[4] = uVar60;
    fVar40 = *(float *)(*param_2 + 4);
    puVar31[7] = (ulong)(uint)fVar40 << 0x20;
    puVar31[6] = uVar4;
    fVar47 = -*(float *)(param_2[1] + 8);
    puVar31[9] = CONCAT44(fVar47,0x3f800000);
    puVar31[8] = 0;
    fVar51 = *(float *)(*param_2 + 8);
    puVar31[0xb] = CONCAT44(fVar51,0xbf800000);
    puVar31[10] = 0;
    if (param_3 != (undefined1 (*) [12])0x0) {
      auVar42 = *(undefined1 (*) [16])(param_3[1] + 4);
      pauVar2 = (undefined1 (*) [12])(param_3[2] + 8);
      fVar73 = (float)*(undefined8 *)(param_3[3] + 4);
      uVar74 = (undefined4)((ulong)*(undefined8 *)(param_3[3] + 4) >> 0x20);
      fVar71 = (float)*(undefined8 *)*pauVar2;
      fVar72 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
      fVar65 = (float)*(undefined8 *)(*param_3 + 8);
      uVar67 = (undefined4)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
      fVar61 = (float)*(undefined8 *)*param_3;
      fVar63 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
      fVar32 = auVar42._0_4_;
      fVar68 = fVar32 * 0.0;
      fVar55 = auVar42._4_4_;
      fVar69 = fVar55 * 0.0;
      fVar57 = auVar42._8_4_;
      fVar70 = fVar57 * 0.0;
      uVar60 = NEON_fmov(0x3f800000,4);
      uVar52 = NEON_fmov(0xbf800000,4);
      fVar75 = fVar61 * 0.0;
      fVar76 = fVar63 * 0.0;
      fVar77 = fVar65 * 0.0;
      fVar14 = (float)uVar60;
      fVar15 = (float)uVar52;
      auVar54._12_4_ = uVar67;
      auVar54._0_12_ = *param_3;
      auVar11._12_4_ = uVar67;
      auVar11._0_12_ = *param_3;
      auVar78 = NEON_ext(auVar54,auVar11,8,1);
      auVar42 = NEON_ext(auVar42,auVar42,8,1);
      auVar12._12_4_ = uVar74;
      auVar12._0_12_ = *pauVar2;
      auVar13._12_4_ = uVar74;
      auVar13._0_12_ = *pauVar2;
      auVar43 = NEON_ext(auVar12,auVar13,8,1);
      fVar62 = -(float)*(undefined8 *)param_3[4];
      fVar64 = -(float)((ulong)*(undefined8 *)param_3[4] >> 0x20);
      fVar66 = -(float)*(undefined8 *)(param_3[4] + 8);
      fVar53 = auVar78._0_4_ * fVar66 + fVar61 * fVar62 + fVar63 * fVar64;
      fVar56 = auVar42._0_4_ * fVar66 + fVar32 * fVar62 + fVar55 * fVar64;
      fVar58 = auVar43._0_4_ * fVar66 + fVar71 * fVar62 + fVar72 * fVar64;
      fVar59 = auVar43._4_4_ * fVar66 + fVar72 * fVar62 + auVar43._4_4_ * fVar64;
      fVar36 = fVar36 * fVar53;
      fVar62 = (float)uVar24 * fVar56;
      fVar39 = fVar39 * fVar53;
      fVar66 = (float)uVar26 * fVar56;
      fVar37 = fVar37 * fVar53;
      fVar64 = (float)uVar25 * fVar56;
      fVar49 = fVar53 * 0.0;
      fVar50 = fVar56 * 0.0;
      fVar45 = fVar53 * 0.0;
      fVar46 = fVar56 * 0.0;
      fVar44 = fVar44 * fVar53;
      fVar56 = (float)uVar27 * fVar56;
      auVar42._4_4_ = fVar62;
      auVar42._0_4_ = fVar36;
      auVar42._8_4_ = fVar58 * 0.0;
      auVar42._12_4_ = fVar33 * fVar59;
      auVar43._4_4_ = fVar62;
      auVar43._0_4_ = fVar36;
      auVar43._8_4_ = fVar58 * 0.0;
      auVar43._12_4_ = fVar33 * fVar59;
      auVar54 = NEON_ext(auVar42,auVar43,8,1);
      auVar41._4_4_ = fVar66;
      auVar41._0_4_ = fVar39;
      auVar41._8_4_ = fVar58 * 0.0;
      auVar41._12_4_ = fVar38 * fVar59;
      auVar48._4_4_ = fVar66;
      auVar48._0_4_ = fVar39;
      auVar48._8_4_ = fVar58 * 0.0;
      auVar48._12_4_ = fVar38 * fVar59;
      auVar42 = NEON_ext(auVar41,auVar48,8,1);
      auVar5._4_4_ = fVar56;
      auVar5._0_4_ = fVar44;
      auVar5._8_4_ = fVar58 * 0.0;
      auVar5._12_4_ = fVar40 * fVar59;
      auVar6._4_4_ = fVar56;
      auVar6._0_4_ = fVar44;
      auVar6._8_4_ = fVar58 * 0.0;
      auVar6._12_4_ = fVar40 * fVar59;
      auVar43 = NEON_ext(auVar5,auVar6,8,1);
      auVar9._4_4_ = fVar50;
      auVar9._0_4_ = fVar49;
      auVar9._8_4_ = fVar58 * 1.0;
      auVar9._12_4_ = fVar47 * fVar59;
      auVar10._4_4_ = fVar50;
      auVar10._0_4_ = fVar49;
      auVar10._8_4_ = fVar58 * 1.0;
      auVar10._12_4_ = fVar47 * fVar59;
      auVar41 = NEON_ext(auVar9,auVar10,8,1);
      auVar7._4_4_ = fVar46;
      auVar7._0_4_ = fVar45;
      auVar7._8_4_ = fVar58 * -1.0;
      auVar7._12_4_ = fVar51 * fVar59;
      auVar8._4_4_ = fVar46;
      auVar8._0_4_ = fVar45;
      auVar8._8_4_ = fVar58 * -1.0;
      auVar8._12_4_ = fVar51 * fVar59;
      auVar48 = NEON_ext(auVar7,auVar8,8,1);
      auVar78._4_4_ = fVar64;
      auVar78._0_4_ = fVar37;
      auVar78._8_4_ = fVar58 * 0.0;
      auVar78._12_4_ = fVar34 * fVar59;
      auVar3._4_4_ = fVar64;
      auVar3._0_4_ = fVar37;
      auVar3._8_4_ = fVar58 * 0.0;
      auVar3._12_4_ = fVar34 * fVar59;
      auVar78 = NEON_ext(auVar78,auVar3,8,1);
      puVar31[1] = CONCAT44(fVar36 + fVar62 + auVar54._0_4_ + fVar33,fVar73 * 0.0 + fVar65 + fVar70)
      ;
      *puVar31 = CONCAT44(fVar72 * 0.0 + fVar63 + fVar69,fVar71 * 0.0 + fVar61 + fVar68);
      puVar31[3] = CONCAT44(fVar37 + fVar64 + auVar78._0_4_ + fVar34,
                            fVar73 * 0.0 + (fVar70 - fVar65));
      puVar31[2] = CONCAT44(fVar72 * 0.0 + (fVar69 - fVar63),fVar71 * 0.0 + (fVar68 - fVar61));
      puVar31[5] = CONCAT44(fVar39 + fVar66 + auVar42._0_4_ + fVar38,fVar73 * 0.0 + fVar77 + fVar57)
      ;
      puVar31[4] = CONCAT44(fVar72 * 0.0 + fVar76 + fVar55,fVar71 * 0.0 + fVar75 + fVar32);
      puVar31[7] = CONCAT44(fVar44 + fVar56 + auVar43._0_4_ + fVar40,
                            fVar73 * 0.0 + (fVar77 - fVar57));
      puVar31[6] = CONCAT44(fVar72 * 0.0 + (fVar76 - fVar55),fVar71 * 0.0 + (fVar75 - fVar32));
      puVar31[9] = CONCAT44(fVar49 + fVar50 + auVar41._0_4_ + fVar47,
                            fVar73 * fVar14 + fVar77 + fVar70);
      puVar31[8] = CONCAT44(fVar72 * fVar14 + fVar76 + fVar69,fVar71 * fVar14 + fVar75 + fVar68);
      *(float *)(puVar31 + 0xb) = fVar73 * fVar15 + fVar77 + fVar70;
      *(float *)((long)puVar31 + 0x5c) = fVar45 + fVar46 + auVar48._0_4_ + fVar51;
      *(float *)(puVar31 + 10) = fVar71 * fVar15 + fVar75 + fVar68;
      *(float *)((long)puVar31 + 0x54) = fVar72 * fVar15 + fVar76 + fVar69;
    }
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      puVar31 = (undefined8 *)0x0;
    }
    else {
      puVar31 = (undefined8 *)((long)iVar1 + param_1 + 0x50);
    }
    *puVar31 = 0x8004000480040000;
    puVar31[1] = 0x8004000c80040008;
    puVar31[2] = 0x8004001480040010;
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      puVar31 = (undefined8 *)0x0;
    }
    else {
      puVar31 = (undefined8 *)((long)iVar1 + param_1 + 0x58);
    }
    *puVar31 = 0x307050100040602;
    puVar31[1] = 0x302060705040001;
    puVar31[2] = 0x604050701000203;
  }
  return;
}


