/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6419c; name: FUN_02f6419c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f6419c(long *param_1,float *param_2,undefined8 *param_3,long param_4)

{
  unkbyte9 *pVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  float *pfVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 auVar34 [16];
  undefined8 uVar35;
  undefined1 auVar36 [12];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  char cVar46;
  long *plVar47;
  undefined8 uVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  long lVar52;
  long *plVar53;
  long lVar54;
  long lVar55;
  uint uVar56;
  float fVar57;
  float fVar58;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar66;
  undefined1 auVar62 [16];
  undefined1 uVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  undefined1 uVar71;
  byte bVar72;
  undefined1 uVar73;
  byte bVar74;
  byte bVar75;
  undefined1 uVar76;
  byte bVar77;
  undefined1 uVar78;
  byte bVar79;
  undefined1 uVar80;
  byte bVar81;
  byte bVar82;
  undefined1 uVar83;
  byte bVar84;
  undefined1 uVar85;
  byte bVar86;
  undefined1 uVar87;
  byte bVar88;
  byte bVar89;
  undefined1 uVar90;
  byte bVar91;
  undefined1 uVar92;
  byte bVar93;
  undefined1 uVar94;
  uint5 uVar95;
  uint uVar97;
  uint uVar98;
  undefined1 auVar96 [16];
  float fVar99;
  int iVar100;
  float fVar101;
  int iVar102;
  float fVar103;
  int iVar104;
  float fVar105;
  int iVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined8 uVar111;
  float fVar112;
  uint local_10f0 [2];
  undefined8 auStack_10e8 [255];
  uint local_8f0 [2];
  undefined8 auStack_8e8 [255];
  int local_f0;
  long local_e0;
  long local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  long lStack_c0;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined2 local_78 [2];
  undefined4 local_74;
  undefined8 local_70;
  
  uVar45 = _UNK_03889708;
  uVar44 = _DAT_03889700;
  if (*(char *)(param_4 + 600) == '\0') {
    uVar21 = *(undefined1 *)param_2;
    uVar22 = *(undefined1 *)((long)param_2 + 1);
    uVar23 = *(undefined1 *)((long)param_2 + 2);
    uVar24 = *(undefined1 *)((long)param_2 + 3);
    fVar40 = *param_2;
    pfVar26 = param_2 + 1;
    uVar25 = *(undefined1 *)pfVar26;
    uVar27 = *(undefined1 *)((long)param_2 + 5);
    uVar28 = *(undefined1 *)((long)param_2 + 6);
    uVar29 = *(undefined1 *)((long)param_2 + 7);
    fVar39 = *pfVar26;
    fVar38 = *pfVar26;
    fVar37 = *pfVar26;
    pfVar26 = param_2 + 2;
    uVar30 = *(undefined1 *)pfVar26;
    uVar31 = *(undefined1 *)((long)param_2 + 9);
    uVar32 = *(undefined1 *)((long)param_2 + 10);
    uVar33 = *(undefined1 *)((long)param_2 + 0xb);
    fVar43 = *pfVar26;
    fVar42 = *pfVar26;
    fVar41 = *pfVar26;
    uVar111 = *param_3;
    auVar59 = NEON_fmov(0x3f800000,4);
    local_10f0[0] = 2;
    local_8f0[0] = 0;
    local_f0 = 1;
    uVar48 = uVar111;
    do {
      while( true ) {
        lVar50 = (long)local_f0;
        *(undefined8 *)((long)auStack_8e8 + lVar50 * 4) = uVar48;
        *(undefined8 *)(local_8f0 + lVar50) = uVar111;
        uVar56 = local_f0 + 3;
        uVar97 = uVar56 & 0xfffffffc;
        fVar58 = (float)uVar111;
        fVar64 = (float)((ulong)uVar111 >> 0x20);
        fVar112 = (float)((ulong)uVar48 >> 0x20);
        if ((int)uVar97 < 0x81) {
          uVar51 = CONCAT44(uVar56,uVar56) & 0xfffffffcfffffffc;
          uVar98 = (uint)fVar58 & 0xffffff00;
          uVar11 = (uint)fVar64 & 0xffffff00;
          uVar13 = (uint)(float)uVar48 & 0xffffff00;
          uVar16 = (uint)fVar112 & 0xffffff00;
          auVar60[0] = (undefined1)uVar51;
          auVar60[1] = (byte)(uVar51 >> 8) | (byte)(uVar98 >> 8);
          auVar60[2] = (byte)(uVar51 >> 0x10) | (byte)(uVar98 >> 0x10);
          auVar60[3] = (byte)(uVar51 >> 0x18) | (byte)(uVar98 >> 0x18);
          auVar60[4] = (undefined1)(uVar51 >> 0x20);
          auVar60[5] = (byte)(uVar51 >> 0x28) | (byte)(uVar11 >> 8);
          auVar60[6] = (byte)(uVar51 >> 0x30) | (byte)(uVar11 >> 0x10);
          auVar60[7] = (byte)(uVar51 >> 0x38) | (byte)(uVar11 >> 0x18);
          auVar60[8] = (undefined1)uVar97;
          bVar68 = (byte)(uVar97 >> 8);
          auVar60[9] = bVar68 | (byte)(uVar13 >> 8);
          bVar69 = (byte)(uVar97 >> 0x10);
          auVar60[10] = bVar69 | (byte)(uVar13 >> 0x10);
          bVar70 = (byte)(uVar97 >> 0x18);
          auVar60[0xb] = bVar70 | (byte)(uVar13 >> 0x18);
          auVar60[0xc] = auVar60[8];
          auVar60[0xd] = bVar68 | (byte)(uVar16 >> 8);
          auVar60[0xe] = bVar69 | (byte)(uVar16 >> 0x10);
          auVar60[0xf] = bVar70 | (byte)(uVar16 >> 0x18);
          if (3 < (int)uVar97) {
            uVar97 = local_8f0[0] & 0xffffff00;
            uVar98 = local_8f0[1] & 0xffffff00;
            uVar11 = (uint)auStack_8e8[0] & 0xffffff00;
            uVar13 = (uint)((ulong)auStack_8e8[0] >> 0x20) & 0xffffff00;
            auVar61[1] = (byte)(uVar97 >> 8) | (byte)((ulong)_DAT_03889d70 >> 8);
            auVar61[0] = (char)_DAT_03889d70;
            auVar61[2] = (byte)(uVar97 >> 0x10) | (byte)((ulong)_DAT_03889d70 >> 0x10);
            auVar61[3] = (byte)(uVar97 >> 0x18) | (byte)((ulong)_DAT_03889d70 >> 0x18);
            auVar61[4] = (char)((ulong)_DAT_03889d70 >> 0x20);
            auVar61[5] = (byte)(uVar98 >> 8) | (byte)((ulong)_DAT_03889d70 >> 0x28);
            auVar61[6] = (byte)(uVar98 >> 0x10) | (byte)((ulong)_DAT_03889d70 >> 0x30);
            auVar61[7] = (byte)(uVar98 >> 0x18) | (byte)((ulong)_DAT_03889d70 >> 0x38);
            auVar61[8] = (char)_UNK_03889d78;
            auVar61[9] = (byte)(uVar11 >> 8) | (byte)((ulong)_UNK_03889d78 >> 8);
            auVar61[10] = (byte)(uVar11 >> 0x10) | (byte)((ulong)_UNK_03889d78 >> 0x10);
            auVar61[0xb] = (byte)(uVar11 >> 0x18) | (byte)((ulong)_UNK_03889d78 >> 0x18);
            auVar61[0xc] = (char)((ulong)_UNK_03889d78 >> 0x20);
            auVar61[0xd] = (byte)(uVar13 >> 8) | (byte)((ulong)_UNK_03889d78 >> 0x28);
            auVar61[0xe] = (byte)(uVar13 >> 0x10) | (byte)((ulong)_UNK_03889d78 >> 0x30);
            auVar61[0xf] = (byte)(uVar13 >> 0x18) | (byte)((ulong)_UNK_03889d78 >> 0x38);
            auVar60 = NEON_smin(auVar61,auVar60,4);
            if (7 < uVar56) {
              uVar73 = (undefined1)_UNK_03889088;
              bVar77 = (byte)((ulong)_UNK_03889088 >> 8);
              bVar79 = (byte)((ulong)_UNK_03889088 >> 0x10);
              bVar81 = (byte)((ulong)_UNK_03889088 >> 0x18);
              uVar76 = (undefined1)((ulong)_UNK_03889088 >> 0x20);
              bVar82 = (byte)((ulong)_UNK_03889088 >> 0x28);
              bVar84 = (byte)((ulong)_UNK_03889088 >> 0x30);
              bVar86 = (byte)((ulong)_UNK_03889088 >> 0x38);
              uVar67 = (undefined1)_DAT_03889080;
              bVar68 = (byte)((ulong)_DAT_03889080 >> 8);
              bVar69 = (byte)((ulong)_DAT_03889080 >> 0x10);
              bVar70 = (byte)((ulong)_DAT_03889080 >> 0x18);
              uVar71 = (undefined1)((ulong)_DAT_03889080 >> 0x20);
              bVar72 = (byte)((ulong)_DAT_03889080 >> 0x28);
              bVar74 = (byte)((ulong)_DAT_03889080 >> 0x30);
              bVar75 = (byte)((ulong)_DAT_03889080 >> 0x38);
              lVar50 = 0x81;
              do {
                auVar61 = *(undefined1 (*) [16])(local_10f0 + lVar50 * 4);
                uVar51 = auVar61._0_8_ & 0xffffff00ffffff00;
                uVar97 = auVar61._8_4_ & 0xffffff00;
                uVar98 = auVar61._12_4_ & 0xffffff00;
                auVar96[1] = (byte)(uVar51 >> 8) | bVar68;
                auVar96[0] = uVar67;
                auVar96[2] = (byte)(uVar51 >> 0x10) | bVar69;
                auVar96[3] = (byte)(uVar51 >> 0x18) | bVar70;
                auVar96[4] = uVar71;
                auVar96[5] = (byte)(uVar51 >> 0x28) | bVar72;
                auVar96[6] = (byte)(uVar51 >> 0x30) | bVar74;
                auVar96[7] = (byte)(uVar51 >> 0x38) | bVar75;
                auVar96[8] = uVar73;
                auVar96[9] = (byte)(uVar97 >> 8) | bVar77;
                auVar96[10] = (byte)(uVar97 >> 0x10) | bVar79;
                auVar96[0xb] = (byte)(uVar97 >> 0x18) | bVar81;
                auVar96[0xc] = uVar76;
                auVar96[0xd] = (byte)(uVar98 >> 8) | bVar82;
                auVar96[0xe] = (byte)(uVar98 >> 0x10) | bVar84;
                auVar96[0xf] = (byte)(uVar98 >> 0x18) | bVar86;
                iVar10 = CONCAT13(bVar70,CONCAT12(bVar69,CONCAT11(bVar68,uVar67))) + 4;
                uVar67 = (undefined1)iVar10;
                bVar68 = (byte)((uint)iVar10 >> 8);
                bVar69 = (byte)((uint)iVar10 >> 0x10);
                bVar70 = (byte)((uint)iVar10 >> 0x18);
                iVar10 = CONCAT13(bVar75,CONCAT12(bVar74,CONCAT11(bVar72,uVar71))) + 4;
                uVar71 = (undefined1)iVar10;
                bVar72 = (byte)((uint)iVar10 >> 8);
                bVar74 = (byte)((uint)iVar10 >> 0x10);
                bVar75 = (byte)((uint)iVar10 >> 0x18);
                iVar10 = CONCAT13(bVar81,CONCAT12(bVar79,CONCAT11(bVar77,uVar73))) + 4;
                uVar73 = (undefined1)iVar10;
                bVar77 = (byte)((uint)iVar10 >> 8);
                bVar79 = (byte)((uint)iVar10 >> 0x10);
                bVar81 = (byte)((uint)iVar10 >> 0x18);
                iVar10 = CONCAT13(bVar86,CONCAT12(bVar84,CONCAT11(bVar82,uVar76))) + 4;
                uVar76 = (undefined1)iVar10;
                bVar82 = (byte)((uint)iVar10 >> 8);
                bVar84 = (byte)((uint)iVar10 >> 0x10);
                bVar86 = (byte)((uint)iVar10 >> 0x18);
                auVar60 = NEON_smin(auVar96,auVar60,4);
                uVar51 = lVar50 - 0x7f;
                lVar50 = lVar50 + 1;
              } while (uVar51 < uVar56 >> 2);
            }
          }
          uVar56 = NEON_sminv(auVar60,4);
          uVar56 = uVar56 & 0xff;
          if (local_f0 <= (int)uVar56) {
            return;
          }
        }
        else {
          uVar56 = local_f0 - 1;
        }
        local_f0 = local_f0 + -1;
        uVar97 = local_10f0[uVar56];
        local_8f0[uVar56] = local_8f0[local_f0];
        local_10f0[uVar56] = local_10f0[local_f0];
        if ((uVar97 & 1) == 0) break;
        lVar50 = *(long *)(param_4 + 0x240);
        lVar52 = lVar50 + (ulong)(uVar97 >> 1) * 0xc0;
        if ((~*(uint *)(lVar52 + 0x50) & 0xffffff) == 0) {
          uVar111 = CONCAT44(fVar58,fVar58);
          uVar48 = CONCAT44(fVar58,fVar58);
        }
        else {
          plVar53 = *(long **)(param_4 + 0x248);
          plVar47 = (long *)plVar53[1];
          if (plVar47 == (long *)0x0) {
LAB_02f64494:
            lVar50 = lVar50 + (ulong)(uVar97 >> 1) * 0xc0;
            lVar54 = *(long *)(lVar50 + 0x78);
            uVar4 = *(undefined2 *)(lVar50 + 0x8a);
            uVar3 = *(undefined4 *)(lVar50 + 0x8c);
            uVar111 = *(undefined8 *)(lVar50 + 0x98);
            local_c8 = 0xffffffff;
            uStack_d0 = 0;
            local_ac = 0;
            local_90 = 0;
            uStack_88 = 0;
            lVar55 = *(long *)(param_4 + 0x250);
            lVar50 = tpidr_el0;
            local_e0 = lVar52;
            local_d8 = lVar54;
            lStack_c0 = lVar52;
            local_a0 = auVar59._0_8_;
            uStack_98 = auVar59._8_8_;
            if (*(long *)(lVar50 + 0x38d490) == 0) {
              lVar49 = FUN_0333d16c(0,1);
              *(long *)(lVar50 + 0x38d490) = lVar49;
              lVar50 = *(long *)(lVar49 + 0x10);
            }
            else {
              lVar50 = *(long *)(*(long *)(lVar50 + 0x38d490) + 0x10);
            }
            if (lVar50 != 0) {
              puVar2 = *(undefined8 **)(lVar50 + 8);
              uVar51 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
              if ((uVar51 <= *(ulong *)(lVar50 + 0x10)) &&
                 (*(ulong *)(lVar50 + 8) = uVar51, puVar2 != (undefined8 *)0x0)) {
                *puVar2 = "TtQueryPoint";
                uVar48 = nn::os::GetSystemTick();
                puVar2[1] = uVar48;
              }
            }
            plVar47 = (long *)*plVar53;
            local_78[0] = uVar4;
            local_74 = uVar3;
            local_70 = uVar111;
            if ((plVar47 != (long *)0x0) && ((*(byte *)(plVar47 + 3) & 1) != 0)) {
              (**(code **)(*plVar47 + 0x38))(plVar47,4,lVar52,lVar54,local_78);
            }
            uVar111 = NEON_fmin(*(undefined8 *)(lVar55 + 0x10),
                                CONCAT44((int)plVar53[8],(int)plVar53[8]),4);
            *(undefined8 *)(lVar55 + 0x10) = uVar111;
            (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar54 + 0x18) * 0x200 + 0xd8))
                      (lVar54,param_4 + 0x220,plVar53,local_78,&local_e0,lVar55);
            if (lVar50 != 0) {
              puVar2 = *(undefined8 **)(lVar50 + 8);
              uVar51 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
              if ((uVar51 <= *(ulong *)(lVar50 + 0x10)) &&
                 (*(ulong *)(lVar50 + 8) = uVar51, puVar2 != (undefined8 *)0x0)) {
                *puVar2 = &DAT_0390f40e;
                uVar111 = nn::os::GetSystemTick();
                puVar2[1] = uVar111;
              }
            }
            uVar111 = *(undefined8 *)(*(long *)(param_4 + 0x250) + 0x10);
            cVar46 = *(char *)(*(long *)(param_4 + 0x250) + 0x18) != '\0';
            fVar58 = (float)uVar111;
            fVar64 = (float)((ulong)uVar111 >> 0x20);
            uVar111 = CONCAT44(fVar64 * fVar64,fVar58 * fVar58);
            *(char *)(param_4 + 600) = cVar46;
          }
          else {
            uVar51 = (**(code **)(*plVar47 + 0x30))(plVar47,4,plVar53 + 2,lVar52);
            if ((uVar51 & 1) != 0) {
              plVar53 = *(long **)(param_4 + 0x248);
              goto LAB_02f64494;
            }
            uVar111 = CONCAT44(fVar58,fVar58);
            cVar46 = *(char *)(param_4 + 600);
          }
          uVar48 = uVar111;
          if (cVar46 != '\0') {
            return;
          }
        }
LAB_02f64280:
        if (local_f0 == 0) {
          return;
        }
      }
      fVar105 = (float)(CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar25,fVar39))))
                       >> 0x20);
      auVar18[4] = uVar25;
      auVar18._0_4_ = fVar38;
      auVar18[5] = uVar27;
      auVar18[6] = uVar28;
      auVar18[7] = uVar29;
      auVar18[8] = uVar25;
      auVar18[9] = uVar27;
      auVar18[10] = uVar28;
      auVar18[0xb] = uVar29;
      uVar35 = CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,fVar40))));
      auVar36[8] = uVar21;
      auVar36._0_8_ = uVar35;
      auVar36[9] = uVar22;
      auVar36[10] = uVar23;
      auVar36[0xb] = uVar24;
      auVar34[0xc] = uVar21;
      auVar34._0_12_ = auVar36;
      auVar34[0xd] = uVar22;
      auVar34[0xe] = uVar23;
      auVar34[0xf] = uVar24;
      pVar1 = (unkbyte9 *)((long)param_1 + (ulong)(uVar97 >> 1) * 0x80 + *param_1);
      fVar110 = (float)(CONCAT17(uVar33,CONCAT16(uVar32,CONCAT15(uVar31,CONCAT14(uVar30,fVar43))))
                       >> 0x20);
      auVar20[4] = uVar30;
      auVar20._0_4_ = fVar42;
      auVar20[5] = uVar31;
      auVar20[6] = uVar32;
      auVar20[7] = uVar33;
      auVar20[8] = uVar30;
      auVar20[9] = uVar31;
      auVar20[10] = uVar32;
      auVar20[0xb] = uVar33;
      uVar15 = *(undefined8 *)((long)pVar1 + 8);
      auVar60 = *(undefined1 (*) [16])(pVar1 + 1);
      auVar5[9] = (char)((ulong)uVar15 >> 8);
      auVar5._0_9_ = *pVar1;
      auVar5[10] = (char)((ulong)uVar15 >> 0x10);
      auVar5[0xb] = (char)((ulong)uVar15 >> 0x18);
      auVar5[0xc] = (char)((ulong)uVar15 >> 0x20);
      auVar5[0xd] = (char)((ulong)uVar15 >> 0x28);
      auVar5[0xe] = (char)((ulong)uVar15 >> 0x30);
      auVar5[0xf] = (char)((ulong)uVar15 >> 0x38);
      auVar61 = NEON_fmax(auVar34,auVar5,4);
      iVar10 = -(uint)((float)*(undefined8 *)pVar1 <= auVar60._0_4_);
      iVar12 = -(uint)((float)((ulong)*(undefined8 *)pVar1 >> 0x20) <= auVar60._4_4_);
      iVar14 = -(uint)((float)uVar15 <= auVar60._8_4_);
      iVar17 = -(uint)((float)((ulong)uVar15 >> 0x20) <= auVar60._12_4_);
      auVar60 = NEON_fmin(auVar61,auVar60,4);
      fVar57 = auVar60._0_4_ - fVar40;
      fVar63 = auVar60._4_4_ - (float)((ulong)uVar35 >> 0x20);
      fVar65 = auVar60._8_4_ - auVar36._8_4_;
      fVar66 = auVar60._12_4_ - auVar34._12_4_;
      auVar18._12_4_ = fVar105;
      auVar60 = NEON_fmax(auVar18,*(undefined1 (*) [16])(pVar1 + 2),4);
      auVar60 = NEON_fmin(auVar60,*(undefined1 (*) [16])(pVar1 + 3),4);
      fVar99 = auVar60._0_4_ - fVar37;
      fVar101 = auVar60._4_4_ -
                (float)(CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar25,fVar37))))
                       >> 0x20);
      fVar103 = auVar60._8_4_ - fVar39;
      fVar105 = auVar60._12_4_ - fVar105;
      auVar20._12_4_ = fVar110;
      auVar60 = NEON_fmax(auVar20,*(undefined1 (*) [16])(pVar1 + 4),4);
      auVar19._12_4_ = (int)((ulong)*(undefined8 *)((long)pVar1 + 0x58) >> 0x20);
      auVar19._0_12_ = *(undefined1 (*) [12])(pVar1 + 5);
      auVar60 = NEON_fmin(auVar60,auVar19,4);
      fVar107 = auVar60._0_4_ - fVar41;
      fVar108 = auVar60._4_4_ -
                (float)(CONCAT17(uVar33,CONCAT16(uVar32,CONCAT15(uVar31,CONCAT14(uVar30,fVar41))))
                       >> 0x20);
      fVar109 = auVar60._8_4_ - fVar43;
      fVar110 = auVar60._12_4_ - fVar110;
      auVar62._0_4_ = fVar57 * fVar57 + fVar99 * fVar99 + fVar107 * fVar107;
      auVar62._4_4_ = fVar63 * fVar63 + fVar101 * fVar101 + fVar108 * fVar108;
      auVar62._8_4_ = fVar65 * fVar65 + fVar103 * fVar103 + fVar109 * fVar109;
      auVar62._12_4_ = fVar66 * fVar66 + fVar105 * fVar105 + fVar110 * fVar110;
      iVar100 = -(uint)(auVar62._0_4_ <= fVar58);
      iVar102 = -(uint)(auVar62._4_4_ <= fVar64);
      iVar104 = -(uint)(auVar62._8_4_ <= (float)uVar48);
      iVar106 = -(uint)(auVar62._12_4_ <= fVar112);
      bVar68 = (byte)iVar100 & (byte)iVar10;
      bVar69 = (byte)((uint)iVar100 >> 8) & (byte)((uint)iVar10 >> 8);
      bVar70 = (byte)((uint)iVar100 >> 0x10) & (byte)((uint)iVar10 >> 0x10);
      bVar72 = (byte)((uint)iVar100 >> 0x18) & (byte)((uint)iVar10 >> 0x18);
      bVar74 = (byte)iVar102 & (byte)iVar12;
      bVar75 = (byte)((uint)iVar102 >> 8) & (byte)((uint)iVar12 >> 8);
      bVar77 = (byte)((uint)iVar102 >> 0x10) & (byte)((uint)iVar12 >> 0x10);
      bVar79 = (byte)((uint)iVar102 >> 0x18) & (byte)((uint)iVar12 >> 0x18);
      bVar81 = (byte)iVar104 & (byte)iVar14;
      bVar82 = (byte)((uint)iVar104 >> 8) & (byte)((uint)iVar14 >> 8);
      bVar84 = (byte)((uint)iVar104 >> 0x10) & (byte)((uint)iVar14 >> 0x10);
      bVar86 = (byte)((uint)iVar104 >> 0x18) & (byte)((uint)iVar14 >> 0x18);
      bVar88 = (byte)iVar106 & (byte)iVar17;
      bVar89 = (byte)((uint)iVar106 >> 8) & (byte)((uint)iVar17 >> 8);
      bVar91 = (byte)((uint)iVar106 >> 0x10) & (byte)((uint)iVar17 >> 0x10);
      bVar93 = (byte)((uint)iVar106 >> 0x18) & (byte)((uint)iVar17 >> 0x18);
      if (((CONCAT13(bVar72,CONCAT12(bVar70,CONCAT11(bVar69,bVar68))) == 0 &&
           CONCAT13(bVar79,CONCAT12(bVar77,CONCAT11(bVar75,bVar74))) == 0) &&
          CONCAT13(bVar86,CONCAT12(bVar84,CONCAT11(bVar82,bVar81))) == 0) &&
          CONCAT13(bVar93,CONCAT12(bVar91,CONCAT11(bVar89,bVar88))) == 0) goto LAB_02f64280;
      uVar51 = (ulong)(uint)(CONCAT13(bVar72 & (byte)((ulong)uVar44 >> 0x18),
                                      CONCAT12(bVar70 & (byte)((ulong)uVar44 >> 0x10),
                                               CONCAT11(bVar69 & (byte)((ulong)uVar44 >> 8),
                                                        bVar68 & (byte)uVar44))) +
                             CONCAT13(bVar79 & (byte)((ulong)uVar44 >> 0x38),
                                      CONCAT12(bVar77 & (byte)((ulong)uVar44 >> 0x30),
                                               CONCAT11(bVar75 & (byte)((ulong)uVar44 >> 0x28),
                                                        bVar74 & (byte)((ulong)uVar44 >> 0x20)))) +
                            CONCAT13(bVar86 & (byte)((ulong)uVar45 >> 0x18),
                                     CONCAT12(bVar84 & (byte)((ulong)uVar45 >> 0x10),
                                              CONCAT11(bVar82 & (byte)((ulong)uVar45 >> 8),
                                                       bVar81 & (byte)uVar45))) +
                            CONCAT13(bVar93 & (byte)((ulong)uVar45 >> 0x38),
                                     CONCAT12(bVar91 & (byte)((ulong)uVar45 >> 0x30),
                                              CONCAT11(bVar89 & (byte)((ulong)uVar45 >> 0x28),
                                                       bVar88 & (byte)((ulong)uVar45 >> 0x20)))));
      lVar50 = uVar51 * 0x10;
      uVar15 = *(undefined8 *)(&UNK_03aae128 + lVar50);
      uVar67 = (undefined1)((ulong)uVar15 >> 8);
      uVar71 = (undefined1)((ulong)uVar15 >> 0x10);
      uVar73 = (undefined1)((ulong)uVar15 >> 0x18);
      uVar76 = (undefined1)((ulong)uVar15 >> 0x20);
      uVar78 = (undefined1)((ulong)uVar15 >> 0x28);
      uVar80 = (undefined1)((ulong)uVar15 >> 0x30);
      uVar83 = (undefined1)((ulong)uVar15 >> 0x38);
      auVar6[9] = uVar67;
      auVar6._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar50);
      auVar6[10] = uVar71;
      auVar6[0xb] = uVar73;
      auVar6[0xc] = uVar76;
      auVar6[0xd] = uVar78;
      auVar6[0xe] = uVar80;
      auVar6[0xf] = uVar83;
      auVar61 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pVar1 + 6),auVar6);
      auVar7[9] = uVar67;
      auVar7._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar50);
      auVar7[10] = uVar71;
      auVar7[0xb] = uVar73;
      auVar7[0xc] = uVar76;
      auVar7[0xd] = uVar78;
      auVar7[0xe] = uVar80;
      auVar7[0xf] = uVar83;
      auVar60 = a64_TBL(ZEXT816(0),auVar62,auVar7);
      iVar12 = auVar61._0_4_ << 1;
      uVar67 = (undefined1)((uint)iVar12 >> 8);
      uVar71 = (undefined1)((uint)iVar12 >> 0x10);
      uVar73 = (undefined1)((uint)iVar12 >> 0x18);
      iVar14 = auVar61._4_4_ << 1;
      uVar76 = (undefined1)((uint)iVar14 >> 8);
      uVar78 = (undefined1)((uint)iVar14 >> 0x10);
      uVar80 = (undefined1)((uint)iVar14 >> 0x18);
      iVar17 = auVar61._8_4_ << 1;
      uVar83 = (undefined1)((uint)iVar17 >> 8);
      uVar85 = (undefined1)((uint)iVar17 >> 0x10);
      uVar87 = (undefined1)((uint)iVar17 >> 0x18);
      iVar100 = auVar61._12_4_ << 1;
      uVar90 = (undefined1)((uint)iVar100 >> 8);
      uVar92 = (undefined1)((uint)iVar100 >> 0x10);
      uVar94 = (undefined1)((uint)iVar100 >> 0x18);
      bVar72 = -(*(char *)(pVar1 + 7) == '\0');
      iVar10 = *(int *)(&DAT_03aadfe0 + uVar51 * 4);
      uVar95 = CONCAT14(~bVar72,(uint)(~bVar72 & 1)) & 0x1ffffffff;
      bVar68 = (byte)uVar95 | (byte)iVar12;
      bVar69 = (byte)(uVar95 >> 0x20) | (byte)iVar14;
      bVar70 = ~bVar72 & 1 | (byte)iVar17;
      bVar72 = ~bVar72 & 1 | (byte)iVar100;
      auVar8[1] = uVar67;
      auVar8[0] = bVar68;
      auVar8[2] = uVar71;
      auVar8[3] = uVar73;
      auVar8[4] = bVar69;
      auVar8[5] = uVar76;
      auVar8[6] = uVar78;
      auVar8[7] = uVar80;
      auVar8[8] = bVar70;
      auVar8[9] = uVar83;
      auVar8[10] = uVar85;
      auVar8[0xb] = uVar87;
      auVar8[0xc] = bVar72;
      auVar8[0xd] = uVar90;
      auVar8[0xe] = uVar92;
      auVar8[0xf] = uVar94;
      auVar9[1] = uVar67;
      auVar9[0] = bVar68;
      auVar9[2] = uVar71;
      auVar9[3] = uVar73;
      auVar9[4] = bVar69;
      auVar9[5] = uVar76;
      auVar9[6] = uVar78;
      auVar9[7] = uVar80;
      auVar9[8] = bVar70;
      auVar9[9] = uVar83;
      auVar9[10] = uVar85;
      auVar9[0xb] = uVar87;
      auVar9[0xc] = bVar72;
      auVar9[0xd] = uVar90;
      auVar9[0xe] = uVar92;
      auVar9[0xf] = uVar94;
      auVar61 = NEON_ext(auVar8,auVar9,8,1);
      *(ulong *)(local_10f0 + local_f0) =
           CONCAT17(uVar80,CONCAT16(uVar78,CONCAT15(uVar76,CONCAT14(bVar69,CONCAT13(uVar73,CONCAT12(
                                                  uVar71,CONCAT11(uVar67,bVar68)))))));
      *(long *)((long)auStack_10e8 + (long)local_f0 * 4) = auVar61._0_8_;
      lVar50 = (long)local_f0;
      *(long *)((long)auStack_8e8 + lVar50 * 4) = auVar60._8_8_;
      *(long *)(local_8f0 + lVar50) = auVar60._0_8_;
      local_f0 = local_f0 + iVar10;
    } while (local_f0 != 0);
  }
  return;
}


