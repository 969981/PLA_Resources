/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fd4ba0; name: FUN_02fd4ba0
 */


/* WARNING: Removing unreachable block (ram,0x02fd55cc) */
/* WARNING: Removing unreachable block (ram,0x02fd4fa8) */
/* WARNING: Removing unreachable block (ram,0x02fd5c0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fd4ba0(long *param_1,float *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  float *pfVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  short sVar9;
  undefined2 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined4 *puVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  byte bVar28;
  byte bVar29;
  undefined1 uVar30;
  int iVar31;
  uint uVar32;
  undefined1 auVar35 [12];
  undefined1 auVar42 [12];
  undefined1 auVar43 [12];
  int iVar56;
  int iVar57;
  int iVar58;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint uVar33;
  uint uVar34;
  undefined1 auVar36 [12];
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  undefined1 auVar39 [12];
  undefined1 auVar40 [12];
  undefined1 auVar41 [12];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  int iVar59;
  int iVar68;
  int iVar69;
  int iVar70;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  int iVar71;
  float fVar72;
  int iVar79;
  int iVar81;
  int iVar83;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar80;
  float fVar82;
  float fVar84;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  int iVar85;
  float fVar86;
  int iVar87;
  float fVar88;
  float fVar89;
  int iVar90;
  float fVar91;
  int iVar93;
  float fVar94;
  long lVar92;
  int iVar95;
  int iVar100;
  int iVar101;
  int iVar102;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  int iVar103;
  float fVar104;
  int iVar110;
  float fVar111;
  int iVar112;
  float fVar113;
  int iVar114;
  float fVar115;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar116;
  undefined8 uVar117;
  float fVar123;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar122;
  float fVar124;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined8 uVar125;
  long local_9e0;
  byte local_930;
  byte bStack_92f;
  byte bStack_92e;
  byte bStack_92d;
  byte bStack_92c;
  byte bStack_92b;
  byte bStack_92a;
  byte bStack_929;
  byte bStack_928;
  byte bStack_927;
  byte bStack_926;
  byte bStack_925;
  byte bStack_924;
  byte bStack_923;
  byte bStack_922;
  byte bStack_921;
  undefined4 local_910 [256];
  undefined8 *local_510;
  undefined4 local_500 [256];
  undefined4 *local_100;
  undefined2 local_e8 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  uint local_c0;
  undefined8 local_b8;
  undefined2 local_b0 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar15 = _UNK_03889708;
  uVar14 = _DAT_03889700;
  if (*param_1 == 0) {
    local_9e0 = 0;
  }
  else {
    local_9e0 = *param_1 + (long)param_1;
  }
  local_910[0] = 1;
  local_510 = (undefined8 *)((ulong)local_910 | 4);
  puVar17 = (undefined8 *)((ulong)local_b0 | 4);
  puVar26 = (undefined8 *)((ulong)local_e8 | 4);
  puVar27 = (undefined8 *)((ulong)&local_78 | 4);
  puVar19 = (undefined4 *)((ulong)local_500 | 4);
  uVar20 = 1;
  do {
    puVar18 = (undefined8 *)((long)local_510 - 4);
    pfVar3 = (float *)(local_9e0 + (ulong)*(uint *)((long)local_510 - 4) * 0x80);
    local_930 = (byte)uVar14;
    bStack_92f = (byte)((ulong)uVar14 >> 8);
    bStack_92e = (byte)((ulong)uVar14 >> 0x10);
    bStack_92d = (byte)((ulong)uVar14 >> 0x18);
    bStack_92c = (byte)((ulong)uVar14 >> 0x20);
    bStack_92b = (byte)((ulong)uVar14 >> 0x28);
    bStack_92a = (byte)((ulong)uVar14 >> 0x30);
    bStack_929 = (byte)((ulong)uVar14 >> 0x38);
    bStack_928 = (byte)uVar15;
    bStack_927 = (byte)((ulong)uVar15 >> 8);
    bStack_926 = (byte)((ulong)uVar15 >> 0x10);
    bStack_925 = (byte)((ulong)uVar15 >> 0x18);
    bStack_924 = (byte)((ulong)uVar15 >> 0x20);
    bStack_923 = (byte)((ulong)uVar15 >> 0x28);
    bStack_922 = (byte)((ulong)uVar15 >> 0x30);
    bStack_921 = (byte)((ulong)uVar15 >> 0x38);
    if ((int)uVar20 < 2) {
      iVar31 = -(uint)(*param_2 <= pfVar3[4]);
      iVar56 = -(uint)(param_2[1] <= pfVar3[5]);
      iVar57 = -(uint)(param_2[2] <= pfVar3[6]);
      iVar58 = -(uint)(param_2[3] <= pfVar3[7]);
      iVar59 = -(uint)(*pfVar3 <= param_2[4]);
      iVar68 = -(uint)(pfVar3[1] <= param_2[5]);
      iVar69 = -(uint)(pfVar3[2] <= param_2[6]);
      iVar70 = -(uint)(pfVar3[3] <= param_2[7]);
      iVar71 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= pfVar3[0xc]);
      iVar79 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <= pfVar3[0xd]);
      iVar81 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= pfVar3[0xe]);
      iVar83 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <= pfVar3[0xf]);
      iVar85 = -(uint)((float)*(undefined8 *)(pfVar3 + 8) <= param_2[0xc]);
      iVar87 = -(uint)((float)((ulong)*(undefined8 *)(pfVar3 + 8) >> 0x20) <= param_2[0xd]);
      iVar90 = -(uint)((float)*(undefined8 *)(pfVar3 + 10) <= param_2[0xe]);
      iVar93 = -(uint)((float)((ulong)*(undefined8 *)(pfVar3 + 10) >> 0x20) <= param_2[0xf]);
      iVar95 = -(uint)(param_2[0x10] <= pfVar3[0x14]);
      iVar100 = -(uint)(param_2[0x11] <= pfVar3[0x15]);
      iVar101 = -(uint)(param_2[0x12] <= pfVar3[0x16]);
      iVar102 = -(uint)(param_2[0x13] <= pfVar3[0x17]);
      iVar103 = -(uint)(pfVar3[0x10] <= param_2[0x14]);
      iVar110 = -(uint)(pfVar3[0x11] <= param_2[0x15]);
      iVar112 = -(uint)(pfVar3[0x12] <= param_2[0x16]);
      iVar114 = -(uint)(pfVar3[0x13] <= param_2[0x17]);
      iVar31 = CONCAT13((byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar31 >> 0x18) &
                        (byte)((uint)iVar71 >> 0x18) & (byte)((uint)iVar85 >> 0x18) &
                        (byte)((uint)iVar95 >> 0x18) & (byte)((uint)iVar103 >> 0x18) & bStack_92d,
                        CONCAT12((byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar31 >> 0x10) &
                                 (byte)((uint)iVar71 >> 0x10) & (byte)((uint)iVar85 >> 0x10) &
                                 (byte)((uint)iVar95 >> 0x10) & (byte)((uint)iVar103 >> 0x10) &
                                 bStack_92e,
                                 CONCAT11((byte)((uint)iVar59 >> 8) & (byte)((uint)iVar31 >> 8) &
                                          (byte)((uint)iVar71 >> 8) & (byte)((uint)iVar85 >> 8) &
                                          (byte)((uint)iVar95 >> 8) & (byte)((uint)iVar103 >> 8) &
                                          bStack_92f,
                                          (byte)iVar59 & (byte)iVar31 & (byte)iVar71 & (byte)iVar85
                                          & (byte)iVar95 & (byte)iVar103 & local_930)));
      auVar38._0_8_ =
           CONCAT17((byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar56 >> 0x18) &
                    (byte)((uint)iVar79 >> 0x18) & (byte)((uint)iVar87 >> 0x18) &
                    (byte)((uint)iVar100 >> 0x18) & (byte)((uint)iVar110 >> 0x18) & bStack_929,
                    CONCAT16((byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar56 >> 0x10) &
                             (byte)((uint)iVar79 >> 0x10) & (byte)((uint)iVar87 >> 0x10) &
                             (byte)((uint)iVar100 >> 0x10) & (byte)((uint)iVar110 >> 0x10) &
                             bStack_92a,
                             CONCAT15((byte)((uint)iVar68 >> 8) & (byte)((uint)iVar56 >> 8) &
                                      (byte)((uint)iVar79 >> 8) & (byte)((uint)iVar87 >> 8) &
                                      (byte)((uint)iVar100 >> 8) & (byte)((uint)iVar110 >> 8) &
                                      bStack_92b,
                                      CONCAT14((byte)iVar68 & (byte)iVar56 & (byte)iVar79 &
                                               (byte)iVar87 & (byte)iVar100 & (byte)iVar110 &
                                               bStack_92c,iVar31))));
      auVar38[8] = (byte)iVar69 & (byte)iVar57 & (byte)iVar81 & (byte)iVar90 & (byte)iVar101 &
                   (byte)iVar112 & bStack_928;
      auVar38[9] = (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar57 >> 8) & (byte)((uint)iVar81 >> 8)
                   & (byte)((uint)iVar90 >> 8) & (byte)((uint)iVar101 >> 8) &
                   (byte)((uint)iVar112 >> 8) & bStack_927;
      auVar38[10] = (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar57 >> 0x10) &
                    (byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar90 >> 0x10) &
                    (byte)((uint)iVar101 >> 0x10) & (byte)((uint)iVar112 >> 0x10) & bStack_926;
      auVar38[0xb] = (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar57 >> 0x18) &
                     (byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar90 >> 0x18) &
                     (byte)((uint)iVar101 >> 0x18) & (byte)((uint)iVar112 >> 0x18) & bStack_925;
      auVar45[0xc] = (byte)iVar70 & (byte)iVar58 & (byte)iVar83 & (byte)iVar93 & (byte)iVar102 &
                     (byte)iVar114 & bStack_924;
      auVar45._0_12_ = auVar38;
      auVar45[0xd] = (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar58 >> 8) &
                     (byte)((uint)iVar83 >> 8) & (byte)((uint)iVar93 >> 8) &
                     (byte)((uint)iVar102 >> 8) & (byte)((uint)iVar114 >> 8) & bStack_923;
      auVar45[0xe] = (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar58 >> 0x10) &
                     (byte)((uint)iVar83 >> 0x10) & (byte)((uint)iVar93 >> 0x10) &
                     (byte)((uint)iVar102 >> 0x10) & (byte)((uint)iVar114 >> 0x10) & bStack_922;
      auVar45[0xf] = (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar58 >> 0x18) &
                     (byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar93 >> 0x18) &
                     (byte)((uint)iVar102 >> 0x18) & (byte)((uint)iVar114 >> 0x18) & bStack_921;
      uVar34 = iVar31 + (int)((ulong)auVar38._0_8_ >> 0x20) + auVar38._8_4_ + auVar45._12_4_;
      iVar31 = *(int *)(&DAT_03aadfe0 + (ulong)uVar34 * 4);
      auVar45 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar3 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar34 * 0x10));
      if (*(char *)(pfVar3 + 0x1c) == '\0') {
        *(long *)((long)local_510 - 4) = auVar45._0_8_;
        auVar45 = NEON_ext(auVar45,auVar45,8,1);
        *(long *)((long)local_510 + 4) = auVar45._0_8_;
        local_510 = (undefined8 *)((long)puVar18 + (long)iVar31 * 4);
        goto LAB_02fd4c58;
      }
      local_510 = puVar18;
      if (uVar34 != 0) {
        iVar56 = 0;
LAB_02fd5380:
        switch(iVar56) {
        case 0:
          iVar57 = auVar45._0_4_;
          break;
        case 1:
          iVar57 = auVar45._4_4_;
          break;
        case 2:
          iVar57 = auVar45._8_4_;
          break;
        case 3:
          iVar57 = auVar45._12_4_;
          break;
        default:
          iVar57 = 0;
        }
        *(int *)(param_3 + 0xc) = iVar57 << 9;
        lVar21 = *(long *)(param_3[2] + 0x48);
        if (lVar21 == 0) {
          lVar21 = 0;
        }
        else {
          lVar21 = lVar21 + param_3[2] + 0x48;
        }
        piVar4 = (int *)(lVar21 + 0x60 + (long)iVar57 * 0x40 + (long)*(int *)(lVar21 + 0x60));
        param_3[0xd] = (long)piVar4;
        lVar21 = 0;
        if (*piVar4 != 0) {
          lVar21 = (long)piVar4 + (long)*piVar4;
        }
        param_3[0xe] = lVar21;
        sVar9 = (short)piVar4[0xe];
        if ((char)param_3[0x1d] == '\0') {
          auVar97._0_8_ = CONCAT44((int)sVar9,(int)sVar9);
          auVar97._8_4_ = (int)sVar9;
          auVar97._12_4_ = (int)sVar9;
          param_3[0x11] = auVar97._8_8_;
          param_3[0x10] = auVar97._0_8_;
          sVar9 = *(short *)((long)piVar4 + 0x3a);
          auVar119._0_8_ = CONCAT44((int)sVar9,(int)sVar9);
          auVar119._8_4_ = (int)sVar9;
          auVar119._12_4_ = (int)sVar9;
          param_3[0x13] = auVar119._8_8_;
          param_3[0x12] = auVar119._0_8_;
          sVar9 = (short)piVar4[0xf];
          auVar75._4_4_ = (int)sVar9;
          auVar75._0_4_ = (int)sVar9;
          auVar75._8_4_ = (int)sVar9;
          auVar75._12_4_ = (int)sVar9;
        }
        else {
          auVar97._0_8_ = CONCAT26(sVar9,CONCAT24(sVar9,CONCAT22(sVar9,sVar9)));
          auVar97._8_2_ = sVar9;
          auVar97._10_2_ = sVar9;
          auVar97._12_2_ = sVar9;
          auVar97._14_2_ = sVar9;
          param_3[0x11] = auVar97._8_8_;
          param_3[0x10] = auVar97._0_8_;
          uVar10 = *(undefined2 *)((long)piVar4 + 0x3a);
          auVar119._0_8_ = CONCAT26(uVar10,CONCAT24(uVar10,CONCAT22(uVar10,uVar10)));
          auVar119._8_2_ = uVar10;
          auVar119._10_2_ = uVar10;
          auVar119._12_2_ = uVar10;
          auVar119._14_2_ = uVar10;
          param_3[0x13] = auVar119._8_8_;
          param_3[0x12] = auVar119._0_8_;
          uVar10 = (undefined2)piVar4[0xf];
          auVar75._2_2_ = uVar10;
          auVar75._0_2_ = uVar10;
          auVar75._4_2_ = uVar10;
          auVar75._6_2_ = uVar10;
          auVar75._8_2_ = uVar10;
          auVar75._10_2_ = uVar10;
          auVar75._12_2_ = uVar10;
          auVar75._14_2_ = uVar10;
        }
        fVar11 = *(float *)(param_3 + 0x3c);
        fVar12 = *(float *)((long)param_3 + 0x1e4);
        fVar13 = *(float *)(param_3 + 0x3d);
        param_3[0x15] = auVar75._8_8_;
        param_3[0x14] = auVar75._0_8_;
        fVar72 = (float)piVar4[0xb];
        fVar86 = (float)param_3[0x3a];
        fVar88 = (float)((ulong)param_3[0x3a] >> 0x20);
        fVar91 = (float)param_3[0x3b];
        *(float *)(param_3 + 0x17) = fVar72;
        *(float *)((long)param_3 + 0xbc) = fVar72;
        *(float *)(param_3 + 0x16) = fVar72;
        *(float *)((long)param_3 + 0xb4) = fVar72;
        fVar104 = (float)piVar4[0xc];
        *(float *)(param_3 + 0x19) = fVar104;
        *(float *)((long)param_3 + 0xcc) = fVar104;
        *(float *)(param_3 + 0x18) = fVar104;
        *(float *)((long)param_3 + 0xc4) = fVar104;
        iVar57 = piVar4[0xd];
        lVar25 = CONCAT44(iVar57,iVar57);
        lVar92 = CONCAT44(iVar57,iVar57);
        param_3[0x1b] = lVar92;
        param_3[0x1a] = lVar25;
        local_500[0] = 0;
        local_100 = puVar19;
        fVar80 = fVar72;
        fVar82 = fVar72;
        fVar84 = fVar72;
        fVar111 = fVar104;
        fVar113 = fVar104;
        fVar115 = fVar104;
        do {
          puVar22 = local_100 + -1;
          puVar18 = (undefined8 *)(lVar21 + (ulong)(uint)local_100[-1] * 0x1c);
          uVar117 = *puVar18;
          uVar125 = *(undefined8 *)((long)puVar18 + 4);
          bVar28 = (byte)((ulong)uVar125 >> 8);
          bVar29 = (byte)((ulong)uVar117 >> 8);
          auVar120._0_4_ = auVar97._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar117) & 0xffff);
          auVar120._4_4_ = auVar97._4_4_ + (uint)bVar29;
          auVar120._8_4_ = auVar97._8_4_ + (uint)(byte)((ulong)uVar117 >> 0x10);
          auVar120._12_4_ = auVar97._12_4_ + (uint)(byte)((ulong)uVar117 >> 0x18);
          auVar76._0_4_ = auVar97._0_4_ + ((CONCAT12(bVar28,(short)uVar125) & 0xff00ff) & 0xffff);
          auVar76._4_4_ = auVar97._4_4_ + (uint)bVar28;
          auVar76._8_4_ = auVar97._8_4_ + (uint)(byte)((ulong)uVar125 >> 0x10);
          auVar76._12_4_ = auVar97._12_4_ + (uint)(byte)((ulong)uVar125 >> 0x18);
          uVar125 = *(undefined8 *)((long)puVar18 + 0xc);
          bVar28 = (byte)((ulong)uVar125 >> 8);
          auVar106 = NEON_scvtf(auVar120,4);
          auVar97 = NEON_scvtf(auVar76,4);
          fVar116 = fVar72 * auVar106._0_4_;
          fVar122 = fVar80 * auVar106._4_4_;
          fVar123 = fVar82 * auVar106._8_4_;
          fVar124 = fVar84 * auVar106._12_4_;
          fVar72 = fVar72 * auVar97._0_4_;
          fVar80 = fVar80 * auVar97._4_4_;
          fVar82 = fVar82 * auVar97._8_4_;
          fVar84 = fVar84 * auVar97._12_4_;
          uVar117 = puVar18[1];
          bVar29 = (byte)((ulong)uVar117 >> 8);
          auVar98._0_4_ = auVar119._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar117) & 0xffff);
          auVar98._4_4_ = auVar119._4_4_ + (uint)bVar29;
          auVar98._8_4_ = auVar119._8_4_ + (uint)(byte)((ulong)uVar117 >> 0x10);
          auVar98._12_4_ = auVar119._12_4_ + (uint)(byte)((ulong)uVar117 >> 0x18);
          auVar63._0_4_ = auVar119._0_4_ + ((CONCAT12(bVar28,(short)uVar125) & 0xff00ff) & 0xffff);
          auVar63._4_4_ = auVar119._4_4_ + (uint)bVar28;
          auVar63._8_4_ = auVar119._8_4_ + (uint)(byte)((ulong)uVar125 >> 0x10);
          auVar63._12_4_ = auVar119._12_4_ + (uint)(byte)((ulong)uVar125 >> 0x18);
          auVar97 = NEON_scvtf(auVar98,4);
          uVar125 = *(undefined8 *)((long)puVar18 + 0x14);
          auVar119 = NEON_scvtf(auVar63,4);
          bVar28 = (byte)((ulong)uVar125 >> 8);
          uVar117 = puVar18[2];
          bVar29 = (byte)((ulong)uVar117 >> 8);
          auVar107._0_4_ = auVar75._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar117) & 0xffff);
          auVar107._4_4_ = auVar75._4_4_ + (uint)bVar29;
          auVar107._8_4_ = auVar75._8_4_ + (uint)(byte)((ulong)uVar117 >> 0x10);
          auVar107._12_4_ = auVar75._12_4_ + (uint)(byte)((ulong)uVar117 >> 0x18);
          auVar106._0_4_ = auVar75._0_4_ + ((CONCAT12(bVar28,(short)uVar125) & 0xff00ff) & 0xffff);
          auVar106._4_4_ = auVar75._4_4_ + (uint)bVar28;
          auVar106._8_4_ = auVar75._8_4_ + (uint)(byte)((ulong)uVar125 >> 0x10);
          auVar106._12_4_ = auVar75._12_4_ + (uint)(byte)((ulong)uVar125 >> 0x18);
          auVar108 = NEON_scvtf(auVar107,4);
          auVar75 = NEON_scvtf(auVar106,4);
          iVar103 = -(uint)(fVar122 <= fVar11);
          iVar110 = -(uint)(fVar123 <= fVar11);
          iVar112 = -(uint)(fVar124 <= fVar11);
          fVar89 = (float)((ulong)lVar25 >> 0x20);
          fVar94 = (float)((ulong)lVar92 >> 0x20);
          iVar83 = -(uint)(fVar86 <= fVar80);
          iVar85 = -(uint)(fVar86 <= fVar82);
          iVar87 = -(uint)(fVar86 <= fVar84);
          iVar68 = -(uint)(fVar88 <= fVar111 * auVar119._4_4_);
          iVar69 = -(uint)(fVar88 <= fVar113 * auVar119._8_4_);
          iVar70 = -(uint)(fVar88 <= fVar115 * auVar119._12_4_);
          iVar71 = -(uint)(fVar122 <= fVar80);
          iVar79 = -(uint)(fVar123 <= fVar82);
          iVar81 = -(uint)(fVar124 <= fVar84);
          iVar90 = -(uint)(fVar111 * auVar97._4_4_ <= fVar12);
          iVar93 = -(uint)(fVar113 * auVar97._8_4_ <= fVar12);
          iVar95 = -(uint)(fVar115 * auVar97._12_4_ <= fVar12);
          iVar57 = -(uint)(fVar91 <= fVar89 * auVar75._4_4_);
          iVar58 = -(uint)(fVar91 <= (float)lVar92 * auVar75._8_4_);
          iVar59 = -(uint)(fVar91 <= fVar94 * auVar75._12_4_);
          iVar100 = -(uint)(fVar89 * auVar108._4_4_ <= fVar13);
          iVar101 = -(uint)((float)lVar92 * auVar108._8_4_ <= fVar13);
          iVar102 = -(uint)(fVar94 * auVar108._12_4_ <= fVar13);
          uVar34 = (uint)(byte)(-(fVar86 <= fVar72) & -(fVar116 <= fVar11) & -(fVar116 <= fVar72) &
                                -(fVar104 * auVar97._0_4_ <= fVar12) &
                                -(fVar88 <= fVar104 * auVar119._0_4_) &
                                -((float)lVar25 * auVar108._0_4_ <= fVar13) &
                               -(fVar91 <= (float)lVar25 * auVar75._0_4_));
          auVar39._0_8_ =
               CONCAT17((byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar103 >> 0x18) &
                        (byte)((uint)iVar71 >> 0x18) & (byte)((uint)iVar90 >> 0x18) &
                        (byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar100 >> 0x18) &
                        (byte)((uint)iVar57 >> 0x18),
                        (uint7)CONCAT14((byte)iVar83 & (byte)iVar103 & (byte)iVar71 & (byte)iVar90 &
                                        (byte)iVar68 & (byte)iVar100 & (byte)iVar57,uVar34));
          auVar39[8] = (byte)iVar85 & (byte)iVar110 & (byte)iVar79 & (byte)iVar93 & (byte)iVar69 &
                       (byte)iVar101 & (byte)iVar58;
          auVar39[9] = (byte)((uint)iVar85 >> 8) & (byte)((uint)iVar110 >> 8) &
                       (byte)((uint)iVar79 >> 8) & (byte)((uint)iVar93 >> 8) &
                       (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar101 >> 8) &
                       (byte)((uint)iVar58 >> 8);
          auVar39[10] = (byte)((uint)iVar85 >> 0x10) & (byte)((uint)iVar110 >> 0x10) &
                        (byte)((uint)iVar79 >> 0x10) & (byte)((uint)iVar93 >> 0x10) &
                        (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar101 >> 0x10) &
                        (byte)((uint)iVar58 >> 0x10);
          auVar39[0xb] = (byte)((uint)iVar85 >> 0x18) & (byte)((uint)iVar110 >> 0x18) &
                         (byte)((uint)iVar79 >> 0x18) & (byte)((uint)iVar93 >> 0x18) &
                         (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar101 >> 0x18) &
                         (byte)((uint)iVar58 >> 0x18);
          auVar108[0xc] =
               (byte)iVar87 & (byte)iVar112 & (byte)iVar81 & (byte)iVar95 & (byte)iVar70 &
               (byte)iVar102 & (byte)iVar59;
          auVar108._0_12_ = auVar39;
          auVar108[0xd] =
               (byte)((uint)iVar87 >> 8) & (byte)((uint)iVar112 >> 8) & (byte)((uint)iVar81 >> 8) &
               (byte)((uint)iVar95 >> 8) & (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar102 >> 8) &
               (byte)((uint)iVar59 >> 8);
          auVar108[0xe] =
               (byte)((uint)iVar87 >> 0x10) & (byte)((uint)iVar112 >> 0x10) &
               (byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar95 >> 0x10) &
               (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar102 >> 0x10) &
               (byte)((uint)iVar59 >> 0x10);
          auVar108[0xf] =
               (byte)((uint)iVar87 >> 0x18) & (byte)((uint)iVar112 >> 0x18) &
               (byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar95 >> 0x18) &
               (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar102 >> 0x18) &
               (byte)((uint)iVar59 >> 0x18);
          uVar117 = puVar18[3];
          uVar30 = (undefined1)((ulong)uVar117 >> 8);
          auVar64._6_2_ = 0;
          auVar64._0_6_ =
               (uint6)CONCAT14(uVar30,(uint)CONCAT12(uVar30,(ushort)(byte)uVar117)) & 0xffff0000ffff
          ;
          auVar64[8] = (char)((ulong)uVar117 >> 0x10);
          auVar64._9_3_ = 0;
          auVar64[0xc] = (char)((ulong)uVar117 >> 0x18);
          auVar64._13_3_ = 0;
          bVar28 = (byte)((int)(uVar34 << 0x1f) >> 0x1f);
          iVar57 = CONCAT13(bVar28 & bStack_92d,
                            CONCAT12(bVar28 & bStack_92e,
                                     CONCAT11(bVar28 & bStack_92f,bVar28 & local_930)));
          bVar28 = (byte)(((int)((ulong)auVar39._0_8_ >> 0x20) << 0x1f) >> 0x1f);
          auVar40._0_8_ =
               CONCAT17(bVar28 & bStack_929,
                        CONCAT16(bVar28 & bStack_92a,
                                 CONCAT15(bVar28 & bStack_92b,CONCAT14(bVar28 & bStack_92c,iVar57)))
                       );
          bVar28 = (byte)((auVar39._8_4_ << 0x1f) >> 0x1f);
          auVar40[8] = bVar28 & bStack_928;
          auVar40[9] = bVar28 & bStack_927;
          auVar40[10] = bVar28 & bStack_926;
          auVar40[0xb] = bVar28 & bStack_925;
          bVar28 = (byte)((auVar108._12_4_ << 0x1f) >> 0x1f);
          auVar50[0xc] = bVar28 & bStack_924;
          auVar50._0_12_ = auVar40;
          auVar50[0xd] = bVar28 & bStack_923;
          auVar50[0xe] = bVar28 & bStack_922;
          auVar50[0xf] = bVar28 & bStack_921;
          uVar32 = iVar57 + (int)((ulong)auVar40._0_8_ >> 0x20) + auVar40._8_4_ + auVar50._12_4_;
          auVar75 = a64_TBL(ZEXT816(0),auVar64,
                            *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar32 * 0x10));
          uVar34 = *(uint *)(&DAT_03aadfe0 + (ulong)uVar32 * 4);
          if (*(byte *)((long)puVar18 + 0x1b) < *(byte *)((long)puVar18 + 0x1a)) {
            cVar8 = *(char *)((long)param_3 + 0x101);
            local_100 = puVar22;
            if (uVar32 != 0 && cVar8 == '\0') {
              uVar32 = 0;
LAB_02fd55e8:
              switch(uVar32) {
              default:
                iVar57 = auVar75._0_4_;
                break;
              case 1:
                iVar57 = auVar75._4_4_;
                break;
              case 2:
                iVar57 = auVar75._8_4_;
                break;
              case 3:
                iVar57 = auVar75._12_4_;
              }
              do {
                uVar33 = 0;
                uVar23 = *(uint *)(param_3[0xd] + 8 +
                                  (long)iVar57 * 4 + (long)*(int *)(param_3[0xd] + 8));
                uVar24 = 1;
                if ((uVar23 >> 8 & 0xff) <= uVar23 >> 0x18 &&
                    (uVar23 >> 0x10 & 0xff) != uVar23 >> 0x18) {
                  uVar24 = 2;
                }
                local_78 = *(undefined8 *)param_3[4];
                uStack_70 = ((undefined8 *)param_3[4])[1];
                do {
                  lVar21 = param_3[2];
                  puVar18 = (undefined8 *)param_3[3];
                  uVar23 = *(uint *)(param_3 + 0xc) | iVar57 << 1;
                  uVar7 = ((uVar23 | uVar33) + 1 <<
                          (ulong)(-((uint)*(byte *)(lVar21 + 0x1c) + *(int *)((long)puVar18 + 0x1c))
                                 & 0x1f)) - 1 |
                          (&DAT_03aa74b0)[*(int *)((long)puVar18 + 0x1c)] & *(uint *)(puVar18 + 3);
                  plVar16 = *(long **)*param_3;
                  if (plVar16 == (long *)0x0) {
LAB_02fd5798:
                    plVar16 = (long *)param_3[0x1f];
                    iVar59 = (int)plVar16[1];
                    lVar21 = *plVar16;
                    iVar58 = iVar59 + 1;
                    if ((int)(*(uint *)((long)plVar16 + 0xc) & 0x3fffffff) <= iVar59) {
                      lVar21 = FUN_02f7f7b8(PTR_PTR_0434a080,iVar58);
                      iVar59 = (int)plVar16[1];
                      *plVar16 = lVar21;
                    }
                    *(uint *)(lVar21 + (long)iVar59 * 4) = uVar7;
                    *(int *)(plVar16 + 1) = iVar58;
                    bVar1 = false;
                    if ((char)param_3[0x20] != '\0') {
                      bVar1 = 0 < *(int *)(param_3[0x1f] + 8);
                    }
                    *(byte *)((long)param_3 + 0x101) = *(byte *)((long)param_3 + 0x101) | bVar1;
                  }
                  else {
                    lVar25 = *(long *)(lVar21 + 0x48);
                    if (lVar25 == 0) {
                      lVar25 = 0;
                    }
                    else {
                      lVar25 = lVar25 + lVar21 + 0x48;
                    }
                    piVar4 = (int *)(lVar25 + 0x40);
                    if (*(int *)(lVar25 + 0x44) == 2) {
                      lVar25 = (long)*piVar4;
                    }
                    else {
                      iVar59 = *piVar4;
                      iVar68 = 0;
                      iVar58 = *(int *)(lVar25 + 0x44) + -1;
                      while( true ) {
                        uVar2 = iVar58 + iVar68;
                        if ((int)uVar2 < 0) {
                          uVar2 = uVar2 + 1;
                        }
                        uVar6 = (int)uVar2 >> 1;
                        lVar92 = (long)((ulong)uVar2 << 0x20) >> 0x21;
                        uVar2 = *(uint *)((long)piVar4 +
                                         (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 |
                                         (ulong)uVar6 << 3) + (long)iVar59);
                        lVar25 = lVar92 + 1;
                        if ((uVar2 <= uVar23) &&
                           (uVar23 < *(uint *)((long)piVar4 + lVar25 * 8 + (long)iVar59))) break;
                        iVar69 = (int)lVar25;
                        if (uVar23 <= uVar2) {
                          iVar58 = uVar6 - 1;
                          iVar69 = iVar68;
                        }
                        iVar68 = iVar69;
                      }
                      lVar25 = lVar92 * 8 + (long)iVar59;
                    }
                    (**(code **)(*plVar16 + 0x40))
                              (plVar16,*(undefined2 *)((long)piVar4 + lVar25 + 4),6,*puVar18,
                               puVar18[1],lVar21,uVar7,0,&local_78);
                    lVar21 = *param_3;
                    if (*(long *)(lVar21 + 8) == 0) goto LAB_02fd5798;
                    local_b0[0] = *(undefined2 *)(lVar21 + 0x10);
                    uVar117 = *(undefined8 *)(lVar21 + 0x14);
                    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(lVar21 + 0x1c);
                    *puVar17 = uVar117;
                    puVar18 = (undefined8 *)param_3[0x1e];
                    local_a0 = *puVar18;
                    local_98 = puVar18[1];
                    local_90 = puVar18[2];
                    local_88 = *(undefined4 *)(puVar18 + 3);
                    local_e8[0] = (undefined2)local_78;
                    uVar117 = *puVar27;
                    local_80 = 0;
                    *(undefined4 *)(puVar26 + 1) = *(undefined4 *)(puVar27 + 1);
                    *puVar26 = uVar117;
                    local_d8 = *(undefined8 *)param_3[3];
                    local_d0 = ((undefined8 *)param_3[3])[1];
                    local_c8 = param_3[2];
                    local_b8 = 0;
                    local_c0 = uVar7;
                    uVar20 = (**(code **)(**(long **)(lVar21 + 8) + 0x40))
                                       (*(long **)(lVar21 + 8),6,1,local_b0,local_e8);
                    if ((uVar20 & 1) != 0) goto LAB_02fd5798;
                  }
                  uVar33 = uVar33 + 1;
                } while (uVar33 < uVar24);
                uVar32 = uVar32 + 1;
                if (uVar32 == uVar34) {
                  cVar8 = *(char *)((long)param_3 + 0x101);
                  break;
                }
                if (uVar32 < 4) goto LAB_02fd55e8;
                iVar57 = 0;
              } while( true );
            }
            if ((cVar8 != '\0') || (local_500 == local_100)) goto LAB_02fd536c;
          }
          else {
            *(long *)(local_100 + -1) = auVar75._0_8_;
            auVar75 = NEON_ext(auVar75,auVar75,8,1);
            *(long *)(local_100 + 1) = auVar75._0_8_;
            local_100 = puVar22 + (int)uVar34;
            if (local_500 == local_100) goto LAB_02fd536c;
          }
          auVar75 = *(undefined1 (*) [16])(param_3 + 0x14);
          fVar72 = *(float *)(param_3 + 0x16);
          fVar80 = *(float *)((long)param_3 + 0xb4);
          fVar82 = *(float *)(param_3 + 0x17);
          fVar84 = *(float *)((long)param_3 + 0xbc);
          lVar21 = param_3[0xe];
          auVar97 = *(undefined1 (*) [16])(param_3 + 0x10);
          auVar119 = *(undefined1 (*) [16])(param_3 + 0x12);
          fVar104 = *(float *)(param_3 + 0x18);
          fVar111 = *(float *)((long)param_3 + 0xc4);
          fVar113 = *(float *)(param_3 + 0x19);
          fVar115 = *(float *)((long)param_3 + 0xcc);
          lVar92 = param_3[0x1b];
          lVar25 = param_3[0x1a];
        } while( true );
      }
    }
    else {
      puVar18 = local_510 + -1;
      iVar31 = -(uint)(*param_2 <= pfVar3[4]);
      iVar56 = -(uint)(param_2[1] <= pfVar3[5]);
      iVar57 = -(uint)(param_2[2] <= pfVar3[6]);
      iVar58 = -(uint)(param_2[3] <= pfVar3[7]);
      uVar34 = *(uint *)(local_510 + -1);
      iVar59 = -(uint)(*pfVar3 <= param_2[4]);
      iVar68 = -(uint)(pfVar3[1] <= param_2[5]);
      iVar69 = -(uint)(pfVar3[2] <= param_2[6]);
      iVar70 = -(uint)(pfVar3[3] <= param_2[7]);
      iVar71 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= pfVar3[0xc]);
      iVar79 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <= pfVar3[0xd]);
      iVar81 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= pfVar3[0xe]);
      iVar83 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <= pfVar3[0xf]);
      iVar85 = -(uint)((float)*(undefined8 *)(pfVar3 + 8) <= param_2[0xc]);
      iVar87 = -(uint)((float)((ulong)*(undefined8 *)(pfVar3 + 8) >> 0x20) <= param_2[0xd]);
      iVar90 = -(uint)((float)*(undefined8 *)(pfVar3 + 10) <= param_2[0xe]);
      iVar93 = -(uint)((float)((ulong)*(undefined8 *)(pfVar3 + 10) >> 0x20) <= param_2[0xf]);
      iVar103 = -(uint)(param_2[0x10] <= pfVar3[0x14]);
      iVar110 = -(uint)(param_2[0x11] <= pfVar3[0x15]);
      iVar112 = -(uint)(param_2[0x12] <= pfVar3[0x16]);
      iVar114 = -(uint)(param_2[0x13] <= pfVar3[0x17]);
      iVar95 = -(uint)(pfVar3[0x10] <= (float)*(undefined8 *)(param_2 + 0x14));
      iVar100 = -(uint)(pfVar3[0x11] <= (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar101 = -(uint)(pfVar3[0x12] <= (float)*(undefined8 *)(param_2 + 0x16));
      iVar102 = -(uint)(pfVar3[0x13] <= (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar31 = CONCAT13((byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar31 >> 0x18) &
                        (byte)((uint)iVar71 >> 0x18) & (byte)((uint)iVar85 >> 0x18) &
                        (byte)((uint)iVar103 >> 0x18) & (byte)((uint)iVar95 >> 0x18) & bStack_92d,
                        CONCAT12((byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar31 >> 0x10) &
                                 (byte)((uint)iVar71 >> 0x10) & (byte)((uint)iVar85 >> 0x10) &
                                 (byte)((uint)iVar103 >> 0x10) & (byte)((uint)iVar95 >> 0x10) &
                                 bStack_92e,
                                 CONCAT11((byte)((uint)iVar59 >> 8) & (byte)((uint)iVar31 >> 8) &
                                          (byte)((uint)iVar71 >> 8) & (byte)((uint)iVar85 >> 8) &
                                          (byte)((uint)iVar103 >> 8) & (byte)((uint)iVar95 >> 8) &
                                          bStack_92f,
                                          (byte)iVar59 & (byte)iVar31 & (byte)iVar71 & (byte)iVar85
                                          & (byte)iVar103 & (byte)iVar95 & local_930)));
      auVar35._0_8_ =
           CONCAT17((byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar56 >> 0x18) &
                    (byte)((uint)iVar79 >> 0x18) & (byte)((uint)iVar87 >> 0x18) &
                    (byte)((uint)iVar110 >> 0x18) & (byte)((uint)iVar100 >> 0x18) & bStack_929,
                    CONCAT16((byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar56 >> 0x10) &
                             (byte)((uint)iVar79 >> 0x10) & (byte)((uint)iVar87 >> 0x10) &
                             (byte)((uint)iVar110 >> 0x10) & (byte)((uint)iVar100 >> 0x10) &
                             bStack_92a,
                             CONCAT15((byte)((uint)iVar68 >> 8) & (byte)((uint)iVar56 >> 8) &
                                      (byte)((uint)iVar79 >> 8) & (byte)((uint)iVar87 >> 8) &
                                      (byte)((uint)iVar110 >> 8) & (byte)((uint)iVar100 >> 8) &
                                      bStack_92b,
                                      CONCAT14((byte)iVar68 & (byte)iVar56 & (byte)iVar79 &
                                               (byte)iVar87 & (byte)iVar110 & (byte)iVar100 &
                                               bStack_92c,iVar31))));
      auVar35[8] = (byte)iVar69 & (byte)iVar57 & (byte)iVar81 & (byte)iVar90 & (byte)iVar112 &
                   (byte)iVar101 & bStack_928;
      auVar35[9] = (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar57 >> 8) & (byte)((uint)iVar81 >> 8)
                   & (byte)((uint)iVar90 >> 8) & (byte)((uint)iVar112 >> 8) &
                   (byte)((uint)iVar101 >> 8) & bStack_927;
      auVar35[10] = (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar57 >> 0x10) &
                    (byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar90 >> 0x10) &
                    (byte)((uint)iVar112 >> 0x10) & (byte)((uint)iVar101 >> 0x10) & bStack_926;
      auVar35[0xb] = (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar57 >> 0x18) &
                     (byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar90 >> 0x18) &
                     (byte)((uint)iVar112 >> 0x18) & (byte)((uint)iVar101 >> 0x18) & bStack_925;
      auVar44[0xc] = (byte)iVar70 & (byte)iVar58 & (byte)iVar83 & (byte)iVar93 & (byte)iVar114 &
                     (byte)iVar102 & bStack_924;
      auVar44._0_12_ = auVar35;
      auVar44[0xd] = (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar58 >> 8) &
                     (byte)((uint)iVar83 >> 8) & (byte)((uint)iVar93 >> 8) &
                     (byte)((uint)iVar114 >> 8) & (byte)((uint)iVar102 >> 8) & bStack_923;
      auVar44[0xe] = (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar58 >> 0x10) &
                     (byte)((uint)iVar83 >> 0x10) & (byte)((uint)iVar93 >> 0x10) &
                     (byte)((uint)iVar114 >> 0x10) & (byte)((uint)iVar102 >> 0x10) & bStack_922;
      auVar44[0xf] = (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar58 >> 0x18) &
                     (byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar93 >> 0x18) &
                     (byte)((uint)iVar114 >> 0x18) & (byte)((uint)iVar102 >> 0x18) & bStack_921;
      uVar32 = iVar31 + (int)((ulong)auVar35._0_8_ >> 0x20) + auVar35._8_4_ + auVar44._12_4_;
      iVar31 = *(int *)(&DAT_03aadfe0 + (ulong)uVar32 * 4);
      auVar45 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar3 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar32 * 0x10));
      if (*(char *)(pfVar3 + 0x1c) == '\0') {
        local_510[-1] = auVar45._0_8_;
        auVar45 = NEON_ext(auVar45,auVar45,8,1);
        *local_510 = auVar45._0_8_;
        local_510 = (undefined8 *)((long)puVar18 + (long)iVar31 * 4);
      }
      else {
        local_510 = puVar18;
        if (uVar32 != 0) {
          iVar56 = 0;
LAB_02fd4d5c:
          switch(iVar56) {
          case 0:
            iVar57 = auVar45._0_4_;
            break;
          case 1:
            iVar57 = auVar45._4_4_;
            break;
          case 2:
            iVar57 = auVar45._8_4_;
            break;
          case 3:
            iVar57 = auVar45._12_4_;
            break;
          default:
            iVar57 = 0;
          }
          *(int *)(param_3 + 0xc) = iVar57 << 9;
          lVar21 = *(long *)(param_3[2] + 0x48);
          if (lVar21 == 0) {
            lVar21 = 0;
          }
          else {
            lVar21 = lVar21 + param_3[2] + 0x48;
          }
          piVar4 = (int *)(lVar21 + 0x60 + (long)iVar57 * 0x40 + (long)*(int *)(lVar21 + 0x60));
          param_3[0xd] = (long)piVar4;
          lVar21 = 0;
          if (*piVar4 != 0) {
            lVar21 = (long)piVar4 + (long)*piVar4;
          }
          param_3[0xe] = lVar21;
          sVar9 = (short)piVar4[0xe];
          if ((char)param_3[0x1d] == '\0') {
            auVar73._0_8_ = CONCAT44((int)sVar9,(int)sVar9);
            auVar73._8_4_ = (int)sVar9;
            auVar73._12_4_ = (int)sVar9;
            param_3[0x11] = auVar73._8_8_;
            param_3[0x10] = auVar73._0_8_;
            sVar9 = *(short *)((long)piVar4 + 0x3a);
            auVar60._0_8_ = CONCAT44((int)sVar9,(int)sVar9);
            auVar60._8_4_ = (int)sVar9;
            auVar60._12_4_ = (int)sVar9;
            param_3[0x13] = auVar60._8_8_;
            param_3[0x12] = auVar60._0_8_;
            sVar9 = (short)piVar4[0xf];
            auVar46._4_4_ = (int)sVar9;
            auVar46._0_4_ = (int)sVar9;
            auVar46._8_4_ = (int)sVar9;
            auVar46._12_4_ = (int)sVar9;
          }
          else {
            auVar73._0_8_ = CONCAT26(sVar9,CONCAT24(sVar9,CONCAT22(sVar9,sVar9)));
            auVar73._8_2_ = sVar9;
            auVar73._10_2_ = sVar9;
            auVar73._12_2_ = sVar9;
            auVar73._14_2_ = sVar9;
            param_3[0x11] = auVar73._8_8_;
            param_3[0x10] = auVar73._0_8_;
            uVar10 = *(undefined2 *)((long)piVar4 + 0x3a);
            auVar60._0_8_ = CONCAT26(uVar10,CONCAT24(uVar10,CONCAT22(uVar10,uVar10)));
            auVar60._8_2_ = uVar10;
            auVar60._10_2_ = uVar10;
            auVar60._12_2_ = uVar10;
            auVar60._14_2_ = uVar10;
            param_3[0x13] = auVar60._8_8_;
            param_3[0x12] = auVar60._0_8_;
            uVar10 = (undefined2)piVar4[0xf];
            auVar46._2_2_ = uVar10;
            auVar46._0_2_ = uVar10;
            auVar46._4_2_ = uVar10;
            auVar46._6_2_ = uVar10;
            auVar46._8_2_ = uVar10;
            auVar46._10_2_ = uVar10;
            auVar46._12_2_ = uVar10;
            auVar46._14_2_ = uVar10;
          }
          fVar11 = *(float *)(param_3 + 0x3c);
          fVar12 = *(float *)((long)param_3 + 0x1e4);
          fVar13 = *(float *)(param_3 + 0x3d);
          param_3[0x15] = auVar46._8_8_;
          param_3[0x14] = auVar46._0_8_;
          fVar72 = (float)piVar4[0xb];
          fVar86 = (float)param_3[0x3a];
          fVar88 = (float)((ulong)param_3[0x3a] >> 0x20);
          fVar91 = (float)param_3[0x3b];
          *(float *)(param_3 + 0x17) = fVar72;
          *(float *)((long)param_3 + 0xbc) = fVar72;
          *(float *)(param_3 + 0x16) = fVar72;
          *(float *)((long)param_3 + 0xb4) = fVar72;
          fVar104 = (float)piVar4[0xc];
          *(float *)(param_3 + 0x19) = fVar104;
          *(float *)((long)param_3 + 0xcc) = fVar104;
          *(float *)(param_3 + 0x18) = fVar104;
          *(float *)((long)param_3 + 0xc4) = fVar104;
          iVar57 = piVar4[0xd];
          lVar25 = CONCAT44(iVar57,iVar57);
          lVar92 = CONCAT44(iVar57,iVar57);
          param_3[0x1b] = lVar92;
          param_3[0x1a] = lVar25;
          local_500[0] = 0;
          local_100 = puVar19;
          fVar80 = fVar72;
          fVar82 = fVar72;
          fVar84 = fVar72;
          fVar111 = fVar104;
          fVar113 = fVar104;
          fVar115 = fVar104;
          do {
            puVar22 = local_100 + -1;
            puVar18 = (undefined8 *)(lVar21 + (ulong)(uint)local_100[-1] * 0x1c);
            uVar117 = *puVar18;
            uVar125 = *(undefined8 *)((long)puVar18 + 4);
            bVar28 = (byte)((ulong)uVar125 >> 8);
            bVar29 = (byte)((ulong)uVar117 >> 8);
            auVar118._0_4_ = auVar73._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar117) & 0xffff);
            auVar118._4_4_ = auVar73._4_4_ + (uint)bVar29;
            auVar118._8_4_ = auVar73._8_4_ + (uint)(byte)((ulong)uVar117 >> 0x10);
            auVar118._12_4_ = auVar73._12_4_ + (uint)(byte)((ulong)uVar117 >> 0x18);
            auVar74._0_4_ = auVar73._0_4_ + ((CONCAT12(bVar28,(short)uVar125) & 0xff00ff) & 0xffff);
            auVar74._4_4_ = auVar73._4_4_ + (uint)bVar28;
            auVar74._8_4_ = auVar73._8_4_ + (uint)(byte)((ulong)uVar125 >> 0x10);
            auVar74._12_4_ = auVar73._12_4_ + (uint)(byte)((ulong)uVar125 >> 0x18);
            uVar125 = *(undefined8 *)((long)puVar18 + 0xc);
            bVar28 = (byte)((ulong)uVar125 >> 8);
            auVar119 = NEON_scvtf(auVar118,4);
            auVar75 = NEON_scvtf(auVar74,4);
            fVar116 = fVar72 * auVar119._0_4_;
            fVar122 = fVar80 * auVar119._4_4_;
            fVar123 = fVar82 * auVar119._8_4_;
            fVar124 = fVar84 * auVar119._12_4_;
            fVar72 = fVar72 * auVar75._0_4_;
            fVar80 = fVar80 * auVar75._4_4_;
            fVar82 = fVar82 * auVar75._8_4_;
            fVar84 = fVar84 * auVar75._12_4_;
            uVar117 = puVar18[1];
            bVar29 = (byte)((ulong)uVar117 >> 8);
            auVar96._0_4_ = auVar60._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar117) & 0xffff);
            auVar96._4_4_ = auVar60._4_4_ + (uint)bVar29;
            auVar96._8_4_ = auVar60._8_4_ + (uint)(byte)((ulong)uVar117 >> 0x10);
            auVar96._12_4_ = auVar60._12_4_ + (uint)(byte)((ulong)uVar117 >> 0x18);
            auVar61._0_4_ = auVar60._0_4_ + ((CONCAT12(bVar28,(short)uVar125) & 0xff00ff) & 0xffff);
            auVar61._4_4_ = auVar60._4_4_ + (uint)bVar28;
            auVar61._8_4_ = auVar60._8_4_ + (uint)(byte)((ulong)uVar125 >> 0x10);
            auVar61._12_4_ = auVar60._12_4_ + (uint)(byte)((ulong)uVar125 >> 0x18);
            auVar97 = NEON_scvtf(auVar96,4);
            uVar125 = *(undefined8 *)((long)puVar18 + 0x14);
            auVar119 = NEON_scvtf(auVar61,4);
            bVar28 = (byte)((ulong)uVar125 >> 8);
            uVar117 = puVar18[2];
            bVar29 = (byte)((ulong)uVar117 >> 8);
            auVar105._0_4_ = auVar46._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar117) & 0xffff);
            auVar105._4_4_ = auVar46._4_4_ + (uint)bVar29;
            auVar105._8_4_ = auVar46._8_4_ + (uint)(byte)((ulong)uVar117 >> 0x10);
            auVar105._12_4_ = auVar46._12_4_ + (uint)(byte)((ulong)uVar117 >> 0x18);
            auVar47._0_4_ = auVar46._0_4_ + ((CONCAT12(bVar28,(short)uVar125) & 0xff00ff) & 0xffff);
            auVar47._4_4_ = auVar46._4_4_ + (uint)bVar28;
            auVar47._8_4_ = auVar46._8_4_ + (uint)(byte)((ulong)uVar125 >> 0x10);
            auVar47._12_4_ = auVar46._12_4_ + (uint)(byte)((ulong)uVar125 >> 0x18);
            auVar106 = NEON_scvtf(auVar105,4);
            auVar75 = NEON_scvtf(auVar47,4);
            iVar103 = -(uint)(fVar122 <= fVar11);
            iVar110 = -(uint)(fVar123 <= fVar11);
            iVar112 = -(uint)(fVar124 <= fVar11);
            fVar89 = (float)((ulong)lVar25 >> 0x20);
            fVar94 = (float)((ulong)lVar92 >> 0x20);
            iVar83 = -(uint)(fVar86 <= fVar80);
            iVar85 = -(uint)(fVar86 <= fVar82);
            iVar87 = -(uint)(fVar86 <= fVar84);
            iVar68 = -(uint)(fVar88 <= fVar111 * auVar119._4_4_);
            iVar69 = -(uint)(fVar88 <= fVar113 * auVar119._8_4_);
            iVar70 = -(uint)(fVar88 <= fVar115 * auVar119._12_4_);
            iVar71 = -(uint)(fVar122 <= fVar80);
            iVar79 = -(uint)(fVar123 <= fVar82);
            iVar81 = -(uint)(fVar124 <= fVar84);
            iVar90 = -(uint)(fVar111 * auVar97._4_4_ <= fVar12);
            iVar93 = -(uint)(fVar113 * auVar97._8_4_ <= fVar12);
            iVar95 = -(uint)(fVar115 * auVar97._12_4_ <= fVar12);
            iVar57 = -(uint)(fVar91 <= fVar89 * auVar75._4_4_);
            iVar58 = -(uint)(fVar91 <= (float)lVar92 * auVar75._8_4_);
            iVar59 = -(uint)(fVar91 <= fVar94 * auVar75._12_4_);
            iVar100 = -(uint)(fVar89 * auVar106._4_4_ <= fVar13);
            iVar101 = -(uint)((float)lVar92 * auVar106._8_4_ <= fVar13);
            iVar102 = -(uint)(fVar94 * auVar106._12_4_ <= fVar13);
            uVar32 = (uint)(byte)(-(fVar86 <= fVar72) & -(fVar116 <= fVar11) & -(fVar116 <= fVar72)
                                  & -(fVar104 * auVar97._0_4_ <= fVar12) &
                                  -(fVar88 <= fVar104 * auVar119._0_4_) &
                                  -((float)lVar25 * auVar106._0_4_ <= fVar13) &
                                 -(fVar91 <= (float)lVar25 * auVar75._0_4_));
            auVar36._0_8_ =
                 CONCAT17((byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar103 >> 0x18) &
                          (byte)((uint)iVar71 >> 0x18) & (byte)((uint)iVar90 >> 0x18) &
                          (byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar100 >> 0x18) &
                          (byte)((uint)iVar57 >> 0x18),
                          (uint7)CONCAT14((byte)iVar83 & (byte)iVar103 & (byte)iVar71 & (byte)iVar90
                                          & (byte)iVar68 & (byte)iVar100 & (byte)iVar57,uVar32));
            auVar36[8] = (byte)iVar85 & (byte)iVar110 & (byte)iVar79 & (byte)iVar93 & (byte)iVar69 &
                         (byte)iVar101 & (byte)iVar58;
            auVar36[9] = (byte)((uint)iVar85 >> 8) & (byte)((uint)iVar110 >> 8) &
                         (byte)((uint)iVar79 >> 8) & (byte)((uint)iVar93 >> 8) &
                         (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar101 >> 8) &
                         (byte)((uint)iVar58 >> 8);
            auVar36[10] = (byte)((uint)iVar85 >> 0x10) & (byte)((uint)iVar110 >> 0x10) &
                          (byte)((uint)iVar79 >> 0x10) & (byte)((uint)iVar93 >> 0x10) &
                          (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar101 >> 0x10) &
                          (byte)((uint)iVar58 >> 0x10);
            auVar36[0xb] = (byte)((uint)iVar85 >> 0x18) & (byte)((uint)iVar110 >> 0x18) &
                           (byte)((uint)iVar79 >> 0x18) & (byte)((uint)iVar93 >> 0x18) &
                           (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar101 >> 0x18) &
                           (byte)((uint)iVar58 >> 0x18);
            auVar48[0xc] = (byte)iVar87 & (byte)iVar112 & (byte)iVar81 & (byte)iVar95 & (byte)iVar70
                           & (byte)iVar102 & (byte)iVar59;
            auVar48._0_12_ = auVar36;
            auVar48[0xd] = (byte)((uint)iVar87 >> 8) & (byte)((uint)iVar112 >> 8) &
                           (byte)((uint)iVar81 >> 8) & (byte)((uint)iVar95 >> 8) &
                           (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar102 >> 8) &
                           (byte)((uint)iVar59 >> 8);
            auVar48[0xe] = (byte)((uint)iVar87 >> 0x10) & (byte)((uint)iVar112 >> 0x10) &
                           (byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar95 >> 0x10) &
                           (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar102 >> 0x10) &
                           (byte)((uint)iVar59 >> 0x10);
            auVar48[0xf] = (byte)((uint)iVar87 >> 0x18) & (byte)((uint)iVar112 >> 0x18) &
                           (byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar95 >> 0x18) &
                           (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar102 >> 0x18) &
                           (byte)((uint)iVar59 >> 0x18);
            uVar117 = puVar18[3];
            uVar30 = (undefined1)((ulong)uVar117 >> 8);
            auVar62._6_2_ = 0;
            auVar62._0_6_ =
                 (uint6)CONCAT14(uVar30,(uint)CONCAT12(uVar30,(ushort)(byte)uVar117)) &
                 0xffff0000ffff;
            auVar62[8] = (char)((ulong)uVar117 >> 0x10);
            auVar62._9_3_ = 0;
            auVar62[0xc] = (char)((ulong)uVar117 >> 0x18);
            auVar62._13_3_ = 0;
            bVar28 = (byte)((int)(uVar32 << 0x1f) >> 0x1f);
            iVar57 = CONCAT13(bVar28 & bStack_92d,
                              CONCAT12(bVar28 & bStack_92e,
                                       CONCAT11(bVar28 & bStack_92f,bVar28 & local_930)));
            bVar28 = (byte)(((int)((ulong)auVar36._0_8_ >> 0x20) << 0x1f) >> 0x1f);
            auVar37._0_8_ =
                 CONCAT17(bVar28 & bStack_929,
                          CONCAT16(bVar28 & bStack_92a,
                                   CONCAT15(bVar28 & bStack_92b,CONCAT14(bVar28 & bStack_92c,iVar57)
                                           )));
            bVar28 = (byte)((auVar36._8_4_ << 0x1f) >> 0x1f);
            auVar37[8] = bVar28 & bStack_928;
            auVar37[9] = bVar28 & bStack_927;
            auVar37[10] = bVar28 & bStack_926;
            auVar37[0xb] = bVar28 & bStack_925;
            bVar28 = (byte)((auVar48._12_4_ << 0x1f) >> 0x1f);
            auVar49[0xc] = bVar28 & bStack_924;
            auVar49._0_12_ = auVar37;
            auVar49[0xd] = bVar28 & bStack_923;
            auVar49[0xe] = bVar28 & bStack_922;
            auVar49[0xf] = bVar28 & bStack_921;
            uVar33 = iVar57 + (int)((ulong)auVar37._0_8_ >> 0x20) + auVar37._8_4_ + auVar49._12_4_;
            auVar75 = a64_TBL(ZEXT816(0),auVar62,
                              *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar33 * 0x10));
            uVar32 = *(uint *)(&DAT_03aadfe0 + (ulong)uVar33 * 4);
            if (*(byte *)((long)puVar18 + 0x1b) < *(byte *)((long)puVar18 + 0x1a)) {
              cVar8 = *(char *)((long)param_3 + 0x101);
              local_100 = puVar22;
              if (uVar33 != 0 && cVar8 == '\0') {
                uVar33 = 0;
LAB_02fd4fc4:
                switch(uVar33) {
                default:
                  iVar57 = auVar75._0_4_;
                  break;
                case 1:
                  iVar57 = auVar75._4_4_;
                  break;
                case 2:
                  iVar57 = auVar75._8_4_;
                  break;
                case 3:
                  iVar57 = auVar75._12_4_;
                }
                do {
                  uVar24 = 0;
                  uVar7 = *(uint *)(param_3[0xd] + 8 +
                                   (long)iVar57 * 4 + (long)*(int *)(param_3[0xd] + 8));
                  uVar23 = 1;
                  if ((uVar7 >> 8 & 0xff) <= uVar7 >> 0x18 &&
                      (uVar7 >> 0x10 & 0xff) != uVar7 >> 0x18) {
                    uVar23 = 2;
                  }
                  local_78 = *(undefined8 *)param_3[4];
                  uStack_70 = ((undefined8 *)param_3[4])[1];
                  do {
                    lVar21 = param_3[2];
                    puVar18 = (undefined8 *)param_3[3];
                    uVar7 = *(uint *)(param_3 + 0xc) | iVar57 << 1;
                    uVar2 = ((uVar7 | uVar24) + 1 <<
                            (ulong)(-((uint)*(byte *)(lVar21 + 0x1c) +
                                     *(int *)((long)puVar18 + 0x1c)) & 0x1f)) - 1 |
                            (&DAT_03aa74b0)[*(int *)((long)puVar18 + 0x1c)] & *(uint *)(puVar18 + 3)
                    ;
                    plVar16 = *(long **)*param_3;
                    if (plVar16 == (long *)0x0) {
LAB_02fd5174:
                      plVar16 = (long *)param_3[0x1f];
                      iVar59 = (int)plVar16[1];
                      lVar21 = *plVar16;
                      iVar58 = iVar59 + 1;
                      if ((int)(*(uint *)((long)plVar16 + 0xc) & 0x3fffffff) <= iVar59) {
                        lVar21 = FUN_02f7f7b8(PTR_PTR_0434a080,iVar58);
                        iVar59 = (int)plVar16[1];
                        *plVar16 = lVar21;
                      }
                      *(uint *)(lVar21 + (long)iVar59 * 4) = uVar2;
                      *(int *)(plVar16 + 1) = iVar58;
                      bVar1 = false;
                      if ((char)param_3[0x20] != '\0') {
                        bVar1 = 0 < *(int *)(param_3[0x1f] + 8);
                      }
                      *(byte *)((long)param_3 + 0x101) = *(byte *)((long)param_3 + 0x101) | bVar1;
                    }
                    else {
                      lVar25 = *(long *)(lVar21 + 0x48);
                      if (lVar25 == 0) {
                        lVar25 = 0;
                      }
                      else {
                        lVar25 = lVar25 + lVar21 + 0x48;
                      }
                      piVar4 = (int *)(lVar25 + 0x40);
                      if (*(int *)(lVar25 + 0x44) == 2) {
                        lVar25 = (long)*piVar4;
                      }
                      else {
                        iVar59 = *piVar4;
                        iVar68 = 0;
                        iVar58 = *(int *)(lVar25 + 0x44) + -1;
                        while( true ) {
                          uVar6 = iVar58 + iVar68;
                          if ((int)uVar6 < 0) {
                            uVar6 = uVar6 + 1;
                          }
                          uVar5 = (int)uVar6 >> 1;
                          lVar92 = (long)((ulong)uVar6 << 0x20) >> 0x21;
                          uVar6 = *(uint *)((long)piVar4 +
                                           (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 |
                                           (ulong)uVar5 << 3) + (long)iVar59);
                          lVar25 = lVar92 + 1;
                          if ((uVar6 <= uVar7) &&
                             (uVar7 < *(uint *)((long)piVar4 + lVar25 * 8 + (long)iVar59))) break;
                          iVar69 = (int)lVar25;
                          if (uVar7 <= uVar6) {
                            iVar58 = uVar5 - 1;
                            iVar69 = iVar68;
                          }
                          iVar68 = iVar69;
                        }
                        lVar25 = lVar92 * 8 + (long)iVar59;
                      }
                      (**(code **)(*plVar16 + 0x40))
                                (plVar16,*(undefined2 *)((long)piVar4 + lVar25 + 4),6,*puVar18,
                                 puVar18[1],lVar21,uVar2,0,&local_78);
                      lVar21 = *param_3;
                      if (*(long *)(lVar21 + 8) == 0) goto LAB_02fd5174;
                      local_b0[0] = *(undefined2 *)(lVar21 + 0x10);
                      uVar117 = *(undefined8 *)(lVar21 + 0x14);
                      *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(lVar21 + 0x1c);
                      *puVar17 = uVar117;
                      puVar18 = (undefined8 *)param_3[0x1e];
                      local_a0 = *puVar18;
                      local_98 = puVar18[1];
                      local_90 = puVar18[2];
                      local_88 = *(undefined4 *)(puVar18 + 3);
                      local_e8[0] = (undefined2)local_78;
                      uVar117 = *puVar27;
                      local_80 = 0;
                      *(undefined4 *)(puVar26 + 1) = *(undefined4 *)(puVar27 + 1);
                      *puVar26 = uVar117;
                      local_d8 = *(undefined8 *)param_3[3];
                      local_d0 = ((undefined8 *)param_3[3])[1];
                      local_c8 = param_3[2];
                      local_b8 = 0;
                      local_c0 = uVar2;
                      uVar20 = (**(code **)(**(long **)(lVar21 + 8) + 0x40))
                                         (*(long **)(lVar21 + 8),6,1,local_b0,local_e8);
                      if ((uVar20 & 1) != 0) goto LAB_02fd5174;
                    }
                    uVar24 = uVar24 + 1;
                  } while (uVar24 < uVar23);
                  uVar33 = uVar33 + 1;
                  if (uVar33 == uVar32) {
                    cVar8 = *(char *)((long)param_3 + 0x101);
                    break;
                  }
                  if (uVar33 < 4) goto LAB_02fd4fc4;
                  iVar57 = 0;
                } while( true );
              }
              if ((cVar8 != '\0') || (local_500 == local_100)) goto LAB_02fd4d48;
            }
            else {
              *(long *)(local_100 + -1) = auVar75._0_8_;
              auVar75 = NEON_ext(auVar75,auVar75,8,1);
              *(long *)(local_100 + 1) = auVar75._0_8_;
              local_100 = puVar22 + (int)uVar32;
              if (local_500 == local_100) goto LAB_02fd4d48;
            }
            auVar46 = *(undefined1 (*) [16])(param_3 + 0x14);
            fVar72 = *(float *)(param_3 + 0x16);
            fVar80 = *(float *)((long)param_3 + 0xb4);
            fVar82 = *(float *)(param_3 + 0x17);
            fVar84 = *(float *)((long)param_3 + 0xbc);
            lVar21 = param_3[0xe];
            auVar73 = *(undefined1 (*) [16])(param_3 + 0x10);
            auVar60 = *(undefined1 (*) [16])(param_3 + 0x12);
            fVar104 = *(float *)(param_3 + 0x18);
            fVar111 = *(float *)((long)param_3 + 0xc4);
            fVar113 = *(float *)(param_3 + 0x19);
            fVar115 = *(float *)((long)param_3 + 0xcc);
            lVar92 = param_3[0x1b];
            lVar25 = param_3[0x1a];
          } while( true );
        }
      }
LAB_02fd58f8:
      pfVar3 = (float *)(local_9e0 + (ulong)uVar34 * 0x80);
      iVar31 = -(uint)(*param_2 <= pfVar3[4]);
      iVar56 = -(uint)(param_2[1] <= pfVar3[5]);
      iVar57 = -(uint)(param_2[2] <= pfVar3[6]);
      iVar58 = -(uint)(param_2[3] <= pfVar3[7]);
      iVar59 = -(uint)(*pfVar3 <= param_2[4]);
      iVar68 = -(uint)(pfVar3[1] <= param_2[5]);
      iVar69 = -(uint)(pfVar3[2] <= param_2[6]);
      iVar70 = -(uint)(pfVar3[3] <= param_2[7]);
      iVar71 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= pfVar3[0xc]);
      iVar79 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <= pfVar3[0xd]);
      iVar81 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= pfVar3[0xe]);
      iVar83 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <= pfVar3[0xf]);
      iVar85 = -(uint)((float)*(undefined8 *)(pfVar3 + 8) <= param_2[0xc]);
      iVar87 = -(uint)((float)((ulong)*(undefined8 *)(pfVar3 + 8) >> 0x20) <= param_2[0xd]);
      iVar90 = -(uint)((float)*(undefined8 *)(pfVar3 + 10) <= param_2[0xe]);
      iVar93 = -(uint)((float)((ulong)*(undefined8 *)(pfVar3 + 10) >> 0x20) <= param_2[0xf]);
      iVar95 = -(uint)(param_2[0x10] <= pfVar3[0x14]);
      iVar100 = -(uint)(param_2[0x11] <= pfVar3[0x15]);
      iVar101 = -(uint)(param_2[0x12] <= pfVar3[0x16]);
      iVar102 = -(uint)(param_2[0x13] <= pfVar3[0x17]);
      iVar103 = -(uint)(pfVar3[0x10] <= param_2[0x14]);
      iVar110 = -(uint)(pfVar3[0x11] <= param_2[0x15]);
      iVar112 = -(uint)(pfVar3[0x12] <= param_2[0x16]);
      iVar114 = -(uint)(pfVar3[0x13] <= param_2[0x17]);
      iVar31 = CONCAT13((byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar31 >> 0x18) &
                        (byte)((uint)iVar71 >> 0x18) & (byte)((uint)iVar85 >> 0x18) &
                        (byte)((uint)iVar95 >> 0x18) & (byte)((uint)iVar103 >> 0x18) & bStack_92d,
                        CONCAT12((byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar31 >> 0x10) &
                                 (byte)((uint)iVar71 >> 0x10) & (byte)((uint)iVar85 >> 0x10) &
                                 (byte)((uint)iVar95 >> 0x10) & (byte)((uint)iVar103 >> 0x10) &
                                 bStack_92e,
                                 CONCAT11((byte)((uint)iVar59 >> 8) & (byte)((uint)iVar31 >> 8) &
                                          (byte)((uint)iVar71 >> 8) & (byte)((uint)iVar85 >> 8) &
                                          (byte)((uint)iVar95 >> 8) & (byte)((uint)iVar103 >> 8) &
                                          bStack_92f,
                                          (byte)iVar59 & (byte)iVar31 & (byte)iVar71 & (byte)iVar85
                                          & (byte)iVar95 & (byte)iVar103 & local_930)));
      auVar41._0_8_ =
           CONCAT17((byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar56 >> 0x18) &
                    (byte)((uint)iVar79 >> 0x18) & (byte)((uint)iVar87 >> 0x18) &
                    (byte)((uint)iVar100 >> 0x18) & (byte)((uint)iVar110 >> 0x18) & bStack_929,
                    CONCAT16((byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar56 >> 0x10) &
                             (byte)((uint)iVar79 >> 0x10) & (byte)((uint)iVar87 >> 0x10) &
                             (byte)((uint)iVar100 >> 0x10) & (byte)((uint)iVar110 >> 0x10) &
                             bStack_92a,
                             CONCAT15((byte)((uint)iVar68 >> 8) & (byte)((uint)iVar56 >> 8) &
                                      (byte)((uint)iVar79 >> 8) & (byte)((uint)iVar87 >> 8) &
                                      (byte)((uint)iVar100 >> 8) & (byte)((uint)iVar110 >> 8) &
                                      bStack_92b,
                                      CONCAT14((byte)iVar68 & (byte)iVar56 & (byte)iVar79 &
                                               (byte)iVar87 & (byte)iVar100 & (byte)iVar110 &
                                               bStack_92c,iVar31))));
      auVar41[8] = (byte)iVar69 & (byte)iVar57 & (byte)iVar81 & (byte)iVar90 & (byte)iVar101 &
                   (byte)iVar112 & bStack_928;
      auVar41[9] = (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar57 >> 8) & (byte)((uint)iVar81 >> 8)
                   & (byte)((uint)iVar90 >> 8) & (byte)((uint)iVar101 >> 8) &
                   (byte)((uint)iVar112 >> 8) & bStack_927;
      auVar41[10] = (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar57 >> 0x10) &
                    (byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar90 >> 0x10) &
                    (byte)((uint)iVar101 >> 0x10) & (byte)((uint)iVar112 >> 0x10) & bStack_926;
      auVar41[0xb] = (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar57 >> 0x18) &
                     (byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar90 >> 0x18) &
                     (byte)((uint)iVar101 >> 0x18) & (byte)((uint)iVar112 >> 0x18) & bStack_925;
      auVar51[0xc] = (byte)iVar70 & (byte)iVar58 & (byte)iVar83 & (byte)iVar93 & (byte)iVar102 &
                     (byte)iVar114 & bStack_924;
      auVar51._0_12_ = auVar41;
      auVar51[0xd] = (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar58 >> 8) &
                     (byte)((uint)iVar83 >> 8) & (byte)((uint)iVar93 >> 8) &
                     (byte)((uint)iVar102 >> 8) & (byte)((uint)iVar114 >> 8) & bStack_923;
      auVar51[0xe] = (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar58 >> 0x10) &
                     (byte)((uint)iVar83 >> 0x10) & (byte)((uint)iVar93 >> 0x10) &
                     (byte)((uint)iVar102 >> 0x10) & (byte)((uint)iVar114 >> 0x10) & bStack_922;
      auVar51[0xf] = (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar58 >> 0x18) &
                     (byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar93 >> 0x18) &
                     (byte)((uint)iVar102 >> 0x18) & (byte)((uint)iVar114 >> 0x18) & bStack_921;
      uVar34 = iVar31 + (int)((ulong)auVar41._0_8_ >> 0x20) + auVar41._8_4_ + auVar51._12_4_;
      iVar31 = *(int *)(&DAT_03aadfe0 + (ulong)uVar34 * 4);
      auVar45 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar3 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar34 * 0x10));
      if (*(char *)(pfVar3 + 0x1c) == '\0') {
        auVar75 = NEON_ext(auVar45,auVar45,8,1);
        *local_510 = auVar45._0_8_;
        local_510[1] = auVar75._0_8_;
        local_510 = (undefined8 *)((long)local_510 + (long)iVar31 * 4);
LAB_02fd4c58:
      }
      else if (uVar34 != 0) {
        iVar56 = 0;
LAB_02fd59c0:
        switch(iVar56) {
        case 0:
          iVar57 = auVar45._0_4_;
          break;
        case 1:
          iVar57 = auVar45._4_4_;
          break;
        case 2:
          iVar57 = auVar45._8_4_;
          break;
        case 3:
          iVar57 = auVar45._12_4_;
          break;
        default:
          iVar57 = 0;
        }
        *(int *)(param_3 + 0xc) = iVar57 << 9;
        lVar21 = *(long *)(param_3[2] + 0x48);
        if (lVar21 == 0) {
          lVar21 = 0;
        }
        else {
          lVar21 = lVar21 + param_3[2] + 0x48;
        }
        piVar4 = (int *)(lVar21 + 0x60 + (long)iVar57 * 0x40 + (long)*(int *)(lVar21 + 0x60));
        param_3[0xd] = (long)piVar4;
        lVar21 = 0;
        if (*piVar4 != 0) {
          lVar21 = (long)piVar4 + (long)*piVar4;
        }
        param_3[0xe] = lVar21;
        sVar9 = (short)piVar4[0xe];
        if ((char)param_3[0x1d] == '\0') {
          auVar77._0_8_ = CONCAT44((int)sVar9,(int)sVar9);
          auVar77._8_4_ = (int)sVar9;
          auVar77._12_4_ = (int)sVar9;
          param_3[0x11] = auVar77._8_8_;
          param_3[0x10] = auVar77._0_8_;
          sVar9 = *(short *)((long)piVar4 + 0x3a);
          auVar65._0_8_ = CONCAT44((int)sVar9,(int)sVar9);
          auVar65._8_4_ = (int)sVar9;
          auVar65._12_4_ = (int)sVar9;
          param_3[0x13] = auVar65._8_8_;
          param_3[0x12] = auVar65._0_8_;
          sVar9 = (short)piVar4[0xf];
          auVar52._4_4_ = (int)sVar9;
          auVar52._0_4_ = (int)sVar9;
          auVar52._8_4_ = (int)sVar9;
          auVar52._12_4_ = (int)sVar9;
        }
        else {
          auVar77._0_8_ = CONCAT26(sVar9,CONCAT24(sVar9,CONCAT22(sVar9,sVar9)));
          auVar77._8_2_ = sVar9;
          auVar77._10_2_ = sVar9;
          auVar77._12_2_ = sVar9;
          auVar77._14_2_ = sVar9;
          param_3[0x11] = auVar77._8_8_;
          param_3[0x10] = auVar77._0_8_;
          uVar10 = *(undefined2 *)((long)piVar4 + 0x3a);
          auVar65._0_8_ = CONCAT26(uVar10,CONCAT24(uVar10,CONCAT22(uVar10,uVar10)));
          auVar65._8_2_ = uVar10;
          auVar65._10_2_ = uVar10;
          auVar65._12_2_ = uVar10;
          auVar65._14_2_ = uVar10;
          param_3[0x13] = auVar65._8_8_;
          param_3[0x12] = auVar65._0_8_;
          uVar10 = (undefined2)piVar4[0xf];
          auVar52._2_2_ = uVar10;
          auVar52._0_2_ = uVar10;
          auVar52._4_2_ = uVar10;
          auVar52._6_2_ = uVar10;
          auVar52._8_2_ = uVar10;
          auVar52._10_2_ = uVar10;
          auVar52._12_2_ = uVar10;
          auVar52._14_2_ = uVar10;
        }
        fVar11 = *(float *)(param_3 + 0x3c);
        fVar12 = *(float *)((long)param_3 + 0x1e4);
        fVar13 = *(float *)(param_3 + 0x3d);
        param_3[0x15] = auVar52._8_8_;
        param_3[0x14] = auVar52._0_8_;
        fVar72 = (float)piVar4[0xb];
        fVar86 = (float)param_3[0x3a];
        fVar88 = (float)((ulong)param_3[0x3a] >> 0x20);
        fVar91 = (float)param_3[0x3b];
        *(float *)(param_3 + 0x17) = fVar72;
        *(float *)((long)param_3 + 0xbc) = fVar72;
        *(float *)(param_3 + 0x16) = fVar72;
        *(float *)((long)param_3 + 0xb4) = fVar72;
        fVar104 = (float)piVar4[0xc];
        *(float *)(param_3 + 0x19) = fVar104;
        *(float *)((long)param_3 + 0xcc) = fVar104;
        *(float *)(param_3 + 0x18) = fVar104;
        *(float *)((long)param_3 + 0xc4) = fVar104;
        iVar57 = piVar4[0xd];
        lVar25 = CONCAT44(iVar57,iVar57);
        lVar92 = CONCAT44(iVar57,iVar57);
        param_3[0x1b] = lVar92;
        param_3[0x1a] = lVar25;
        local_500[0] = 0;
        local_100 = puVar19;
        fVar80 = fVar72;
        fVar82 = fVar72;
        fVar84 = fVar72;
        fVar111 = fVar104;
        fVar113 = fVar104;
        fVar115 = fVar104;
        do {
          puVar22 = local_100 + -1;
          puVar18 = (undefined8 *)(lVar21 + (ulong)(uint)local_100[-1] * 0x1c);
          uVar117 = *puVar18;
          uVar125 = *(undefined8 *)((long)puVar18 + 4);
          bVar28 = (byte)((ulong)uVar125 >> 8);
          bVar29 = (byte)((ulong)uVar117 >> 8);
          auVar121._0_4_ = auVar77._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar117) & 0xffff);
          auVar121._4_4_ = auVar77._4_4_ + (uint)bVar29;
          auVar121._8_4_ = auVar77._8_4_ + (uint)(byte)((ulong)uVar117 >> 0x10);
          auVar121._12_4_ = auVar77._12_4_ + (uint)(byte)((ulong)uVar117 >> 0x18);
          auVar78._0_4_ = auVar77._0_4_ + ((CONCAT12(bVar28,(short)uVar125) & 0xff00ff) & 0xffff);
          auVar78._4_4_ = auVar77._4_4_ + (uint)bVar28;
          auVar78._8_4_ = auVar77._8_4_ + (uint)(byte)((ulong)uVar125 >> 0x10);
          auVar78._12_4_ = auVar77._12_4_ + (uint)(byte)((ulong)uVar125 >> 0x18);
          uVar125 = *(undefined8 *)((long)puVar18 + 0xc);
          bVar28 = (byte)((ulong)uVar125 >> 8);
          auVar119 = NEON_scvtf(auVar121,4);
          auVar75 = NEON_scvtf(auVar78,4);
          fVar116 = fVar72 * auVar119._0_4_;
          fVar122 = fVar80 * auVar119._4_4_;
          fVar123 = fVar82 * auVar119._8_4_;
          fVar124 = fVar84 * auVar119._12_4_;
          fVar72 = fVar72 * auVar75._0_4_;
          fVar80 = fVar80 * auVar75._4_4_;
          fVar82 = fVar82 * auVar75._8_4_;
          fVar84 = fVar84 * auVar75._12_4_;
          uVar117 = puVar18[1];
          bVar29 = (byte)((ulong)uVar117 >> 8);
          auVar99._0_4_ = auVar65._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar117) & 0xffff);
          auVar99._4_4_ = auVar65._4_4_ + (uint)bVar29;
          auVar99._8_4_ = auVar65._8_4_ + (uint)(byte)((ulong)uVar117 >> 0x10);
          auVar99._12_4_ = auVar65._12_4_ + (uint)(byte)((ulong)uVar117 >> 0x18);
          auVar66._0_4_ = auVar65._0_4_ + ((CONCAT12(bVar28,(short)uVar125) & 0xff00ff) & 0xffff);
          auVar66._4_4_ = auVar65._4_4_ + (uint)bVar28;
          auVar66._8_4_ = auVar65._8_4_ + (uint)(byte)((ulong)uVar125 >> 0x10);
          auVar66._12_4_ = auVar65._12_4_ + (uint)(byte)((ulong)uVar125 >> 0x18);
          auVar97 = NEON_scvtf(auVar99,4);
          uVar125 = *(undefined8 *)((long)puVar18 + 0x14);
          auVar119 = NEON_scvtf(auVar66,4);
          bVar28 = (byte)((ulong)uVar125 >> 8);
          uVar117 = puVar18[2];
          bVar29 = (byte)((ulong)uVar117 >> 8);
          auVar109._0_4_ = auVar52._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar117) & 0xffff);
          auVar109._4_4_ = auVar52._4_4_ + (uint)bVar29;
          auVar109._8_4_ = auVar52._8_4_ + (uint)(byte)((ulong)uVar117 >> 0x10);
          auVar109._12_4_ = auVar52._12_4_ + (uint)(byte)((ulong)uVar117 >> 0x18);
          auVar53._0_4_ = auVar52._0_4_ + ((CONCAT12(bVar28,(short)uVar125) & 0xff00ff) & 0xffff);
          auVar53._4_4_ = auVar52._4_4_ + (uint)bVar28;
          auVar53._8_4_ = auVar52._8_4_ + (uint)(byte)((ulong)uVar125 >> 0x10);
          auVar53._12_4_ = auVar52._12_4_ + (uint)(byte)((ulong)uVar125 >> 0x18);
          auVar106 = NEON_scvtf(auVar109,4);
          auVar75 = NEON_scvtf(auVar53,4);
          iVar103 = -(uint)(fVar122 <= fVar11);
          iVar110 = -(uint)(fVar123 <= fVar11);
          iVar112 = -(uint)(fVar124 <= fVar11);
          fVar89 = (float)((ulong)lVar25 >> 0x20);
          fVar94 = (float)((ulong)lVar92 >> 0x20);
          iVar83 = -(uint)(fVar86 <= fVar80);
          iVar85 = -(uint)(fVar86 <= fVar82);
          iVar87 = -(uint)(fVar86 <= fVar84);
          iVar68 = -(uint)(fVar88 <= fVar111 * auVar119._4_4_);
          iVar69 = -(uint)(fVar88 <= fVar113 * auVar119._8_4_);
          iVar70 = -(uint)(fVar88 <= fVar115 * auVar119._12_4_);
          iVar71 = -(uint)(fVar122 <= fVar80);
          iVar79 = -(uint)(fVar123 <= fVar82);
          iVar81 = -(uint)(fVar124 <= fVar84);
          iVar90 = -(uint)(fVar111 * auVar97._4_4_ <= fVar12);
          iVar93 = -(uint)(fVar113 * auVar97._8_4_ <= fVar12);
          iVar95 = -(uint)(fVar115 * auVar97._12_4_ <= fVar12);
          iVar57 = -(uint)(fVar91 <= fVar89 * auVar75._4_4_);
          iVar58 = -(uint)(fVar91 <= (float)lVar92 * auVar75._8_4_);
          iVar59 = -(uint)(fVar91 <= fVar94 * auVar75._12_4_);
          iVar100 = -(uint)(fVar89 * auVar106._4_4_ <= fVar13);
          iVar101 = -(uint)((float)lVar92 * auVar106._8_4_ <= fVar13);
          iVar102 = -(uint)(fVar94 * auVar106._12_4_ <= fVar13);
          uVar34 = (uint)(byte)(-(fVar86 <= fVar72) & -(fVar116 <= fVar11) & -(fVar116 <= fVar72) &
                                -(fVar104 * auVar97._0_4_ <= fVar12) &
                                -(fVar88 <= fVar104 * auVar119._0_4_) &
                                -((float)lVar25 * auVar106._0_4_ <= fVar13) &
                               -(fVar91 <= (float)lVar25 * auVar75._0_4_));
          auVar42._0_8_ =
               CONCAT17((byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar103 >> 0x18) &
                        (byte)((uint)iVar71 >> 0x18) & (byte)((uint)iVar90 >> 0x18) &
                        (byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar100 >> 0x18) &
                        (byte)((uint)iVar57 >> 0x18),
                        (uint7)CONCAT14((byte)iVar83 & (byte)iVar103 & (byte)iVar71 & (byte)iVar90 &
                                        (byte)iVar68 & (byte)iVar100 & (byte)iVar57,uVar34));
          auVar42[8] = (byte)iVar85 & (byte)iVar110 & (byte)iVar79 & (byte)iVar93 & (byte)iVar69 &
                       (byte)iVar101 & (byte)iVar58;
          auVar42[9] = (byte)((uint)iVar85 >> 8) & (byte)((uint)iVar110 >> 8) &
                       (byte)((uint)iVar79 >> 8) & (byte)((uint)iVar93 >> 8) &
                       (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar101 >> 8) &
                       (byte)((uint)iVar58 >> 8);
          auVar42[10] = (byte)((uint)iVar85 >> 0x10) & (byte)((uint)iVar110 >> 0x10) &
                        (byte)((uint)iVar79 >> 0x10) & (byte)((uint)iVar93 >> 0x10) &
                        (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar101 >> 0x10) &
                        (byte)((uint)iVar58 >> 0x10);
          auVar42[0xb] = (byte)((uint)iVar85 >> 0x18) & (byte)((uint)iVar110 >> 0x18) &
                         (byte)((uint)iVar79 >> 0x18) & (byte)((uint)iVar93 >> 0x18) &
                         (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar101 >> 0x18) &
                         (byte)((uint)iVar58 >> 0x18);
          auVar54[0xc] = (byte)iVar87 & (byte)iVar112 & (byte)iVar81 & (byte)iVar95 & (byte)iVar70 &
                         (byte)iVar102 & (byte)iVar59;
          auVar54._0_12_ = auVar42;
          auVar54[0xd] = (byte)((uint)iVar87 >> 8) & (byte)((uint)iVar112 >> 8) &
                         (byte)((uint)iVar81 >> 8) & (byte)((uint)iVar95 >> 8) &
                         (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar102 >> 8) &
                         (byte)((uint)iVar59 >> 8);
          auVar54[0xe] = (byte)((uint)iVar87 >> 0x10) & (byte)((uint)iVar112 >> 0x10) &
                         (byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar95 >> 0x10) &
                         (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar102 >> 0x10) &
                         (byte)((uint)iVar59 >> 0x10);
          auVar54[0xf] = (byte)((uint)iVar87 >> 0x18) & (byte)((uint)iVar112 >> 0x18) &
                         (byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar95 >> 0x18) &
                         (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar102 >> 0x18) &
                         (byte)((uint)iVar59 >> 0x18);
          uVar117 = puVar18[3];
          uVar30 = (undefined1)((ulong)uVar117 >> 8);
          auVar67._6_2_ = 0;
          auVar67._0_6_ =
               (uint6)CONCAT14(uVar30,(uint)CONCAT12(uVar30,(ushort)(byte)uVar117)) & 0xffff0000ffff
          ;
          auVar67[8] = (char)((ulong)uVar117 >> 0x10);
          auVar67._9_3_ = 0;
          auVar67[0xc] = (char)((ulong)uVar117 >> 0x18);
          auVar67._13_3_ = 0;
          bVar28 = (byte)((int)(uVar34 << 0x1f) >> 0x1f);
          iVar57 = CONCAT13(bVar28 & bStack_92d,
                            CONCAT12(bVar28 & bStack_92e,
                                     CONCAT11(bVar28 & bStack_92f,bVar28 & local_930)));
          bVar28 = (byte)(((int)((ulong)auVar42._0_8_ >> 0x20) << 0x1f) >> 0x1f);
          auVar43._0_8_ =
               CONCAT17(bVar28 & bStack_929,
                        CONCAT16(bVar28 & bStack_92a,
                                 CONCAT15(bVar28 & bStack_92b,CONCAT14(bVar28 & bStack_92c,iVar57)))
                       );
          bVar28 = (byte)((auVar42._8_4_ << 0x1f) >> 0x1f);
          auVar43[8] = bVar28 & bStack_928;
          auVar43[9] = bVar28 & bStack_927;
          auVar43[10] = bVar28 & bStack_926;
          auVar43[0xb] = bVar28 & bStack_925;
          bVar28 = (byte)((auVar54._12_4_ << 0x1f) >> 0x1f);
          auVar55[0xc] = bVar28 & bStack_924;
          auVar55._0_12_ = auVar43;
          auVar55[0xd] = bVar28 & bStack_923;
          auVar55[0xe] = bVar28 & bStack_922;
          auVar55[0xf] = bVar28 & bStack_921;
          uVar32 = iVar57 + (int)((ulong)auVar43._0_8_ >> 0x20) + auVar43._8_4_ + auVar55._12_4_;
          auVar75 = a64_TBL(ZEXT816(0),auVar67,
                            *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar32 * 0x10));
          uVar34 = *(uint *)(&DAT_03aadfe0 + (ulong)uVar32 * 4);
          if (*(byte *)((long)puVar18 + 0x1b) < *(byte *)((long)puVar18 + 0x1a)) {
            cVar8 = *(char *)((long)param_3 + 0x101);
            local_100 = puVar22;
            if (uVar32 != 0 && cVar8 == '\0') {
              uVar32 = 0;
LAB_02fd5c28:
              switch(uVar32) {
              default:
                iVar57 = auVar75._0_4_;
                break;
              case 1:
                iVar57 = auVar75._4_4_;
                break;
              case 2:
                iVar57 = auVar75._8_4_;
                break;
              case 3:
                iVar57 = auVar75._12_4_;
              }
              do {
                uVar33 = 0;
                uVar23 = *(uint *)(param_3[0xd] + 8 +
                                  (long)iVar57 * 4 + (long)*(int *)(param_3[0xd] + 8));
                uVar24 = 1;
                if ((uVar23 >> 8 & 0xff) <= uVar23 >> 0x18 &&
                    (uVar23 >> 0x10 & 0xff) != uVar23 >> 0x18) {
                  uVar24 = 2;
                }
                local_78 = *(undefined8 *)param_3[4];
                uStack_70 = ((undefined8 *)param_3[4])[1];
                do {
                  lVar21 = param_3[2];
                  puVar18 = (undefined8 *)param_3[3];
                  uVar23 = *(uint *)(param_3 + 0xc) | iVar57 << 1;
                  uVar7 = ((uVar23 | uVar33) + 1 <<
                          (ulong)(-((uint)*(byte *)(lVar21 + 0x1c) + *(int *)((long)puVar18 + 0x1c))
                                 & 0x1f)) - 1 |
                          (&DAT_03aa74b0)[*(int *)((long)puVar18 + 0x1c)] & *(uint *)(puVar18 + 3);
                  plVar16 = *(long **)*param_3;
                  if (plVar16 == (long *)0x0) {
LAB_02fd5dd8:
                    plVar16 = (long *)param_3[0x1f];
                    iVar59 = (int)plVar16[1];
                    lVar21 = *plVar16;
                    iVar58 = iVar59 + 1;
                    if ((int)(*(uint *)((long)plVar16 + 0xc) & 0x3fffffff) <= iVar59) {
                      lVar21 = FUN_02f7f7b8(PTR_PTR_0434a080,iVar58);
                      iVar59 = (int)plVar16[1];
                      *plVar16 = lVar21;
                    }
                    *(uint *)(lVar21 + (long)iVar59 * 4) = uVar7;
                    *(int *)(plVar16 + 1) = iVar58;
                    bVar1 = false;
                    if ((char)param_3[0x20] != '\0') {
                      bVar1 = 0 < *(int *)(param_3[0x1f] + 8);
                    }
                    *(byte *)((long)param_3 + 0x101) = *(byte *)((long)param_3 + 0x101) | bVar1;
                  }
                  else {
                    lVar25 = *(long *)(lVar21 + 0x48);
                    if (lVar25 == 0) {
                      lVar25 = 0;
                    }
                    else {
                      lVar25 = lVar25 + lVar21 + 0x48;
                    }
                    piVar4 = (int *)(lVar25 + 0x40);
                    if (*(int *)(lVar25 + 0x44) == 2) {
                      lVar25 = (long)*piVar4;
                    }
                    else {
                      iVar59 = *piVar4;
                      iVar68 = 0;
                      iVar58 = *(int *)(lVar25 + 0x44) + -1;
                      while( true ) {
                        uVar2 = iVar58 + iVar68;
                        if ((int)uVar2 < 0) {
                          uVar2 = uVar2 + 1;
                        }
                        uVar6 = (int)uVar2 >> 1;
                        lVar92 = (long)((ulong)uVar2 << 0x20) >> 0x21;
                        uVar2 = *(uint *)((long)piVar4 +
                                         (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 |
                                         (ulong)uVar6 << 3) + (long)iVar59);
                        lVar25 = lVar92 + 1;
                        if ((uVar2 <= uVar23) &&
                           (uVar23 < *(uint *)((long)piVar4 + lVar25 * 8 + (long)iVar59))) break;
                        iVar69 = (int)lVar25;
                        if (uVar23 <= uVar2) {
                          iVar58 = uVar6 - 1;
                          iVar69 = iVar68;
                        }
                        iVar68 = iVar69;
                      }
                      lVar25 = lVar92 * 8 + (long)iVar59;
                    }
                    (**(code **)(*plVar16 + 0x40))
                              (plVar16,*(undefined2 *)((long)piVar4 + lVar25 + 4),6,*puVar18,
                               puVar18[1],lVar21,uVar7,0,&local_78);
                    lVar21 = *param_3;
                    if (*(long *)(lVar21 + 8) == 0) goto LAB_02fd5dd8;
                    local_b0[0] = *(undefined2 *)(lVar21 + 0x10);
                    uVar117 = *(undefined8 *)(lVar21 + 0x14);
                    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(lVar21 + 0x1c);
                    *puVar17 = uVar117;
                    puVar18 = (undefined8 *)param_3[0x1e];
                    local_a0 = *puVar18;
                    local_98 = puVar18[1];
                    local_90 = puVar18[2];
                    local_88 = *(undefined4 *)(puVar18 + 3);
                    local_e8[0] = (undefined2)local_78;
                    uVar117 = *puVar27;
                    local_80 = 0;
                    *(undefined4 *)(puVar26 + 1) = *(undefined4 *)(puVar27 + 1);
                    *puVar26 = uVar117;
                    local_d8 = *(undefined8 *)param_3[3];
                    local_d0 = ((undefined8 *)param_3[3])[1];
                    local_c8 = param_3[2];
                    local_b8 = 0;
                    local_c0 = uVar7;
                    uVar20 = (**(code **)(**(long **)(lVar21 + 8) + 0x40))
                                       (*(long **)(lVar21 + 8),6,1,local_b0,local_e8);
                    if ((uVar20 & 1) != 0) goto LAB_02fd5dd8;
                  }
                  uVar33 = uVar33 + 1;
                } while (uVar33 < uVar24);
                uVar32 = uVar32 + 1;
                if (uVar32 == uVar34) {
                  cVar8 = *(char *)((long)param_3 + 0x101);
                  break;
                }
                if (uVar32 < 4) goto LAB_02fd5c28;
                iVar57 = 0;
              } while( true );
            }
            if ((cVar8 != '\0') || (local_500 == local_100)) goto LAB_02fd59b0;
          }
          else {
            *(long *)(local_100 + -1) = auVar75._0_8_;
            auVar75 = NEON_ext(auVar75,auVar75,8,1);
            *(long *)(local_100 + 1) = auVar75._0_8_;
            local_100 = puVar22 + (int)uVar34;
            if (local_500 == local_100) goto LAB_02fd59b0;
          }
          auVar52 = *(undefined1 (*) [16])(param_3 + 0x14);
          fVar72 = *(float *)(param_3 + 0x16);
          fVar80 = *(float *)((long)param_3 + 0xb4);
          fVar82 = *(float *)(param_3 + 0x17);
          fVar84 = *(float *)((long)param_3 + 0xbc);
          lVar21 = param_3[0xe];
          auVar77 = *(undefined1 (*) [16])(param_3 + 0x10);
          auVar65 = *(undefined1 (*) [16])(param_3 + 0x12);
          fVar104 = *(float *)(param_3 + 0x18);
          fVar111 = *(float *)((long)param_3 + 0xc4);
          fVar113 = *(float *)(param_3 + 0x19);
          fVar115 = *(float *)((long)param_3 + 0xcc);
          lVar92 = param_3[0x1b];
          lVar25 = param_3[0x1a];
        } while( true );
      }
    }
LAB_02fd4c5c:
    uVar20 = (ulong)((long)local_510 - (long)local_910) >> 2;
    if ((int)uVar20 == 0) {
      return;
    }
  } while( true );
LAB_02fd536c:
  iVar56 = iVar56 + 1;
  if (iVar56 == iVar31) goto LAB_02fd4c5c;
  goto LAB_02fd5380;
LAB_02fd4d48:
  iVar56 = iVar56 + 1;
  if (iVar56 == iVar31) goto LAB_02fd58f8;
  goto LAB_02fd4d5c;
LAB_02fd59b0:
  iVar56 = iVar56 + 1;
  if (iVar56 == iVar31) goto LAB_02fd4c5c;
  goto LAB_02fd59c0;
}


