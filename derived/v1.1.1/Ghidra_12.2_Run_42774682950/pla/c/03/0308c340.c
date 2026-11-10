/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0308c340; name: FUN_0308c340
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0308c340(long param_1,undefined8 param_2,long param_3,long *param_4,long *param_5,
                 long param_6,long param_7,long param_8,long param_9,long param_10,byte param_11)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined8 uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  long *plVar20;
  short sVar21;
  bool bVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  long *plVar28;
  int *piVar29;
  undefined8 *puVar30;
  long lVar31;
  uint uVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  long lVar35;
  undefined8 uVar36;
  float *pfVar37;
  undefined8 *puVar38;
  int *piVar39;
  float *pfVar40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  int *piVar44;
  uint uVar45;
  uint uVar46;
  short sVar47;
  ulong uVar48;
  undefined8 *puVar49;
  float *pfVar50;
  undefined1 uVar51;
  byte bVar52;
  undefined1 uVar53;
  byte bVar54;
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  byte bVar58;
  float fVar59;
  float fVar60;
  int iVar61;
  float fVar62;
  undefined1 auVar63 [12];
  int iVar66;
  undefined1 auVar64 [16];
  int iVar67;
  int iVar68;
  undefined1 auVar65 [16];
  float fVar69;
  float fVar70;
  undefined8 uVar71;
  float fVar73;
  undefined8 uVar72;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  long local_1c0;
  float local_19c;
  ulong local_148;
  undefined4 local_108 [4];
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  uint local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  int *piStack_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined8 local_80;
  
  bVar4 = *(byte *)(param_3 + 0xe);
  puVar49 = *(undefined8 **)(param_7 + 8);
  pfVar50 = *(float **)(param_6 + 8);
  plVar1 = param_4;
  plVar20 = param_5;
  if ((param_11 & 1) == 0) {
    plVar1 = param_5;
    plVar20 = param_4;
    bVar4 = bVar4 >> 3 & 0x1c | bVar4 & 3 | (bVar4 >> 2) << 5;
  }
  if (pfVar50 == (float *)0x0) {
    if (puVar49 != (undefined8 *)0x0) {
      lVar35 = *plVar1;
      lVar41 = *plVar20;
      lVar31 = plVar1[3];
      lVar43 = plVar20[3];
      do {
        while( true ) {
          local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,(int)lVar31);
          local_108[0] = (int)lVar43;
          FUN_030491a4(puVar49,param_1,param_2,lVar35 + 0x50,lVar41 + 0x50,&local_d0,local_108);
          iVar9 = *(int *)(param_7 + 0x14) + -1;
          bVar4 = *(byte *)((long)puVar49 + 9);
          *(int *)(param_7 + 0x14) = iVar9;
          if (iVar9 < 1) break;
          puVar49 = (undefined8 *)(*(long *)(param_7 + 8) + (ulong)bVar4 * 0x10);
          *(undefined8 **)(param_7 + 8) = puVar49;
          if (puVar49 == (undefined8 *)0x0) {
            return;
          }
        }
        puVar49 = (undefined8 *)FUN_032bfda0(param_7);
      } while (puVar49 != (undefined8 *)0x0);
    }
  }
  else {
    if (param_10 != 0) {
      plVar28 = *(long **)(*(long *)(param_1 + 8) + 0x658);
      (**(code **)(*plVar28 + 0x48))(plVar28,param_10,plVar1[1],plVar20[1]);
    }
    sVar5 = *(short *)(pfVar50 + 0x10);
    local_19c = pfVar50[0x11];
    local_1c0 = *(long *)(pfVar50 + 0x12);
    lVar31 = *param_5;
    local_88 = *(undefined2 *)(lVar31 + 0x8a);
    uStack_84 = *(undefined4 *)(lVar31 + 0x8c);
    local_80 = *(undefined8 *)(lVar31 + 0x98);
    plVar28 = *(long **)(param_1 + 0x48);
    if ((*(byte *)(plVar28 + 3) & 1) != 0) {
      (**(code **)(*plVar28 + 0x38))(plVar28,6,lVar31,*(undefined8 *)(lVar31 + 0x78),&local_88);
    }
    local_98 = CONCAT44(uStack_84,CONCAT22(uStack_86,local_88));
    uStack_90 = local_80;
    puVar33 = *(undefined8 **)(param_9 + 0x60);
    if (*(char *)((long)puVar33 + 0xe) != '\0') {
      iVar9 = *(int *)(*(long *)(param_9 + 0x48) + 0x18);
      if (iVar9 < 0xed1) {
        puVar34 = (undefined8 *)(*(long *)(*(long *)(param_9 + 0x48) + 0x10) + (long)iVar9 + 0x20);
      }
      else {
        puVar34 = (undefined8 *)FUN_032bf82c();
        puVar33 = *(undefined8 **)(param_9 + 0x60);
      }
      uVar71 = puVar33[1];
      *puVar34 = *puVar33;
      puVar34[1] = uVar71;
      *(undefined8 **)(param_9 + 0x60) = puVar34;
      *(undefined4 *)(puVar34 + 1) = 0;
      *(undefined1 *)(*(long *)(param_9 + 0x60) + 0xe) = 0;
      lVar31 = *(long *)(param_9 + 0x48);
      *(int *)(lVar31 + 0x18) = *(int *)(lVar31 + 0x18) + 0x10;
      *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
    }
    iVar9 = *(int *)(*(long *)(param_9 + 0x48) + 0x18);
    if (iVar9 < 0xde1) {
      piVar29 = (int *)(*(long *)(*(long *)(param_9 + 0x48) + 0x10) + (long)iVar9 + 0x20);
    }
    else {
      piVar29 = (int *)FUN_032bf82c();
    }
    piVar29[0x28] = -1;
    piVar29[0x29] = -1;
    puVar34 = (undefined8 *)((ulong)&local_98 | 4);
    pfVar40 = (float *)((ulong)&local_d0 | 4);
    *(undefined1 *)(piVar29 + 0x25) = 0;
    *(undefined1 *)((long)piVar29 + 0x96) = 0;
    uVar27 = _UNK_0388970c;
    uVar26 = _UNK_03889708;
    uVar25 = _UNK_03889704;
    uVar24 = _DAT_03889700;
    sVar21 = -1;
    bVar17 = true;
    uVar46 = 0xffffffff;
    uVar75 = 0;
    uVar71 = 0;
    puVar33 = (undefined8 *)0x0;
    uVar48 = 0;
    local_148 = 0xffffffff;
    bVar22 = false;
    iVar9 = 0;
    bVar19 = false;
    bVar18 = false;
    bVar23 = false;
    sVar47 = -1;
    uVar10 = _DAT_03889700;
    uVar11 = _DAT_03889700;
    uVar12 = _DAT_03889700;
    if (pfVar50 != (float *)0x0) goto LAB_0308c674;
LAB_0308cad0:
    if ((int)uVar48 != 0) {
LAB_0308cad4:
      fVar62 = (float)uVar71;
      fVar69 = (float)((ulong)uVar71 >> 0x20);
      fVar59 = (float)uVar75;
      fVar15 = fVar59 * fVar59 + fVar62 * fVar62 + fVar69 * fVar69;
      fVar60 = fVar59 * fVar59 + fVar62 * fVar62 + fVar69 * fVar69;
      uVar51 = SUB41(fVar60,0);
      uVar53 = (undefined1)((uint)fVar60 >> 8);
      uVar55 = (undefined1)((uint)fVar60 >> 0x10);
      uVar57 = (undefined1)((uint)fVar60 >> 0x18);
      uVar71 = NEON_frsqrte(CONCAT17(uVar57,CONCAT16(uVar55,CONCAT15(uVar53,CONCAT14(uVar51,fVar15))
                                                    )),4);
      fVar70 = (float)uVar71;
      fVar73 = (float)((ulong)uVar71 >> 0x20);
      uVar71 = NEON_frsqrts(CONCAT17(uVar57,CONCAT16(uVar55,CONCAT15(uVar53,CONCAT14(uVar51,fVar15))
                                                    )),CONCAT44(fVar73 * fVar73,fVar70 * fVar70),4);
      fVar70 = fVar70 * (float)uVar71;
      fVar73 = fVar73 * (float)((ulong)uVar71 >> 0x20);
      iVar61 = -(uint)(fVar15 <= 0.0);
      iVar66 = -(uint)(fVar60 <= 0.0);
      uVar71 = NEON_frsqrts(CONCAT17(uVar57,CONCAT16(uVar55,CONCAT15(uVar53,CONCAT14(uVar51,fVar15))
                                                    )),CONCAT44(fVar73 * fVar73,fVar70 * fVar70),4);
      fVar70 = (float)uVar71 * fVar70;
      fVar73 = (float)((ulong)uVar71 >> 0x20) * fVar73;
      bVar52 = SUB41(fVar70,0) & ~(byte)iVar61;
      bVar54 = (byte)((uint)fVar70 >> 8) & ~(byte)((uint)iVar61 >> 8);
      bVar56 = (byte)((uint)fVar70 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
      bVar58 = (byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
      iVar61 = (int)uVar48;
      *(char *)((long)puVar33 + 0x2b) = (char)uVar48;
      *(undefined8 **)(piVar29 + 0x26) = puVar33;
      *(bool *)((long)piVar29 + 0x92) = bVar23;
      *(bool *)((long)piVar29 + 0x93) = bVar23;
      pfVar37 = (float *)*param_5;
      uVar75 = *(undefined8 *)(pfVar37 + 8);
      fVar70 = *pfVar37;
      uVar71 = *(undefined8 *)(pfVar37 + 4);
      fVar62 = fVar62 * (float)CONCAT13(bVar58,CONCAT12(bVar56,CONCAT11(bVar54,bVar52)));
      fVar69 = fVar69 * (float)CONCAT13((byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18)
                                        ,CONCAT12((byte)((uint)fVar73 >> 0x10) &
                                                  ~(byte)((uint)iVar66 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar73 >> 8) &
                                                           ~(byte)((uint)iVar66 >> 8),
                                                           SUB41(fVar73,0) & ~(byte)iVar66)));
      fVar59 = fVar59 * (float)CONCAT13(bVar58,CONCAT12(bVar56,CONCAT11(bVar54,bVar52)));
      fVar15 = (float)((ulong)uVar75 >> 0x20) * fVar59 +
               pfVar37[1] * fVar62 + (float)((ulong)uVar71 >> 0x20) * fVar69;
      *(ulong *)(piVar29 + 6) =
           CONCAT44((float)((ulong)*(undefined8 *)(pfVar37 + 10) >> 0x20) * fVar59 +
                    pfVar37[3] * fVar62 +
                    (float)((ulong)*(undefined8 *)(pfVar37 + 6) >> 0x20) * fVar69,
                    (float)*(undefined8 *)(pfVar37 + 10) * fVar59 +
                    pfVar37[2] * fVar62 + (float)*(undefined8 *)(pfVar37 + 6) * fVar69);
      *(ulong *)(piVar29 + 4) =
           CONCAT17((char)((uint)fVar15 >> 0x18),
                    CONCAT16((char)((uint)fVar15 >> 0x10),
                             CONCAT15((char)((uint)fVar15 >> 8),
                                      CONCAT14(SUB41(fVar15,0),
                                               (float)uVar75 * fVar59 +
                                               fVar70 * fVar62 + (float)uVar71 * fVar69))));
      puVar38 = (undefined8 *)*param_5;
      uVar75 = puVar38[4];
      uVar71 = *puVar38;
      fVar70 = *(float *)(puVar38 + 2);
      fVar60 = (float)((ulong)*(undefined8 *)(piVar29 + 8) >> 0x20);
      fVar62 = (float)*(undefined8 *)(piVar29 + 8);
      fVar73 = (float)*(undefined8 *)(piVar29 + 10);
      fVar15 = (float)((ulong)uVar75 >> 0x20) * fVar73 +
               (float)((ulong)uVar71 >> 0x20) * fVar62 + *(float *)((long)puVar38 + 0x14) * fVar60;
      *(ulong *)(piVar29 + 10) =
           CONCAT44((float)((ulong)puVar38[5] >> 0x20) * fVar73 +
                    (float)((ulong)puVar38[1] >> 0x20) * fVar62 +
                    *(float *)((long)puVar38 + 0x1c) * fVar60,
                    (float)puVar38[5] * fVar73 +
                    (float)puVar38[1] * fVar62 + *(float *)(puVar38 + 3) * fVar60);
      *(ulong *)(piVar29 + 8) =
           CONCAT17((char)((uint)fVar15 >> 0x18),
                    CONCAT16((char)((uint)fVar15 >> 0x10),
                             CONCAT15((char)((uint)fVar15 >> 8),
                                      CONCAT14(SUB41(fVar15,0),
                                               (float)uVar75 * fVar73 +
                                               (float)uVar71 * fVar62 + fVar70 * fVar60))));
      bVar52 = *(byte *)((long)puVar33 + 10);
      *(undefined1 *)(piVar29 + 0x24) = 0;
      *(byte *)((long)piVar29 + 0x91) = bVar52 >> 6 & 1;
      *(long *)(piVar29 + 0x2a) = plVar1[2];
      *(long *)(piVar29 + 0x2c) = plVar20[2];
      *piVar29 = iVar61;
      piVar29[0x2f] = *(uint *)(plVar20[2] + 0x14) | *(uint *)(plVar1[2] + 0x14);
      if (iVar61 < 4) {
        lVar31 = (long)iVar61;
        uVar42 = 3 - lVar31;
        uVar48 = (ulong)(uint)-iVar61 & 3;
        lVar43 = lVar31;
        if ((-iVar61 & 3U) != 0) {
          do {
            uVar75 = *(undefined8 *)(piVar29 + 0x12);
            uVar71 = *(undefined8 *)(piVar29 + 0x10);
            uVar48 = uVar48 - 1;
            piVar29[lVar43 + 0xc] = piVar29[0xc];
            lVar31 = lVar43 + 1;
            *(undefined8 *)(piVar29 + lVar43 * 4 + 0x12) = uVar75;
            *(undefined8 *)(piVar29 + lVar43 * 4 + 0x10) = uVar71;
            lVar43 = lVar31;
          } while (uVar48 != 0);
        }
        if (2 < uVar42) {
          lVar43 = lVar31 + -4;
          piVar39 = piVar29 + lVar31 + 0xf;
          piVar44 = piVar29 + lVar31 * 4 + 0x1c;
          do {
            uVar75 = *(undefined8 *)(piVar29 + 0x12);
            uVar71 = *(undefined8 *)(piVar29 + 0x10);
            lVar43 = lVar43 + 4;
            piVar39[-3] = piVar29[0xc];
            *(undefined8 *)(piVar44 + -10) = uVar75;
            *(undefined8 *)(piVar44 + -0xc) = uVar71;
            uVar75 = *(undefined8 *)(piVar29 + 0x12);
            uVar71 = *(undefined8 *)(piVar29 + 0x10);
            piVar39[-2] = piVar29[0xc];
            *(undefined8 *)(piVar44 + -6) = uVar75;
            *(undefined8 *)(piVar44 + -8) = uVar71;
            uVar75 = *(undefined8 *)(piVar29 + 0x12);
            uVar71 = *(undefined8 *)(piVar29 + 0x10);
            piVar39[-1] = piVar29[0xc];
            *(undefined8 *)(piVar44 + -2) = uVar75;
            *(undefined8 *)(piVar44 + -4) = uVar71;
            uVar75 = *(undefined8 *)(piVar29 + 0x12);
            uVar71 = *(undefined8 *)(piVar29 + 0x10);
            *piVar39 = piVar29[0xc];
            *(undefined8 *)(piVar44 + 2) = uVar75;
            *(undefined8 *)piVar44 = uVar71;
            piVar39 = piVar39 + 4;
            piVar44 = piVar44 + 0x10;
          } while (lVar43 != 0);
        }
      }
      piStack_c8 = *(int **)(piVar29 + 0xe);
      fVar70 = (float)((ulong)piStack_c8 >> 0x20);
      local_d0 = *(undefined8 **)*(undefined1 (*) [12])(piVar29 + 0xc);
      *(undefined1 *)((long)piVar29 + 0x95) = 0;
      auVar64._12_4_ = fVar70;
      auVar64._0_12_ = *(undefined1 (*) [12])(piVar29 + 0xc);
      fVar62 = (float)NEON_fminnmv(auVar64,4);
      fVar15 = SUB84(local_d0,0);
      iVar61 = -(uint)(fVar15 <= fVar62);
      iVar66 = -(uint)((float)((ulong)local_d0 >> 0x20) <= fVar62);
      iVar67 = -(uint)(SUB84(piStack_c8,0) <= fVar62);
      iVar68 = -(uint)(fVar70 <= fVar62);
      iVar61 = CONCAT13((byte)((uint)iVar61 >> 0x18) & (byte)((uint)uVar24 >> 0x18),
                        CONCAT12((byte)((uint)iVar61 >> 0x10) & (byte)((uint)uVar24 >> 0x10),
                                 CONCAT11((byte)((uint)iVar61 >> 8) & (byte)((uint)uVar24 >> 8),
                                          (byte)iVar61 & (byte)uVar24)));
      auVar63._0_8_ =
           CONCAT17((byte)((uint)iVar66 >> 0x18) & (byte)((uint)uVar25 >> 0x18),
                    CONCAT16((byte)((uint)iVar66 >> 0x10) & (byte)((uint)uVar25 >> 0x10),
                             CONCAT15((byte)((uint)iVar66 >> 8) & (byte)((uint)uVar25 >> 8),
                                      CONCAT14((byte)iVar66 & (byte)uVar25,iVar61))));
      auVar63[8] = (byte)iVar67 & (byte)uVar26;
      auVar63[9] = (byte)((uint)iVar67 >> 8) & (byte)((uint)uVar26 >> 8);
      auVar63[10] = (byte)((uint)iVar67 >> 0x10) & (byte)((uint)uVar26 >> 0x10);
      auVar63[0xb] = (byte)((uint)iVar67 >> 0x18) & (byte)((uint)uVar26 >> 0x18);
      auVar65[0xc] = (byte)iVar68 & (byte)uVar27;
      auVar65._0_12_ = auVar63;
      auVar65[0xd] = (byte)((uint)iVar68 >> 8) & (byte)((uint)uVar27 >> 8);
      auVar65[0xe] = (byte)((uint)iVar68 >> 0x10) & (byte)((uint)uVar27 >> 0x10);
      auVar65[0xf] = (byte)((uint)iVar68 >> 0x18) & (byte)((uint)uVar27 >> 0x18);
      cVar8 = (&DAT_03aadfc0)
              [(uint)(iVar61 + (int)((ulong)auVar63._0_8_ >> 0x20) + auVar63._8_4_ + auVar65._12_4_)
              ];
      iVar61 = (int)cVar8;
      if (iVar61 == 0) {
        pfVar37 = (float *)&local_d0;
      }
      else {
        pfVar37 = pfVar40;
        if ((cVar8 != '\x01') && (pfVar37 = (float *)((ulong)&local_d0 | 8), cVar8 != '\x02')) {
          pfVar37 = (float *)((ulong)&local_d0 | 0xc);
        }
      }
      fVar70 = *pfVar37;
      piVar29[1] = (int)fVar70;
      uVar71 = *(undefined8 *)(piVar29 + (long)iVar61 * 4 + 0x10);
      *(ulong *)(piVar29 + 0x22) =
           CONCAT44(*(float *)(param_4[5] + 0x20) + fVar70 + *(float *)(param_5[5] + 0x20),
                    (int)*(undefined8 *)(piVar29 + (long)iVar61 * 4 + 0x12));
      *(undefined8 *)(piVar29 + 0x20) = uVar71;
      if ((param_11 & 1) == 0) {
        auVar64 = *(undefined1 (*) [16])(piVar29 + 4);
        fVar60 = auVar64._0_4_;
        fVar62 = auVar64._4_4_;
        fVar73 = auVar64._8_4_;
        fVar69 = auVar64._12_4_;
        uVar32 = piVar29[0x29];
        fVar70 = (float)((ulong)*(undefined8 *)(piVar29 + 0x10) >> 0x20) + fVar62 * fVar15;
        *(ulong *)(piVar29 + 0x12) =
             CONCAT44((float)((ulong)*(undefined8 *)(piVar29 + 0x12) >> 0x20) + fVar69 * fVar15,
                      (float)*(undefined8 *)(piVar29 + 0x12) + fVar73 * fVar15);
        *(ulong *)(piVar29 + 0x10) =
             CONCAT17((char)((uint)fVar70 >> 0x18),
                      CONCAT16((char)((uint)fVar70 >> 0x10),
                               CONCAT15((char)((uint)fVar70 >> 8),
                                        CONCAT14(SUB41(fVar70,0),
                                                 (float)*(undefined8 *)(piVar29 + 0x10) +
                                                 fVar60 * fVar15))));
        fVar15 = (float)piVar29[0xd];
        fVar59 = (float)piVar29[0xe];
        fVar70 = (float)((ulong)*(undefined8 *)(piVar29 + 0x14) >> 0x20) + fVar62 * fVar15;
        *(ulong *)(piVar29 + 0x16) =
             CONCAT44((float)((ulong)*(undefined8 *)(piVar29 + 0x16) >> 0x20) + fVar69 * fVar15,
                      (float)*(undefined8 *)(piVar29 + 0x16) + fVar73 * fVar15);
        *(ulong *)(piVar29 + 0x14) =
             CONCAT17((char)((uint)fVar70 >> 0x18),
                      CONCAT16((char)((uint)fVar70 >> 0x10),
                               CONCAT15((char)((uint)fVar70 >> 8),
                                        CONCAT14(SUB41(fVar70,0),
                                                 (float)*(undefined8 *)(piVar29 + 0x14) +
                                                 fVar60 * fVar15))));
        fVar15 = (float)((ulong)*(undefined8 *)(piVar29 + 0x18) >> 0x20) + fVar62 * fVar59;
        *(ulong *)(piVar29 + 0x1a) =
             CONCAT44((float)((ulong)*(undefined8 *)(piVar29 + 0x1a) >> 0x20) + fVar69 * fVar59,
                      (float)*(undefined8 *)(piVar29 + 0x1a) + fVar73 * fVar59);
        *(ulong *)(piVar29 + 0x18) =
             CONCAT17((char)((uint)fVar15 >> 0x18),
                      CONCAT16((char)((uint)fVar15 >> 0x10),
                               CONCAT15((char)((uint)fVar15 >> 8),
                                        CONCAT14(SUB41(fVar15,0),
                                                 (float)*(undefined8 *)(piVar29 + 0x18) +
                                                 fVar60 * fVar59))));
        fVar15 = (float)piVar29[0xf];
        fVar70 = (float)((ulong)*(undefined8 *)(piVar29 + 0x1c) >> 0x20) + fVar62 * fVar15;
        *(ulong *)(piVar29 + 0x1e) =
             CONCAT44((float)((ulong)*(undefined8 *)(piVar29 + 0x1e) >> 0x20) + fVar69 * fVar15,
                      (float)*(undefined8 *)(piVar29 + 0x1e) + fVar73 * fVar15);
        *(ulong *)(piVar29 + 0x1c) =
             CONCAT17((char)((uint)fVar70 >> 0x18),
                      CONCAT16((char)((uint)fVar70 >> 0x10),
                               CONCAT15((char)((uint)fVar70 >> 8),
                                        CONCAT14(SUB41(fVar70,0),
                                                 (float)*(undefined8 *)(piVar29 + 0x1c) +
                                                 fVar60 * fVar15))));
        fVar62 = -fVar62;
        *(ulong *)(piVar29 + 6) = CONCAT44(-fVar69,-fVar73);
        *(ulong *)(piVar29 + 4) =
             CONCAT17((char)((uint)fVar62 >> 0x18),
                      CONCAT16((char)((uint)fVar62 >> 0x10),
                               CONCAT15((char)((uint)fVar62 >> 8),CONCAT14(SUB41(fVar62,0),-fVar60))
                              ));
        fVar15 = -(float)((ulong)*(undefined8 *)(piVar29 + 8) >> 0x20);
        *(ulong *)(piVar29 + 10) =
             CONCAT44(-(float)((ulong)*(undefined8 *)(piVar29 + 10) >> 0x20),
                      -(float)*(undefined8 *)(piVar29 + 10));
        *(ulong *)(piVar29 + 8) =
             CONCAT17((char)((uint)fVar15 >> 0x18),
                      CONCAT16((char)((uint)fVar15 >> 0x10),
                               CONCAT15((char)((uint)fVar15 >> 8),
                                        CONCAT14(SUB41(fVar15,0),
                                                 -(float)*(undefined8 *)(piVar29 + 8)))));
        lVar31 = *(long *)(*param_4 + 0x78);
        *(uint *)(param_4 + 3) = uVar32;
        if (*(char *)(lVar31 + 0x18) == '\x15') {
          plVar28 = (long *)(lVar31 + ((ulong)(uVar32 >> 0x1a) & 0x38) + 0x48);
          lVar31 = *plVar28;
          if (lVar31 == 0) {
            lVar31 = 0;
          }
          else {
            lVar31 = lVar31 + (long)plVar28;
          }
        }
        param_4[4] = lVar31;
        lVar31 = *param_5;
        uVar32 = piVar29[0x28];
      }
      else {
        uVar32 = piVar29[0x28];
        lVar31 = *(long *)(*param_4 + 0x78);
        *(uint *)(param_4 + 3) = uVar32;
        if (*(char *)(lVar31 + 0x18) == '\x15') {
          plVar28 = (long *)(lVar31 + ((ulong)(uVar32 >> 0x1a) & 0x38) + 0x48);
          lVar31 = *plVar28;
          if (lVar31 == 0) {
            lVar31 = 0;
          }
          else {
            lVar31 = lVar31 + (long)plVar28;
          }
        }
        param_4[4] = lVar31;
        lVar31 = *param_5;
        uVar32 = piVar29[0x29];
      }
      lVar31 = *(long *)(lVar31 + 0x78);
      *(uint *)(param_5 + 3) = uVar32;
      if (*(char *)(lVar31 + 0x18) == '\x15') {
        plVar28 = (long *)(lVar31 + ((ulong)(uVar32 >> 0x1a) & 0x38) + 0x48);
        lVar31 = *plVar28;
        if (lVar31 == 0) {
          lVar31 = 0;
        }
        else {
          lVar31 = lVar31 + (long)plVar28;
        }
      }
      param_5[4] = lVar31;
      if (bVar23) {
        lVar31 = *(long *)(param_1 + 0x40);
        uVar32 = *(uint *)((long)puVar33 + 0x2c);
        if ((*(uint *)(lVar31 + 0x108) & uVar32) != 0) {
          local_d0 = puVar33;
          piStack_c8 = piVar29;
          if ((*(uint *)(lVar31 + 0x110) & uVar32) != 0) {
            (**(code **)(**(long **)(lVar31 + 0x118) + 0x20))
                      (*(long **)(lVar31 + 0x118),param_1,param_2,plVar1,plVar20,&local_d0);
          }
          if (1 < *(int *)(lVar31 + 0x10c)) {
            if ((*(uint *)(lVar31 + 0x120) & uVar32) != 0) {
              (**(code **)(**(long **)(lVar31 + 0x128) + 0x20))
                        (*(long **)(lVar31 + 0x128),param_1,param_2,plVar1,plVar20,&local_d0);
            }
            if (2 < *(int *)(lVar31 + 0x10c)) {
              if ((*(uint *)(lVar31 + 0x130) & uVar32) != 0) {
                (**(code **)(**(long **)(lVar31 + 0x138) + 0x20))
                          (*(long **)(lVar31 + 0x138),param_1,param_2,plVar1,plVar20,&local_d0);
              }
              if (3 < *(int *)(lVar31 + 0x10c)) {
                if ((*(uint *)(lVar31 + 0x140) & uVar32) != 0) {
                  (**(code **)(**(long **)(lVar31 + 0x148) + 0x20))
                            (*(long **)(lVar31 + 0x148),param_1,param_2,plVar1,plVar20,&local_d0);
                }
                if (4 < *(int *)(lVar31 + 0x10c)) {
                  if ((*(uint *)(lVar31 + 0x150) & uVar32) != 0) {
                    (**(code **)(**(long **)(lVar31 + 0x158) + 0x20))
                              (*(long **)(lVar31 + 0x158),param_1,param_2,plVar1,plVar20,&local_d0);
                  }
                  if (5 < *(int *)(lVar31 + 0x10c)) {
                    puVar38 = (undefined8 *)(lVar31 + 0x168);
                    lVar43 = 5;
                    do {
                      if ((*(uint *)(puVar38 + -1) & uVar32) != 0) {
                        (**(code **)(*(long *)*puVar38 + 0x20))
                                  ((long *)*puVar38,param_1,param_2,plVar1,plVar20,&local_d0);
                      }
                      lVar43 = lVar43 + 1;
                      puVar38 = puVar38 + 2;
                    } while (lVar43 < *(int *)(lVar31 + 0x10c));
                  }
                }
              }
            }
          }
        }
      }
      lVar31 = *(long *)(param_9 + 0x48);
      if (*(long *)(param_9 + 0x68) == 0) {
        *(long *)(param_9 + 0x68) = *(long *)(lVar31 + 0x10) + (long)*(int *)(lVar31 + 0x18) + 0x20;
      }
      lVar43 = *(long *)(lVar31 + 0x10) + (long)*(int *)(lVar31 + 0x18);
      *(uint *)(param_9 + 0x70) =
           *(uint *)(*(long *)(lVar43 + 200) + 0x14) | *(uint *)(param_9 + 0x70) |
           *(uint *)(*(long *)(lVar43 + 0xd0) + 0x14);
      *(int *)(lVar31 + 0x18) = *(int *)(lVar31 + 0x18) + 0x100;
      *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
      *(int *)(*(long *)(param_9 + 0x60) + 8) = *(int *)(*(long *)(param_9 + 0x60) + 8) + 1;
      puVar38 = *(undefined8 **)(param_9 + 0x60);
      *(undefined1 *)(param_9 + 0x7a) = 0;
      if (*(char *)((long)puVar38 + 0xe) != '\0') {
        iVar61 = *(int *)(*(long *)(param_9 + 0x48) + 0x18);
        if (iVar61 < 0xed1) {
          puVar30 = (undefined8 *)
                    (*(long *)(*(long *)(param_9 + 0x48) + 0x10) + (long)iVar61 + 0x20);
        }
        else {
          puVar30 = (undefined8 *)FUN_032bf82c();
          puVar38 = *(undefined8 **)(param_9 + 0x60);
        }
        uVar71 = puVar38[1];
        *puVar30 = *puVar38;
        puVar30[1] = uVar71;
        *(undefined8 **)(param_9 + 0x60) = puVar30;
        *(undefined4 *)(puVar30 + 1) = 0;
        *(undefined1 *)(*(long *)(param_9 + 0x60) + 0xe) = 0;
        lVar31 = *(long *)(param_9 + 0x48);
        *(int *)(lVar31 + 0x18) = *(int *)(lVar31 + 0x18) + 0x10;
        *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
      }
      iVar61 = *(int *)(*(long *)(param_9 + 0x48) + 0x18);
      if (iVar61 < 0xde1) {
        piVar29 = (int *)(*(long *)(*(long *)(param_9 + 0x48) + 0x10) + (long)iVar61 + 0x20);
      }
      else {
        piVar29 = (int *)FUN_032bf82c();
      }
      piVar29[0x28] = (int)plVar1[3];
      piVar29[0x29] = (int)plVar20[3];
      *(undefined1 *)(piVar29 + 0x25) = 0;
      *(undefined1 *)((long)piVar29 + 0x96) = 0;
      lVar31 = *(long *)(*param_4 + 0x78);
      *(int *)(param_4 + 3) = (int)local_148;
      if (*(char *)(lVar31 + 0x18) == '\x15') {
        plVar28 = (long *)(lVar31 + (local_148 >> 0x1d) * 8 + 0x48);
        lVar31 = *plVar28;
        if (lVar31 == 0) {
          lVar31 = 0;
        }
        else {
          lVar31 = lVar31 + (long)plVar28;
        }
      }
      param_4[4] = lVar31;
      lVar31 = *(long *)(*param_5 + 0x78);
      *(uint *)(param_5 + 3) = uVar46;
      if (*(char *)(lVar31 + 0x18) == '\x15') {
        plVar28 = (long *)(lVar31 + (ulong)(uVar46 >> 0x1d) * 8 + 0x48);
        lVar31 = *plVar28;
        if (lVar31 == 0) {
          lVar31 = 0;
        }
        else {
          lVar31 = lVar31 + (long)plVar28;
        }
        param_5[4] = lVar31;
      }
      else {
        param_5[4] = lVar31;
      }
      if (pfVar50 != (float *)0x0) {
        if (!bVar19) {
          uVar48 = 0;
          bVar19 = false;
          uVar75 = 0;
          uVar71 = 0;
          goto LAB_0308d1a4;
        }
        uVar75 = 0;
        uVar71 = 0;
LAB_0308cfc8:
        piVar29[0x28] = (int)local_148;
        piVar29[0x29] = uVar46;
        if (puVar33 == (undefined8 *)0x0) {
          iVar61 = *(int *)(param_8 + 0x18);
        }
        else {
          iVar61 = *(int *)(param_8 + 0x18) + (uint)*(byte *)((long)puVar33 + 9) * 0x10;
          *(int *)(param_8 + 0x18) = iVar61;
          *(int *)(param_8 + 0x1c) = *(int *)(param_8 + 0x1c) + 1;
        }
        if (iVar61 < 0xe11) {
          puVar33 = (undefined8 *)(*(long *)(param_8 + 0x10) + (long)iVar61 + 0x20);
        }
        else {
          puVar33 = (undefined8 *)FUN_032bf82c();
        }
        if (((bVar22) || (puVar49 == (undefined8 *)0x0)) || (*(short *)(puVar49 + 0x11) != sVar47))
        {
          *puVar33 = 0;
          *(undefined8 *)((long)puVar33 + 0xc) = 0x18000000;
          *(undefined4 *)((long)puVar33 + 0x14) = 0x41;
          *(undefined1 *)(puVar33 + 1) = 2;
          *(undefined2 *)((long)puVar33 + 10) = 0;
          puVar33[0x19] = 0;
          puVar33[3] = 0x97f7f7f;
          puVar33[4] = 0;
          puVar33[5] = 0;
          puVar33[6] = 0;
          *(undefined2 *)((long)puVar33 + 0x36) = 0x5f7f;
          *(undefined2 *)((long)puVar33 + 0x2a) = 0x1ff;
          *(undefined1 *)((long)puVar33 + 9) = 9;
          puVar33[7] = 0;
          puVar33[8] = 0;
          puVar33[9] = 0;
          puVar33[10] = 0;
          puVar33[0xb] = 0;
          puVar33[0xc] = 0;
          puVar33[0xd] = 0;
          puVar33[0xe] = 0;
          puVar33[0xf] = 0;
          puVar33[0x10] = 0;
          puVar33[0x11] = 0;
          puVar33[0x12] = 0;
          *(short *)(puVar33 + 0x11) = sVar47;
          puVar33[0x13] = 0;
          puVar33[0x14] = 0;
          puVar33[0x15] = 0;
          puVar33[0x16] = 0;
          puVar33[0x17] = 0;
          puVar33[0x18] = 0;
          puVar33[8] = 0;
          puVar33[9] = 0;
          puVar33[10] = 0;
          puVar33[0xb] = 0;
          puVar33[0xc] = 0;
          puVar33[0xd] = 0;
          FUN_03048f60(puVar33,plVar1[2],plVar20[2],plVar1[5],plVar20[5]);
          *(byte *)((long)puVar33 + 0xe) = bVar4;
          uVar32 = *(uint *)(*param_5 + 0x54) | *(uint *)(*param_4 + 0x54) |
                   *(uint *)(param_4[2] + 0x14) | *(uint *)(param_5[2] + 0x14);
          if ((bVar4 & 3) == 1) {
            uVar32 = uVar32 & 0xffffff7f;
          }
          else if ((bVar4 & 3) == 2) {
            uVar32 = uVar32 | 0x80;
          }
          if (*(long *)(param_1 + 8) != 0) {
            uVar32 = *(uint *)(*(long *)(param_1 + 8) + 0x80c) | uVar32;
          }
          *(uint *)((long)puVar33 + 0x2c) =
               *(uint *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(param_5[1] + 0x58) * 0x70 +
                        4) |
               *(uint *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(param_4[1] + 0x58) * 0x70 +
                        4) | uVar32;
          *(undefined2 *)((long)puVar33 + 10) = *(undefined2 *)(param_3 + 10);
          uVar48 = 0;
          bVar19 = true;
          bVar23 = true;
        }
        else {
          bVar52 = *(byte *)((long)puVar49 + 9);
          uVar45 = (uint)bVar52;
          puVar30 = puVar33;
          puVar38 = puVar49;
          uVar32 = uVar45;
          if ((bVar52 + (bVar52 == 0) & 1) != 0) {
            uVar2 = *(undefined4 *)(puVar49 + 1);
            uVar3 = *(undefined4 *)((long)puVar49 + 0xc);
            *puVar33 = *puVar49;
            *(undefined4 *)(puVar33 + 1) = uVar2;
            *(undefined4 *)((long)puVar33 + 0xc) = uVar3;
            puVar30 = puVar33 + 2;
            puVar38 = puVar49 + 2;
            uVar32 = uVar45 - 1;
          }
          if (uVar45 != (bVar52 != 0)) {
            do {
              uVar32 = uVar32 - 2;
              uVar2 = *(undefined4 *)(puVar38 + 1);
              uVar3 = *(undefined4 *)((long)puVar38 + 0xc);
              *puVar30 = *puVar38;
              *(undefined4 *)(puVar30 + 1) = uVar2;
              *(undefined4 *)((long)puVar30 + 0xc) = uVar3;
              uVar2 = *(undefined4 *)(puVar38 + 3);
              uVar3 = *(undefined4 *)((long)puVar38 + 0x1c);
              puVar30[2] = puVar38[2];
              puVar38 = puVar38 + 4;
              *(undefined4 *)(puVar30 + 3) = uVar2;
              *(undefined4 *)((long)puVar30 + 0x1c) = uVar3;
              puVar30 = puVar30 + 4;
            } while (0 < (int)uVar32);
          }
          bVar23 = false;
          bVar19 = true;
          uVar48 = 0;
          bVar22 = true;
        }
LAB_0308d1a4:
        do {
          uVar42 = -(uVar48 >> 0x1f) & 0xfffffffc00000000 | uVar48 << 2;
          uVar16 = *(undefined8 *)(pfVar50 + 6);
          uVar36 = *(undefined8 *)(pfVar50 + 4);
          *(float *)((long)piVar29 + uVar42 + 0x30) = pfVar50[0xc];
          fVar15 = *pfVar50;
          fVar70 = pfVar50[1];
          fVar62 = pfVar50[2];
          puVar38 = (undefined8 *)*param_5;
          iVar61 = (int)uVar48;
          uVar74 = puVar38[1];
          uVar72 = *puVar38;
          uVar77 = puVar38[3];
          uVar76 = puVar38[2];
          uVar79 = puVar38[5];
          uVar78 = puVar38[4];
          uVar81 = puVar38[7];
          uVar80 = puVar38[6];
          uVar48 = (ulong)(iVar61 + 1);
          uVar71 = CONCAT44((float)((ulong)uVar71 >> 0x20) + (float)((ulong)uVar36 >> 0x20),
                            (float)uVar71 + (float)uVar36);
          uVar75 = CONCAT44((float)((ulong)uVar75 >> 0x20) + (float)((ulong)uVar16 >> 0x20),
                            (float)uVar75 + (float)uVar16);
          piVar29[(long)iVar61 * 4 + 0x12] =
               (int)((float)uVar81 +
                    (float)uVar79 * fVar62 + (float)uVar74 * fVar15 + (float)uVar77 * fVar70);
          piVar29[(long)iVar61 * 4 + 0x13] =
               (int)((float)((ulong)uVar81 >> 0x20) +
                    (float)((ulong)uVar79 >> 0x20) * fVar62 +
                    (float)((ulong)uVar74 >> 0x20) * fVar15 +
                    (float)((ulong)uVar77 >> 0x20) * fVar70);
          piVar29[(long)iVar61 * 4 + 0x10] =
               (int)((float)uVar80 +
                    (float)uVar78 * fVar62 + (float)uVar72 * fVar15 + (float)uVar76 * fVar70);
          piVar29[(long)iVar61 * 4 + 0x11] =
               (int)((float)((ulong)uVar80 >> 0x20) +
                    (float)((ulong)uVar78 >> 0x20) * fVar62 +
                    (float)((ulong)uVar72 >> 0x20) * fVar15 +
                    (float)((ulong)uVar76 >> 0x20) * fVar70);
          *(undefined2 *)((long)puVar33 + (long)iVar61 * 2 + 0x80) = *(undefined2 *)(pfVar50 + 0xd);
          uVar36 = *(undefined8 *)(pfVar50 + 8);
          *(undefined8 *)(piVar29 + 10) = *(undefined8 *)(pfVar50 + 10);
          *(undefined8 *)(piVar29 + 8) = uVar36;
          *(undefined4 *)((long)puVar33 + uVar42 + 0x60) = uVar12;
          *(undefined4 *)((long)puVar33 + uVar42 + 0x40) = uVar10;
          *(undefined4 *)((long)puVar33 + uVar42 + 0x50) = uVar11;
LAB_0308d220:
          iVar61 = *(int *)(param_6 + 0x14) + -1;
          *(int *)(param_6 + 0x14) = iVar61;
          if (iVar61 < 1) {
            pfVar50 = (float *)FUN_032bf9c8(param_6,1);
          }
          else {
            pfVar50 = (float *)(*(long *)(param_6 + 8) + 0x60);
            *(float **)(param_6 + 8) = pfVar50;
          }
          if (pfVar50 == (float *)0x0) goto LAB_0308cad0;
LAB_0308c674:
          sVar47 = *(short *)(pfVar50 + 0x17);
          uVar46 = ((int)pfVar50[0x16] + 1 << (ulong)(-(uint)*(byte *)(param_5[4] + 0x1c) & 0x1f)) -
                   1;
          fVar15 = pfVar50[0xe];
          local_148 = (ulong)(uint)fVar15;
          uVar6 = *(ushort *)(pfVar50 + 0xd);
          lVar31 = *(long *)(*param_4 + 0x78);
          *(float *)(param_4 + 3) = fVar15;
          if (*(char *)(lVar31 + 0x18) == '\x15') {
            plVar28 = (long *)(lVar31 + ((ulong)((uint)fVar15 >> 0x1a) & 0x38) + 0x48);
            lVar43 = *plVar28;
            lVar31 = 0;
            if (lVar43 != 0) {
              lVar31 = lVar43 + (long)plVar28;
            }
          }
          param_4[4] = lVar31;
          lVar31 = *(long *)(*param_5 + 0x78);
          *(uint *)(param_5 + 3) = uVar46;
          if (*(char *)(lVar31 + 0x18) == '\x15') {
            plVar28 = (long *)(lVar31 + ((ulong)(uVar46 >> 0x1a) & 0x38) + 0x48);
            lVar31 = *plVar28;
            if (lVar31 == 0) {
              lVar31 = 0;
            }
            else {
              lVar31 = lVar31 + (long)plVar28;
            }
            param_5[4] = lVar31;
            if (puVar49 != (undefined8 *)0x0) goto LAB_0308c6ec;
LAB_0308c7d0:
            uVar10 = 0;
            uVar11 = 0;
            uVar12 = 0;
          }
          else {
            param_5[4] = lVar31;
            if (puVar49 == (undefined8 *)0x0) goto LAB_0308c7d0;
LAB_0308c6ec:
            uVar42 = (ulong)iVar9;
            do {
              if ((long)uVar42 < (long)(ulong)*(byte *)((long)puVar49 + 0x2b)) {
                lVar31 = uVar42 << 2;
                do {
                  uVar7 = *(ushort *)((long)puVar49 + uVar42 * 2 + 0x80);
                  if (uVar6 <= uVar7 && uVar7 != uVar6) {
                    uVar51 = 0;
                    uVar53 = 0;
                    uVar55 = 0;
                    uVar57 = 0;
                    uVar10 = 0;
                    uVar11 = 0;
                    goto LAB_0308c818;
                  }
                  if (uVar7 == uVar6) {
                    iVar9 = (int)uVar42 + 1;
                    uVar10 = *(undefined4 *)((long)puVar49 + lVar31 + 0x40);
                    uVar11 = *(undefined4 *)((long)puVar49 + lVar31 + 0x50);
                    uVar12 = *(undefined4 *)((long)puVar49 + lVar31 + 0x60);
                    uVar51 = (undefined1)uVar12;
                    uVar53 = (undefined1)((uint)uVar12 >> 8);
                    uVar55 = (undefined1)((uint)uVar12 >> 0x10);
                    uVar57 = (undefined1)((uint)uVar12 >> 0x18);
                    goto LAB_0308c818;
                  }
                  uVar42 = uVar42 + 1;
                  lVar31 = lVar31 + 4;
                } while (*(byte *)((long)puVar49 + 0x2b) != uVar42);
              }
              if (!bVar22) {
                local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,(int)plVar1[3]);
                local_108[0] = (undefined4)plVar20[3];
                FUN_030491a4(puVar49,param_1,param_2,*plVar1 + 0x50,*plVar20 + 0x50,&local_d0,
                             local_108);
              }
              iVar9 = *(int *)(param_7 + 0x14) + -1;
              bVar52 = *(byte *)((long)puVar49 + 9);
              *(int *)(param_7 + 0x14) = iVar9;
              if (iVar9 < 1) {
                puVar49 = (undefined8 *)FUN_032bfda0(param_7);
              }
              else {
                puVar49 = (undefined8 *)(*(long *)(param_7 + 8) + (ulong)bVar52 * 0x10);
                *(undefined8 **)(param_7 + 8) = puVar49;
              }
              uVar42 = 0;
              bVar22 = false;
              iVar9 = 0;
            } while (puVar49 != (undefined8 *)0x0);
            puVar49 = (undefined8 *)0x0;
            uVar51 = 0;
            uVar53 = 0;
            uVar55 = 0;
            uVar57 = 0;
            uVar10 = 0;
            uVar11 = 0;
            iVar9 = 0;
LAB_0308c818:
            uVar12 = CONCAT13(uVar57,CONCAT12(uVar55,CONCAT11(uVar53,uVar51)));
          }
          fVar70 = pfVar50[0x11];
          if ((fVar70 == local_19c) && (*(short *)(pfVar50 + 0x10) == sVar5)) {
            lVar31 = *(long *)(pfVar50 + 0x12);
            if (lVar31 != local_1c0) goto LAB_0308c860;
          }
          else {
            lVar31 = *(long *)(pfVar50 + 0x12);
            sVar5 = *(short *)(pfVar50 + 0x10);
LAB_0308c860:
            bVar17 = true;
            local_1c0 = lVar31;
            local_19c = fVar70;
          }
          if (sVar47 != sVar21) {
            local_98 = CONCAT62(local_98._2_6_,local_88);
            uVar36 = *(undefined8 *)((ulong)&local_88 | 4);
            *(undefined4 *)(puVar34 + 1) = *(undefined4 *)((undefined8 *)((ulong)&local_88 | 4) + 1)
            ;
            *puVar34 = uVar36;
            uVar36 = *(undefined8 *)(*param_5 + 0x78);
            (**(code **)(**(long **)(param_1 + 0x48) + 0x40))
                      (*(long **)(param_1 + 0x48),sVar47,6,*param_5,uVar36,uVar36,uVar46,0,&local_98
                      );
            param_5[2] = *(long *)(param_1 + 0x20) + (local_98 & 0xffff) * 0x50;
            sVar21 = sVar47;
LAB_0308c900:
            plVar28 = *(long **)(*(long *)(param_1 + 8) + 0x4b8);
            if (plVar28 == (long *)0x0) goto LAB_0308c9d0;
            local_d0 = (undefined8 *)CONCAT62(local_d0._2_6_,*(undefined2 *)(pfVar50 + 0x10));
            uVar36 = *(undefined8 *)(pfVar50 + 0x11);
            pfVar40[2] = pfVar50[0x13];
            *(undefined8 *)pfVar40 = uVar36;
            local_c0 = *param_4;
            local_b8 = *(undefined8 *)(local_c0 + 0x78);
            local_b0 = *(undefined8 *)(pfVar50 + 0x14);
            local_a8 = (undefined4)param_4[3];
            local_a0 = 0;
            local_108[0] = CONCAT22(local_108[0]._2_2_,(undefined2)local_98);
            uVar36 = *puVar34;
            *(undefined4 *)((undefined8 *)((ulong)local_108 | 4) + 1) = *(undefined4 *)(puVar34 + 1)
            ;
            *(undefined8 *)((ulong)local_108 | 4) = uVar36;
            local_f8 = *param_5;
            local_f0 = *(undefined8 *)(local_f8 + 0x78);
            local_d8 = 0;
            uStack_e8 = local_f0;
            local_e0 = uVar46;
            uVar42 = (**(code **)(*plVar28 + 0x40))(plVar28,6,1,&local_d0,local_108);
            if ((uVar42 & 1) != 0) goto LAB_0308c9fc;
            bVar17 = true;
            bVar18 = true;
            goto LAB_0308d220;
          }
          if (bVar17) goto LAB_0308c900;
LAB_0308c9d0:
          if (bVar18) {
            bVar17 = false;
            bVar18 = true;
            goto LAB_0308d220;
          }
LAB_0308c9fc:
          iVar61 = (int)uVar48;
          if (iVar61 == 0) goto LAB_0308ca9c;
          if (((3 < iVar61) || (*(short *)(puVar33 + 0x11) != sVar47)) ||
             (((float)piVar29[0x28] != fVar15 || (piVar29[0x29] != uVar46)))) {
            bVar18 = false;
            bVar19 = true;
            bVar17 = false;
            goto LAB_0308cad4;
          }
          fVar15 = (float)uVar71 * (float)*(undefined8 *)(pfVar50 + 4);
          fVar70 = (float)((ulong)uVar71 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(pfVar50 + 4) >> 0x20);
          uVar51 = (undefined1)((uint)fVar70 >> 8);
          uVar53 = (undefined1)((uint)fVar70 >> 0x10);
          uVar55 = (undefined1)((uint)fVar70 >> 0x18);
          fVar62 = (float)uVar75 * (float)*(undefined8 *)(pfVar50 + 6);
          fVar60 = (float)((ulong)uVar75 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(pfVar50 + 6) >> 0x20);
          auVar13[4] = SUB41(fVar70,0);
          auVar13._0_4_ = fVar15;
          auVar13[5] = uVar51;
          auVar13[6] = uVar53;
          auVar13[7] = uVar55;
          auVar13._8_4_ = fVar62;
          auVar13._12_4_ = fVar60;
          auVar14[4] = SUB41(fVar70,0);
          auVar14._0_4_ = fVar15;
          auVar14[5] = uVar51;
          auVar14[6] = uVar53;
          auVar14[7] = uVar55;
          auVar14._8_4_ = fVar62;
          auVar14._12_4_ = fVar60;
          auVar64 = NEON_ext(auVar13,auVar14,8,1);
          bVar17 = false;
          if (fVar15 + fVar70 + auVar64._0_4_ < *(float *)(&DAT_03aae280 + (long)iVar61 * 2) * 0.95)
          {
            bVar19 = true;
            bVar18 = false;
            goto LAB_0308cad4;
          }
          bVar18 = false;
          bVar19 = false;
        } while( true );
      }
      if (puVar33 != (undefined8 *)0x0) {
        *(uint *)(param_8 + 0x18) =
             *(int *)(param_8 + 0x18) + (uint)*(byte *)((long)puVar33 + 9) * 0x10;
        *(int *)(param_8 + 0x1c) = *(int *)(param_8 + 0x1c) + 1;
      }
      if (puVar49 != (undefined8 *)0x0) {
        if (!bVar22) {
          local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,(int)plVar1[3]);
          local_108[0] = (undefined4)plVar20[3];
          FUN_030491a4(puVar49,param_1,param_2,*plVar1 + 0x50,*plVar20 + 0x50,&local_d0,local_108);
        }
        iVar9 = *(int *)(param_7 + 0x14) + -1;
        bVar4 = *(byte *)((long)puVar49 + 9);
        *(int *)(param_7 + 0x14) = iVar9;
        if (iVar9 < 1) {
          lVar31 = FUN_032bfda0(param_7);
        }
        else {
          lVar31 = *(long *)(param_7 + 8) + (ulong)bVar4 * 0x10;
          *(long *)(param_7 + 8) = lVar31;
        }
        while (lVar31 != 0) {
          local_d0._4_4_ = (undefined4)((ulong)local_d0 >> 0x20);
          local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,(int)plVar1[3]);
          local_108[0] = (undefined4)plVar20[3];
          FUN_030491a4(lVar31,param_1,param_2,*plVar1 + 0x50,*plVar20 + 0x50,&local_d0,local_108);
          iVar9 = *(int *)(param_7 + 0x14) + -1;
          bVar4 = *(byte *)(lVar31 + 9);
          *(int *)(param_7 + 0x14) = iVar9;
          if (iVar9 < 1) {
            lVar31 = FUN_032bfda0(param_7);
          }
          else {
            lVar31 = *(long *)(param_7 + 8) + (ulong)bVar4 * 0x10;
            *(long *)(param_7 + 8) = lVar31;
          }
        }
      }
    }
  }
  return;
LAB_0308ca9c:
  bVar18 = false;
  bVar17 = false;
  goto LAB_0308cfc8;
}


