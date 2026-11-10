/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f706c8; name: FUN_02f706c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f706c8(long param_1,ushort *param_2,uint param_3,long param_4,float *param_5)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  ushort *puVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  int iVar21;
  undefined1 auVar18 [16];
  int iVar22;
  int iVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined8 uVar28;
  
  if (0 < (int)param_3) {
    plVar1 = (long *)(param_1 + 0x48);
    if (param_4 == 0) {
      if (param_5 != (float *)0x0) {
        fVar6 = param_5[1];
        fVar7 = param_5[2];
        lVar11 = (ulong)*param_2 * 0x40 + *plVar1;
        bVar5 = *(byte *)((long)plVar1 + lVar11 + 0x1e);
        *(float *)((long)plVar1 + lVar11 + 0x20) = *param_5;
        *(float *)((long)plVar1 + lVar11 + 0x24) = fVar6;
        *(float *)((long)plVar1 + lVar11 + 0x28) = fVar7;
        auVar18 = NEON_fmov(0x3f800000,4);
        bVar24 = (byte)_DAT_03889700;
        bVar25 = (byte)((ulong)_DAT_03889700 >> 0x20);
        bVar26 = (byte)_UNK_03889708;
        bVar27 = (byte)((ulong)_UNK_03889708 >> 0x20);
        bVar3 = bVar5 & 0xf7;
        if (((~-((float)*(undefined8 *)param_5 == auVar18._0_4_) & bVar24) +
             (~-((float)((ulong)*(undefined8 *)param_5 >> 0x20) == auVar18._4_4_) & bVar25) +
             (~-((float)*(undefined8 *)(param_5 + 2) == auVar18._8_4_) & bVar26) +
             (~-((float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20) == auVar18._12_4_) & bVar27) &
            7) != 0) {
          bVar3 = bVar5 | 8;
        }
        bVar4 = bVar3 & 0xdf;
        if ((bVar5 & 0x20) != 0) {
          bVar4 = bVar3 | 0x20;
        }
        *(byte *)((long)plVar1 + lVar11 + 0x1e) = bVar4;
        if (param_3 != 1) {
          lVar11 = (ulong)param_3 - 1;
          puVar12 = param_2;
          do {
            pfVar13 = param_5 + 4;
            puVar12 = puVar12 + 1;
            lVar2 = (ulong)*puVar12 * 0x40 + *plVar1;
            bVar5 = *(byte *)((long)plVar1 + lVar2 + 0x1e);
            uVar28 = *(undefined8 *)(param_5 + 6);
            *(undefined8 *)((long)plVar1 + lVar2 + 0x20) = *(undefined8 *)pfVar13;
            *(int *)((long)plVar1 + lVar2 + 0x28) = (int)uVar28;
            bVar3 = bVar5 & 0xf7;
            if (((~-((float)*(undefined8 *)pfVar13 == auVar18._0_4_) & bVar24) +
                 (~-((float)((ulong)*(undefined8 *)pfVar13 >> 0x20) == auVar18._4_4_) & bVar25) +
                 (~-((float)*(undefined8 *)(param_5 + 6) == auVar18._8_4_) & bVar26) +
                 (~-((float)((ulong)*(undefined8 *)(param_5 + 6) >> 0x20) == auVar18._12_4_) &
                 bVar27) & 7) != 0) {
              bVar3 = bVar5 | 8;
            }
            bVar4 = bVar3 & 0xdf;
            if ((bVar5 & 0x20) != 0) {
              bVar4 = bVar3 | 0x20;
            }
            lVar11 = lVar11 + -1;
            *(byte *)((long)plVar1 + lVar2 + 0x1e) = bVar4;
            param_5 = pfVar13;
          } while (lVar11 != 0);
        }
      }
    }
    else {
      lVar11 = (long)plVar1 + (ulong)*param_2 * 0x40 + *plVar1;
      FUN_02fa27bc(lVar11,param_4);
      auVar18 = NEON_fmov(0x3f800000,4);
      if (param_5 != (float *)0x0) {
        fVar6 = param_5[1];
        fVar7 = param_5[2];
        bVar5 = *(byte *)(lVar11 + 0x1e);
        *(float *)(lVar11 + 0x20) = *param_5;
        *(float *)(lVar11 + 0x24) = fVar6;
        *(float *)(lVar11 + 0x28) = fVar7;
        iVar21 = -(uint)(param_5[1] == auVar18._4_4_);
        iVar22 = -(uint)(param_5[2] == auVar18._8_4_);
        iVar23 = -(uint)(param_5[3] == auVar18._12_4_);
        uVar15 = (uint)(byte)(~-(*param_5 == auVar18._0_4_) & (byte)_DAT_03889700);
        auVar16._0_8_ =
             CONCAT17(~(byte)((uint)iVar21 >> 0x18) & (byte)((ulong)_DAT_03889700 >> 0x38),
                      (uint7)CONCAT14(~(byte)iVar21 & (byte)((ulong)_DAT_03889700 >> 0x20),uVar15));
        auVar16[8] = ~(byte)iVar22 & (byte)_UNK_03889708;
        auVar16[9] = ~(byte)((uint)iVar22 >> 8) & (byte)((ulong)_UNK_03889708 >> 8);
        auVar16[10] = ~(byte)((uint)iVar22 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x10);
        auVar16[0xb] = ~(byte)((uint)iVar22 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x18);
        auVar19[0xc] = ~(byte)iVar23 & (byte)((ulong)_UNK_03889708 >> 0x20);
        auVar19._0_12_ = auVar16;
        auVar19[0xd] = ~(byte)((uint)iVar23 >> 8) & (byte)((ulong)_UNK_03889708 >> 0x28);
        auVar19[0xe] = ~(byte)((uint)iVar23 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x30);
        auVar19[0xf] = ~(byte)((uint)iVar23 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x38);
        bVar3 = bVar5 & 0xf7;
        if ((uVar15 + (int)((ulong)auVar16._0_8_ >> 0x20) + auVar16._8_4_ + auVar19._12_4_ & 7) != 0
           ) {
          bVar3 = bVar5 | 8;
        }
        bVar24 = bVar3 & 0xdf;
        if ((bVar5 & 0x20) != 0) {
          bVar24 = bVar3 | 0x20;
        }
        *(byte *)(lVar11 + 0x1e) = bVar24;
      }
      uVar8 = _UNK_03889708;
      uVar28 = _DAT_03889700;
      if (param_3 != 1) {
        lVar11 = (ulong)param_3 - 1;
        pfVar13 = param_5;
        puVar12 = param_2;
        do {
          puVar12 = puVar12 + 1;
          pfVar14 = pfVar13 + 4;
          param_4 = param_4 + 0x20;
          lVar2 = (long)plVar1 + (ulong)*puVar12 * 0x40 + *plVar1;
          FUN_02fa27bc(lVar2,param_4,param_3);
          if (param_5 != (float *)0x0) {
            fVar6 = pfVar13[5];
            fVar7 = pfVar13[6];
            *(float *)(lVar2 + 0x20) = *pfVar14;
            *(float *)(lVar2 + 0x24) = fVar6;
            bVar5 = *(byte *)(lVar2 + 0x1e);
            *(float *)(lVar2 + 0x28) = fVar7;
            iVar21 = -(uint)(pfVar13[5] == auVar18._4_4_);
            iVar22 = -(uint)(pfVar13[6] == auVar18._8_4_);
            iVar23 = -(uint)(pfVar13[7] == auVar18._12_4_);
            uVar15 = (uint)(byte)(~-(*pfVar14 == auVar18._0_4_) & (byte)uVar28);
            auVar17._0_8_ =
                 CONCAT17(~(byte)((uint)iVar21 >> 0x18) & (byte)((ulong)uVar28 >> 0x38),
                          (uint7)CONCAT14(~(byte)iVar21 & (byte)((ulong)uVar28 >> 0x20),uVar15));
            auVar17[8] = ~(byte)iVar22 & (byte)uVar8;
            auVar17[9] = ~(byte)((uint)iVar22 >> 8) & (byte)((ulong)uVar8 >> 8);
            auVar17[10] = ~(byte)((uint)iVar22 >> 0x10) & (byte)((ulong)uVar8 >> 0x10);
            auVar17[0xb] = ~(byte)((uint)iVar22 >> 0x18) & (byte)((ulong)uVar8 >> 0x18);
            auVar20[0xc] = ~(byte)iVar23 & (byte)((ulong)uVar8 >> 0x20);
            auVar20._0_12_ = auVar17;
            auVar20[0xd] = ~(byte)((uint)iVar23 >> 8) & (byte)((ulong)uVar8 >> 0x28);
            auVar20[0xe] = ~(byte)((uint)iVar23 >> 0x10) & (byte)((ulong)uVar8 >> 0x30);
            auVar20[0xf] = ~(byte)((uint)iVar23 >> 0x18) & (byte)((ulong)uVar8 >> 0x38);
            bVar3 = bVar5 & 0xf7;
            if ((uVar15 + (int)((ulong)auVar17._0_8_ >> 0x20) + auVar17._8_4_ + auVar20._12_4_ & 7)
                != 0) {
              bVar3 = bVar5 | 8;
            }
            bVar24 = bVar3 & 0xdf;
            if ((bVar5 & 0x20) != 0) {
              bVar24 = bVar3 | 0x20;
            }
            *(byte *)(lVar2 + 0x1e) = bVar24;
          }
          lVar11 = lVar11 + -1;
          pfVar13 = pfVar14;
        } while (lVar11 != 0);
      }
    }
  }
  FUN_02f9b5dc(param_1,param_2);
  uVar9 = FUN_02f9b898(param_1);
  if (*(char *)(param_1 + 0x94) == '\0') {
    return;
  }
  uVar10 = 2;
  if ((uVar9 & 1) != 0) {
    uVar10 = 3;
  }
  FUN_02f6ff60(param_1 + 0xa0,param_1,uVar10);
  return;
}


