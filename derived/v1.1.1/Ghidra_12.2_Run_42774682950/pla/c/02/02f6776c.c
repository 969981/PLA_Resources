/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6776c; name: FUN_02f6776c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f6776c(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  undefined5 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  long *plVar17;
  bool bVar18;
  ulong uVar19;
  undefined8 *puVar20;
  code *pcVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 *puVar26;
  uint *puVar25;
  long lVar27;
  ulong uVar28;
  undefined1 (*pauVar29) [16];
  long *plVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  uint uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar43;
  undefined8 uVar38;
  float fVar42;
  int iVar44;
  undefined1 auVar39 [12];
  float fVar45;
  int iVar46;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  uint uVar47;
  uint uVar48;
  undefined1 auVar49 [12];
  undefined1 auVar50 [12];
  int iVar53;
  undefined1 auVar51 [16];
  uint uVar54;
  uint uVar55;
  int iVar57;
  uint uVar58;
  undefined8 uVar56;
  undefined1 auVar52 [16];
  byte bVar59;
  uint uVar60;
  uint uVar61;
  undefined1 auVar62 [12];
  undefined1 auVar63 [12];
  undefined1 auVar64 [12];
  undefined1 auVar65 [12];
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  int iVar77;
  float fVar82;
  int iVar83;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar87 [12];
  undefined1 auVar88 [12];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar94;
  float fVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float local_d20;
  float fStack_d1c;
  float fStack_d18;
  float local_ca0;
  float local_c90;
  float fStack_c8c;
  float fStack_c88;
  undefined1 uStack_c4b;
  undefined1 uStack_c4a;
  undefined1 uStack_c49;
  undefined1 uStack_c48;
  undefined1 uStack_c47;
  undefined1 uStack_c46;
  undefined1 uStack_c45;
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined8 local_c30;
  undefined8 uStack_c28;
  undefined8 local_c20;
  undefined8 uStack_c18;
  undefined8 local_c10;
  undefined8 uStack_c08;
  undefined8 local_c00;
  undefined8 uStack_bf8;
  undefined8 local_bf0;
  undefined8 uStack_be8;
  long *local_be0;
  undefined8 local_bd8;
  long local_bd0 [32];
  undefined8 *local_ad0;
  undefined8 local_ac8;
  long local_ac0;
  long *local_ab0;
  long *local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined8 local_a90;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined4 local_a50;
  long local_a40;
  char local_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  undefined8 *local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  undefined4 local_a08;
  undefined4 local_a04;
  undefined8 local_a00;
  undefined4 local_9f8;
  undefined4 local_9f4;
  undefined8 local_9f0;
  undefined4 local_9e8;
  undefined4 local_9e4;
  undefined8 local_9e0;
  undefined4 local_9d8;
  undefined4 local_9d4;
  undefined8 local_9d0;
  undefined4 local_9c8;
  undefined4 local_9c4;
  undefined8 local_9c0;
  undefined4 local_9b8;
  undefined4 local_9b4;
  undefined8 local_9b0;
  undefined4 local_9a8;
  undefined4 local_9a4;
  undefined8 local_9a0;
  undefined4 local_998;
  undefined4 local_994;
  undefined8 local_990;
  undefined4 local_988;
  undefined4 local_984;
  undefined8 local_980;
  undefined4 local_978;
  undefined4 local_974;
  undefined8 local_970;
  undefined4 local_968;
  undefined4 local_964;
  undefined8 local_960;
  undefined4 local_958;
  undefined4 local_954;
  undefined8 local_950;
  undefined4 local_948;
  undefined4 local_944;
  undefined8 local_940;
  undefined4 local_938;
  undefined4 local_934;
  undefined8 local_930;
  undefined4 local_928;
  undefined4 local_924;
  undefined8 local_920;
  undefined4 local_918;
  undefined4 local_914;
  undefined8 local_910;
  undefined4 local_908;
  undefined4 uStack_904;
  long local_900 [256];
  long *local_100;
  undefined1 (*local_f0) [16];
  long local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 (*pauStack_d0) [16];
  undefined8 local_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_88;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar16 = PTR_PTR_0434a080;
  if (param_4 == (undefined8 *)0x0) {
    local_a10 = *(undefined8 *)(DAT_04434b38 + 0x8a0);
    local_a08 = *(undefined4 *)(DAT_04434b38 + 0x8a8);
    local_a04 = *(undefined4 *)(DAT_04434b38 + 0x8ac);
    local_a00 = *(undefined8 *)(DAT_04434b38 + 0x8b0);
    local_9f8 = *(undefined4 *)(DAT_04434b38 + 0x8b8);
    local_9f4 = *(undefined4 *)(DAT_04434b38 + 0x8bc);
    local_9f0 = *(undefined8 *)(DAT_04434b38 + 0x8c0);
    local_9e8 = *(undefined4 *)(DAT_04434b38 + 0x8c8);
    local_9e4 = *(undefined4 *)(DAT_04434b38 + 0x8cc);
    local_9e0 = *(undefined8 *)(DAT_04434b38 + 0x8d0);
    local_9d8 = *(undefined4 *)(DAT_04434b38 + 0x8d8);
    local_9d4 = *(undefined4 *)(DAT_04434b38 + 0x8dc);
    local_9d0 = *(undefined8 *)(DAT_04434b38 + 0x8e0);
    local_9c8 = *(undefined4 *)(DAT_04434b38 + 0x8e8);
    local_9c4 = *(undefined4 *)(DAT_04434b38 + 0x8ec);
    local_9c0 = *(undefined8 *)(DAT_04434b38 + 0x8f0);
    local_9b8 = *(undefined4 *)(DAT_04434b38 + 0x8f8);
    local_9b4 = *(undefined4 *)(DAT_04434b38 + 0x8fc);
    local_9b0 = *(undefined8 *)(DAT_04434b38 + 0x900);
    local_9a8 = *(undefined4 *)(DAT_04434b38 + 0x908);
    local_9a4 = *(undefined4 *)(DAT_04434b38 + 0x90c);
    local_9a0 = *(undefined8 *)(DAT_04434b38 + 0x910);
    local_998 = *(undefined4 *)(DAT_04434b38 + 0x918);
    local_994 = *(undefined4 *)(DAT_04434b38 + 0x91c);
    local_990 = *(undefined8 *)(DAT_04434b38 + 0x920);
    local_988 = *(undefined4 *)(DAT_04434b38 + 0x928);
    local_984 = *(undefined4 *)(DAT_04434b38 + 0x92c);
    local_980 = *(undefined8 *)(DAT_04434b38 + 0x930);
    local_978 = *(undefined4 *)(DAT_04434b38 + 0x938);
    local_974 = *(undefined4 *)(DAT_04434b38 + 0x93c);
    local_970 = *(undefined8 *)(DAT_04434b38 + 0x940);
    local_968 = *(undefined4 *)(DAT_04434b38 + 0x948);
    local_964 = *(undefined4 *)(DAT_04434b38 + 0x94c);
    local_960 = *(undefined8 *)(DAT_04434b38 + 0x950);
    local_958 = *(undefined4 *)(DAT_04434b38 + 0x958);
    local_954 = *(undefined4 *)(DAT_04434b38 + 0x95c);
    local_950 = *(undefined8 *)(DAT_04434b38 + 0x960);
    local_948 = *(undefined4 *)(DAT_04434b38 + 0x968);
    local_944 = *(undefined4 *)(DAT_04434b38 + 0x96c);
    local_940 = *(undefined8 *)(DAT_04434b38 + 0x970);
    local_938 = *(undefined4 *)(DAT_04434b38 + 0x978);
    local_934 = *(undefined4 *)(DAT_04434b38 + 0x97c);
    local_930 = *(undefined8 *)(DAT_04434b38 + 0x980);
    local_928 = *(undefined4 *)(DAT_04434b38 + 0x988);
    local_924 = *(undefined4 *)(DAT_04434b38 + 0x98c);
    local_920 = *(undefined8 *)(DAT_04434b38 + 0x990);
    local_918 = *(undefined4 *)(DAT_04434b38 + 0x998);
    local_914 = *(undefined4 *)(DAT_04434b38 + 0x99c);
    local_910 = *(undefined8 *)(DAT_04434b38 + 0x9a0);
    local_908 = *(undefined4 *)(DAT_04434b38 + 0x9a8);
    uStack_904 = *(undefined4 *)(DAT_04434b38 + 0x9ac);
    local_a20 = &local_a10;
    param_4 = &local_a30;
    local_a28 = 0;
    local_a30 = 0;
    local_a18 = 0x100000000;
  }
  local_a98 = param_2[3];
  local_aa8 = (long *)param_2[1];
  local_ab0 = (long *)*param_2;
  local_aa0 = param_2[2];
  local_a90 = param_2[4];
  uVar38 = param_2[6];
  uVar56 = param_2[7];
  uVar7 = *(undefined4 *)((long)param_2 + 0x44);
  uVar12 = *(undefined5 *)(param_2 + 8);
  local_a70 = param_2[8];
  uVar8 = *(undefined4 *)(param_2 + 9);
  uStack_a68 = param_2[9];
  uVar9 = param_2[10];
  uVar10 = param_2[0xb];
  local_a50 = *(undefined4 *)(param_2 + 0xc);
  uStack_c48 = (undefined1)uVar8;
  uStack_c47 = (undefined1)((uint)uVar8 >> 8);
  uStack_c46 = (undefined1)((uint)uVar8 >> 0x10);
  uStack_c45 = (undefined1)((uint)uVar8 >> 0x18);
  uStack_c4b = (undefined1)((uint)uVar7 >> 8);
  uStack_c4a = (undefined1)((uint)uVar7 >> 0x10);
  uStack_c49 = (undefined1)((uint)uVar7 >> 0x18);
  local_a38 = *(char *)(param_3 + 0x18) != '\0';
  uVar37 = NEON_fmin(CONCAT44(*(undefined4 *)((long)param_2 + 0x4c),
                              *(undefined4 *)((long)param_2 + 0x4c)),*(undefined8 *)(param_3 + 0x10)
                     ,4);
  local_ac0 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x10);
  local_be0 = local_bd0;
  local_bd8 = 0x8000002000000000;
  iVar44 = *(int *)(param_1 + 0x18);
  local_ad0 = param_4;
  local_ac8 = uVar37;
  local_a80 = uVar38;
  uStack_a78 = uVar56;
  uStack_a60 = uVar9;
  uStack_a58 = uVar10;
  local_a40 = param_3;
  if (0 < iVar44) {
    plVar30 = (long *)param_2[1];
    if (plVar30 == (long *)0x0) {
      iVar53 = 0;
      lVar33 = 0;
      do {
        lVar27 = *(long *)(*(long *)(param_1 + 0x10) + lVar33 * 8);
        if (((*(char *)(lVar27 + 0x20) != '\0') &&
            ((*(byte *)((long)param_2 + 0x21) & *(byte *)(lVar27 + 0x1ae0)) == 0)) &&
           ((*(byte *)((long)param_2 + 0x22) & *(byte *)(lVar27 + 0x1ae0)) != 0)) {
          iVar46 = iVar53 + 1;
          if ((int)(local_bd8._4_4_ & 0x3fffffff) <= iVar53) {
            local_be0 = (long *)FUN_02f6a1c4(puVar16,iVar46,local_be0,iVar53,(long)&local_bd8 + 4);
            iVar53 = (int)local_bd8;
          }
          local_be0[iVar53] = lVar27 + 8;
          local_bd8 = CONCAT44(local_bd8._4_4_,iVar46);
          iVar44 = *(int *)(param_1 + 0x18);
          iVar53 = iVar46;
        }
        lVar33 = lVar33 + 1;
      } while (lVar33 < iVar44);
    }
    else {
      uVar32 = 0;
      do {
        lVar33 = *(long *)(*(long *)(param_1 + 0x10) + uVar32 * 8);
        if (((*(char *)(lVar33 + 0x20) != '\0') &&
            ((*(byte *)((long)param_2 + 0x21) & *(byte *)(lVar33 + 0x1ae0)) == 0)) &&
           (((*(byte *)((long)param_2 + 0x22) & *(byte *)(lVar33 + 0x1ae0)) != 0 &&
            (uVar19 = (**(code **)(*plVar30 + 0x28))(plVar30,1,uVar32 & 0xffffffff,param_2[3]),
            (uVar19 & 1) != 0)))) {
          iVar44 = (int)local_bd8 + 1;
          if ((int)(local_bd8._4_4_ & 0x3fffffff) <= (int)local_bd8) {
            local_be0 = (long *)FUN_02f6a1c4(puVar16,iVar44,local_be0,local_bd8 & 0xffffffff,
                                             (long)&local_bd8 + 4);
          }
          local_be0[(int)local_bd8] = lVar33 + 8;
          local_bd8 = CONCAT44(local_bd8._4_4_,iVar44);
        }
        uVar32 = uVar32 + 1;
      } while ((long)uVar32 < (long)*(int *)(param_1 + 0x18));
      iVar53 = (int)local_bd8;
    }
    if (iVar53 != 0) {
      local_d20 = (float)uVar38;
      fStack_d1c = (float)((ulong)uVar38 >> 0x20);
      fStack_d18 = (float)uVar56;
      local_c90 = (float)uVar9;
      fStack_c8c = (float)((ulong)uVar9 >> 0x20);
      fStack_c88 = (float)uVar10;
      uVar38 = CONCAT17(uStack_c49,CONCAT16(uStack_c4a,CONCAT15(uStack_c4b,uVar12)));
      auVar11[8] = uStack_c48;
      auVar11._0_8_ = uVar38;
      auVar11[9] = uStack_c47;
      auVar11[10] = uStack_c46;
      auVar11[0xb] = uStack_c45;
      fVar94 = (float)uVar12;
      fVar95 = auVar11._8_4_;
      local_ca0 = (float)uVar37;
      fVar42 = (float)((ulong)uVar38 >> 0x20);
      iVar44 = -(uint)(0.0 <= fVar95);
      iVar46 = -(uint)(0.0 <= local_ca0);
      bVar59 = (byte)_DAT_03889700;
      uVar32 = (ulong)_DAT_03889700 >> 8;
      uVar19 = (ulong)_DAT_03889700 >> 0x10;
      uVar13 = (ulong)_DAT_03889700 >> 0x18;
      uVar35 = (uint)(-(0.0 <= fVar94) & bVar59);
      bVar74 = (byte)((ulong)_DAT_03889700 >> 0x20);
      uVar14 = (ulong)_DAT_03889700 >> 0x28;
      uVar15 = (ulong)_DAT_03889700 >> 0x30;
      bVar75 = (byte)((ulong)_DAT_03889700 >> 0x38);
      auVar39._0_8_ =
           CONCAT17((byte)(-(uint)(0.0 <= fVar42) >> 0x18) & bVar75,
                    (uint7)CONCAT14((byte)-(uint)(0.0 <= fVar42) & bVar74,uVar35));
      bVar76 = (byte)_UNK_03889708;
      auVar39[8] = (byte)iVar44 & bVar76;
      bVar78 = (byte)((ulong)_UNK_03889708 >> 8);
      auVar39[9] = (byte)((uint)iVar44 >> 8) & bVar78;
      bVar79 = (byte)((ulong)_UNK_03889708 >> 0x10);
      auVar39[10] = (byte)((uint)iVar44 >> 0x10) & bVar79;
      bVar80 = (byte)((ulong)_UNK_03889708 >> 0x18);
      auVar39[0xb] = (byte)((uint)iVar44 >> 0x18) & bVar80;
      bVar81 = (byte)((ulong)_UNK_03889708 >> 0x20);
      auVar40[0xc] = (byte)iVar46 & bVar81;
      auVar40._0_12_ = auVar39;
      bVar84 = (byte)((ulong)_UNK_03889708 >> 0x28);
      auVar40[0xd] = (byte)((uint)iVar46 >> 8) & bVar84;
      bVar85 = (byte)((ulong)_UNK_03889708 >> 0x30);
      auVar40[0xe] = (byte)((uint)iVar46 >> 0x10) & bVar85;
      bVar86 = (byte)((ulong)_UNK_03889708 >> 0x38);
      auVar40[0xf] = (byte)((uint)iVar46 >> 0x18) & bVar86;
      uVar35 = uVar35 + (int)((ulong)auVar39._0_8_ >> 0x20) + auVar39._8_4_ + auVar40._12_4_;
      plVar30 = local_be0 + iVar53;
      auVar40 = NEON_fmov(0x3f800000,4);
      plVar23 = local_be0;
      do {
        auVar41._0_4_ = (float)local_ac8;
        if (0.0 <= auVar41._0_4_) {
          auVar41._4_4_ = auVar41._0_4_;
          auVar41._8_4_ = auVar41._0_4_;
          auVar41._12_4_ = auVar41._0_4_;
          uVar34 = (ulong)(uVar35 * 0x10) & 0x10;
          lVar27 = *(long *)*plVar23;
          lVar33 = 0;
          if (lVar27 != 0) {
            lVar33 = lVar27 + *plVar23;
          }
          bVar18 = (uVar35 & 2) == 0;
          lVar27 = 0x20;
          if (bVar18) {
            lVar27 = 0x30;
          }
          lVar2 = 0x30;
          if (bVar18) {
            lVar2 = 0x20;
          }
          bVar18 = (uVar35 & 4) == 0;
          lVar3 = 0x40;
          if (bVar18) {
            lVar3 = 0x50;
          }
          lVar4 = 0x50;
          if (bVar18) {
            lVar4 = 0x40;
          }
          lVar22 = lVar33 + 0x80;
          local_100 = local_900;
LAB_02f67be4:
          while( true ) {
            pfVar5 = (float *)(lVar22 + (uVar34 ^ 0x10));
            pfVar6 = (float *)(lVar22 + uVar34);
            auVar51._0_4_ = local_c90 * (*pfVar5 - local_d20);
            auVar51._4_4_ = local_c90 * (pfVar5[1] - local_d20);
            auVar51._8_4_ = local_c90 * (pfVar5[2] - local_d20);
            auVar51._12_4_ = local_c90 * (pfVar5[3] - local_d20);
            auVar96._0_4_ = local_c90 * (*pfVar6 - local_d20);
            auVar96._4_4_ = local_c90 * (pfVar6[1] - local_d20);
            auVar96._8_4_ = local_c90 * (pfVar6[2] - local_d20);
            auVar96._12_4_ = local_c90 * (pfVar6[3] - local_d20);
            pfVar5 = (float *)(lVar22 + lVar27);
            pfVar6 = (float *)(lVar22 + lVar2);
            auVar98._0_4_ = fStack_c8c * (*pfVar6 - fStack_d1c);
            auVar98._4_4_ = fStack_c8c * (pfVar6[1] - fStack_d1c);
            auVar98._8_4_ = fStack_c8c * (pfVar6[2] - fStack_d1c);
            auVar98._12_4_ = fStack_c8c * (pfVar6[3] - fStack_d1c);
            pfVar6 = (float *)(lVar22 + lVar4);
            auVar67._0_4_ = fStack_c8c * (*pfVar5 - fStack_d1c);
            auVar67._4_4_ = fStack_c8c * (pfVar5[1] - fStack_d1c);
            auVar67._8_4_ = fStack_c8c * (pfVar5[2] - fStack_d1c);
            auVar67._12_4_ = fStack_c8c * (pfVar5[3] - fStack_d1c);
            auVar51 = NEON_smax(auVar51,auVar67,4);
            pfVar5 = (float *)(lVar22 + lVar3);
            auVar97._0_4_ = fStack_c88 * (*pfVar6 - fStack_d18);
            auVar97._4_4_ = fStack_c88 * (pfVar6[1] - fStack_d18);
            auVar97._8_4_ = fStack_c88 * (pfVar6[2] - fStack_d18);
            auVar97._12_4_ = fStack_c88 * (pfVar6[3] - fStack_d18);
            auVar99._0_4_ = fStack_c88 * (*pfVar5 - fStack_d18);
            auVar99._4_4_ = fStack_c88 * (pfVar5[1] - fStack_d18);
            auVar99._8_4_ = fStack_c88 * (pfVar5[2] - fStack_d18);
            auVar99._12_4_ = fStack_c88 * (pfVar5[3] - fStack_d18);
            auVar66 = NEON_smax(auVar99,ZEXT816(0),4);
            auVar67 = NEON_smax(auVar51,auVar66,4);
            auVar51 = NEON_smin(auVar96,auVar98,4);
            auVar66 = NEON_smin(auVar97,auVar41,4);
            auVar51 = NEON_smin(auVar51,auVar66,4);
            fVar36 = auVar67._0_4_;
            iVar44 = -(uint)(auVar51._0_4_ < (int)fVar36);
            fVar43 = auVar67._4_4_;
            iVar53 = -(uint)(auVar51._4_4_ < (int)fVar43);
            fVar45 = auVar67._8_4_;
            iVar46 = -(uint)(auVar51._8_4_ < (int)fVar45);
            fVar82 = auVar67._12_4_;
            iVar57 = -(uint)(auVar51._12_4_ < (int)fVar82);
            iVar44 = CONCAT13((byte)uVar13 & ~(byte)((uint)iVar44 >> 0x18),
                              CONCAT12((byte)uVar19 & ~(byte)((uint)iVar44 >> 0x10),
                                       CONCAT11((byte)uVar32 & ~(byte)((uint)iVar44 >> 8),
                                                bVar59 & ~(byte)iVar44)));
            auVar49._0_8_ =
                 CONCAT17(bVar75 & ~(byte)((uint)iVar53 >> 0x18),
                          CONCAT16((byte)uVar15 & ~(byte)((uint)iVar53 >> 0x10),
                                   CONCAT15((byte)uVar14 & ~(byte)((uint)iVar53 >> 8),
                                            CONCAT14(bVar74 & ~(byte)iVar53,iVar44))));
            auVar49[8] = bVar76 & ~(byte)iVar46;
            auVar49[9] = bVar78 & ~(byte)((uint)iVar46 >> 8);
            auVar49[10] = bVar79 & ~(byte)((uint)iVar46 >> 0x10);
            auVar49[0xb] = bVar80 & ~(byte)((uint)iVar46 >> 0x18);
            auVar66[0xc] = bVar81 & ~(byte)iVar57;
            auVar66._0_12_ = auVar49;
            auVar66[0xd] = bVar84 & ~(byte)((uint)iVar57 >> 8);
            auVar66[0xe] = bVar85 & ~(byte)((uint)iVar57 >> 0x10);
            auVar66[0xf] = bVar86 & ~(byte)((uint)iVar57 >> 0x18);
            uVar47 = iVar44 + (int)((ulong)auVar49._0_8_ >> 0x20) + auVar49._8_4_ + auVar66._12_4_;
            if (uVar47 != 0) break;
LAB_02f67f58:
            if (local_900 == local_100) goto LAB_02f68168;
            lVar22 = local_100[-1];
            local_100 = local_100 + -1;
          }
          auVar51 = *(undefined1 (*) [16])(lVar22 + 0x60);
          if (*(char *)(lVar22 + 0x70) == '\0') {
            uVar48 = auVar51._0_4_;
            uVar54 = auVar51._4_4_;
            uVar55 = auVar51._8_4_;
            uVar58 = auVar51._12_4_;
            uVar38 = auVar51._0_8_;
            uVar56 = auVar51._8_8_;
            switch(uVar47) {
            case 1:
              lVar22 = lVar33 + (ulong)uVar48 * 0x80;
              goto LAB_02f67be4;
            case 2:
              lVar22 = lVar33 + (ulong)uVar54 * 0x80;
              goto LAB_02f67be4;
            case 3:
              if (fVar36 < fVar43) {
                lVar22 = lVar33 + (ulong)uVar54 * 0x80;
                Hint_Prefetch(lVar22,0,0,0);
                Hint_Prefetch(lVar22 + 0x40,0,0,0);
                plVar17 = local_100 + 1;
                *local_100 = lVar22;
                local_100 = plVar17;
              }
              else {
                lVar22 = lVar33 + (ulong)uVar48 * 0x80;
                Hint_Prefetch(lVar22,0,0,0);
                Hint_Prefetch(lVar22 + 0x40,0,0,0);
                plVar17 = local_100 + 1;
                *local_100 = lVar22;
                local_100 = plVar17;
              }
              puVar25 = (uint *)((ulong)&local_c40 | (ulong)(fVar36 >= fVar43) << 2);
              local_c40 = uVar38;
              uStack_c38 = uVar56;
              goto LAB_02f68158;
            case 4:
              lVar22 = lVar33 + (ulong)uVar55 * 0x80;
              goto LAB_02f67be4;
            case 5:
              if (fVar36 < fVar45) {
                lVar1 = lVar33 + (ulong)uVar55 * 0x80;
                Hint_Prefetch(lVar1,0,0,0);
                Hint_Prefetch(lVar1 + 0x40,0,0,0);
                lVar22 = 0;
                plVar17 = local_100 + 1;
                *local_100 = lVar1;
                local_100 = plVar17;
              }
              else {
                lVar22 = lVar33 + (ulong)uVar48 * 0x80;
                Hint_Prefetch(lVar22,0,0,0);
                Hint_Prefetch(lVar22 + 0x40,0,0,0);
                plVar17 = local_100 + 1;
                *local_100 = lVar22;
                local_100 = plVar17;
                lVar22 = 2;
              }
              puVar26 = &local_c30;
              local_c30 = uVar38;
              uStack_c28 = uVar56;
              break;
            case 6:
              if (fVar43 < fVar45) {
                lVar22 = lVar33 + (ulong)uVar55 * 0x80;
                Hint_Prefetch(lVar22,0,0,0);
                Hint_Prefetch(lVar22 + 0x40,0,0,0);
                plVar17 = local_100 + 1;
                *local_100 = lVar22;
                local_100 = plVar17;
                lVar22 = 1;
              }
              else {
                lVar22 = lVar33 + (ulong)uVar54 * 0x80;
                Hint_Prefetch(lVar22,0,0,0);
                Hint_Prefetch(lVar22 + 0x40,0,0,0);
                plVar17 = local_100 + 1;
                *local_100 = lVar22;
                local_100 = plVar17;
                lVar22 = 2;
              }
              puVar26 = &local_c10;
              local_c10 = uVar38;
              uStack_c08 = uVar56;
              break;
            default:
              auVar91._8_4_ = 0x7f7fffee;
              auVar91._0_8_ = 0x7f7fffee7f7fffee;
              auVar91._12_4_ = 0x7f7fffee;
              auVar91 = auVar91 ^ (auVar91 ^ auVar67) &
                                  *(undefined1 (*) [16])(PTR_DAT_043723a0 + (ulong)uVar47 * 0x10);
              auVar51 = NEON_ext(auVar91,auVar91,4,1);
              fVar36 = auVar91._0_4_;
              fVar43 = auVar91._4_4_;
              iVar44 = -(uint)(fVar43 < auVar51._4_4_);
              fVar45 = auVar91._8_4_;
              iVar53 = -(uint)(fVar45 < auVar51._8_4_);
              fVar82 = auVar91._12_4_;
              iVar46 = -(uint)(fVar82 < auVar51._12_4_);
              uVar47 = (uint)(-(fVar36 < auVar51._0_4_) & bVar59);
              auVar62._0_8_ =
                   CONCAT17((byte)((uint)iVar44 >> 0x18) & bVar75,
                            (uint7)CONCAT14((byte)iVar44 & bVar74,uVar47));
              auVar62[8] = (byte)iVar53 & bVar76;
              auVar62[9] = (byte)((uint)iVar53 >> 8) & bVar78;
              auVar62[10] = (byte)((uint)iVar53 >> 0x10) & bVar79;
              auVar62[0xb] = (byte)((uint)iVar53 >> 0x18) & bVar80;
              auVar70[0xc] = (byte)iVar46 & bVar81;
              auVar70._0_12_ = auVar62;
              auVar70[0xd] = (byte)((uint)iVar46 >> 8) & bVar84;
              auVar70[0xe] = (byte)((uint)iVar46 >> 0x10) & bVar85;
              auVar70[0xf] = (byte)((uint)iVar46 >> 0x18) & bVar86;
              auVar51 = NEON_ext(auVar91,auVar91,8,1);
              iVar44 = -(uint)(fVar43 < auVar51._4_4_);
              iVar53 = -(uint)(fVar45 < auVar51._8_4_);
              iVar46 = -(uint)(fVar82 < auVar51._12_4_);
              uVar60 = (uint)(-(fVar36 < auVar51._0_4_) & bVar59);
              auVar63._0_8_ =
                   CONCAT17((byte)((uint)iVar44 >> 0x18) & bVar75,
                            (uint7)CONCAT14((byte)iVar44 & bVar74,uVar60));
              auVar63[8] = (byte)iVar53 & bVar76;
              auVar63[9] = (byte)((uint)iVar53 >> 8) & bVar78;
              auVar63[10] = (byte)((uint)iVar53 >> 0x10) & bVar79;
              auVar63[0xb] = (byte)((uint)iVar53 >> 0x18) & bVar80;
              auVar71[0xc] = (byte)iVar46 & bVar81;
              auVar71._0_12_ = auVar63;
              auVar71[0xd] = (byte)((uint)iVar46 >> 8) & bVar84;
              auVar71[0xe] = (byte)((uint)iVar46 >> 0x10) & bVar85;
              auVar71[0xf] = (byte)((uint)iVar46 >> 0x18) & bVar86;
              auVar51 = NEON_ext(auVar91,auVar91,0xc,1);
              iVar44 = -(uint)(fVar43 < auVar51._4_4_);
              iVar53 = -(uint)(fVar45 < auVar51._8_4_);
              iVar46 = -(uint)(fVar82 < auVar51._12_4_);
              uVar61 = (uint)(-(fVar36 < auVar51._0_4_) & bVar59);
              auVar64._0_8_ =
                   CONCAT17((byte)((uint)iVar44 >> 0x18) & bVar75,
                            (uint7)CONCAT14((byte)iVar44 & bVar74,uVar61));
              auVar64[8] = (byte)iVar53 & bVar76;
              auVar64[9] = (byte)((uint)iVar53 >> 8) & bVar78;
              auVar64[10] = (byte)((uint)iVar53 >> 0x10) & bVar79;
              auVar64[0xb] = (byte)((uint)iVar53 >> 0x18) & bVar80;
              auVar72[0xc] = (byte)iVar46 & bVar81;
              auVar72._0_12_ = auVar64;
              auVar72[0xd] = (byte)((uint)iVar46 >> 8) & bVar84;
              auVar72[0xe] = (byte)((uint)iVar46 >> 0x10) & bVar85;
              auVar72[0xf] = (byte)((uint)iVar46 >> 0x18) & bVar86;
              uVar24 = (ulong)(uVar47 + (int)((ulong)auVar62._0_8_ >> 0x20) +
                               auVar62._8_4_ + auVar70._12_4_ & 7 |
                               (uVar60 + (int)((ulong)auVar63._0_8_ >> 0x20) +
                               auVar63._8_4_ + auVar71._12_4_) * 8 & 0x18 |
                              (uVar61 + (int)((ulong)auVar64._0_8_ >> 0x20) +
                              auVar64._8_4_ + auVar72._12_4_) * 0x20 & 0x20);
              lVar22 = uVar24 * 4;
              switch((&DAT_03aae022)[lVar22]) {
              case 0:
                uVar28 = (ulong)uVar48;
                break;
              case 1:
                uVar28 = (ulong)uVar54;
                break;
              case 2:
                uVar28 = (ulong)uVar55;
                break;
              case 3:
                uVar28 = (ulong)uVar58;
                break;
              default:
                uVar28 = 0;
              }
              lVar1 = lVar33 + uVar28 * 0x80;
              Hint_Prefetch(lVar1,0,0,0);
              Hint_Prefetch(lVar1 + 0x40,0,0,0);
              plVar17 = local_100 + 1;
              *local_100 = lVar1;
              local_100 = plVar17;
              switch((&DAT_03aae021)[uVar24 * 4]) {
              case 0:
                uVar24 = (ulong)uVar48;
                break;
              case 1:
                uVar24 = (ulong)uVar54;
                break;
              case 2:
                uVar24 = (ulong)uVar55;
                break;
              case 3:
                uVar24 = (ulong)uVar58;
                break;
              default:
                uVar24 = 0;
              }
              lVar1 = lVar33 + uVar24 * 0x80;
              Hint_Prefetch(lVar1,0,0,0);
              Hint_Prefetch(lVar1 + 0x40,0,0,0);
              plVar17 = local_100 + 1;
              *local_100 = lVar1;
              local_100 = plVar17;
              switch((&DAT_03aae020)[lVar22]) {
              case 0:
switchD_02f680c4_caseD_0:
                uVar24 = (ulong)uVar48;
                break;
              case 1:
switchD_02f680c4_caseD_1:
                uVar24 = (ulong)uVar54;
                break;
              case 2:
switchD_02f680c4_caseD_2:
                uVar24 = (ulong)uVar55;
                break;
              case 3:
switchD_02f680c4_caseD_3:
                uVar24 = (ulong)uVar58;
                break;
              default:
switchD_02f680c4_default:
                uVar24 = 0;
              }
              lVar22 = lVar33 + uVar24 * 0x80;
              goto LAB_02f67be4;
            case 8:
              goto switchD_02f67c9c_caseD_8;
            case 9:
              if (fVar36 < fVar82) {
                lVar1 = lVar33 + (ulong)uVar58 * 0x80;
                Hint_Prefetch(lVar1,0,0,0);
                Hint_Prefetch(lVar1 + 0x40,0,0,0);
                lVar22 = 0;
                plVar17 = local_100 + 1;
                *local_100 = lVar1;
                local_100 = plVar17;
              }
              else {
                lVar22 = lVar33 + (ulong)uVar48 * 0x80;
                Hint_Prefetch(lVar22,0,0,0);
                Hint_Prefetch(lVar22 + 0x40,0,0,0);
                plVar17 = local_100 + 1;
                *local_100 = lVar22;
                local_100 = plVar17;
                lVar22 = 3;
              }
              puVar26 = &local_c20;
              local_c20 = uVar38;
              uStack_c18 = uVar56;
              break;
            case 10:
              if (fVar43 < fVar82) {
                lVar22 = lVar33 + (ulong)uVar58 * 0x80;
                Hint_Prefetch(lVar22,0,0,0);
                Hint_Prefetch(lVar22 + 0x40,0,0,0);
                plVar17 = local_100 + 1;
                *local_100 = lVar22;
                local_100 = plVar17;
                lVar22 = 1;
              }
              else {
                lVar22 = lVar33 + (ulong)uVar54 * 0x80;
                Hint_Prefetch(lVar22,0,0,0);
                Hint_Prefetch(lVar22 + 0x40,0,0,0);
                plVar17 = local_100 + 1;
                *local_100 = lVar22;
                local_100 = plVar17;
                lVar22 = 3;
              }
              puVar26 = &local_c00;
              local_c00 = uVar38;
              uStack_bf8 = uVar56;
              break;
            case 0xc:
              if (fVar45 < fVar82) {
                lVar22 = lVar33 + (ulong)uVar58 * 0x80;
                Hint_Prefetch(lVar22,0,0,0);
                Hint_Prefetch(lVar22 + 0x40,0,0,0);
                plVar17 = local_100 + 1;
                *local_100 = lVar22;
                local_100 = plVar17;
                lVar22 = 2;
              }
              else {
                lVar22 = lVar33 + (ulong)uVar55 * 0x80;
                Hint_Prefetch(lVar22,0,0,0);
                Hint_Prefetch(lVar22 + 0x40,0,0,0);
                plVar17 = local_100 + 1;
                *local_100 = lVar22;
                local_100 = plVar17;
                lVar22 = 3;
              }
              puVar26 = &local_bf0;
              local_bf0 = uVar38;
              uStack_be8 = uVar56;
              break;
            case 0xf:
              auVar51 = NEON_ext(auVar67,auVar67,4,1);
              iVar44 = -(uint)(fVar43 < auVar51._4_4_);
              iVar53 = -(uint)(fVar45 < auVar51._8_4_);
              iVar46 = -(uint)(fVar82 < auVar51._12_4_);
              uVar60 = (uint)(-(fVar36 < auVar51._0_4_) & bVar59);
              auVar87._0_8_ =
                   CONCAT17((byte)((uint)iVar44 >> 0x18) & bVar75,
                            (uint7)CONCAT14((byte)iVar44 & bVar74,uVar60));
              auVar87[8] = (byte)iVar53 & bVar76;
              auVar87[9] = (byte)((uint)iVar53 >> 8) & bVar78;
              auVar87[10] = (byte)((uint)iVar53 >> 0x10) & bVar79;
              auVar87[0xb] = (byte)((uint)iVar53 >> 0x18) & bVar80;
              auVar92[0xc] = (byte)iVar46 & bVar81;
              auVar92._0_12_ = auVar87;
              auVar92[0xd] = (byte)((uint)iVar46 >> 8) & bVar84;
              auVar92[0xe] = (byte)((uint)iVar46 >> 0x10) & bVar85;
              auVar92[0xf] = (byte)((uint)iVar46 >> 0x18) & bVar86;
              auVar51 = NEON_ext(auVar67,auVar67,8,1);
              auVar66 = NEON_ext(auVar67,auVar67,0xc,1);
              iVar57 = -(uint)(fVar43 < auVar51._4_4_);
              iVar77 = -(uint)(fVar45 < auVar51._8_4_);
              iVar83 = -(uint)(fVar82 < auVar51._12_4_);
              iVar44 = -(uint)(fVar43 < auVar66._4_4_);
              iVar53 = -(uint)(fVar45 < auVar66._8_4_);
              iVar46 = -(uint)(fVar82 < auVar66._12_4_);
              uVar61 = (uint)(-(fVar36 < auVar51._0_4_) & bVar59);
              auVar88._0_8_ =
                   CONCAT17((byte)((uint)iVar57 >> 0x18) & bVar75,
                            (uint7)CONCAT14((byte)iVar57 & bVar74,uVar61));
              auVar88[8] = (byte)iVar77 & bVar76;
              auVar88[9] = (byte)((uint)iVar77 >> 8) & bVar78;
              auVar88[10] = (byte)((uint)iVar77 >> 0x10) & bVar79;
              auVar88[0xb] = (byte)((uint)iVar77 >> 0x18) & bVar80;
              auVar93[0xc] = (byte)iVar83 & bVar81;
              auVar93._0_12_ = auVar88;
              auVar93[0xd] = (byte)((uint)iVar83 >> 8) & bVar84;
              auVar93[0xe] = (byte)((uint)iVar83 >> 0x10) & bVar85;
              auVar93[0xf] = (byte)((uint)iVar83 >> 0x18) & bVar86;
              uVar47 = (uint)(-(fVar36 < auVar66._0_4_) & bVar59);
              auVar65._0_8_ =
                   CONCAT17((byte)((uint)iVar44 >> 0x18) & bVar75,
                            (uint7)CONCAT14((byte)iVar44 & bVar74,uVar47));
              auVar65[8] = (byte)iVar53 & bVar76;
              auVar65[9] = (byte)((uint)iVar53 >> 8) & bVar78;
              auVar65[10] = (byte)((uint)iVar53 >> 0x10) & bVar79;
              auVar65[0xb] = (byte)((uint)iVar53 >> 0x18) & bVar80;
              auVar73[0xc] = (byte)iVar46 & bVar81;
              auVar73._0_12_ = auVar65;
              auVar73[0xd] = (byte)((uint)iVar46 >> 8) & bVar84;
              auVar73[0xe] = (byte)((uint)iVar46 >> 0x10) & bVar85;
              auVar73[0xf] = (byte)((uint)iVar46 >> 0x18) & bVar86;
              uVar24 = (ulong)(uVar60 + (int)((ulong)auVar87._0_8_ >> 0x20) +
                               auVar87._8_4_ + auVar92._12_4_ & 7 |
                               (uVar61 + (int)((ulong)auVar88._0_8_ >> 0x20) +
                               auVar88._8_4_ + auVar93._12_4_) * 8 & 0x18 |
                              (uVar47 + (int)((ulong)auVar65._0_8_ >> 0x20) +
                              auVar65._8_4_ + auVar73._12_4_) * 0x20 & 0x20);
              lVar22 = uVar24 * 4;
              switch((&DAT_03aae023)[lVar22]) {
              case 0:
                uVar28 = (ulong)uVar48;
                break;
              case 1:
                uVar28 = (ulong)uVar54;
                break;
              case 2:
                uVar28 = (ulong)uVar55;
                break;
              case 3:
                uVar28 = (ulong)uVar58;
                break;
              default:
                uVar28 = 0;
              }
              lVar1 = lVar33 + uVar28 * 0x80;
              Hint_Prefetch(lVar1,0,0,0);
              Hint_Prefetch(lVar1 + 0x40,0,0,0);
              plVar17 = local_100 + 1;
              *local_100 = lVar1;
              local_100 = plVar17;
              lVar1 = uVar24 * 4;
              switch((&DAT_03aae022)[lVar1]) {
              case 0:
                uVar24 = (ulong)uVar48;
                break;
              case 1:
                uVar24 = (ulong)uVar54;
                break;
              case 2:
                uVar24 = (ulong)uVar55;
                break;
              case 3:
                uVar24 = (ulong)uVar58;
                break;
              default:
                uVar24 = 0;
              }
              lVar31 = lVar33 + uVar24 * 0x80;
              Hint_Prefetch(lVar31,0,0,0);
              Hint_Prefetch(lVar31 + 0x40,0,0,0);
              plVar17 = local_100 + 1;
              *local_100 = lVar31;
              local_100 = plVar17;
              switch((&DAT_03aae021)[lVar1]) {
              case 0:
                uVar24 = (ulong)uVar48;
                break;
              case 1:
                uVar24 = (ulong)uVar54;
                break;
              case 2:
                uVar24 = (ulong)uVar55;
                break;
              case 3:
                uVar24 = (ulong)uVar58;
                break;
              default:
                uVar24 = 0;
              }
              lVar1 = lVar33 + uVar24 * 0x80;
              Hint_Prefetch(lVar1,0,0,0);
              Hint_Prefetch(lVar1 + 0x40,0,0,0);
              plVar17 = local_100 + 1;
              *local_100 = lVar1;
              local_100 = plVar17;
              switch((&DAT_03aae020)[lVar22]) {
              case 0:
                goto switchD_02f680c4_caseD_0;
              case 1:
                goto switchD_02f680c4_caseD_1;
              case 2:
                goto switchD_02f680c4_caseD_2;
              case 3:
                goto switchD_02f680c4_caseD_3;
              default:
                goto switchD_02f680c4_default;
              }
            }
            puVar25 = (uint *)((ulong)puVar26 | lVar22 << 2);
LAB_02f68158:
            lVar22 = lVar33 + (ulong)*puVar25 * 0x80;
            goto LAB_02f67be4;
          }
          iVar44 = 0;
          iVar53 = *(int *)(&DAT_03aadfe0 + (ulong)uVar47 * 4);
          auVar41 = a64_TBL(ZEXT816(0),auVar51,
                            *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar47 * 0x10));
          do {
            lVar22 = local_ac0;
            switch(iVar44) {
            case 0:
              uVar24 = (ulong)auVar41._0_4_;
              break;
            case 1:
              uVar47 = auVar41._4_4_;
              goto joined_r0x02f67da4;
            case 2:
              uVar47 = auVar41._8_4_;
joined_r0x02f67da4:
              uVar24 = (ulong)uVar47;
              break;
            case 3:
              uVar24 = (ulong)auVar41._12_4_;
              break;
            default:
              uVar24 = 0;
            }
            if (((local_a38 == '\0') && ((*(byte *)(local_ac0 + uVar24 * 0xc0 + 0x88) & 1) != 0)) &&
               (((~*(uint *)(local_ac0 + uVar24 * 0xc0 + 0x50) & 0xffffff) != 0 &&
                ((pauVar29 = (undefined1 (*) [16])(local_ac0 + uVar24 * 0xc0),
                 local_aa8 == (long *)0x0 ||
                 (uVar28 = (**(code **)(*local_aa8 + 0x30))(local_aa8,1,&local_aa0,pauVar29),
                 (uVar28 & 1) != 0)))))) {
              lVar1 = local_a40;
              puVar26 = local_ad0;
              lVar22 = lVar22 + uVar24 * 0xc0;
              fVar36 = local_d20 - *(float *)(lVar22 + 0x30);
              fVar43 = fStack_d1c - *(float *)(lVar22 + 0x34);
              fVar45 = fStack_d18 - *(float *)(lVar22 + 0x38);
              auVar51 = *pauVar29;
              auVar66 = pauVar29[1];
              auVar67 = pauVar29[2];
              auVar98 = NEON_ext(auVar66,auVar66,8,1);
              auVar96 = NEON_ext(auVar51,auVar51,8,1);
              auVar99 = NEON_ext(auVar67,auVar67,8,1);
              fVar82 = auVar67._4_4_;
              uStack_a78 = CONCAT44(auVar99._4_4_ * fVar45 +
                                    fVar82 * fVar36 + auVar99._4_4_ * fVar43,
                                    auVar99._0_4_ * fVar45 +
                                    auVar67._0_4_ * fVar36 + fVar82 * fVar43);
              local_a80 = CONCAT44(auVar98._0_4_ * fVar45 +
                                   auVar66._0_4_ * fVar36 + auVar66._4_4_ * fVar43,
                                   auVar96._0_4_ * fVar45 +
                                   auVar51._0_4_ * fVar36 + auVar51._4_4_ * fVar43);
              fVar36 = fVar95 * auVar96._0_4_ + fVar94 * auVar51._0_4_ + fVar42 * auVar51._4_4_;
              fVar43 = fVar95 * auVar98._0_4_ + fVar94 * auVar66._0_4_ + fVar42 * auVar66._4_4_;
              fVar45 = fVar95 * auVar99._0_4_ + fVar94 * auVar67._0_4_ + fVar42 * fVar82;
              iVar46 = -(uint)(fVar36 == 0.0);
              iVar57 = -(uint)(fVar43 == 0.0);
              iVar77 = -(uint)(fVar45 == 0.0);
              iVar83 = -(uint)((float)local_ac8 == 0.0);
              fVar36 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                                       CONCAT12((byte)((uint)fVar36 >> 0x10) &
                                                ~(byte)((uint)iVar46 >> 0x10),
                                                CONCAT11((byte)((uint)fVar36 >> 8) &
                                                         ~(byte)((uint)iVar46 >> 8),
                                                         SUB41(fVar36,0) & ~(byte)iVar46)));
              auVar50._0_8_ =
                   CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18),
                            CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10),
                                     CONCAT15((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar57 >> 8)
                                              ,CONCAT14(SUB41(fVar43,0) & ~(byte)iVar57,fVar36))));
              auVar50[8] = SUB41(fVar45,0) & ~(byte)iVar77;
              auVar50[9] = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar77 >> 8);
              auVar50[10] = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
              auVar50[0xb] = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
              auVar52[0xc] = (byte)local_ac8 & ~(byte)iVar83;
              auVar52._0_12_ = auVar50;
              auVar52[0xd] = (byte)((ulong)local_ac8 >> 8) & ~(byte)((uint)iVar83 >> 8);
              auVar52[0xe] = (byte)((ulong)local_ac8 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
              auVar52[0xf] = (byte)((ulong)local_ac8 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
              auVar51 = NEON_frecpe(auVar52,4);
              iVar46 = -(uint)(fVar36 == 0.0);
              iVar57 = -(uint)((float)((ulong)auVar50._0_8_ >> 0x20) == 0.0);
              iVar77 = -(uint)(auVar50._8_4_ == 0.0);
              iVar83 = -(uint)(auVar52._12_4_ == 0.0);
              auVar68[0] = ~(byte)iVar46;
              auVar68[1] = ~(byte)((uint)iVar46 >> 8);
              auVar68[2] = ~(byte)((uint)iVar46 >> 0x10);
              auVar68[3] = ~(byte)((uint)iVar46 >> 0x18);
              auVar68[4] = ~(byte)iVar57;
              auVar68[5] = ~(byte)((uint)iVar57 >> 8);
              auVar68[6] = ~(byte)((uint)iVar57 >> 0x10);
              auVar68[7] = ~(byte)((uint)iVar57 >> 0x18);
              auVar68[8] = ~(byte)iVar77;
              auVar68[9] = ~(byte)((uint)iVar77 >> 8);
              auVar68[10] = ~(byte)((uint)iVar77 >> 0x10);
              auVar68[0xb] = ~(byte)((uint)iVar77 >> 0x18);
              auVar68[0xc] = ~(byte)iVar83;
              auVar68[0xd] = ~(byte)((uint)iVar83 >> 8);
              auVar68[0xe] = ~(byte)((uint)iVar83 >> 0x10);
              auVar68[0xf] = ~(byte)((uint)iVar83 >> 0x18);
              auVar66 = NEON_frecps(auVar52,auVar51,4);
              auVar89._0_4_ = auVar51._0_4_ * auVar66._0_4_;
              auVar89._4_4_ = auVar51._4_4_ * auVar66._4_4_;
              auVar89._8_4_ = auVar51._8_4_ * auVar66._8_4_;
              auVar89._12_4_ = auVar51._12_4_ * auVar66._12_4_;
              auVar51 = NEON_frecps(auVar52,auVar89,4);
              auVar90._0_4_ = auVar89._0_4_ * auVar51._0_4_;
              auVar90._4_4_ = auVar89._4_4_ * auVar51._4_4_;
              auVar90._8_4_ = auVar89._8_4_ * auVar51._8_4_;
              auVar90._12_4_ = auVar89._12_4_ * auVar51._12_4_;
              auVar69._8_4_ = 0x7f7fffee;
              auVar69._0_8_ = 0x7f7fffee7f7fffee;
              auVar69._12_4_ = 0x7f7fffee;
              auVar69 = auVar69 ^ (auVar69 ^ auVar90) & auVar68;
              uStack_a68 = auVar52._8_8_;
              uStack_a58 = auVar69._8_8_;
              uStack_a60 = auVar69._0_8_;
              lVar31 = *(long *)(lVar22 + 0x78);
              local_88 = *(undefined2 *)(lVar22 + 0x8a);
              uStack_84 = *(undefined4 *)(lVar22 + 0x8c);
              local_80 = *(undefined8 *)(lVar22 + 0x98);
              local_d8 = 0xffffffff;
              uStack_e0 = 0;
              local_bc = 0;
              local_a0 = 0;
              uStack_98 = 0;
              auVar51 = NEON_ext(auVar52,auVar52,8,1);
              uVar38 = NEON_fmin(*(undefined8 *)(local_a40 + 0x10),
                                 CONCAT44(auVar51._4_4_,auVar51._4_4_),4);
              *(undefined8 *)(local_a40 + 0x10) = uVar38;
              local_a70 = auVar50._0_8_;
              local_f0 = pauVar29;
              local_e8 = lVar31;
              pauStack_d0 = pauVar29;
              local_b0 = auVar40._0_8_;
              uStack_a8 = auVar40._8_8_;
              if ((local_ab0 == (long *)0x0) || ((*(byte *)(local_ab0 + 3) & 1) == 0)) {
                pcVar21 = *(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar31 + 0x18) * 0x200 + 0xd0);
                puVar20 = (undefined8 *)&local_88;
              }
              else {
                local_78 = CONCAT44(uStack_84,CONCAT22(uStack_86,local_88));
                uStack_70 = local_80;
                (**(code **)(*local_ab0 + 0x38))(local_ab0,1,pauVar29,lVar31,&local_78);
                pcVar21 = *(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar31 + 0x18) * 0x200 + 0xd0);
                puVar20 = &local_78;
              }
              (*pcVar21)(lVar31,puVar26,&local_ab0,puVar20,&local_f0,lVar1);
              local_ac8 = *(undefined8 *)(local_a40 + 0x10);
              local_a38 = *(char *)(local_a40 + 0x18) != '\0';
            }
            iVar44 = iVar44 + 1;
          } while (iVar53 != iVar44);
          if (local_a38 == '\0') {
            auVar41._8_8_ = local_ac8;
            auVar41._0_8_ = local_ac8;
            goto LAB_02f67f58;
          }
        }
LAB_02f68168:
        plVar23 = plVar23 + 1;
      } while (plVar23 != plVar30);
    }
  }
  uVar32 = local_bd8;
  uVar19 = (ulong)local_bd8._4_4_;
  local_bd8 = (ulong)local_bd8._4_4_ << 0x20;
  if ((-1 < (long)uVar32) && (local_be0 != (long *)0x0)) {
    (**(code **)(*(long *)puVar16 + 0x18))(puVar16,local_be0,(uVar19 & 0x3fffffff) << 3);
  }
  return;
switchD_02f67c9c_caseD_8:
  lVar22 = lVar33 + (ulong)uVar58 * 0x80;
  goto LAB_02f67be4;
}


