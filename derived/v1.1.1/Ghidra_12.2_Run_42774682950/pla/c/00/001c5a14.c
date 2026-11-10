/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c5a14; name: FUN_001c5a14
 */


undefined8 FUN_001c5a14(char *param_1)

{
  undefined1 (*pauVar1) [12];
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  int iVar17;
  float fVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  bool bVar26;
  int iVar27;
  int iVar28;
  undefined8 uVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  int iVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  byte bVar49;
  int iVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar61;
  float fVar62;
  undefined1 auVar58 [16];
  float fVar63;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  int iVar66;
  int iVar69;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined8 uVar70;
  float fVar72;
  undefined1 auVar71 [16];
  char *local_348;
  float local_310;
  float fStack_30c;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [528];
  
  iVar7 = *(int *)(param_1 + 0x88);
  if (iVar7 < 4) {
    FUN_0331fefc(auStack_280,auStack_270,0x200);
    FUN_0332448c(auStack_280,"Internal error");
    iVar19 = FUN_03320b30(0x642cf968,auStack_270,
                          "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                          ,0x2b5);
    if (iVar19 != 0) {
      CallSupervisor(0x26);
    }
    FUN_0331ff7c(auStack_280);
    param_1[0x120] = '\0';
    param_1[0x121] = '\0';
    param_1[0x122] = '\0';
    param_1[0x123] = '\0';
    param_1[0x124] = '\0';
    param_1[0x125] = '\0';
    param_1[0x126] = '\0';
    param_1[0x127] = '\0';
    param_1[0x128] = '\0';
    param_1[0x129] = '\0';
    param_1[0x12a] = '\0';
    param_1[299] = '\0';
    param_1[300] = '\0';
    param_1[0x12d] = '\0';
    param_1[0x12e] = '\0';
    param_1[0x12f] = '\0';
    if (iVar7 < 1) {
      return 0;
    }
  }
  else {
    param_1[0x120] = '\0';
    param_1[0x121] = '\0';
    param_1[0x122] = '\0';
    param_1[0x123] = '\0';
    param_1[0x124] = '\0';
    param_1[0x125] = '\0';
    param_1[0x126] = '\0';
    param_1[0x127] = '\0';
    param_1[0x128] = '\0';
    param_1[0x129] = '\0';
    param_1[0x12a] = '\0';
    param_1[299] = '\0';
    param_1[300] = '\0';
    param_1[0x12d] = '\0';
    param_1[0x12e] = '\0';
    param_1[0x12f] = '\0';
  }
  local_348 = param_1 + 0x120;
  pcVar2 = param_1 + 0x50;
  bVar26 = false;
  iVar33 = 0;
  pcVar3 = param_1 + 0x68;
  iVar19 = 1;
  if (1 < iVar7) goto LAB_001c5af8;
  do {
    do {
      iVar33 = iVar19;
      if (iVar7 <= iVar33) {
        if (bVar26) {
          iVar7 = *(int *)(param_1 + 0x88);
          while (0 < iVar7) {
            FUN_001c6618(param_1,*(long *)(param_1 + 0x80) + (long)(iVar7 + -1) * 0x40);
            iVar7 = *(int *)(param_1 + 0x88) + -1;
            *(int *)(param_1 + 0x88) = iVar7;
          }
          param_1[0x88] = '\0';
          param_1[0x89] = '\0';
          param_1[0x8a] = '\0';
          param_1[0x8b] = '\0';
          if ((-1 < (int)*(uint *)(param_1 + 0x8c)) && (*(long *)(param_1 + 0x80) != 0)) {
            FUN_032cf244(*(undefined8 *)PTR_PTR_04372408,*(long *)(param_1 + 0x80),0x40,
                         *(uint *)(param_1 + 0x8c) & 0x3fffffff);
          }
          param_1[0x80] = '\0';
          param_1[0x81] = '\0';
          param_1[0x82] = '\0';
          param_1[0x83] = '\0';
          param_1[0x84] = '\0';
          param_1[0x85] = '\0';
          param_1[0x86] = '\0';
          param_1[0x87] = '\0';
          param_1[0x8c] = '\0';
          param_1[0x8d] = '\0';
          param_1[0x8e] = '\0';
          param_1[0x8f] = -0x80;
          return 1;
        }
        return 0;
      }
      iVar19 = iVar33 + 1;
    } while (iVar7 <= iVar19);
LAB_001c5af8:
    lVar30 = *(long *)(param_1 + 0x80);
    lVar4 = lVar30 + (long)iVar33 * 0x40;
    pauVar1 = (undefined1 (*) [12])(lVar4 + 0x20);
    uVar29 = *(undefined8 *)(lVar4 + 0x28);
    iVar50 = (int)uVar29;
    uVar70 = *(undefined8 *)*pauVar1;
    auVar58._12_4_ = (int)((ulong)uVar29 >> 0x20);
    auVar58._0_12_ = *pauVar1;
    auVar58 = NEON_scvtf(auVar58,4);
    iVar15 = (int)uVar70;
    iVar17 = (int)((ulong)uVar70 >> 0x20);
    iVar28 = iVar33;
    while( true ) {
      iVar31 = iVar19;
      iVar28 = iVar28 + 2;
      if (iVar28 < iVar7) {
        lVar4 = lVar30 + (long)iVar31 * 0x40;
        while( true ) {
          iVar8 = *(int *)*(undefined1 (*) [16])(lVar4 + 0x20) - iVar15;
          lVar32 = lVar30 + (long)iVar28 * 0x40;
          iVar66 = *(int *)(lVar4 + 0x24) - iVar17;
          iVar69 = *(int *)*(undefined1 (*) [16])(lVar32 + 0x20) - iVar15;
          iVar9 = *(int *)(lVar4 + 0x28) - iVar50;
          iVar27 = *(int *)(lVar32 + 0x24) - iVar17;
          iVar10 = *(int *)(lVar32 + 0x28) - iVar50;
          iVar19 = iVar10 * iVar66 - iVar27 * iVar9;
          iVar9 = iVar69 * iVar9 - iVar10 * iVar8;
          iVar8 = iVar27 * iVar8 - iVar69 * iVar66;
          if ((iVar9 != 0 || iVar8 != 0) || iVar19 != 0) {
            if (*param_1 != '\0') {
              auVar67 = NEON_scvtf(*(undefined1 (*) [16])(lVar4 + 0x20),4);
              fVar51 = (float)*(undefined8 *)(param_1 + 0x158);
              fVar54 = (float)((ulong)*(undefined8 *)(param_1 + 0x158) >> 0x20);
              auVar71 = NEON_scvtf(*(undefined1 (*) [16])(lVar32 + 0x20),4);
              local_310 = auVar58._0_4_;
              fStack_30c = auVar58._4_4_;
              fVar56 = (float)*(undefined8 *)(param_1 + 0x150);
              fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x150) >> 0x20);
              fVar53 = *(float *)(param_1 + 0x130);
              fVar52 = *(float *)(param_1 + 0x134);
              fVar55 = *(float *)(param_1 + 0x138);
              fVar72 = *(float *)(param_1 + 0x13c);
              fVar57 = fVar53 + local_310 * fVar56;
              fVar61 = fVar52 + fStack_30c * fVar18;
              fVar62 = fVar55 + auVar58._8_4_ * fVar51;
              fVar63 = fVar72 + fVar54 * 0.0;
              auVar64._0_4_ = (fVar53 + fVar56 * auVar67._0_4_) - fVar57;
              auVar64._4_4_ = (fVar52 + fVar18 * auVar67._4_4_) - fVar61;
              auVar64._8_4_ = (fVar55 + fVar51 * auVar67._8_4_) - fVar62;
              auVar64._12_4_ = (fVar72 + fVar54 * 0.0) - fVar63;
              auVar68 = NEON_ext(auVar64,auVar64,4,1);
              fVar56 = (fVar53 + fVar56 * auVar71._0_4_) - fVar57;
              fVar53 = (fVar52 + fVar18 * auVar71._4_4_) - fVar61;
              uVar38 = SUB41(fVar53,0);
              uVar41 = (undefined1)((uint)fVar53 >> 8);
              uVar44 = (undefined1)((uint)fVar53 >> 0x10);
              uVar47 = (undefined1)((uint)fVar53 >> 0x18);
              fVar52 = (fVar55 + fVar51 * auVar71._8_4_) - fVar62;
              fVar55 = (fVar72 + fVar54 * 0.0) - fVar63;
              auVar67[4] = uVar38;
              auVar67._0_4_ = fVar56;
              auVar67[5] = uVar41;
              auVar67[6] = uVar44;
              auVar67[7] = uVar47;
              auVar67._8_4_ = fVar52;
              auVar67._12_4_ = fVar55;
              auVar71[4] = uVar38;
              auVar71._0_4_ = fVar56;
              auVar71[5] = uVar41;
              auVar71[6] = uVar44;
              auVar71[7] = uVar47;
              auVar71._8_4_ = fVar52;
              auVar71._12_4_ = fVar55;
              auVar67 = NEON_ext(auVar67,auVar71,4,1);
              fVar18 = auVar64._0_4_ * auVar67._0_4_ - fVar56 * auVar68._0_4_;
              fVar53 = auVar64._4_4_ * auVar67._4_4_ - fVar53 * auVar68._4_4_;
              uVar39 = SUB41(fVar53,0);
              uVar42 = (undefined1)((uint)fVar53 >> 8);
              uVar45 = (undefined1)((uint)fVar53 >> 0x10);
              uVar48 = (undefined1)((uint)fVar53 >> 0x18);
              fVar53 = auVar64._8_4_ * fVar56 - fVar52 * auVar64._0_4_;
              fVar56 = auVar64._12_4_ *
                       (float)(CONCAT17(uVar47,CONCAT16(uVar44,CONCAT15(uVar41,CONCAT14(uVar38,
                                                  fVar56)))) >> 0x20) - fVar55 * auVar64._4_4_;
              auVar68[4] = uVar39;
              auVar68._0_4_ = fVar18;
              auVar68[5] = uVar42;
              auVar68[6] = uVar45;
              auVar68[7] = uVar48;
              auVar68._8_4_ = fVar53;
              auVar68._12_4_ = fVar56;
              auVar16[4] = uVar39;
              auVar16._0_4_ = fVar18;
              auVar16[5] = uVar42;
              auVar16[6] = uVar45;
              auVar16[7] = uVar48;
              auVar16._8_4_ = fVar53;
              auVar16._12_4_ = fVar56;
              auVar67 = NEON_ext(auVar68,auVar16,4,1);
              fVar52 = auVar67._0_4_;
              fVar51 = auVar67._4_4_;
              fVar56 = fVar52 * fVar52 + fVar51 * fVar51 + fVar18 * fVar18;
              fVar55 = fVar52 * fVar52 + fVar51 * fVar51 + fVar18 * fVar18;
              uVar38 = SUB41(fVar55,0);
              uVar41 = (undefined1)((uint)fVar55 >> 8);
              uVar44 = (undefined1)((uint)fVar55 >> 0x10);
              uVar47 = (undefined1)((uint)fVar55 >> 0x18);
              uVar70 = NEON_frsqrte(CONCAT17(uVar47,CONCAT16(uVar44,CONCAT15(uVar41,CONCAT14(uVar38,
                                                  fVar56)))),4);
              fVar53 = (float)uVar70;
              fVar72 = (float)((ulong)uVar70 >> 0x20);
              uVar70 = NEON_frsqrts(CONCAT17(uVar47,CONCAT16(uVar44,CONCAT15(uVar41,CONCAT14(uVar38,
                                                  fVar56)))),
                                    CONCAT44(fVar72 * fVar72,fVar53 * fVar53),4);
              fVar53 = fVar53 * (float)uVar70;
              fVar72 = fVar72 * (float)((ulong)uVar70 >> 0x20);
              iVar66 = -(uint)(fVar56 <= 0.0);
              iVar69 = -(uint)(fVar55 <= 0.0);
              uVar70 = NEON_frsqrts(CONCAT17(uVar47,CONCAT16(uVar44,CONCAT15(uVar41,CONCAT14(uVar38,
                                                  fVar56)))),
                                    CONCAT44(fVar72 * fVar72,fVar53 * fVar53),4);
              fVar53 = (float)uVar70 * fVar53;
              fVar72 = (float)((ulong)uVar70 >> 0x20) * fVar72;
              bVar34 = SUB41(fVar53,0) & ~(byte)iVar66;
              bVar35 = (byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar66 >> 8);
              bVar36 = (byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
              bVar37 = (byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
              bVar40 = SUB41(fVar72,0) & ~(byte)iVar69;
              bVar43 = (byte)((uint)fVar72 >> 8) & ~(byte)((uint)iVar69 >> 8);
              bVar46 = (byte)((uint)fVar72 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
              bVar49 = (byte)((uint)fVar72 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
              fVar56 = (float)CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar35,bVar34)));
              fVar52 = fVar52 * (float)CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar35,bVar34)));
              fVar51 = fVar51 * (float)CONCAT13(bVar49,CONCAT12(bVar46,CONCAT11(bVar43,bVar40)));
              fVar53 = fVar18 * fVar56;
              auVar59._0_4_ = fVar57 * fVar52;
              auVar59._4_4_ = fVar61 * fVar51;
              auVar59._8_4_ = fVar62 * fVar53;
              auVar59._12_4_ =
                   fVar63 * (float)(CONCAT17(uVar48,CONCAT16(uVar45,CONCAT15(uVar42,CONCAT14(uVar39,
                                                  fVar18)))) >> 0x20) *
                            (float)(CONCAT17(bVar49,CONCAT16(bVar46,CONCAT15(bVar43,CONCAT14(bVar40,
                                                  fVar56)))) >> 0x20);
              auVar67 = NEON_ext(auVar59,auVar59,8,1);
              fVar56 = -(auVar59._0_4_ + auVar59._4_4_ + auVar67._0_4_);
              auVar60._0_4_ = *(float *)(param_1 + 0x120) * *(float *)(param_1 + 0x120);
              auVar60._4_4_ = *(float *)(param_1 + 0x124) * *(float *)(param_1 + 0x124);
              auVar60._8_4_ = *(float *)(param_1 + 0x128) * *(float *)(param_1 + 0x128);
              auVar60._12_4_ = *(float *)(param_1 + 300) * *(float *)(param_1 + 300);
              auVar65._0_4_ = fVar52 * fVar52;
              auVar65._4_4_ = fVar51 * fVar51;
              auVar65._8_4_ = fVar53 * fVar53;
              auVar65._12_4_ = fVar56 * fVar56;
              auVar67 = NEON_ext(auVar65,auVar65,8,1);
              auVar71 = NEON_ext(auVar60,auVar60,8,1);
              if (auVar60._0_4_ + auVar60._4_4_ + auVar71._0_4_ <
                  auVar65._0_4_ + auVar65._4_4_ + auVar67._0_4_) {
                *(ulong *)(param_1 + 0x128) = CONCAT44(fVar56,fVar53);
                *(ulong *)local_348 =
                     CONCAT17((char)((uint)fVar51 >> 0x18),
                              CONCAT16((char)((uint)fVar51 >> 0x10),
                                       CONCAT15((char)((uint)fVar51 >> 8),
                                                CONCAT14(SUB41(fVar51,0),fVar52))));
              }
            }
            iVar66 = iVar28 + 1;
            if (iVar66 < iVar7) {
              while( true ) {
                lVar32 = (long)iVar66;
                lVar30 = lVar30 + lVar32 * 0x40;
                lVar30 = ((long)*(int *)(lVar30 + 0x20) * (long)iVar19 -
                         ((long)iVar8 * (long)iVar50 + (long)iVar9 * (long)iVar17 +
                         (long)iVar19 * (long)iVar15)) + (long)*(int *)(lVar30 + 0x24) * (long)iVar9
                         + (long)*(int *)(lVar30 + 0x28) * (long)iVar8;
                if (lVar30 != 0) {
                  lVar20 = FUN_001c5824(pcVar2);
                  lVar21 = FUN_001c5824(pcVar2);
                  lVar22 = FUN_001c5824(pcVar2);
                  lVar23 = FUN_001c5824(pcVar2);
                  lVar24 = *(long *)(param_1 + 0x80) + (long)iVar33 * 0x40;
                  uVar70 = *(undefined8 *)(lVar24 + 0x10);
                  *(undefined8 *)(lVar20 + 0x18) = *(undefined8 *)(lVar24 + 0x18);
                  *(undefined8 *)(lVar20 + 0x10) = uVar70;
                  uVar70 = *(undefined8 *)(lVar24 + 0x20);
                  uVar29 = *(undefined8 *)(lVar24 + 0x30);
                  *(undefined8 *)(lVar20 + 0x28) = *(undefined8 *)(lVar24 + 0x28);
                  *(undefined8 *)(lVar20 + 0x30) = uVar29;
                  *(undefined8 *)(lVar20 + 0x20) = uVar70;
                  *(undefined4 *)(lVar20 + 0x30) = 0;
                  lVar24 = *(long *)(param_1 + 0x80) + (long)iVar31 * 0x40;
                  uVar70 = *(undefined8 *)(lVar24 + 0x10);
                  *(undefined8 *)(lVar21 + 0x18) = *(undefined8 *)(lVar24 + 0x18);
                  *(undefined8 *)(lVar21 + 0x10) = uVar70;
                  uVar70 = *(undefined8 *)(lVar24 + 0x20);
                  uVar29 = *(undefined8 *)(lVar24 + 0x30);
                  *(undefined8 *)(lVar21 + 0x28) = *(undefined8 *)(lVar24 + 0x28);
                  *(undefined8 *)(lVar21 + 0x30) = uVar29;
                  *(undefined8 *)(lVar21 + 0x20) = uVar70;
                  *(undefined4 *)(lVar21 + 0x30) = 0;
                  lVar24 = *(long *)(param_1 + 0x80) + (long)iVar28 * 0x40;
                  uVar70 = *(undefined8 *)(lVar24 + 0x10);
                  *(undefined8 *)(lVar22 + 0x18) = *(undefined8 *)(lVar24 + 0x18);
                  *(undefined8 *)(lVar22 + 0x10) = uVar70;
                  uVar70 = *(undefined8 *)(lVar24 + 0x20);
                  uVar29 = *(undefined8 *)(lVar24 + 0x30);
                  *(undefined8 *)(lVar22 + 0x28) = *(undefined8 *)(lVar24 + 0x28);
                  *(undefined8 *)(lVar22 + 0x30) = uVar29;
                  *(undefined8 *)(lVar22 + 0x20) = uVar70;
                  *(undefined4 *)(lVar22 + 0x30) = 0;
                  lVar24 = *(long *)(param_1 + 0x80) + lVar32 * 0x40;
                  uVar70 = *(undefined8 *)(lVar24 + 0x10);
                  lVar5 = lVar21;
                  if (lVar30 < 1) {
                    lVar5 = lVar20;
                  }
                  *(undefined8 *)(lVar23 + 0x18) = *(undefined8 *)(lVar24 + 0x18);
                  *(undefined8 *)(lVar23 + 0x10) = uVar70;
                  uVar70 = *(undefined8 *)(lVar24 + 0x20);
                  uVar29 = *(undefined8 *)(lVar24 + 0x30);
                  *(undefined8 *)(lVar23 + 0x28) = *(undefined8 *)(lVar24 + 0x28);
                  *(undefined8 *)(lVar23 + 0x30) = uVar29;
                  *(undefined8 *)(lVar23 + 0x20) = uVar70;
                  *(undefined4 *)(lVar23 + 0x30) = 0;
                  if (lVar30 < 1) {
                    lVar20 = lVar21;
                  }
                  lVar30 = FUN_001c6428(pcVar3);
                  lVar24 = FUN_001c6428(pcVar3);
                  lVar21 = FUN_001c6428(pcVar3);
                  lVar25 = FUN_001c6428(pcVar3);
                  *(long *)(lVar30 + 0x10) = lVar5;
                  *(long *)(lVar30 + 0x18) = lVar20;
                  *(long *)(lVar30 + 0x20) = lVar22;
                  *(undefined8 *)(lVar30 + 0x60) = 0xffffffff00000000;
                  *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                  *(int *)(lVar20 + 0x30) = *(int *)(lVar20 + 0x30) + 1;
                  *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
                  iVar10 = *(int *)(lVar20 + 0x20) - *(int *)(lVar5 + 0x20);
                  iVar11 = *(int *)(lVar22 + 0x20) - *(int *)(lVar5 + 0x20);
                  iVar27 = *(int *)(lVar20 + 0x28) - *(int *)(lVar5 + 0x28);
                  iVar12 = *(int *)(lVar20 + 0x24) - *(int *)(lVar5 + 0x24);
                  iVar13 = *(int *)(lVar22 + 0x24) - *(int *)(lVar5 + 0x24);
                  iVar14 = *(int *)(lVar22 + 0x28) - *(int *)(lVar5 + 0x28);
                  iVar69 = iVar14 * iVar12 - iVar13 * iVar27;
                  iVar27 = iVar11 * iVar27 - iVar14 * iVar10;
                  iVar10 = iVar13 * iVar10 - iVar11 * iVar12;
                  *(int *)(lVar30 + 0x40) = iVar69;
                  *(int *)(lVar30 + 0x44) = iVar27;
                  *(int *)(lVar30 + 0x48) = iVar10;
                  *(undefined8 *)(lVar30 + 0x50) = 0;
                  if ((iVar27 != 0 || iVar10 != 0) || iVar69 != 0) {
                    *(long *)(lVar30 + 0x50) =
                         -((long)*(int *)(lVar5 + 0x24) * (long)iVar27 +
                           (long)*(int *)(lVar5 + 0x20) * (long)iVar69 +
                          (long)*(int *)(lVar5 + 0x28) * (long)iVar10);
                  }
                  *(long *)(lVar24 + 0x10) = lVar5;
                  *(long *)(lVar24 + 0x18) = lVar23;
                  *(long *)(lVar24 + 0x20) = lVar20;
                  *(undefined8 *)(lVar24 + 0x60) = 0xffffffff00000000;
                  *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                  *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
                  *(int *)(lVar20 + 0x30) = *(int *)(lVar20 + 0x30) + 1;
                  iVar10 = *(int *)(lVar23 + 0x20) - *(int *)(lVar5 + 0x20);
                  iVar11 = *(int *)(lVar20 + 0x20) - *(int *)(lVar5 + 0x20);
                  iVar27 = *(int *)(lVar23 + 0x28) - *(int *)(lVar5 + 0x28);
                  iVar12 = *(int *)(lVar23 + 0x24) - *(int *)(lVar5 + 0x24);
                  iVar13 = *(int *)(lVar20 + 0x24) - *(int *)(lVar5 + 0x24);
                  iVar14 = *(int *)(lVar20 + 0x28) - *(int *)(lVar5 + 0x28);
                  iVar69 = iVar14 * iVar12 - iVar13 * iVar27;
                  iVar27 = iVar11 * iVar27 - iVar14 * iVar10;
                  iVar10 = iVar13 * iVar10 - iVar11 * iVar12;
                  *(int *)(lVar24 + 0x40) = iVar69;
                  *(int *)(lVar24 + 0x44) = iVar27;
                  *(int *)(lVar24 + 0x48) = iVar10;
                  *(undefined8 *)(lVar24 + 0x50) = 0;
                  if ((iVar27 != 0 || iVar10 != 0) || iVar69 != 0) {
                    *(long *)(lVar24 + 0x50) =
                         -((long)*(int *)(lVar5 + 0x24) * (long)iVar27 +
                           (long)*(int *)(lVar5 + 0x20) * (long)iVar69 +
                          (long)*(int *)(lVar5 + 0x28) * (long)iVar10);
                  }
                  *(long *)(lVar21 + 0x10) = lVar5;
                  *(long *)(lVar21 + 0x18) = lVar22;
                  *(long *)(lVar21 + 0x20) = lVar23;
                  *(undefined8 *)(lVar21 + 0x60) = 0xffffffff00000000;
                  *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                  *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
                  *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
                  iVar10 = *(int *)(lVar22 + 0x20) - *(int *)(lVar5 + 0x20);
                  iVar11 = *(int *)(lVar23 + 0x20) - *(int *)(lVar5 + 0x20);
                  iVar27 = *(int *)(lVar22 + 0x28) - *(int *)(lVar5 + 0x28);
                  iVar12 = *(int *)(lVar22 + 0x24) - *(int *)(lVar5 + 0x24);
                  iVar13 = *(int *)(lVar23 + 0x24) - *(int *)(lVar5 + 0x24);
                  iVar14 = *(int *)(lVar23 + 0x28) - *(int *)(lVar5 + 0x28);
                  iVar69 = iVar14 * iVar12 - iVar13 * iVar27;
                  iVar27 = iVar11 * iVar27 - iVar14 * iVar10;
                  *(int *)(lVar21 + 0x40) = iVar69;
                  *(int *)(lVar21 + 0x44) = iVar27;
                  iVar10 = iVar13 * iVar10 - iVar11 * iVar12;
                  *(int *)(lVar21 + 0x48) = iVar10;
                  *(undefined8 *)(lVar21 + 0x50) = 0;
                  if ((iVar27 != 0 || iVar10 != 0) || iVar69 != 0) {
                    *(long *)(lVar21 + 0x50) =
                         -((long)*(int *)(lVar5 + 0x24) * (long)iVar27 +
                           (long)*(int *)(lVar5 + 0x20) * (long)iVar69 +
                          (long)*(int *)(lVar5 + 0x28) * (long)iVar10);
                  }
                  *(long *)(lVar25 + 0x10) = lVar20;
                  *(long *)(lVar25 + 0x18) = lVar23;
                  *(long *)(lVar25 + 0x20) = lVar22;
                  *(undefined8 *)(lVar25 + 0x60) = 0xffffffff00000000;
                  *(int *)(lVar20 + 0x30) = *(int *)(lVar20 + 0x30) + 1;
                  *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
                  *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
                  iVar10 = *(int *)(lVar23 + 0x20) - *(int *)(lVar20 + 0x20);
                  iVar11 = *(int *)(lVar22 + 0x20) - *(int *)(lVar20 + 0x20);
                  iVar27 = *(int *)(lVar23 + 0x28) - *(int *)(lVar20 + 0x28);
                  iVar12 = *(int *)(lVar23 + 0x24) - *(int *)(lVar20 + 0x24);
                  iVar13 = *(int *)(lVar22 + 0x24) - *(int *)(lVar20 + 0x24);
                  iVar14 = *(int *)(lVar22 + 0x28) - *(int *)(lVar20 + 0x28);
                  iVar69 = iVar14 * iVar12 - iVar13 * iVar27;
                  iVar27 = iVar11 * iVar27 - iVar14 * iVar10;
                  iVar10 = iVar13 * iVar10 - iVar11 * iVar12;
                  *(int *)(lVar25 + 0x40) = iVar69;
                  *(int *)(lVar25 + 0x44) = iVar27;
                  *(int *)(lVar25 + 0x48) = iVar10;
                  *(undefined8 *)(lVar25 + 0x50) = 0;
                  if ((iVar27 != 0 || iVar10 != 0) || iVar69 != 0) {
                    *(long *)(lVar25 + 0x50) =
                         -((long)*(int *)(lVar20 + 0x24) * (long)iVar27 +
                           (long)*(int *)(lVar20 + 0x20) * (long)iVar69 +
                          (long)*(int *)(lVar20 + 0x28) * (long)iVar10);
                  }
                  *(long *)(lVar30 + 0x28) = lVar24 + 2;
                  *(long *)(lVar24 + 0x38) = lVar30;
                  *(long *)(lVar30 + 0x30) = lVar25 + 2;
                  *(long *)(lVar25 + 0x38) = lVar30 + 1;
                  *(long *)(lVar30 + 0x38) = lVar21;
                  *(long *)(lVar21 + 0x28) = lVar30 + 2;
                  *(long *)(lVar24 + 0x28) = lVar21 + 2;
                  *(long *)(lVar21 + 0x30) = lVar25 + 1;
                  *(long *)(lVar21 + 0x38) = lVar24;
                  *(long *)(lVar25 + 0x28) = lVar24 + 1;
                  *(long *)(lVar25 + 0x30) = lVar21 + 1;
                  *(long *)(lVar24 + 0x30) = lVar25;
                  iVar69 = *(int *)(param_1 + 0x88);
                  iVar27 = (int)((long)iVar69 + -1);
                  *(int *)(param_1 + 0x88) = iVar27;
                  if (iVar27 != iVar66) {
                    lVar30 = *(long *)(param_1 + 0x80) + ((long)iVar69 + -1) * 0x40;
                    lVar32 = *(long *)(param_1 + 0x80) + lVar32 * 0x40;
                    uVar70 = *(undefined8 *)(lVar30 + 0x18);
                    *(undefined8 *)(lVar32 + 0x28) = *(undefined8 *)(lVar30 + 0x28);
                    uVar29 = *(undefined8 *)(lVar30 + 0x20);
                    *(undefined8 *)(lVar32 + 0x30) = *(undefined8 *)(lVar30 + 0x30);
                    *(undefined8 *)(lVar32 + 0x18) = uVar70;
                    *(undefined8 *)(lVar32 + 0x20) = uVar29;
                    *(undefined8 *)(lVar32 + 0x10) = *(undefined8 *)(lVar30 + 0x10);
                    iVar66 = *(int *)(param_1 + 0x88);
                  }
                  iVar69 = (int)((long)iVar66 + -1);
                  *(int *)(param_1 + 0x88) = iVar69;
                  if (iVar69 != iVar28) {
                    lVar30 = *(long *)(param_1 + 0x80) + ((long)iVar66 + -1) * 0x40;
                    lVar32 = *(long *)(param_1 + 0x80) + (long)iVar28 * 0x40;
                    uVar70 = *(undefined8 *)(lVar30 + 0x18);
                    *(undefined8 *)(lVar32 + 0x28) = *(undefined8 *)(lVar30 + 0x28);
                    uVar29 = *(undefined8 *)(lVar30 + 0x20);
                    *(undefined8 *)(lVar32 + 0x30) = *(undefined8 *)(lVar30 + 0x30);
                    *(undefined8 *)(lVar32 + 0x18) = uVar70;
                    *(undefined8 *)(lVar32 + 0x20) = uVar29;
                    *(undefined8 *)(lVar32 + 0x10) = *(undefined8 *)(lVar30 + 0x10);
                    iVar28 = *(int *)(param_1 + 0x88);
                  }
                  iVar66 = (int)((long)iVar28 + -1);
                  *(int *)(param_1 + 0x88) = iVar66;
                  if (iVar66 != iVar31) {
                    lVar30 = *(long *)(param_1 + 0x80) + ((long)iVar28 + -1) * 0x40;
                    lVar32 = *(long *)(param_1 + 0x80) + (long)iVar31 * 0x40;
                    uVar70 = *(undefined8 *)(lVar30 + 0x18);
                    *(undefined8 *)(lVar32 + 0x28) = *(undefined8 *)(lVar30 + 0x28);
                    uVar29 = *(undefined8 *)(lVar30 + 0x20);
                    *(undefined8 *)(lVar32 + 0x30) = *(undefined8 *)(lVar30 + 0x30);
                    *(undefined8 *)(lVar32 + 0x18) = uVar70;
                    *(undefined8 *)(lVar32 + 0x20) = uVar29;
                    *(undefined8 *)(lVar32 + 0x10) = *(undefined8 *)(lVar30 + 0x10);
                    iVar31 = *(int *)(param_1 + 0x88);
                  }
                  iVar28 = (int)((long)iVar31 + -1);
                  *(int *)(param_1 + 0x88) = iVar28;
                  if (iVar28 != iVar33) {
                    lVar30 = *(long *)(param_1 + 0x80) + (long)iVar33 * 0x40;
                    lVar32 = *(long *)(param_1 + 0x80) + ((long)iVar31 + -1) * 0x40;
                    uVar70 = *(undefined8 *)(lVar32 + 0x18);
                    uVar29 = *(undefined8 *)(lVar32 + 0x20);
                    uVar6 = *(undefined8 *)(lVar32 + 0x30);
                    *(undefined8 *)(lVar30 + 0x28) = *(undefined8 *)(lVar32 + 0x28);
                    *(undefined8 *)(lVar30 + 0x30) = uVar6;
                    *(undefined8 *)(lVar30 + 0x18) = uVar70;
                    *(undefined8 *)(lVar30 + 0x20) = uVar29;
                    *(undefined8 *)(lVar30 + 0x10) = *(undefined8 *)(lVar32 + 0x10);
                  }
                  bVar26 = true;
                  iVar33 = iVar7;
                  iVar31 = iVar7;
                  iVar28 = iVar7;
                  iVar66 = iVar7;
                }
                iVar66 = iVar66 + 1;
                if (iVar7 <= iVar66) break;
                lVar30 = *(long *)(param_1 + 0x80);
              }
            }
            if (!bVar26) {
              return 0;
            }
            bVar26 = true;
          }
          iVar28 = iVar28 + 1;
          if (iVar7 <= iVar28) break;
          lVar30 = *(long *)(param_1 + 0x80);
        }
      }
      if (iVar7 <= iVar31 + 1) break;
      lVar30 = *(long *)(param_1 + 0x80);
      iVar19 = iVar31 + 1;
      iVar28 = iVar31;
    }
    iVar19 = iVar33 + 1;
  } while( true );
}


