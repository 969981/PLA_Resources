/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028fa4d0; name: FUN_028fa4d0
 */


/* WARNING: Removing unreachable block (ram,0x028fab2c) */
/* WARNING: Removing unreachable block (ram,0x028fab44) */
/* WARNING: Removing unreachable block (ram,0x028fac1c) */
/* WARNING: Removing unreachable block (ram,0x028fab54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028fa4d0(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  long *plVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  byte bVar7;
  short sVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [12];
  undefined1 auVar45 [12];
  undefined1 auVar46 [12];
  undefined1 auVar47 [12];
  undefined1 auVar48 [12];
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  short sVar58;
  uint uVar59;
  int iVar60;
  long *plVar61;
  undefined8 *puVar62;
  undefined8 *puVar63;
  ulong uVar64;
  long lVar65;
  long lVar66;
  undefined8 *puVar67;
  long lVar68;
  long *plVar69;
  long lVar70;
  ulong uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  float fStack_128;
  float fStack_124;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  float fStack_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  if (((*PTR_DAT_0437a570 & 1) == 0) &&
     (iVar60 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar60 != 0)) {
    FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a570);
  }
  uVar57 = DAT_0388a880;
  uVar56 = DAT_0388a790;
  uVar55 = DAT_0388a6c8;
  uVar54 = DAT_0388a680;
  uVar53 = DAT_0388a648;
  uVar52 = DAT_0388a580;
  uVar51 = _UNK_0388a138;
  uVar50 = _DAT_0388a130;
  uVar49 = _UNK_03889ad8;
  uVar19 = _DAT_03889ad0;
  plVar3 = (long *)PTR_DAT_0437a578;
  if (*(long *)(param_3 + 200) != 0) {
    plVar3 = (long *)(*(long *)(param_3 + 200) + 0x88);
  }
  lVar65 = *(long *)(param_2 + 0xb0);
  lVar9 = *(long *)(lVar65 + 0x18) - *(long *)(lVar65 + 0x10);
  if (param_5 == 0) {
    if (lVar9 != 0) {
      puVar4 = *(uint **)(param_1 + 0x88);
      puVar5 = *(uint **)(param_1 + 0x90);
      if (puVar4 != puVar5) {
        uVar6 = *puVar4;
        do {
          if ((-1 < (int)uVar6) &&
             ((*(ulong *)(*(long *)(param_4 + 0x78) + ((ulong)(uVar6 >> 3) & 0x1ffffff8)) &
              1L << ((ulong)uVar6 & 0x3f)) != 0)) {
            lVar70 = *plVar3;
            if (*(char *)(lVar70 + 0x450) != '\0') {
              plVar69 = *(long **)(lVar70 + 0x58);
              plVar61 = *(long **)(lVar70 + 0x60);
              if (plVar69 != plVar61) {
                do {
                  sVar8 = *(short *)((long)plVar69 + 10);
                  sVar58 = (**(code **)(*(long *)(*(long *)(*plVar69 + 0x58) + 0x58) + 0x10))();
                  if ((int)(short)uVar6 < (int)sVar8 + (int)sVar58) {
                    plVar61 = (long *)(*(long *)(*plVar69 + 0x58) + 0x58);
                    uVar59 = (**(code **)(*plVar61 + 0x58))
                                       (plVar61,uVar6 - *(ushort *)((long)plVar69 + 10));
                    if (*(uint *)(lVar70 + 0x454) < uVar59) goto LAB_028faa04;
                    break;
                  }
                  plVar69 = plVar69 + 2;
                } while (plVar61 != plVar69);
              }
            }
            if ((ulong)(long)(int)uVar6 < (ulong)(lVar9 >> 1)) {
              uVar71 = (ulong)*(short *)(*(long *)(lVar65 + 0x10) + (long)(int)uVar6 * 2);
              if ((long)uVar71 < 0) {
                puVar62 = (undefined8 *)FUN_02b68f84(*plVar3,uVar6);
                lVar70 = *plVar3;
              }
              else {
                lVar70 = *(long *)(lVar65 + 0x80);
                uVar71 = uVar71 & 0xffffffff;
                if ((~*(byte *)(lVar70 + uVar71) & 7) == 0) {
                  puVar62 = (undefined8 *)(*(long *)(lVar65 + 0x48) + uVar71 * 0x30);
                  lVar70 = *plVar3;
                }
                else {
                  puVar62 = (undefined8 *)FUN_02b68f84(*plVar3,uVar6);
                  uStack_a8 = puVar62[5];
                  fStack_b8 = (float)puVar62[3];
                  fStack_b4 = (float)((ulong)puVar62[3] >> 0x20);
                  uStack_c8 = puVar62[1];
                  local_d0 = *puVar62;
                  local_c0 = puVar62[2];
                  local_b0 = puVar62[4];
                  lVar68 = *(long *)(lVar65 + 0x48);
                  bVar7 = *(byte *)(lVar70 + uVar71);
                  if ((bVar7 & 1) != 0) {
                    puVar62 = (undefined8 *)(lVar68 + uVar71 * 0x30);
                    uStack_c8 = puVar62[1];
                    local_d0 = *puVar62;
                    bVar7 = *(byte *)(lVar70 + uVar71);
                  }
                  if ((bVar7 >> 1 & 1) != 0) {
                    lVar66 = lVar68 + uVar71 * 0x30;
                    uVar19 = *(undefined8 *)(lVar66 + 0x18);
                    local_c0 = *(undefined8 *)(lVar66 + 0x10);
                    fStack_b8 = (float)uVar19;
                    fStack_b4 = (float)((ulong)uVar19 >> 0x20);
                    bVar7 = *(byte *)(lVar70 + uVar71);
                  }
                  if ((bVar7 >> 2 & 1) != 0) {
                    lVar68 = lVar68 + uVar71 * 0x30;
                    uStack_a8 = *(undefined8 *)(lVar68 + 0x28);
                    local_b0 = *(undefined8 *)(lVar68 + 0x20);
                  }
                  lVar70 = *plVar3;
                  puVar62 = &local_d0;
                }
              }
              FUN_02b6ae80(lVar70,(ulong)uVar6,puVar62);
            }
          }
LAB_028faa04:
          puVar4 = puVar4 + 1;
          if (puVar4 == puVar5) {
            return;
          }
          uVar6 = *puVar4;
        } while( true );
      }
    }
  }
  else if (lVar9 != 0) {
    puVar4 = *(uint **)(param_1 + 0x88);
    puVar5 = *(uint **)(param_1 + 0x90);
    if (puVar4 != puVar5) {
      uVar6 = *puVar4;
      do {
        if ((-1 < (int)uVar6) &&
           (uVar71 = (ulong)uVar6,
           (*(ulong *)(*(long *)(param_4 + 0x78) + ((ulong)(uVar6 >> 3) & 0x1ffffff8)) &
           1L << (uVar71 & 0x3f)) != 0)) {
          lVar70 = *plVar3;
          if (*(char *)(lVar70 + 0x450) != '\0') {
            plVar69 = *(long **)(lVar70 + 0x58);
            plVar61 = *(long **)(lVar70 + 0x60);
            if (plVar69 != plVar61) {
              do {
                sVar8 = *(short *)((long)plVar69 + 10);
                sVar58 = (**(code **)(*(long *)(*(long *)(*plVar69 + 0x58) + 0x58) + 0x10))();
                if ((int)(short)uVar6 < (int)sVar8 + (int)sVar58) {
                  plVar61 = (long *)(*(long *)(*plVar69 + 0x58) + 0x58);
                  uVar59 = (**(code **)(*plVar61 + 0x58))
                                     (plVar61,uVar6 - *(ushort *)((long)plVar69 + 10));
                  if (*(uint *)(lVar70 + 0x454) < uVar59) goto LAB_028fa694;
                  break;
                }
                plVar69 = plVar69 + 2;
              } while (plVar61 != plVar69);
            }
          }
          if ((ulong)(long)(int)uVar6 < (ulong)(lVar9 >> 1)) {
            uVar64 = (ulong)*(short *)(*(long *)(lVar65 + 0x10) + (long)(int)uVar6 * 2);
            fVar79 = (float)uVar19;
            fVar81 = (float)((ulong)uVar19 >> 0x20);
            fVar82 = (float)uVar49;
            fVar83 = (float)((ulong)uVar49 >> 0x20);
            if ((long)uVar64 < 0) {
              if (param_5 != 1) {
                puVar62 = (undefined8 *)FUN_02b68f84(*plVar3,uVar6);
                lVar70 = *plVar3;
                puVar63 = (undefined8 *)FUN_02b690d4(lVar70,uVar6);
                pauVar1 = (undefined1 (*) [12])(puVar63 + 2);
                fStack_b4 = (float)((ulong)puVar63[3] >> 0x20);
                pauVar2 = (undefined1 (*) [12])(puVar62 + 2);
                fVar85 = (float)((ulong)puVar62[3] >> 0x20);
                uVar17 = *(undefined8 *)*pauVar2;
                fVar84 = (float)((ulong)uVar17 >> 0x20);
                auVar30._12_4_ = fVar85;
                auVar30._0_12_ = *pauVar2;
                uVar87 = a64_TBL(ZEXT816(0),auVar30,uVar52);
                auVar31._12_4_ = fVar85;
                auVar31._0_12_ = *pauVar2;
                uVar91 = a64_TBL(ZEXT816(0),auVar31,uVar55);
                auVar32._12_4_ = fVar85;
                auVar32._0_12_ = *pauVar2;
                uVar94 = a64_TBL(ZEXT816(0),auVar32,uVar56);
                uStack_c8 = CONCAT44((float)((ulong)puVar63[1] >> 0x20) +
                                     (float)((ulong)puVar62[1] >> 0x20),
                                     (float)puVar63[1] + (float)puVar62[1]);
                local_d0 = CONCAT44((float)((ulong)*puVar63 >> 0x20) +
                                    (float)((ulong)*puVar62 >> 0x20),
                                    (float)*puVar63 + (float)*puVar62);
                fVar72 = (float)*(undefined8 *)*pauVar1;
                fVar74 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
                auVar13._12_4_ = fStack_b4;
                auVar13._0_12_ = *pauVar1;
                uVar23 = a64_TBL(ZEXT816(0),auVar13,uVar52);
                fVar80 = (float)((ulong)uVar23 >> 0x20);
                auVar14._12_4_ = fStack_b4;
                auVar14._0_12_ = *pauVar1;
                uVar18 = a64_TBL(ZEXT816(0),auVar14,uVar54);
                fVar86 = (float)((ulong)uVar18 >> 0x20);
                auVar33._12_4_ = fVar85;
                auVar33._0_12_ = *pauVar2;
                uVar92 = a64_TBL(ZEXT816(0),auVar33,uVar57);
                auVar34._12_4_ = fVar85;
                auVar34._0_12_ = *pauVar2;
                uVar88 = a64_TBL(ZEXT816(0),auVar34,uVar54);
                auVar35._8_4_ = (float)uVar17;
                auVar35._0_8_ = uVar17;
                auVar35._12_4_ = fVar84;
                uVar36 = a64_TBL(ZEXT816(0),auVar35,uVar53);
                auVar15._12_4_ = fStack_b4;
                auVar15._0_12_ = *pauVar1;
                uVar16 = a64_TBL(ZEXT816(0),auVar15,uVar57);
                fVar75 = (float)((ulong)uVar16 >> 0x20);
                fVar77 = (float)puVar63[5];
                fVar78 = (float)((ulong)puVar63[5] >> 0x20);
                fVar73 = (float)puVar63[4];
                fVar76 = (float)((ulong)puVar63[4] >> 0x20);
                fStack_b8 = ((float)puVar62[3] * (float)uVar23 +
                             fVar82 * (float)uVar18 * (float)uVar91 +
                            fVar82 * fVar72 * (float)uVar36) - (float)uVar16 * (float)uVar94;
                fStack_b4 = (fVar85 * fVar80 + fVar83 * fVar86 * (float)((ulong)uVar91 >> 0x20) +
                            fVar83 * fVar74 * (float)((ulong)uVar36 >> 0x20)) -
                            fVar75 * (float)((ulong)uVar94 >> 0x20);
                local_c0 = CONCAT44((fVar84 * fVar80 +
                                     fVar81 * fVar74 * (float)((ulong)uVar87 >> 0x20) +
                                    fVar81 * fVar75 * (float)((ulong)uVar88 >> 0x20)) -
                                    fVar86 * (float)((ulong)uVar92 >> 0x20),
                                    ((float)uVar17 * (float)uVar23 + fVar79 * fVar72 * (float)uVar87
                                    + fVar79 * (float)uVar16 * (float)uVar88) -
                                    (float)uVar18 * (float)uVar92);
                fVar82 = (float)puVar62[5];
                fVar83 = (float)((ulong)puVar62[5] >> 0x20);
                fVar79 = (float)puVar62[4];
                fVar81 = (float)((ulong)puVar62[4] >> 0x20);
                goto LAB_028fa67c;
              }
            }
            else {
              lVar70 = *(long *)(lVar65 + 0x80);
              uVar64 = uVar64 & 0xffffffff;
              if ((~*(byte *)(lVar70 + uVar64) & 7) == 0) {
                lVar70 = *plVar3;
                lVar68 = *(long *)(lVar65 + 0x48);
                puVar62 = (undefined8 *)FUN_02b690d4(lVar70,uVar71);
                pauVar2 = (undefined1 (*) [12])(puVar62 + 2);
                fStack_b4 = (float)((ulong)puVar62[3] >> 0x20);
                puVar63 = (undefined8 *)(lVar68 + uVar64 * 0x30);
                uStack_c8 = CONCAT44((float)((ulong)puVar62[1] >> 0x20) +
                                     (float)((ulong)puVar63[1] >> 0x20),
                                     (float)puVar62[1] + (float)puVar63[1]);
                local_d0 = CONCAT44((float)((ulong)*puVar62 >> 0x20) +
                                    (float)((ulong)*puVar63 >> 0x20),
                                    (float)*puVar62 + (float)*puVar63);
                fVar72 = (float)*(undefined8 *)*pauVar2;
                fVar74 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
                pauVar1 = (undefined1 (*) [12])(puVar63 + 2);
                fVar85 = (float)((ulong)puVar63[3] >> 0x20);
                uVar17 = *(undefined8 *)*pauVar1;
                fVar84 = (float)((ulong)uVar17 >> 0x20);
                auVar10._12_4_ = fStack_b4;
                auVar10._0_12_ = *pauVar2;
                uVar23 = a64_TBL(ZEXT816(0),auVar10,uVar52);
                fVar80 = (float)((ulong)uVar23 >> 0x20);
                auVar11._12_4_ = fStack_b4;
                auVar11._0_12_ = *pauVar2;
                uVar18 = a64_TBL(ZEXT816(0),auVar11,uVar54);
                fVar86 = (float)((ulong)uVar18 >> 0x20);
                auVar24._12_4_ = fVar85;
                auVar24._0_12_ = *pauVar1;
                uVar87 = a64_TBL(ZEXT816(0),auVar24,uVar52);
                auVar25._12_4_ = fVar85;
                auVar25._0_12_ = *pauVar1;
                uVar91 = a64_TBL(ZEXT816(0),auVar25,uVar55);
                auVar26._12_4_ = fVar85;
                auVar26._0_12_ = *pauVar1;
                uVar92 = a64_TBL(ZEXT816(0),auVar26,uVar57);
                auVar27._12_4_ = fVar85;
                auVar27._0_12_ = *pauVar1;
                uVar88 = a64_TBL(ZEXT816(0),auVar27,uVar54);
                auVar28._12_4_ = fVar85;
                auVar28._0_12_ = *pauVar1;
                uVar94 = a64_TBL(ZEXT816(0),auVar28,uVar56);
                auVar29._8_4_ = (float)uVar17;
                auVar29._0_8_ = uVar17;
                auVar29._12_4_ = fVar84;
                uVar36 = a64_TBL(ZEXT816(0),auVar29,uVar53);
                auVar12._12_4_ = fStack_b4;
                auVar12._0_12_ = *pauVar2;
                uVar16 = a64_TBL(ZEXT816(0),auVar12,uVar57);
                fVar75 = (float)((ulong)uVar16 >> 0x20);
                fVar77 = (float)puVar62[5];
                fVar78 = (float)((ulong)puVar62[5] >> 0x20);
                fVar73 = (float)puVar62[4];
                fVar76 = (float)((ulong)puVar62[4] >> 0x20);
                fStack_b8 = ((float)puVar63[3] * (float)uVar23 +
                             fVar82 * (float)uVar18 * (float)uVar91 +
                            fVar82 * fVar72 * (float)uVar36) - (float)uVar16 * (float)uVar94;
                fStack_b4 = (fVar85 * fVar80 + fVar83 * fVar86 * (float)((ulong)uVar91 >> 0x20) +
                            fVar83 * fVar74 * (float)((ulong)uVar36 >> 0x20)) -
                            fVar75 * (float)((ulong)uVar94 >> 0x20);
                local_c0 = CONCAT44((fVar84 * fVar80 +
                                     fVar81 * fVar74 * (float)((ulong)uVar87 >> 0x20) +
                                    fVar81 * fVar75 * (float)((ulong)uVar88 >> 0x20)) -
                                    fVar86 * (float)((ulong)uVar92 >> 0x20),
                                    ((float)uVar17 * (float)uVar23 + fVar79 * fVar72 * (float)uVar87
                                    + fVar79 * (float)uVar16 * (float)uVar88) -
                                    (float)uVar18 * (float)uVar92);
                fVar82 = (float)puVar63[5];
                fVar83 = (float)((ulong)puVar63[5] >> 0x20);
                fVar79 = (float)puVar63[4];
                fVar81 = (float)((ulong)puVar63[4] >> 0x20);
LAB_028fa67c:
                fVar73 = fVar73 + fVar79;
                fVar76 = fVar76 + fVar81;
                fVar77 = fVar77 + fVar82;
                fVar78 = fVar78 + fVar83;
              }
              else {
                if (param_5 == 1) {
                  puVar62 = (undefined8 *)PTR_DAT_04387fd8;
                  if ((*PTR_DAT_04387fd0 & 1) == 0) {
                    iVar60 = __cxa_guard_acquire(PTR_DAT_04387fd0);
                    puVar62 = (undefined8 *)PTR_DAT_04387fd8;
                    if (iVar60 != 0) {
                      puVar63 = (undefined8 *)(PTR_DAT_04387fd8 + 0x20);
                      *(undefined8 *)(PTR_DAT_04387fd8 + 0x28) = 0;
                      *puVar63 = 0;
                      *(undefined8 *)((long)puVar62 + 8) = 0;
                      *puVar62 = 0;
                      *(undefined8 *)((long)puVar62 + 0x18) = uVar51;
                      *(undefined8 *)((long)puVar62 + 0x10) = uVar50;
                      __cxa_guard_release(PTR_DAT_04387fd0);
                    }
                  }
                }
                else {
                  puVar62 = (undefined8 *)FUN_02b68f84(*plVar3,uVar6);
                }
                puVar67 = (undefined8 *)(*(long *)(lVar65 + 0x48) + uVar64 * 0x30);
                bVar7 = *(byte *)(lVar70 + uVar64);
                puVar63 = puVar62;
                if ((bVar7 & 1) != 0) {
                  puVar63 = puVar67;
                }
                uVar23 = puVar63[1];
                uVar16 = *puVar63;
                puVar63 = puVar62;
                if ((bVar7 & 2) != 0) {
                  puVar63 = puVar67;
                }
                pauVar1 = (undefined1 (*) [12])(puVar63 + 2);
                uVar17 = *(undefined8 *)*pauVar1;
                auVar48 = *pauVar1;
                auVar47 = *pauVar1;
                auVar46 = *pauVar1;
                auVar45 = *pauVar1;
                auVar44 = *pauVar1;
                if ((bVar7 & 4) != 0) {
                  puVar62 = puVar67;
                }
                fStack_128 = (float)puVar63[3];
                fStack_124 = (float)((ulong)puVar63[3] >> 0x20);
                uVar87 = puVar62[5];
                uVar36 = puVar62[4];
                lVar70 = *plVar3;
                puVar62 = (undefined8 *)FUN_02b690d4(lVar70,uVar6);
                fVar77 = (float)((ulong)uVar17 >> 0x20);
                pauVar1 = (undefined1 (*) [12])(puVar62 + 2);
                auVar39._12_4_ = fStack_124;
                auVar39._0_12_ = auVar44;
                uVar91 = a64_TBL(ZEXT816(0),auVar39,uVar52);
                auVar40._12_4_ = fStack_124;
                auVar40._0_12_ = auVar45;
                uVar89 = a64_TBL(ZEXT816(0),auVar40,uVar55);
                auVar37._8_4_ = (float)uVar17;
                auVar37._0_8_ = uVar17;
                auVar37._12_4_ = fVar77;
                uVar94 = a64_TBL(ZEXT816(0),auVar37,uVar53);
                fStack_b4 = (float)((ulong)puVar62[3] >> 0x20);
                fVar73 = (float)*(undefined8 *)*pauVar1;
                fVar72 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
                auVar20._12_4_ = fStack_b4;
                auVar20._0_12_ = *pauVar1;
                uVar93 = a64_TBL(ZEXT816(0),auVar20,uVar54);
                fVar75 = (float)((ulong)uVar93 >> 0x20);
                auVar21._12_4_ = fStack_b4;
                auVar21._0_12_ = *pauVar1;
                uVar90 = a64_TBL(ZEXT816(0),auVar21,uVar57);
                auVar22._12_4_ = fStack_b4;
                auVar22._0_12_ = *pauVar1;
                uVar88 = a64_TBL(ZEXT816(0),auVar22,uVar52);
                fVar76 = (float)((ulong)uVar88 >> 0x20);
                auVar41._12_4_ = fStack_124;
                auVar41._0_12_ = auVar46;
                uVar18 = a64_TBL(ZEXT816(0),auVar41,uVar54);
                fVar74 = (float)((ulong)uVar90 >> 0x20);
                auVar42._12_4_ = fStack_124;
                auVar42._0_12_ = auVar47;
                uVar92 = a64_TBL(ZEXT816(0),auVar42,uVar57);
                auVar43._12_4_ = fStack_124;
                auVar43._0_12_ = auVar48;
                uVar38 = a64_TBL(ZEXT816(0),auVar43,uVar56);
                fStack_b8 = (fStack_128 * (float)uVar88 + fVar82 * (float)uVar93 * (float)uVar89 +
                            fVar82 * fVar73 * (float)uVar94) - (float)uVar90 * (float)uVar38;
                fStack_b4 = (fStack_124 * fVar76 + fVar83 * fVar75 * (float)((ulong)uVar89 >> 0x20)
                            + fVar83 * fVar72 * (float)((ulong)uVar94 >> 0x20)) -
                            fVar74 * (float)((ulong)uVar38 >> 0x20);
                uStack_c8 = CONCAT44((float)((ulong)uVar23 >> 0x20) +
                                     (float)((ulong)puVar62[1] >> 0x20),
                                     (float)uVar23 + (float)puVar62[1]);
                local_d0 = CONCAT44((float)((ulong)uVar16 >> 0x20) +
                                    (float)((ulong)*puVar62 >> 0x20),(float)uVar16 + (float)*puVar62
                                   );
                local_c0 = CONCAT44((fVar77 * fVar76 +
                                     fVar81 * fVar72 * (float)((ulong)uVar91 >> 0x20) +
                                    fVar81 * fVar74 * (float)((ulong)uVar18 >> 0x20)) -
                                    fVar75 * (float)((ulong)uVar92 >> 0x20),
                                    ((float)uVar17 * (float)uVar88 + fVar79 * fVar73 * (float)uVar91
                                    + fVar79 * (float)uVar90 * (float)uVar18) -
                                    (float)uVar93 * (float)uVar92);
                fVar73 = (float)uVar36 + (float)puVar62[4];
                fVar76 = (float)((ulong)uVar36 >> 0x20) + (float)((ulong)puVar62[4] >> 0x20);
                fVar77 = (float)uVar87 + (float)puVar62[5];
                fVar78 = (float)((ulong)uVar87 >> 0x20) + (float)((ulong)puVar62[5] >> 0x20);
              }
              uStack_a8 = CONCAT44(fVar78,fVar77);
              local_b0 = CONCAT44(fVar76,fVar73);
              FUN_02b6ae80(lVar70,uVar71,&local_d0);
            }
          }
        }
LAB_028fa694:
        puVar4 = puVar4 + 1;
        if (puVar4 == puVar5) {
          return;
        }
        uVar6 = *puVar4;
      } while( true );
    }
  }
  return;
}


