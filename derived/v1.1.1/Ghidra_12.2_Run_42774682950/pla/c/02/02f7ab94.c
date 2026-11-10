/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7ab94; name: FUN_02f7ab94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f7ab94(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                 undefined4 param_5)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  byte bVar15;
  byte bVar21;
  byte bVar22;
  int iVar16;
  uint uVar17;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  int iVar25;
  byte bVar28;
  int iVar29;
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  int iVar30;
  undefined1 auVar20 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  int iVar34;
  int iVar38;
  int iVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 local_488;
  undefined4 local_480 [256];
  undefined4 *local_80;
  
  uVar7 = _UNK_03889708;
  uVar6 = _DAT_03889700;
  if (((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) == 0) &&
     (*(char *)(*(long *)(param_4 + 0x88) + 0x18) == '\0')) {
    fVar3 = *(float *)(param_2 + 2);
    fVar4 = *(float *)((long)param_2 + 0x14);
    fVar5 = *(float *)(param_2 + 3);
    fVar10 = (float)*param_2;
    fVar12 = (float)((ulong)*param_2 >> 0x20);
    fVar13 = (float)param_2[1];
    local_488 = *param_3;
    puVar9 = (undefined4 *)((ulong)local_480 | 4);
    uVar14 = local_488;
    local_480[0] = param_5;
    do {
      while( true ) {
        local_80 = puVar9 + -1;
        pfVar1 = (float *)((long)param_1 + (long)(int)puVar9[-1] * 0x80 + *param_1);
        fVar32 = (float)*(undefined8 *)(pfVar1 + 6);
        fVar33 = (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20);
        fVar11 = (float)*(undefined8 *)(pfVar1 + 4);
        fVar31 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
        auVar35._0_4_ = fVar10 - fVar11;
        auVar35._4_4_ = fVar10 - fVar31;
        auVar35._8_4_ = fVar10 - fVar32;
        auVar35._12_4_ = fVar10 - fVar33;
        auVar36 = NEON_smax(auVar35,ZEXT816(0),4);
        auVar41._0_4_ = fVar12 - pfVar1[0xc];
        auVar41._4_4_ = fVar12 - pfVar1[0xd];
        auVar41._8_4_ = fVar12 - pfVar1[0xe];
        auVar41._12_4_ = fVar12 - pfVar1[0xf];
        auVar42 = NEON_smax(auVar41,ZEXT816(0),4);
        auVar37._4_4_ = fVar3 - pfVar1[1];
        auVar37._0_4_ = fVar3 - *pfVar1;
        auVar37._8_4_ = fVar3 - pfVar1[2];
        auVar37._12_4_ = fVar3 - pfVar1[3];
        auVar37 = NEON_smin(auVar36,auVar37,4);
        auVar36._4_4_ = fVar4 - (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20);
        auVar36._0_4_ = fVar4 - (float)*(undefined8 *)(pfVar1 + 8);
        auVar36._8_4_ = fVar4 - (float)*(undefined8 *)(pfVar1 + 10);
        auVar36._12_4_ = fVar4 - (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20);
        auVar36 = NEON_smin(auVar42,auVar36,4);
        auVar43._0_4_ = fVar13 - pfVar1[0x14];
        auVar43._4_4_ = fVar13 - pfVar1[0x15];
        auVar43._8_4_ = fVar13 - pfVar1[0x16];
        auVar43._12_4_ = fVar13 - pfVar1[0x17];
        auVar44 = NEON_smax(auVar43,ZEXT816(0),4);
        auVar42._4_4_ = fVar5 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20);
        auVar42._0_4_ = fVar5 - (float)*(undefined8 *)(pfVar1 + 0x10);
        auVar42._8_4_ = fVar5 - (float)*(undefined8 *)(pfVar1 + 0x12);
        auVar42._12_4_ = fVar5 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20);
        auVar42 = NEON_smin(auVar44,auVar42,4);
        iVar16 = -(uint)(*pfVar1 <= fVar11);
        iVar25 = -(uint)(pfVar1[1] <= fVar31);
        iVar29 = -(uint)(pfVar1[2] <= fVar32);
        iVar30 = -(uint)(pfVar1[3] <= fVar33);
        fVar11 = (float)local_488;
        iVar34 = -(uint)(auVar37._0_4_ * auVar37._0_4_ + auVar36._0_4_ * auVar36._0_4_ +
                         auVar42._0_4_ * auVar42._0_4_ <= fVar11);
        iVar38 = -(uint)(auVar37._4_4_ * auVar37._4_4_ + auVar36._4_4_ * auVar36._4_4_ +
                         auVar42._4_4_ * auVar42._4_4_ <= (float)((ulong)local_488 >> 0x20));
        iVar39 = -(uint)(auVar37._8_4_ * auVar37._8_4_ + auVar36._8_4_ * auVar36._8_4_ +
                         auVar42._8_4_ * auVar42._8_4_ <= (float)uVar14);
        iVar40 = -(uint)(auVar37._12_4_ * auVar37._12_4_ + auVar36._12_4_ * auVar36._12_4_ +
                         auVar42._12_4_ * auVar42._12_4_ <= (float)((ulong)uVar14 >> 0x20));
        bVar15 = (byte)iVar34 & (byte)iVar16;
        bVar21 = (byte)((uint)iVar34 >> 8) & (byte)((uint)iVar16 >> 8);
        bVar22 = (byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar16 >> 0x10);
        bVar23 = (byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar16 >> 0x18);
        iVar16 = CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar15)));
        bVar24 = (byte)iVar38 & (byte)iVar25;
        bVar26 = (byte)((uint)iVar38 >> 8) & (byte)((uint)iVar25 >> 8);
        bVar27 = (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar25 >> 0x10);
        bVar28 = (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar25 >> 0x18);
        auVar18._0_8_ = CONCAT17(bVar28,CONCAT16(bVar27,CONCAT15(bVar26,CONCAT14(bVar24,iVar16))));
        auVar18[8] = (byte)iVar39 & (byte)iVar29;
        auVar18[9] = (byte)((uint)iVar39 >> 8) & (byte)((uint)iVar29 >> 8);
        auVar18[10] = (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar29 >> 0x10);
        auVar18[0xb] = (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar29 >> 0x18);
        auVar44[0xc] = (byte)iVar40 & (byte)iVar30;
        auVar44._0_12_ = auVar18;
        auVar44[0xd] = (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar30 >> 8);
        auVar44[0xe] = (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar30 >> 0x10);
        auVar44[0xf] = (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar30 >> 0x18);
        if (((iVar16 == 0 && (int)((ulong)auVar18._0_8_ >> 0x20) == 0) && auVar18._8_4_ == 0) &&
            auVar44._12_4_ == 0) break;
        iVar16 = CONCAT13(bVar23 & (byte)((ulong)uVar6 >> 0x18),
                          CONCAT12(bVar22 & (byte)((ulong)uVar6 >> 0x10),
                                   CONCAT11(bVar21 & (byte)((ulong)uVar6 >> 8),bVar15 & (byte)uVar6)
                                  ));
        auVar19._0_8_ =
             CONCAT17(bVar28 & (byte)((ulong)uVar6 >> 0x38),
                      CONCAT16(bVar27 & (byte)((ulong)uVar6 >> 0x30),
                               CONCAT15(bVar26 & (byte)((ulong)uVar6 >> 0x28),
                                        CONCAT14(bVar24 & (byte)((ulong)uVar6 >> 0x20),iVar16))));
        auVar19[8] = auVar18[8] & (byte)uVar7;
        auVar19[9] = auVar18[9] & (byte)((ulong)uVar7 >> 8);
        auVar19[10] = auVar18[10] & (byte)((ulong)uVar7 >> 0x10);
        auVar19[0xb] = auVar18[0xb] & (byte)((ulong)uVar7 >> 0x18);
        auVar20[0xc] = auVar44[0xc] & (byte)((ulong)uVar7 >> 0x20);
        auVar20._0_12_ = auVar19;
        auVar20[0xd] = auVar44[0xd] & (byte)((ulong)uVar7 >> 0x28);
        auVar20[0xe] = auVar44[0xe] & (byte)((ulong)uVar7 >> 0x30);
        auVar20[0xf] = auVar44[0xf] & (byte)((ulong)uVar7 >> 0x38);
        uVar17 = iVar16 + (int)((ulong)auVar19._0_8_ >> 0x20) + auVar19._8_4_ + auVar20._12_4_;
        iVar16 = *(int *)(&DAT_03aadfe0 + (ulong)uVar17 * 4);
        auVar2._12_4_ = (int)((ulong)*(undefined8 *)(pfVar1 + 0x1a) >> 0x20);
        auVar2._0_12_ = *(undefined1 (*) [12])(pfVar1 + 0x18);
        auVar36 = a64_TBL(ZEXT816(0),auVar2,
                          *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar17 * 0x10));
        if (*(char *)(pfVar1 + 0x1c) == '\0') {
          *(ulong *)(puVar9 + -1) = auVar36._0_8_;
          auVar36 = NEON_ext(auVar36,auVar36,8,1);
          *(long *)(puVar9 + 1) = auVar36._0_8_;
          local_80 = local_80 + iVar16;
        }
        else {
          local_488 = CONCAT44(fVar11,fVar11);
          if (uVar17 != 0) {
            FUN_02f7b344(param_4,(ulong)auVar36._0_4_,&local_488);
            if (iVar16 != 1) {
              iVar25 = 1;
              do {
                switch(iVar25) {
                case 0:
                  uVar8 = (ulong)auVar36._0_4_;
                  break;
                case 1:
                  uVar8 = auVar36._0_8_ >> 0x20;
                  break;
                case 2:
                  uVar8 = (ulong)auVar36._8_4_;
                  break;
                case 3:
                  uVar8 = (ulong)auVar36._12_4_;
                  break;
                default:
                  uVar8 = 0;
                }
                FUN_02f7b344(param_4,uVar8,&local_488);
                iVar25 = iVar25 + 1;
              } while (iVar16 != iVar25);
            }
          }
          if ((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) != 0) {
            return;
          }
          uVar14 = local_488;
          if (*(char *)(*(long *)(param_4 + 0x88) + 0x18) != '\0') {
            return;
          }
        }
        puVar9 = local_80;
        if (local_480 == local_80) {
          return;
        }
      }
      puVar9 = local_80;
    } while (local_480 != local_80);
  }
  return;
}


