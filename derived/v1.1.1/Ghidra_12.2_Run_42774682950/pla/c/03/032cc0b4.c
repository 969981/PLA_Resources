/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cc0b4; name: FUN_032cc0b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032cc0b4(undefined4 *param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined1 auVar21 [16];
  undefined8 uVar20;
  undefined1 auVar22 [16];
  
  uVar1 = param_2 + 3U >> 2;
  if (uVar1 != 0) {
    uVar10 = *param_1;
    uVar12 = param_1[1];
    uVar14 = param_1[2];
    uVar16 = param_1[3];
    uVar11 = param_1[4];
    uVar13 = param_1[5];
    uVar15 = param_1[6];
    uVar17 = param_1[7];
    auVar22 = *(undefined1 (*) [16])(param_1 + 8);
    auVar21 = NEON_ext(auVar22,auVar22,8,1);
    param_3[1] = (ulong)auVar22._0_4_;
    *param_3 = CONCAT44(uVar11,uVar10);
    param_3[3] = CONCAT44(1,auVar22._4_4_);
    param_3[2] = CONCAT44(uVar13,uVar12);
    param_3[5] = CONCAT44(2,auVar21._0_4_);
    param_3[4] = CONCAT44(uVar15,uVar14);
    param_3[7] = CONCAT44(3,auVar21._4_4_);
    param_3[6] = CONCAT44(uVar17,uVar16);
    if (uVar1 != 1) {
      iVar8 = (int)_UNK_03889088;
      iVar9 = (int)((ulong)_UNK_03889088 >> 0x20);
      iVar6 = (int)_DAT_03889080;
      iVar7 = (int)((ulong)_DAT_03889080 >> 0x20);
      lVar2 = (ulong)uVar1 - 1;
      puVar3 = param_3 + 0xe;
      pauVar5 = (undefined1 (*) [16])(param_1 + 0x14);
      do {
        lVar2 = lVar2 + -1;
        uVar10 = *(undefined4 *)pauVar5[-2];
        uVar12 = *(undefined4 *)(pauVar5[-2] + 4);
        uVar14 = *(undefined4 *)(pauVar5[-2] + 8);
        uVar16 = *(undefined4 *)(pauVar5[-2] + 0xc);
        uVar11 = *(undefined4 *)pauVar5[-1];
        uVar13 = *(undefined4 *)(pauVar5[-1] + 4);
        uVar15 = *(undefined4 *)(pauVar5[-1] + 8);
        uVar17 = *(undefined4 *)(pauVar5[-1] + 0xc);
        auVar22 = *pauVar5;
        uVar19 = CONCAT44(iVar6,auVar22._0_4_);
        uVar20 = CONCAT44(iVar7,auVar22._4_4_);
        auVar18 = NEON_ext(auVar22,auVar22,8,1);
        auVar22._4_4_ = iVar7;
        auVar22._0_4_ = iVar6;
        auVar22._8_4_ = iVar8;
        auVar22._12_4_ = iVar9;
        auVar21._4_4_ = iVar7;
        auVar21._0_4_ = iVar6;
        auVar21._8_4_ = iVar8;
        auVar21._12_4_ = iVar9;
        auVar22 = NEON_ext(auVar22,auVar21,8,1);
        iVar6 = iVar6 + 4;
        iVar7 = iVar7 + 4;
        iVar8 = iVar8 + 4;
        iVar9 = iVar9 + 4;
        puVar3[-5] = uVar19;
        puVar3[-6] = CONCAT44(uVar11,uVar10);
        puVar3[-3] = uVar20;
        puVar3[-4] = CONCAT44(uVar13,uVar12);
        puVar3[-1] = CONCAT44(auVar22._0_4_,auVar18._0_4_);
        puVar3[-2] = CONCAT44(uVar15,uVar14);
        puVar3[1] = CONCAT44(auVar22._4_4_,auVar18._4_4_);
        *puVar3 = CONCAT44(uVar17,uVar16);
        puVar3 = puVar3 + 8;
        pauVar5 = pauVar5 + 3;
      } while (lVar2 != 0);
    }
  }
  uVar1 = param_2 + 3U & 0xfffffffc;
  if (param_2 < (int)uVar1) {
    lVar4 = (long)param_2;
    lVar2 = (int)uVar1 - lVar4;
    puVar3 = param_3 + (long)param_2 * 2;
    do {
      uVar19 = param_3[lVar4 * 2 + -2];
      lVar2 = lVar2 + -1;
      puVar3[1] = param_3[lVar4 * 2 + -1];
      *puVar3 = uVar19;
      puVar3 = puVar3 + 2;
    } while (lVar2 != 0);
  }
  return;
}


