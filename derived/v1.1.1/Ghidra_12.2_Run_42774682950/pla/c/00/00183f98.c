/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00183f98; name: FUN_00183f98
 */


void FUN_00183f98(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined8 *puVar2;
  long *plVar3;
  float *pfVar4;
  long *plVar5;
  byte bVar6;
  void *__src;
  byte bVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined *puVar20;
  uint uVar21;
  long *plVar22;
  void *__dest;
  long lVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  undefined8 *puVar31;
  long lVar32;
  ulong uVar33;
  long *plVar34;
  long lVar35;
  uint uVar36;
  uint uVar37;
  long *plVar38;
  long lVar39;
  undefined8 *puVar40;
  byte *pbVar41;
  undefined8 uVar42;
  ulong uVar43;
  int iVar44;
  undefined8 uVar45;
  long *plVar46;
  int iVar47;
  ulong uVar48;
  float fVar49;
  uint uVar50;
  undefined1 auVar51 [12];
  float fVar58;
  float fVar61;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  uint uVar59;
  undefined1 auVar56 [16];
  uint uVar60;
  uint uVar62;
  uint uVar63;
  undefined1 auVar57 [16];
  float fVar64;
  undefined8 uVar66;
  undefined1 auVar67 [12];
  undefined1 auVar76 [12];
  undefined8 uVar74;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar65;
  float fVar73;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar75;
  float fVar79;
  float fVar80;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar81 [12];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  long *local_178;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  long local_130;
  long lStack_128;
  float local_120;
  float fStack_11c;
  float fStack_118;
  long local_110;
  long local_108;
  long local_100;
  int local_e0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined3 local_9b;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  uint local_8c;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70;
  int iStack_6c;
  
  if (*(char *)(param_1 + 0x108) != '\0') {
    plVar46 = (long *)(param_1 + 0xc0);
    puVar31 = (undefined8 *)(*plVar46 + (long)plVar46);
    auVar53 = *(undefined1 (*) [16])(puVar31 + 0x12);
    if (((auVar53._0_4_ < *(float *)(puVar31 + 0x10) &&
         auVar53._4_4_ < *(float *)((long)puVar31 + 0x84)) &&
        auVar53._8_4_ < *(float *)(puVar31 + 0x11)) &&
        auVar53._12_4_ < *(float *)((long)puVar31 + 0x8c)) {
      uVar21 = *(uint *)(param_1 + 200);
      if (uVar21 != 2) {
        uVar36 = *(uint *)(param_1 + 0xcc);
        if (*(uint *)(param_1 + 0xcc) == 0) {
          *(uint *)(param_1 + 0xcc) = uVar21;
          uVar36 = uVar21;
        }
        if ((int)uVar21 < 2) {
          uVar24 = uVar36 & 0x7fffffff;
          if ((int)(uVar36 & 0x7fffffff) <= (int)uVar21) {
            uVar24 = uVar21;
          }
          if ((int)uVar24 < 2) {
            lVar32 = tpidr_el0;
            lVar29 = *(long *)(lVar32 + 0x38d490);
            if (lVar29 == 0) {
              lVar29 = FUN_0333d16c(0,1);
              *(long *)(lVar32 + 0x38d490) = lVar29;
            }
            plVar22 = *(long **)(*(long *)(lVar29 + 8) + 0x58);
            __dest = (void *)(**(code **)(*plVar22 + 0x10))(plVar22,0x100,0);
            __src = (void *)0x0;
            if (*(long *)(param_1 + 0xc0) != 0) {
              __src = (void *)(*(long *)(param_1 + 0xc0) + (long)plVar46);
            }
            memcpy(__dest,__src,(long)*(int *)(param_1 + 200) << 7);
            if ((int)*(uint *)(param_1 + 0xcc) < 0) {
              uVar21 = *(uint *)(param_1 + 0xcc) & 0x7fffffff;
              if ((int)uVar21 <= (int)*(uint *)(param_1 + 200)) {
                uVar21 = *(uint *)(param_1 + 200);
              }
              lVar29 = 0;
              if (*(long *)(param_1 + 0xc0) != 0) {
                lVar29 = *(long *)(param_1 + 0xc0) + (long)plVar46;
              }
              lVar30 = *(long *)(lVar32 + 0x38d490);
              if (lVar30 == 0) {
                lVar30 = FUN_0333d16c(0,1);
                *(long *)(lVar32 + 0x38d490) = lVar30;
              }
              plVar22 = *(long **)(*(long *)(lVar30 + 8) + 0x58);
              (**(code **)(*plVar22 + 0x18))(plVar22,lVar29,(ulong)uVar21 << 7);
            }
            lVar32 = 0;
            if (__dest != (void *)0x0) {
              lVar32 = (long)__dest - (long)plVar46;
            }
            *(long *)(param_1 + 0xc0) = lVar32;
            puVar31 = (undefined8 *)(lVar32 + (long)plVar46);
            *(undefined4 *)(param_1 + 0xcc) = 0x80000002;
          }
        }
        *(undefined4 *)(param_1 + 200) = 2;
      }
      puVar20 = PTR_DAT_04372370;
      puVar31[0xc] = 0;
      puVar31[0xd] = 0;
      auVar53 = *(undefined1 (*) [16])(puVar20 + 0x240);
      auVar77 = *(undefined1 (*) [16])(puVar20 + 0x290);
      *(undefined2 *)(puVar31 + 0xe) = 0;
      uVar42 = auVar53._8_8_;
      puVar31[1] = uVar42;
      uVar45 = auVar53._0_8_;
      *puVar31 = uVar45;
      uVar74 = auVar77._8_8_;
      puVar31[3] = uVar74;
      uVar66 = auVar77._0_8_;
      puVar31[2] = uVar66;
      puVar31[5] = uVar42;
      puVar31[4] = uVar45;
      puVar31[7] = uVar74;
      puVar31[6] = uVar66;
      puVar31[9] = uVar42;
      puVar31[8] = uVar45;
      puVar31[0xb] = uVar74;
      puVar31[10] = uVar66;
      lVar32 = *(long *)(param_1 + 0xc0);
      *(undefined8 *)((long)plVar46 + lVar32 + 0xe0) = 0;
      *(undefined8 *)((long)plVar46 + lVar32 + 0xe8) = 0;
      *(undefined2 *)((long)plVar46 + lVar32 + 0xf0) = 0;
      *(undefined8 *)((long)plVar46 + lVar32 + 0x88) = uVar42;
      *(undefined8 *)((long)plVar46 + lVar32 + 0x80) = uVar45;
      *(undefined8 *)((long)plVar46 + lVar32 + 0x98) = uVar74;
      *(undefined8 *)((long)plVar46 + lVar32 + 0x90) = uVar66;
      *(undefined8 *)((long)plVar46 + lVar32 + 0xa8) = uVar42;
      *(undefined8 *)((long)plVar46 + lVar32 + 0xa0) = uVar45;
      *(undefined8 *)((long)plVar46 + lVar32 + 0xb8) = uVar74;
      *(undefined8 *)((long)plVar46 + lVar32 + 0xb0) = uVar66;
      *(undefined8 *)((long)plVar46 + lVar32 + 200) = uVar42;
      *(undefined8 *)((long)plVar46 + lVar32 + 0xc0) = uVar45;
      *(undefined8 *)((long)plVar46 + lVar32 + 0xd8) = uVar74;
      *(undefined8 *)((long)plVar46 + lVar32 + 0xd0) = uVar66;
      *(undefined1 *)(param_1 + 0xd0) = 1;
      local_9b = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      local_90 = 0;
      local_b8 = PTR_DAT_043723f8 + 0x10;
      uStack_b0 = 0x200000000;
      uVar21 = 0x80000000;
      local_a8 = 0;
      local_88 = 0;
      local_a0 = 1;
      local_8c = 0x80000000;
      local_80 = -0x8000000000000000;
      uStack_78 = 0;
      local_9c = 0;
      if (*(int *)(param_1 + 0x68) == 0) {
        lVar32 = 0;
        lVar29 = 0;
      }
      else {
        local_178 = (long *)0x0;
        local_108 = 0;
        local_100 = 0;
        lVar30 = 0;
        uVar43 = 0;
        uVar36 = 0;
        lVar29 = 0;
        local_110 = 0;
        lVar32 = 0;
        uVar50 = 0;
        pauVar1 = (undefined1 (*) [12])(param_1 + 0x30);
        auVar19 = *pauVar1;
        auVar18 = *pauVar1;
        auVar17 = *pauVar1;
        auVar16 = *pauVar1;
        plVar34 = *(long **)PTR_PTR_04372400;
        auVar53 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x150);
        plVar38 = *(long **)PTR_PTR_04372408;
        auVar77 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x1e0);
        fVar49 = (*(float *)(param_1 + 0x40) - *(float *)*pauVar1) * *(float *)PTR_DAT_04372410;
        fVar58 = (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x34)) *
                 *(float *)(PTR_DAT_04372410 + 4);
        fVar61 = (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x38)) *
                 *(float *)(PTR_DAT_04372410 + 8);
        auVar82 = NEON_ext(auVar77,auVar77,8,1);
        lStack_128 = 0;
        local_130 = 0;
        fStack_118 = 0.0;
        local_120 = 0.0;
        fStack_11c = 0.0;
        auVar52 = NEON_ext(auVar53,auVar53,8,1);
        auVar53 = NEON_ext(auVar52,auVar53,8,1);
        fStack_188 = auVar53._8_4_;
        fStack_184 = auVar53._12_4_;
        local_190 = auVar53._0_4_;
        fStack_18c = auVar53._4_4_;
        auVar53 = NEON_ext(auVar82,auVar77,8,1);
        plVar22 = (long *)(param_1 + 0x60);
        plVar3 = (long *)(param_1 + 0x70);
        uVar21 = 0x80000000;
        uVar24 = 0xffffffff;
        uVar25 = 0xffffffff;
        do {
          uVar28 = uVar36 >> 8;
          uVar27 = (ulong)uVar28;
          uVar59 = uVar36 >> 1 & 0x7f;
          uVar26 = (ulong)uVar59;
          if ((uVar25 == uVar28) && (uVar24 == uVar28)) {
            lVar35 = *plVar3;
            lVar23 = lVar35 + (long)plVar3;
            uVar48 = (ulong)uVar24;
          }
          else {
            local_178 = (long *)((long)plVar22 + uVar27 * 0x60 + *plVar22);
            local_130 = local_178[6];
            lStack_128 = local_178[7];
            lVar30 = *(long *)(param_1 + 0x90);
            local_100 = 0;
            if (lVar30 != 0) {
              local_100 = lVar30 + param_1 + 0x90;
            }
            fStack_118 = *(float *)((long)local_178 + 0x44);
            local_100 = local_100 + (ulong)*(uint *)(local_178 + 9) * 4;
            lVar30 = *(long *)(param_1 + 0xa0);
            local_108 = 0;
            if (lVar30 != 0) {
              local_108 = lVar30 + param_1 + 0xa0;
            }
            local_108 = local_108 + (ulong)*(byte *)((long)local_178 + 0x5b) * 0x80000;
            lVar30 = *(long *)(param_1 + 0x80);
            local_120 = (float)*(undefined8 *)((long)local_178 + 0x3c);
            fStack_11c = (float)((ulong)*(undefined8 *)((long)local_178 + 0x3c) >> 0x20);
            lVar39 = 0;
            if (lVar30 != 0) {
              lVar39 = lVar30 + param_1 + 0x80;
            }
            lVar35 = *plVar3;
            uVar43 = (ulong)*(byte *)(local_178 + 0xb);
            lVar23 = lVar35 + (long)plVar3;
            lVar30 = 0;
            if (lVar35 != 0) {
              lVar30 = lVar23;
            }
            lVar30 = lVar30 + (ulong)*(uint *)(local_178 + 10) * 4;
            local_110 = lVar39 + (ulong)*(uint *)((long)local_178 + 0x4c) * 2 + uVar43 * -2;
            uVar48 = uVar27;
            uVar24 = uVar28;
            uVar25 = uVar28;
          }
          lVar39 = 0;
          if (lVar35 != 0) {
            lVar39 = lVar23;
          }
          lVar39 = lVar39 + (ulong)*(uint *)((long)plVar22 + uVar48 * 0x60 + *plVar22 + 0x50) * 4 +
                   uVar26 * 4;
          if (*(char *)(lVar39 + 1) == *(char *)(lVar39 + 3)) {
            if (*(byte *)(lVar39 + 2) - 3 < 2) {
              lVar39 = lVar30 + uVar26 * 4;
              bVar7 = *(byte *)(lVar39 + 1);
              if ((bVar7 == *(byte *)(lVar39 + 3)) && (*(char *)(lVar39 + 2) == '\x03')) {
                auVar68 = *(undefined1 (*) [16])(local_178 + 2);
                auVar54 = *(undefined1 (*) [16])(local_178 + 4);
                if (bVar7 == 0) {
                  uVar48 = auVar68._8_8_;
                  lVar23 = auVar68._0_8_;
                }
                else {
                  lVar39 = 0;
                  do {
                    iStack_6c = (int)lVar39;
                    local_70 = iStack_6c + 1;
                    fVar65 = auVar54._0_4_;
                    fVar73 = auVar54._8_4_;
                    iStack_6c = iStack_6c +
                                (*(byte *)((long)local_178 + (long)iStack_6c * 4 + *local_178 + 3) &
                                0xfe);
                    fVar75 = auVar53._0_4_ * (fVar65 - auVar68._0_4_);
                    fVar79 = auVar53._4_4_ * (auVar54._4_4_ - auVar68._4_4_);
                    fVar80 = auVar53._8_4_ * (fVar73 - auVar68._8_4_);
                    uVar28 = *(uint *)((ulong)&local_70 |
                                      (ulong)(iStack_6c <= (int)(uint)bVar7) << 2);
                    lVar39 = (long)(int)uVar28;
                    pbVar41 = (byte *)((long)local_178 + lVar39 * 4 + *local_178);
                    bVar10 = *pbVar41 >> 4;
                    bVar8 = *pbVar41 & 0xf;
                    bVar11 = pbVar41[1] >> 4;
                    bVar6 = pbVar41[1] & 0xf;
                    bVar12 = pbVar41[2] >> 4;
                    bVar13 = pbVar41[2] & 0xf;
                    lVar23 = CONCAT44(auVar68._4_4_ + (float)(byte)(bVar11 * bVar11) * fVar79,
                                      auVar68._0_4_ + (float)(byte)(bVar10 * bVar10) * fVar75);
                    fVar64 = auVar68._8_4_ + (float)(byte)(bVar12 * bVar12) * fVar80;
                    uVar48 = (ulong)(uint)fVar64;
                    auVar54._4_4_ = auVar54._4_4_ - (float)(byte)(bVar6 * bVar6) * fVar79;
                    auVar54._0_4_ = fVar65 - (float)(byte)(bVar8 * bVar8) * fVar75;
                    auVar68._8_4_ = fVar64;
                    auVar68._0_8_ = lVar23;
                    auVar68._12_4_ = 0;
                    auVar54._8_4_ = fVar73 - (float)(byte)(bVar13 * bVar13) * fVar80;
                    auVar54._12_4_ = 0;
                  } while (uVar28 != bVar7);
                }
              }
              else {
                lVar39 = *local_178;
                if ((int)*(uint *)(local_178 + 1) < 1) {
LAB_00184ab4:
                  uVar26 = 0xffffffff;
                  uVar48 = local_178[3];
                  lVar23 = local_178[2];
                  auVar54 = *(undefined1 (*) [16])(local_178 + 4);
                }
                else {
                  uVar26 = 0;
                  pbVar41 = (byte *)((long)local_178 + lVar39 + 3);
                  bVar7 = *pbVar41;
                  if ((bVar7 & 1) == 0) goto LAB_0018474c;
                  do {
                    do {
                      uVar26 = uVar26 + 1;
                      pbVar41 = pbVar41 + 4;
                      if (*(uint *)(local_178 + 1) == uVar26) goto LAB_00184ab4;
                      bVar7 = *pbVar41;
                    } while ((bVar7 & 1) != 0);
LAB_0018474c:
                  } while (uVar59 != bVar7 >> 1);
                  uVar48 = local_178[3];
                  lVar23 = local_178[2];
                  auVar54 = *(undefined1 (*) [16])(local_178 + 4);
                  if ((int)uVar26 == 0) goto LAB_00184d04;
                }
                auVar71._8_8_ = uVar48;
                auVar71._0_8_ = lVar23;
                lVar35 = 0;
                do {
                  iStack_6c = (int)lVar35;
                  local_70 = iStack_6c + 1;
                  fVar65 = auVar54._0_4_;
                  fVar73 = auVar54._8_4_;
                  iStack_6c = iStack_6c +
                              (*(byte *)((long)local_178 + (long)iStack_6c * 4 + lVar39 + 3) & 0xfe)
                  ;
                  fVar75 = auVar53._0_4_ * (fVar65 - auVar71._0_4_);
                  fVar79 = auVar53._4_4_ * (auVar54._4_4_ - auVar71._4_4_);
                  fVar80 = auVar53._8_4_ * (fVar73 - auVar71._8_4_);
                  iVar44 = *(int *)((ulong)&local_70 | (ulong)(iStack_6c <= (int)uVar26) << 2);
                  lVar35 = (long)iVar44;
                  pbVar41 = (byte *)((long)local_178 + lVar35 * 4 + lVar39);
                  bVar13 = *pbVar41 >> 4;
                  bVar7 = *pbVar41 & 0xf;
                  bVar10 = pbVar41[1] >> 4;
                  bVar8 = pbVar41[1] & 0xf;
                  bVar11 = pbVar41[2] >> 4;
                  bVar6 = pbVar41[2] & 0xf;
                  lVar23 = CONCAT44(auVar71._4_4_ + (float)(byte)(bVar10 * bVar10) * fVar79,
                                    auVar71._0_4_ + (float)(byte)(bVar13 * bVar13) * fVar75);
                  fVar64 = auVar71._8_4_ + (float)(byte)(bVar11 * bVar11) * fVar80;
                  uVar48 = (ulong)(uint)fVar64;
                  auVar54._4_4_ = auVar54._4_4_ - (float)(byte)(bVar8 * bVar8) * fVar79;
                  auVar54._0_4_ = fVar65 - (float)(byte)(bVar7 * bVar7) * fVar75;
                  auVar71._8_4_ = fVar64;
                  auVar71._0_8_ = lVar23;
                  auVar71._12_4_ = 0;
                  auVar54._8_4_ = fVar73 - (float)(byte)(bVar6 * bVar6) * fVar80;
                  auVar54._12_4_ = 0;
                } while (iVar44 != (int)uVar26);
              }
LAB_00184d04:
              uVar28 = uVar50;
              if ((int)uVar50 <= (int)uVar36) {
                iVar44 = 0;
                uVar26 = (ulong)uVar50;
                lVar39 = lVar32;
                do {
                  while( true ) {
                    iVar47 = (int)uVar26;
                    uVar28 = iVar47 + 1;
                    if (iVar47 < (int)(uVar21 & 0x3fffffff)) break;
                    if (0x3ffffffe < iVar47) {
                      FUN_032bd0a8(uVar28);
                    }
                    uVar37 = (uVar21 & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar37) {
                      uVar37 = 0x3fffffff;
                    }
                    uVar60 = uVar28;
                    if ((int)uVar28 <= (int)uVar37) {
                      uVar60 = uVar37;
                    }
                    FUN_032bd100(uVar60,0x20,uVar21,&local_70);
                    lVar32 = (**(code **)(*plVar34 + 0x10))
                                       (plVar34,CONCAT44(iStack_6c,local_70),&local_70);
                    if (0 < iVar47) {
                      uVar37 = uVar50 + iVar44;
                      uVar33 = (ulong)uVar37 & 3;
                      if ((ulong)uVar37 - 1 < 3) {
                        lVar35 = 0;
                      }
                      else {
                        lVar35 = 0;
                        puVar31 = (undefined8 *)(lVar32 + 0x40);
                        puVar40 = (undefined8 *)(lVar29 + 0x40);
                        do {
                          uVar45 = puVar40[-5];
                          lVar35 = lVar35 + 4;
                          puVar31[-7] = puVar40[-7];
                          puVar31[-5] = uVar45;
                          uVar45 = puVar40[-8];
                          puVar31[-6] = puVar40[-6];
                          puVar31[-8] = uVar45;
                          uVar45 = puVar40[-3];
                          puVar31[-1] = puVar40[-1];
                          puVar31[-3] = uVar45;
                          uVar45 = puVar40[-4];
                          puVar31[-2] = puVar40[-2];
                          puVar31[-4] = uVar45;
                          uVar42 = puVar40[1];
                          puVar31[3] = puVar40[3];
                          uVar45 = puVar40[2];
                          *puVar31 = *puVar40;
                          puVar31[1] = uVar42;
                          puVar31[2] = uVar45;
                          uVar45 = puVar40[4];
                          uVar42 = puVar40[5];
                          puVar2 = puVar40 + 6;
                          uVar66 = puVar40[7];
                          puVar40 = puVar40 + 0x10;
                          puVar31[6] = *puVar2;
                          puVar31[7] = uVar66;
                          puVar31[4] = uVar45;
                          puVar31[5] = uVar42;
                          puVar31 = puVar31 + 0x10;
                        } while (uVar26 - (uVar26 & 3) != lVar35);
                      }
                      if ((uVar37 & 3) != 0) {
                        puVar31 = (undefined8 *)(lVar29 + lVar35 * 0x20);
                        puVar40 = (undefined8 *)(lVar32 + lVar35 * 0x20);
                        do {
                          uVar45 = puVar31[3];
                          uVar33 = uVar33 - 1;
                          puVar40[1] = puVar31[1];
                          puVar40[3] = uVar45;
                          uVar45 = *puVar31;
                          puVar40[2] = puVar31[2];
                          puVar31 = puVar31 + 4;
                          *puVar40 = uVar45;
                          puVar40 = puVar40 + 4;
                        } while (uVar33 != 0);
                      }
                    }
                    if (-1 < (int)uVar21) {
                      (**(code **)(*plVar34 + 0x18))
                                (plVar34,lVar39,(ulong)(uVar21 & 0x3fffffff) << 5);
                    }
                    uVar21 = (uint)(CONCAT44(iStack_6c,local_70) >> 5);
                    if (0x7ffffffdf < CONCAT44(iStack_6c,local_70)) {
                      uVar21 = 0x3fffffff;
                    }
                    iVar44 = iVar44 + 1;
                    uVar26 = (ulong)uVar28;
                    lVar39 = lVar32;
                    lVar29 = lVar32;
                    if ((int)uVar36 <= iVar47) goto LAB_00184f28;
                  }
                  iVar44 = iVar44 + 1;
                  uVar26 = (ulong)uVar28;
                  lVar32 = lVar39;
                } while (iVar47 < (int)uVar36);
              }
LAB_00184f28:
              uVar50 = local_90;
              plVar5 = (long *)(lVar29 + (long)(int)uVar36 * 0x20);
              auVar72._0_8_ =
                   CONCAT44((auVar54._4_4_ + (float)((ulong)lVar23 >> 0x20)) * fStack_18c,
                            (auVar54._0_4_ + (float)lVar23) * local_190);
              auVar72._8_4_ = (auVar54._8_4_ + (float)uVar48) * fStack_188;
              auVar72._12_4_ = (auVar54._12_4_ + (float)(uVar48 >> 0x20)) * fStack_184;
              plVar5[1] = uVar48;
              *plVar5 = lVar23;
              plVar5[3] = auVar54._8_8_;
              plVar5[2] = auVar54._0_8_;
              lVar39 = CONCAT44(uStack_94,uStack_98);
              uVar26 = (ulong)local_90;
              uVar37 = local_90 + 1;
              if ((int)local_90 < (int)(local_8c & 0x3fffffff)) {
                lVar23 = lVar39;
              }
              else {
                if (0x3ffffffe < (int)local_90) {
                  FUN_032bd0a8(uVar37);
                }
                uVar60 = (local_8c & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar60) {
                  uVar60 = 0x3fffffff;
                }
                uVar62 = uVar37;
                if ((int)uVar37 <= (int)uVar60) {
                  uVar62 = uVar60;
                }
                FUN_032bd100(uVar62,0x10,local_8c,&local_70);
                uVar60 = local_8c;
                uVar48 = (ulong)local_8c;
                lVar23 = (**(code **)(*plVar38 + 0x10))
                                   (plVar38,CONCAT44(iStack_6c,local_70),&local_70);
                if (0 < (int)uVar50) {
                  uVar33 = uVar26 & 3;
                  if (uVar26 - 1 < 3) {
                    lVar35 = 0;
                  }
                  else {
                    lVar35 = 0;
                    puVar31 = (undefined8 *)(lVar23 + 0x20);
                    puVar40 = (undefined8 *)(lVar39 + 0x20);
                    do {
                      puVar31[-3] = puVar40[-3];
                      puVar31[-4] = puVar40[-4];
                      puVar31[-1] = puVar40[-1];
                      puVar31[-2] = puVar40[-2];
                      puVar31[1] = puVar40[1];
                      *puVar31 = *puVar40;
                      puVar31[3] = puVar40[3];
                      puVar2 = puVar40 + 2;
                      lVar35 = lVar35 + 4;
                      puVar40 = puVar40 + 8;
                      puVar31[2] = *puVar2;
                      puVar31 = puVar31 + 8;
                    } while (uVar26 - uVar33 != lVar35);
                  }
                  if ((uVar50 & 3) != 0) {
                    puVar31 = (undefined8 *)(lVar39 + lVar35 * 0x10);
                    puVar40 = (undefined8 *)(lVar23 + lVar35 * 0x10);
                    do {
                      puVar40[1] = puVar31[1];
                      uVar33 = uVar33 - 1;
                      *puVar40 = *puVar31;
                      puVar31 = puVar31 + 2;
                      puVar40 = puVar40 + 2;
                    } while (uVar33 != 0);
                  }
                }
                if (-1 < (int)uVar60) {
                  (**(code **)(*plVar38 + 0x18))(plVar38,lVar39,(uVar48 & 0x3fffffff) << 4);
                }
                if (CONCAT44(iStack_6c,local_70) < 0x3fffffff0) {
                  local_8c = (uint)(CONCAT44(iStack_6c,local_70) >> 4);
                }
                else {
                  local_8c = 0x3fffffff;
                }
                auVar72._8_8_ = auVar72._8_8_;
                uStack_98 = (undefined4)lVar23;
                uStack_94 = (undefined4)((ulong)lVar23 >> 0x20);
              }
              uVar50 = (uint)(auVar72._0_4_ >> 0x1f) >> 1;
              uVar60 = (uint)(auVar72._4_4_ >> 0x1f) >> 1;
              uVar62 = (uint)(auVar72._8_4_ >> 0x1f) >> 1;
              uVar63 = (uint)(auVar72._12_4_ >> 0x1f) >> 1;
              puVar31 = (undefined8 *)(lVar23 + (long)(int)local_90 * 0x10);
              auVar57._0_8_ =
                   CONCAT17((byte)((char)auVar72[7] >> 7) >> 1 ^ auVar72[7],
                            CONCAT16((byte)(uVar60 >> 0x10) ^ auVar72[6],
                                     CONCAT15((byte)(uVar60 >> 8) ^ auVar72[5],
                                              CONCAT14((byte)uVar60 ^ auVar72[4],
                                                       CONCAT13((byte)((char)auVar72[3] >> 7) >> 1 ^
                                                                auVar72[3],
                                                                CONCAT12((byte)(uVar50 >> 0x10) ^
                                                                         auVar72[2],
                                                                         CONCAT11((byte)(uVar50 >> 8
                                                                                        ) ^ auVar72[
                                                  1],(byte)uVar50 ^ auVar72[0])))))));
              auVar57[8] = (byte)uVar62 ^ auVar72[8];
              auVar57[9] = (byte)(uVar62 >> 8) ^ auVar72[9];
              auVar57[10] = (byte)(uVar62 >> 0x10) ^ auVar72[10];
              auVar57[0xb] = (byte)((char)auVar72[0xb] >> 7) >> 1 ^ auVar72[0xb];
              auVar57[0xc] = (byte)uVar63 ^ auVar72[0xc];
              auVar57[0xd] = (byte)(uVar63 >> 8) ^ auVar72[0xd];
              auVar57[0xe] = (byte)(((uint3)(auVar72._13_3_ >> 0x17) >> 1) >> 8) ^ auVar72[0xe];
              auVar57[0xf] = (byte)((char)auVar72[0xf] >> 7) >> 1 ^ auVar72[0xf];
              puVar31[1] = auVar57._8_8_;
              *puVar31 = auVar57._0_8_;
              *(uint *)((long)puVar31 + 0xc) = uVar36;
              uVar50 = uVar28;
              local_90 = uVar37;
            }
          }
          else {
            bVar7 = *(byte *)(lVar30 + uVar26 * 4);
            uVar59 = (uint)uVar43;
            if (bVar7 < uVar59) {
              uVar37 = *(uint *)(local_100 + (ulong)bVar7 * 4);
              auVar77._8_8_ = lStack_128;
              auVar77._0_8_ = local_130;
              auVar67._4_4_ = fStack_11c;
              auVar67._0_4_ = local_120;
              auVar67._8_4_ = fStack_118;
              uVar28 = uVar37 & 0x7ff;
              uVar60 = uVar37 >> 0xb & 0x7ff;
              uVar37 = uVar37 >> 0x16;
              auVar51 = auVar77._0_12_;
            }
            else {
              uVar27 = *(ulong *)(local_108 + (ulong)*(ushort *)(local_110 + (ulong)bVar7 * 2) * 8);
              auVar67._4_4_ = fVar58;
              auVar67._0_4_ = fVar49;
              auVar67._8_4_ = fVar61;
              uVar28 = (uint)uVar27 & 0x1fffff;
              uVar60 = (uint)(uVar27 >> 0x15) & 0x1fffff;
              uVar37 = (uint)(uVar27 >> 0x2a);
              auVar51 = auVar16;
            }
            lVar39 = lVar30 + uVar26 * 4;
            auVar52._4_4_ = uVar60;
            auVar52._0_4_ = uVar28;
            bVar7 = *(byte *)(lVar39 + 1);
            auVar52._8_4_ = uVar37;
            auVar52._12_4_ = 0;
            auVar77 = NEON_scvtf(auVar52,4);
            if (bVar7 < uVar59) {
              uVar37 = *(uint *)(local_100 + (ulong)bVar7 * 4);
              auVar82._8_8_ = lStack_128;
              auVar82._0_8_ = local_130;
              auVar76._4_4_ = fStack_11c;
              auVar76._0_4_ = local_120;
              auVar76._8_4_ = fStack_118;
              uVar28 = uVar37 & 0x7ff;
              uVar60 = uVar37 >> 0xb & 0x7ff;
              uVar37 = uVar37 >> 0x16;
              auVar81 = auVar82._0_12_;
            }
            else {
              uVar26 = *(ulong *)(local_108 + (ulong)*(ushort *)(local_110 + (ulong)bVar7 * 2) * 8);
              auVar76._4_4_ = fVar58;
              auVar76._0_4_ = fVar49;
              auVar76._8_4_ = fVar61;
              uVar28 = (uint)uVar26 & 0x1fffff;
              uVar60 = (uint)(uVar26 >> 0x15) & 0x1fffff;
              uVar37 = (uint)(uVar26 >> 0x2a);
              auVar81 = auVar17;
            }
            auVar55._0_4_ = auVar51._0_4_ + auVar67._0_4_ * auVar77._0_4_;
            auVar55._4_4_ = auVar51._4_4_ + auVar67._4_4_ * auVar77._4_4_;
            auVar55._8_4_ = auVar51._8_4_ + auVar67._8_4_ * auVar77._8_4_;
            bVar7 = *(byte *)(lVar39 + 2);
            auVar69._4_4_ = uVar60;
            auVar69._0_4_ = uVar28;
            auVar69._8_4_ = uVar37;
            auVar69._12_4_ = 0;
            auVar77 = NEON_scvtf(auVar69,4);
            auVar70._0_4_ = auVar81._0_4_ + auVar76._0_4_ * auVar77._0_4_;
            auVar70._4_4_ = auVar81._4_4_ + auVar76._4_4_ * auVar77._4_4_;
            auVar70._8_4_ = auVar81._8_4_ + auVar76._8_4_ * auVar77._8_4_;
            if (bVar7 < uVar59) {
              uVar37 = *(uint *)(local_100 + (ulong)bVar7 * 4);
              auVar14._8_8_ = lStack_128;
              auVar14._0_8_ = local_130;
              auVar51._4_4_ = fStack_11c;
              auVar51._0_4_ = local_120;
              auVar51._8_4_ = fStack_118;
              uVar28 = uVar37 & 0x7ff;
              uVar60 = uVar37 >> 0xb & 0x7ff;
              uVar37 = uVar37 >> 0x16;
              auVar67 = auVar14._0_12_;
            }
            else {
              auVar51._4_4_ = fVar58;
              auVar51._0_4_ = fVar49;
              auVar51._8_4_ = fVar61;
              uVar26 = *(ulong *)(local_108 + (ulong)*(ushort *)(local_110 + (ulong)bVar7 * 2) * 8);
              uVar28 = (uint)uVar26 & 0x1fffff;
              uVar60 = (uint)(uVar26 >> 0x15) & 0x1fffff;
              uVar37 = (uint)(uVar26 >> 0x2a);
              auVar67 = auVar18;
            }
            auVar86._4_4_ = uVar60;
            auVar86._0_4_ = uVar28;
            bVar8 = *(byte *)(lVar39 + 3);
            auVar86._8_4_ = uVar37;
            auVar86._12_4_ = 0;
            auVar77 = NEON_scvtf(auVar86,4);
            auVar78._0_8_ =
                 CONCAT44(auVar67._4_4_ + auVar51._4_4_ * auVar77._4_4_,
                          auVar67._0_4_ + auVar51._0_4_ * auVar77._0_4_);
            auVar78._8_4_ = auVar67._8_4_ + auVar51._8_4_ * auVar77._8_4_;
            if ((uint)bVar7 == (uint)bVar8) {
              local_e0 = 1;
              uVar45 = auVar78._0_8_;
              fVar65 = auVar78._8_4_;
            }
            else {
              if (uVar59 == bVar8 || uVar59 < bVar8) {
                uVar26 = *(ulong *)(local_108 + (ulong)*(ushort *)(local_110 + (ulong)bVar8 * 2) * 8
                                   );
                auVar84._0_8_ = CONCAT44((int)(uVar26 >> 0x15),(int)uVar26) & 0x1fffff001fffff;
                auVar84._8_4_ = (uint)(uVar26 >> 0x2a);
                auVar84._12_4_ = 0;
                auVar77 = NEON_scvtf(auVar84,4);
                auVar81._0_4_ = fVar49 * auVar77._0_4_;
                auVar81._4_4_ = fVar58 * auVar77._4_4_;
                auVar81._8_4_ = fVar61 * auVar77._8_4_;
                auVar67 = auVar19;
              }
              else {
                uVar59 = *(uint *)(local_100 + (ulong)bVar8 * 4);
                auVar83._0_8_ = CONCAT44(uVar59 >> 0xb,uVar59) & 0x7ff000007ff;
                auVar83._8_4_ = uVar59 >> 0x16;
                auVar83._12_4_ = 0;
                auVar77 = NEON_scvtf(auVar83,4);
                auVar81._0_4_ = local_120 * auVar77._0_4_;
                auVar81._4_4_ = fStack_11c * auVar77._4_4_;
                auVar81._8_4_ = fStack_118 * auVar77._8_4_;
                auVar15._8_8_ = lStack_128;
                auVar15._0_8_ = local_130;
                auVar67 = auVar15._0_12_;
              }
              uVar45 = CONCAT44(auVar67._4_4_ + auVar81._4_4_,auVar67._0_4_ + auVar81._0_4_);
              fVar65 = auVar67._8_4_ + auVar81._8_4_;
              local_e0 = 2;
            }
            auVar55._12_4_ = auVar55._8_4_;
            auVar70._12_4_ = auVar70._8_4_;
            auVar78._12_4_ = auVar78._8_4_;
            auVar85._12_4_ = fVar65;
            auVar85._8_4_ = fVar65;
            auVar85._0_8_ = uVar45;
            auVar52 = NEON_fmin(auVar55,auVar70,4);
            auVar77 = NEON_fmax(auVar55,auVar70,4);
            auVar52 = NEON_fmin(auVar52,auVar78,4);
            auVar77 = NEON_fmax(auVar77,auVar78,4);
            auVar52 = NEON_fmin(auVar52,auVar85,4);
            auVar77 = NEON_fmax(auVar77,auVar85,4);
            fStack_138 = auVar52._8_4_;
            fStack_134 = auVar52._12_4_;
            local_140 = auVar52._0_4_;
            fStack_13c = auVar52._4_4_;
            uVar28 = uVar50;
            if ((int)uVar50 <= (int)uVar36) {
              iVar44 = 0;
              uVar26 = (ulong)uVar50;
              uVar59 = uVar21 & 0x3fffffff;
              uVar28 = uVar50 + 1;
              lVar39 = lVar32;
              if ((int)uVar59 <= (int)uVar50) goto LAB_00184840;
              while (uVar37 = uVar28, (int)uVar26 < (int)uVar36) {
                while( true ) {
                  iVar44 = iVar44 + 1;
                  uVar26 = (ulong)uVar37;
                  uVar59 = uVar21 & 0x3fffffff;
                  uVar28 = uVar37 + 1;
                  lVar39 = lVar32;
                  if ((int)uVar37 < (int)uVar59) break;
LAB_00184840:
                  iVar47 = (int)uVar26;
                  if (0x3ffffffe < iVar47) {
                    FUN_032bd0a8(uVar28);
                  }
                  uVar37 = (uVar21 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar37) {
                    uVar37 = 0x3fffffff;
                  }
                  uVar60 = uVar28;
                  if ((int)uVar28 <= (int)uVar37) {
                    uVar60 = uVar37;
                  }
                  FUN_032bd100(uVar60,0x20,uVar21,&local_70);
                  lVar32 = (**(code **)(*plVar34 + 0x10))
                                     (plVar34,CONCAT44(iStack_6c,local_70),&local_70);
                  if (0 < iVar47) {
                    uVar37 = uVar50 + iVar44;
                    uVar27 = (ulong)uVar37 & 3;
                    if ((ulong)uVar37 - 1 < 3) {
                      lVar23 = 0;
                    }
                    else {
                      lVar23 = 0;
                      puVar31 = (undefined8 *)(lVar32 + 0x40);
                      puVar40 = (undefined8 *)(lVar29 + 0x40);
                      do {
                        uVar45 = puVar40[-5];
                        lVar23 = lVar23 + 4;
                        puVar31[-7] = puVar40[-7];
                        puVar31[-5] = uVar45;
                        uVar45 = puVar40[-8];
                        puVar31[-6] = puVar40[-6];
                        puVar31[-8] = uVar45;
                        uVar45 = puVar40[-3];
                        puVar31[-1] = puVar40[-1];
                        puVar31[-3] = uVar45;
                        uVar45 = puVar40[-4];
                        puVar31[-2] = puVar40[-2];
                        puVar31[-4] = uVar45;
                        uVar42 = puVar40[1];
                        puVar31[3] = puVar40[3];
                        uVar45 = puVar40[2];
                        *puVar31 = *puVar40;
                        puVar31[1] = uVar42;
                        puVar31[2] = uVar45;
                        uVar45 = puVar40[4];
                        uVar42 = puVar40[5];
                        puVar2 = puVar40 + 6;
                        uVar66 = puVar40[7];
                        puVar40 = puVar40 + 0x10;
                        puVar31[6] = *puVar2;
                        puVar31[7] = uVar66;
                        puVar31[4] = uVar45;
                        puVar31[5] = uVar42;
                        puVar31 = puVar31 + 0x10;
                      } while (uVar26 - (uVar26 & 3) != lVar23);
                    }
                    if ((uVar37 & 3) != 0) {
                      puVar31 = (undefined8 *)(lVar29 + lVar23 * 0x20);
                      puVar40 = (undefined8 *)(lVar32 + lVar23 * 0x20);
                      do {
                        uVar45 = puVar31[3];
                        uVar27 = uVar27 - 1;
                        puVar40[1] = puVar31[1];
                        puVar40[3] = uVar45;
                        uVar45 = *puVar31;
                        puVar40[2] = puVar31[2];
                        puVar31 = puVar31 + 4;
                        *puVar40 = uVar45;
                        puVar40 = puVar40 + 4;
                      } while (uVar27 != 0);
                    }
                  }
                  if (-1 < (int)uVar21) {
                    (**(code **)(*plVar34 + 0x18))(plVar34,lVar39,(ulong)uVar59 << 5);
                  }
                  uVar21 = (uint)(CONCAT44(iStack_6c,local_70) >> 5);
                  if (0x7ffffffdf < CONCAT44(iStack_6c,local_70)) {
                    uVar21 = 0x3fffffff;
                  }
                  lVar29 = lVar32;
                  uVar37 = uVar28;
                  if ((int)uVar36 <= iVar47) goto LAB_001849f8;
                }
              }
            }
LAB_001849f8:
            uVar50 = local_90;
            local_150 = auVar77._0_4_;
            fStack_14c = auVar77._4_4_;
            fStack_148 = auVar77._8_4_;
            fStack_144 = auVar77._12_4_;
            pfVar4 = (float *)(lVar29 + (long)(int)uVar36 * 0x20);
            pfVar4[2] = fStack_138;
            pfVar4[3] = fStack_134;
            *pfVar4 = local_140;
            pfVar4[1] = fStack_13c;
            pfVar4[6] = fStack_148;
            pfVar4[7] = fStack_144;
            pfVar4[4] = local_150;
            pfVar4[5] = fStack_14c;
            lVar39 = CONCAT44(uStack_94,uStack_98);
            uVar26 = (ulong)local_90;
            fVar65 = (local_140 + local_150) * local_190;
            fVar73 = (fStack_13c + fStack_14c) * fStack_18c;
            fVar64 = (fStack_138 + fStack_148) * fStack_188;
            fVar75 = (fStack_134 + fStack_144) * fStack_184;
            uVar37 = local_90 + 1;
            if ((int)local_90 < (int)(local_8c & 0x3fffffff)) {
              lVar23 = lVar39;
            }
            else {
              if (0x3ffffffe < (int)local_90) {
                FUN_032bd0a8(uVar37);
              }
              uVar59 = (local_8c & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar59) {
                uVar59 = 0x3fffffff;
              }
              uVar60 = uVar37;
              if ((int)uVar37 <= (int)uVar59) {
                uVar60 = uVar59;
              }
              FUN_032bd100(uVar60,0x10,local_8c,&local_70);
              uVar59 = local_8c;
              uVar27 = (ulong)local_8c;
              lVar23 = (**(code **)(*plVar38 + 0x10))
                                 (plVar38,CONCAT44(iStack_6c,local_70),&local_70);
              if (0 < (int)uVar50) {
                uVar48 = uVar26 & 3;
                if (uVar26 - 1 < 3) {
                  lVar35 = 0;
                }
                else {
                  lVar35 = 0;
                  puVar31 = (undefined8 *)(lVar23 + 0x20);
                  puVar40 = (undefined8 *)(lVar39 + 0x20);
                  do {
                    puVar31[-3] = puVar40[-3];
                    puVar31[-4] = puVar40[-4];
                    puVar31[-1] = puVar40[-1];
                    puVar31[-2] = puVar40[-2];
                    puVar31[1] = puVar40[1];
                    *puVar31 = *puVar40;
                    puVar31[3] = puVar40[3];
                    puVar2 = puVar40 + 2;
                    lVar35 = lVar35 + 4;
                    puVar40 = puVar40 + 8;
                    puVar31[2] = *puVar2;
                    puVar31 = puVar31 + 8;
                  } while (uVar26 - uVar48 != lVar35);
                }
                if ((uVar50 & 3) != 0) {
                  puVar31 = (undefined8 *)(lVar39 + lVar35 * 0x10);
                  puVar40 = (undefined8 *)(lVar23 + lVar35 * 0x10);
                  do {
                    puVar40[1] = puVar31[1];
                    uVar48 = uVar48 - 1;
                    *puVar40 = *puVar31;
                    puVar31 = puVar31 + 2;
                    puVar40 = puVar40 + 2;
                  } while (uVar48 != 0);
                }
              }
              if (-1 < (int)uVar59) {
                (**(code **)(*plVar38 + 0x18))(plVar38,lVar39,(uVar27 & 0x3fffffff) << 4);
              }
              if (CONCAT44(iStack_6c,local_70) < 0x3fffffff0) {
                local_8c = (uint)(CONCAT44(iStack_6c,local_70) >> 4);
              }
              else {
                local_8c = 0x3fffffff;
              }
              uStack_98 = (undefined4)lVar23;
              uStack_94 = (undefined4)((ulong)lVar23 >> 0x20);
            }
            uVar50 = (uint)((int)fVar65 >> 0x1f) >> 1;
            uVar59 = (uint)((int)fVar73 >> 0x1f) >> 1;
            uVar60 = (uint)((int)fVar64 >> 0x1f) >> 1;
            uVar62 = (uint)((int)fVar75 >> 0x1f) >> 1;
            puVar31 = (undefined8 *)(lVar23 + (long)(int)local_90 * 0x10);
            bVar7 = (byte)((uint)fVar65 >> 0x18);
            bVar8 = (byte)((uint)fVar73 >> 0x18);
            auVar56._0_8_ =
                 CONCAT17((byte)((char)bVar8 >> 7) >> 1 ^ bVar8,
                          CONCAT16((byte)(uVar59 >> 0x10) ^ (byte)((uint)fVar73 >> 0x10),
                                   CONCAT15((byte)(uVar59 >> 8) ^ (byte)((uint)fVar73 >> 8),
                                            CONCAT14((byte)uVar59 ^ SUB41(fVar73,0),
                                                     CONCAT13((byte)((char)bVar7 >> 7) >> 1 ^ bVar7,
                                                              CONCAT12((byte)(uVar50 >> 0x10) ^
                                                                       (byte)((uint)fVar65 >> 0x10),
                                                                       CONCAT11((byte)(uVar50 >> 8)
                                                                                ^ (byte)((uint)
                                                  fVar65 >> 8),(byte)uVar50 ^ SUB41(fVar65,0))))))))
            ;
            auVar56[8] = (byte)uVar60 ^ SUB41(fVar64,0);
            auVar56[9] = (byte)(uVar60 >> 8) ^ (byte)((uint)fVar64 >> 8);
            auVar56[10] = (byte)(uVar60 >> 0x10) ^ (byte)((uint)fVar64 >> 0x10);
            bVar7 = (byte)((uint)fVar64 >> 0x18);
            auVar56[0xb] = (byte)((char)bVar7 >> 7) >> 1 ^ bVar7;
            auVar56[0xc] = (byte)uVar62 ^ SUB41(fVar75,0);
            auVar56[0xd] = (byte)(uVar62 >> 8) ^ (byte)((uint)fVar75 >> 8);
            bVar7 = (byte)((uint)fVar75 >> 0x18);
            auVar56[0xe] = (byte)((uint3)((uint3)((int)fVar75 >> 0x1f) >> 1) >> 8) ^
                           (byte)((uint)fVar75 >> 0x10);
            auVar56[0xf] = (byte)((char)bVar7 >> 7) >> 1 ^ bVar7;
            puVar31[1] = auVar56._8_8_;
            *puVar31 = auVar56._0_8_;
            *(uint *)((long)puVar31 + 0xc) = uVar36;
            if (local_e0 == 2) {
              uVar36 = uVar36 + 1;
            }
            uVar27 = (ulong)(uVar36 >> 8);
            uVar59 = uVar36 >> 1 & 0x7f;
            uVar50 = uVar28;
            local_90 = uVar37;
          }
          iVar44 = *(int *)((long)plVar22 + uVar27 * 0x60 + *plVar22 + 0x50) + uVar59;
          lVar39 = (long)iVar44 * 4 + *plVar3;
          cVar9 = *(char *)((long)plVar3 + lVar39 + 3);
          if ((cVar9 == *(char *)((long)plVar3 + lVar39 + 1)) ||
             ((uint)(*(char *)((long)plVar3 + (long)iVar44 * 4 + *plVar3 + 2) != cVar9) <=
              (uVar36 & 1))) {
            uVar59 = uVar59 + 1;
            if (uVar59 < *(byte *)((long)plVar22 + uVar27 * 0x60 + *plVar22 + 0x59)) {
              uVar36 = 0;
            }
            else {
              uVar36 = (int)uVar27 + 1;
              uVar27 = (ulong)uVar36;
              if (*(int *)(param_1 + 0x68) <= (int)uVar36) break;
              uVar36 = 0;
              uVar59 = 0;
            }
          }
          else {
            uVar36 = (uVar36 & 1) + 1;
          }
          uVar36 = uVar36 | uVar59 << 1 | (int)uVar27 << 8;
        } while (uVar36 != 0xffffffff);
      }
      FUN_03350fc0(plVar46,&local_b8,lVar29);
      if ((-1 < (int)uVar21) && (lVar29 != 0)) {
        FUN_032cf244(*(undefined8 *)PTR_PTR_04372400,lVar32,0x20,uVar21 & 0x3fffffff);
      }
      lVar32 = local_80;
      local_b8 = PTR_DAT_043723f8 + 0x10;
      uVar45 = *(undefined8 *)PTR_PTR_04372408;
      uVar21 = local_80._4_4_;
      local_80 = (ulong)local_80._4_4_ << 0x20;
      if ((-1 < lVar32) && (local_88 != 0)) {
        FUN_032cf244(uVar45,local_88,0x20,uVar21 & 0x3fffffff);
      }
      local_80 = CONCAT44(0x80000000,(undefined4)local_80);
      local_88 = 0;
      local_90 = 0;
      if ((-1 < (int)local_8c) && (CONCAT44(uStack_94,uStack_98) != 0)) {
        FUN_032cf244(uVar45,CONCAT44(uStack_94,uStack_98),0x10,local_8c & 0x3fffffff);
      }
      return;
    }
  }
  return;
}


