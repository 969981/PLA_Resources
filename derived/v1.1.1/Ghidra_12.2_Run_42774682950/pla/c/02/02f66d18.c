/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f66d18; name: FUN_02f66d18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f66d18(long *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  byte bVar39;
  byte bVar40;
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  byte bVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  byte bVar54;
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  byte bVar58;
  undefined1 uVar59;
  byte bVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  int iVar67;
  uint5 uVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  uint local_1080 [2];
  undefined8 auStack_1078 [255];
  undefined4 local_880 [2];
  undefined8 auStack_878 [255];
  int local_80;
  
  uVar19 = _UNK_03889708;
  uVar18 = _DAT_03889700;
  if (*(char *)(param_4 + 4) == '\0') {
    fVar33 = (float)param_3[1];
    fVar27 = (float)*param_3;
    fVar30 = (float)((ulong)*param_3 >> 0x20);
    fVar34 = (float)*(undefined8 *)(param_2 + 10);
    fVar28 = (float)*(undefined8 *)(param_2 + 8);
    fVar31 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    uVar29 = (undefined4)*param_4;
    uVar32 = (undefined4)((ulong)*param_4 >> 0x20);
    fVar15 = *param_2;
    fVar16 = param_2[1];
    fVar17 = param_2[2];
    local_1080[0] = 2;
    uVar25 = 1;
    local_880[0] = 0;
    uVar35 = uVar29;
    uVar36 = uVar32;
    do {
      uVar25 = (long)(int)uVar25 - 1;
      local_80 = (int)uVar25;
      uVar2 = local_1080[uVar25];
      uVar23 = (ulong)(uVar2 >> 1);
      if ((uVar2 & 1) == 0) {
        puVar1 = (undefined8 *)((long)param_1 + uVar23 * 0x80 + *param_1);
        fVar4 = (float)*puVar1;
        fVar8 = (float)((ulong)*puVar1 >> 0x20);
        fVar9 = (float)puVar1[1];
        fVar10 = (float)((ulong)puVar1[1] >> 0x20);
        auVar74._0_4_ = fVar28 * ((fVar27 + *(float *)(puVar1 + 2)) - fVar15);
        auVar74._4_4_ = fVar28 * ((fVar27 + *(float *)((long)puVar1 + 0x14)) - fVar15);
        auVar74._8_4_ = fVar28 * ((fVar27 + *(float *)(puVar1 + 3)) - fVar15);
        auVar74._12_4_ = fVar28 * ((fVar27 + *(float *)((long)puVar1 + 0x1c)) - fVar15);
        auVar75._0_4_ = fVar31 * ((*(float *)(puVar1 + 4) - fVar30) - fVar16);
        auVar75._4_4_ = fVar31 * ((*(float *)((long)puVar1 + 0x24) - fVar30) - fVar16);
        auVar75._8_4_ = fVar31 * ((*(float *)(puVar1 + 5) - fVar30) - fVar16);
        auVar75._12_4_ = fVar31 * ((*(float *)((long)puVar1 + 0x2c) - fVar30) - fVar16);
        auVar72._0_4_ = fVar28 * ((fVar4 - fVar27) - fVar15);
        auVar72._4_4_ = fVar28 * ((fVar8 - fVar27) - fVar15);
        auVar72._8_4_ = fVar28 * ((fVar9 - fVar27) - fVar15);
        auVar72._12_4_ = fVar28 * ((fVar10 - fVar27) - fVar15);
        auVar82 = NEON_smin(auVar72,auVar74,4);
        auVar77._0_4_ = fVar31 * ((fVar30 + *(float *)(puVar1 + 6)) - fVar16);
        auVar77._4_4_ = fVar31 * ((fVar30 + *(float *)((long)puVar1 + 0x34)) - fVar16);
        auVar77._8_4_ = fVar31 * ((fVar30 + *(float *)(puVar1 + 7)) - fVar16);
        auVar77._12_4_ = fVar31 * ((fVar30 + *(float *)((long)puVar1 + 0x3c)) - fVar16);
        auVar72 = NEON_smax(auVar72,auVar74,4);
        auVar76._0_4_ = fVar34 * ((*(float *)(puVar1 + 8) - fVar33) - fVar17);
        auVar76._4_4_ = fVar34 * ((*(float *)((long)puVar1 + 0x44) - fVar33) - fVar17);
        auVar76._8_4_ = fVar34 * ((*(float *)(puVar1 + 9) - fVar33) - fVar17);
        auVar76._12_4_ = fVar34 * ((*(float *)((long)puVar1 + 0x4c) - fVar33) - fVar17);
        auVar37 = NEON_smin(auVar75,auVar77,4);
        fVar78 = fVar34 * ((fVar33 + (float)puVar1[10]) - fVar17);
        fVar79 = fVar34 * ((fVar33 + (float)((ulong)puVar1[10] >> 0x20)) - fVar17);
        fVar80 = fVar34 * ((fVar33 + (float)puVar1[0xb]) - fVar17);
        fVar81 = fVar34 * ((fVar33 + (float)((ulong)puVar1[0xb] >> 0x20)) - fVar17);
        auVar74 = NEON_smax(auVar75,auVar77,4);
        auVar38._4_4_ = fVar79;
        auVar38._0_4_ = fVar78;
        auVar38._8_4_ = fVar80;
        auVar38._12_4_ = fVar81;
        auVar75 = NEON_smin(auVar76,auVar38,4);
        auVar73._4_4_ = fVar79;
        auVar73._0_4_ = fVar78;
        auVar73._8_4_ = fVar80;
        auVar73._12_4_ = fVar81;
        auVar77 = NEON_smax(auVar76,auVar73,4);
        auVar38 = NEON_smax(auVar82,auVar37,4);
        auVar75 = NEON_smax(auVar75,ZEXT816(0),4);
        auVar73 = NEON_smin(auVar72,auVar74,4);
        auVar37._4_4_ = uVar32;
        auVar37._0_4_ = uVar29;
        auVar37._8_4_ = uVar35;
        auVar37._12_4_ = uVar36;
        auVar72 = NEON_smin(auVar77,auVar37,4);
        iVar11 = -(uint)(fVar4 <= *(float *)(puVar1 + 2));
        iVar21 = -(uint)(fVar8 <= *(float *)((long)puVar1 + 0x14));
        iVar12 = -(uint)(fVar9 <= *(float *)(puVar1 + 3));
        iVar14 = -(uint)(fVar10 <= *(float *)((long)puVar1 + 0x1c));
        auVar37 = NEON_smax(auVar38,auVar75,4);
        auVar38 = NEON_smin(auVar73,auVar72,4);
        iVar67 = -(uint)(auVar37._0_4_ <= auVar38._0_4_);
        iVar69 = -(uint)(auVar37._4_4_ <= auVar38._4_4_);
        iVar70 = -(uint)(auVar37._8_4_ <= auVar38._8_4_);
        iVar71 = -(uint)(auVar37._12_4_ <= auVar38._12_4_);
        bVar39 = (byte)iVar67 & (byte)iVar11;
        bVar40 = (byte)((uint)iVar67 >> 8) & (byte)((uint)iVar11 >> 8);
        bVar42 = (byte)((uint)iVar67 >> 0x10) & (byte)((uint)iVar11 >> 0x10);
        bVar44 = (byte)((uint)iVar67 >> 0x18) & (byte)((uint)iVar11 >> 0x18);
        bVar46 = (byte)iVar69 & (byte)iVar21;
        bVar47 = (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar21 >> 8);
        bVar49 = (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar21 >> 0x10);
        bVar51 = (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar21 >> 0x18);
        bVar53 = (byte)iVar70 & (byte)iVar12;
        bVar54 = (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar12 >> 8);
        bVar56 = (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar12 >> 0x10);
        bVar58 = (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar12 >> 0x18);
        bVar60 = (byte)iVar71 & (byte)iVar14;
        bVar61 = (byte)((uint)iVar71 >> 8) & (byte)((uint)iVar14 >> 8);
        bVar63 = (byte)((uint)iVar71 >> 0x10) & (byte)((uint)iVar14 >> 0x10);
        bVar65 = (byte)((uint)iVar71 >> 0x18) & (byte)((uint)iVar14 >> 0x18);
        if (((CONCAT13(bVar44,CONCAT12(bVar42,CONCAT11(bVar40,bVar39))) != 0 ||
             CONCAT13(bVar51,CONCAT12(bVar49,CONCAT11(bVar47,bVar46))) != 0) ||
            CONCAT13(bVar58,CONCAT12(bVar56,CONCAT11(bVar54,bVar53))) != 0) ||
            CONCAT13(bVar65,CONCAT12(bVar63,CONCAT11(bVar61,bVar60))) != 0) {
          uVar23 = (ulong)(uint)(CONCAT13(bVar44 & (byte)((ulong)uVar18 >> 0x18),
                                          CONCAT12(bVar42 & (byte)((ulong)uVar18 >> 0x10),
                                                   CONCAT11(bVar40 & (byte)((ulong)uVar18 >> 8),
                                                            bVar39 & (byte)uVar18))) +
                                 CONCAT13(bVar51 & (byte)((ulong)uVar18 >> 0x38),
                                          CONCAT12(bVar49 & (byte)((ulong)uVar18 >> 0x30),
                                                   CONCAT11(bVar47 & (byte)((ulong)uVar18 >> 0x28),
                                                            bVar46 & (byte)((ulong)uVar18 >> 0x20)))
                                         ) +
                                CONCAT13(bVar58 & (byte)((ulong)uVar19 >> 0x18),
                                         CONCAT12(bVar56 & (byte)((ulong)uVar19 >> 0x10),
                                                  CONCAT11(bVar54 & (byte)((ulong)uVar19 >> 8),
                                                           bVar53 & (byte)uVar19))) +
                                CONCAT13(bVar65 & (byte)((ulong)uVar19 >> 0x38),
                                         CONCAT12(bVar63 & (byte)((ulong)uVar19 >> 0x30),
                                                  CONCAT11(bVar61 & (byte)((ulong)uVar19 >> 0x28),
                                                           bVar60 & (byte)((ulong)uVar19 >> 0x20))))
                                );
          lVar22 = uVar23 * 0x10;
          uVar13 = *(undefined8 *)(&UNK_03aae128 + lVar22);
          uVar41 = (undefined1)((ulong)uVar13 >> 8);
          uVar43 = (undefined1)((ulong)uVar13 >> 0x10);
          uVar45 = (undefined1)((ulong)uVar13 >> 0x18);
          uVar48 = (undefined1)((ulong)uVar13 >> 0x20);
          uVar50 = (undefined1)((ulong)uVar13 >> 0x28);
          uVar52 = (undefined1)((ulong)uVar13 >> 0x30);
          uVar55 = (undefined1)((ulong)uVar13 >> 0x38);
          auVar82[9] = uVar41;
          auVar82._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar22);
          auVar82[10] = uVar43;
          auVar82[0xb] = uVar45;
          auVar82[0xc] = uVar48;
          auVar82[0xd] = uVar50;
          auVar82[0xe] = uVar52;
          auVar82[0xf] = uVar55;
          auVar38 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(puVar1 + 0xc),auVar82);
          auVar5[9] = uVar41;
          auVar5._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar22);
          auVar5[10] = uVar43;
          auVar5[0xb] = uVar45;
          auVar5[0xc] = uVar48;
          auVar5[0xd] = uVar50;
          auVar5[0xe] = uVar52;
          auVar5[0xf] = uVar55;
          auVar37 = a64_TBL(ZEXT816(0),auVar37,auVar5);
          iVar21 = auVar38._0_4_ << 1;
          uVar41 = (undefined1)((uint)iVar21 >> 8);
          uVar43 = (undefined1)((uint)iVar21 >> 0x10);
          uVar45 = (undefined1)((uint)iVar21 >> 0x18);
          iVar12 = auVar38._4_4_ << 1;
          uVar48 = (undefined1)((uint)iVar12 >> 8);
          uVar50 = (undefined1)((uint)iVar12 >> 0x10);
          uVar52 = (undefined1)((uint)iVar12 >> 0x18);
          iVar14 = auVar38._8_4_ << 1;
          uVar55 = (undefined1)((uint)iVar14 >> 8);
          uVar57 = (undefined1)((uint)iVar14 >> 0x10);
          uVar59 = (undefined1)((uint)iVar14 >> 0x18);
          iVar67 = auVar38._12_4_ << 1;
          uVar62 = (undefined1)((uint)iVar67 >> 8);
          uVar64 = (undefined1)((uint)iVar67 >> 0x10);
          uVar66 = (undefined1)((uint)iVar67 >> 0x18);
          bVar44 = -(*(char *)(puVar1 + 0xe) == '\0');
          iVar11 = *(int *)(&DAT_03aadfe0 + uVar23 * 4);
          uVar68 = CONCAT14(~bVar44,(uint)(~bVar44 & 1)) & 0x1ffffffff;
          bVar39 = (byte)uVar68 | (byte)iVar21;
          bVar40 = (byte)(uVar68 >> 0x20) | (byte)iVar12;
          bVar42 = ~bVar44 & 1 | (byte)iVar14;
          bVar44 = ~bVar44 & 1 | (byte)iVar67;
          auVar6[1] = uVar41;
          auVar6[0] = bVar39;
          auVar6[2] = uVar43;
          auVar6[3] = uVar45;
          auVar6[4] = bVar40;
          auVar6[5] = uVar48;
          auVar6[6] = uVar50;
          auVar6[7] = uVar52;
          auVar6[8] = bVar42;
          auVar6[9] = uVar55;
          auVar6[10] = uVar57;
          auVar6[0xb] = uVar59;
          auVar6[0xc] = bVar44;
          auVar6[0xd] = uVar62;
          auVar6[0xe] = uVar64;
          auVar6[0xf] = uVar66;
          auVar7[1] = uVar41;
          auVar7[0] = bVar39;
          auVar7[2] = uVar43;
          auVar7[3] = uVar45;
          auVar7[4] = bVar40;
          auVar7[5] = uVar48;
          auVar7[6] = uVar50;
          auVar7[7] = uVar52;
          auVar7[8] = bVar42;
          auVar7[9] = uVar55;
          auVar7[10] = uVar57;
          auVar7[0xb] = uVar59;
          auVar7[0xc] = bVar44;
          auVar7[0xd] = uVar62;
          auVar7[0xe] = uVar64;
          auVar7[0xf] = uVar66;
          auVar38 = NEON_ext(auVar6,auVar7,8,1);
          *(ulong *)(local_1080 + uVar25) =
               CONCAT17(uVar52,CONCAT16(uVar50,CONCAT15(uVar48,CONCAT14(bVar40,CONCAT13(uVar45,
                                                  CONCAT12(uVar43,CONCAT11(uVar41,bVar39)))))));
          *(long *)((long)auStack_1078 + uVar25 * 4) = auVar38._0_8_;
          lVar22 = (long)local_80;
          *(long *)((long)auStack_878 + lVar22 * 4) = auVar37._8_8_;
          *(long *)(local_880 + lVar22) = auVar37._0_8_;
          uVar25 = (ulong)(uint)(local_80 + iVar11);
        }
      }
      else {
        lVar22 = param_4[2];
        lVar24 = param_4[1] + uVar23 * 0xc0;
        plVar26 = (long *)(lVar24 + 0xb0);
        if (*plVar26 == *(long *)(lVar22 + 0x80)) {
LAB_02f66f58:
          cVar3 = *(char *)(param_4 + 4);
        }
        else {
          plVar20 = *(long **)(lVar22 + 8);
          if (plVar20 != (long *)0x0) {
            if (*(long *)(lVar22 + 0x80) != -1) {
              uVar23 = (**(code **)(*plVar20 + 0x38))(plVar20,3);
              if ((uVar23 & 1) == 0) goto LAB_02f66f58;
              lVar22 = param_4[2];
            }
            uVar23 = (**(code **)(**(long **)(lVar22 + 8) + 0x30))
                               (*(long **)(lVar22 + 8),3,lVar22 + 0x10,lVar24);
            if ((uVar23 & 1) == 0) goto LAB_02f66f58;
          }
          plVar20 = (long *)param_4[3];
          iVar21 = (int)plVar20[1];
          lVar22 = *plVar20;
          iVar11 = iVar21 + 1;
          if ((int)(*(uint *)((long)plVar20 + 0xc) & 0x3fffffff) <= iVar21) {
            lVar22 = FUN_02f6b138(PTR_PTR_0434a080,iVar11);
            iVar21 = (int)plVar20[1];
            *plVar20 = lVar22;
          }
          *(long *)(lVar22 + (long)iVar21 * 8) = *plVar26;
          *(int *)(plVar20 + 1) = iVar11;
          cVar3 = *(char *)(param_4 + 4);
        }
        if (cVar3 != '\0') {
          return;
        }
        uVar29 = (undefined4)*param_4;
        uVar32 = (undefined4)((ulong)*param_4 >> 0x20);
        uVar35 = uVar29;
        uVar36 = uVar32;
      }
    } while ((int)uVar25 != 0);
  }
  return;
}


