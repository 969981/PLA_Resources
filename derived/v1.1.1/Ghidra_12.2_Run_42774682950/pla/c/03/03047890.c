/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03047890; name: FUN_03047890
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03047890(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  
  uVar9 = _UNK_03889ca8;
  uVar8 = _DAT_03889ca0;
  if (0 < (int)param_2) {
    uVar15 = 0xffffffff;
    iVar17 = 0;
    uVar11 = 0;
    iVar14 = 0;
    lVar19 = (long)(int)param_2;
    uVar18 = 0x7fffffff;
    uVar12 = 0xffffffff;
    uVar13 = 0xffffffff;
    uVar16 = param_2;
    do {
      uVar16 = uVar16 - 1;
      uVar5 = *(uint *)(param_1 + 0x24 + lVar19 * 4);
      lVar19 = lVar19 + -1;
      uVar1 = uVar5;
      uVar4 = uVar16;
      if ((int)uVar5 <= (int)uVar11) {
        uVar1 = uVar11;
        uVar4 = (uint)uVar12;
      }
      uVar2 = uVar18;
      uVar7 = (uint)uVar15;
      if ((int)uVar5 <= (int)uVar18) {
        uVar2 = uVar5;
        uVar7 = uVar16;
      }
      uVar3 = (uint)uVar12;
      uVar10 = uVar16;
      if (0 < (int)uVar5) {
        iVar14 = iVar14 + 1;
        uVar3 = uVar4;
        uVar10 = uVar13;
      }
      uVar13 = uVar10;
      uVar12 = (ulong)uVar3;
      uVar4 = (uint)uVar15;
      if (0 < (int)uVar5) {
        uVar4 = uVar7;
        uVar11 = uVar1;
      }
      uVar15 = (ulong)uVar4;
      if (0 < (int)uVar5) {
        iVar17 = uVar5 + iVar17;
        uVar18 = uVar2;
      }
    } while (0 < lVar19);
    uVar16 = iVar17 >> 3;
    if ((int)param_2 <= iVar17 >> 3) {
      uVar16 = param_2;
    }
    if ((int)uVar16 < 2) {
      uVar16 = 1;
    }
    if ((int)uVar16 < iVar14) {
      uVar15 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
      lVar19 = param_1 + 0x28;
      iVar14 = *(int *)(lVar19 + uVar15);
      *(undefined4 *)(lVar19 + uVar15) = 0;
      uVar12 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
      *(int *)(lVar19 + uVar12) = *(int *)(lVar19 + uVar12) + iVar14;
    }
    else if ((0xe < (int)uVar11) && (iVar14 < (int)uVar16)) {
      uVar15 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
      lVar19 = param_1 + 0xb0;
      uVar21 = ((undefined8 *)(lVar19 + uVar15))[1];
      uVar20 = *(undefined8 *)(lVar19 + uVar15);
      fVar22 = (float)_DAT_0388a100;
      uVar12 = (ulong)_DAT_0388a100 >> 0x20;
      puVar6 = (undefined8 *)(lVar19 + (long)(int)uVar13 * 0x10);
      puVar6[1] = CONCAT44((float)((ulong)uVar21 >> 0x20) + (float)((ulong)_UNK_0388a108 >> 0x20),
                           (float)uVar21 + (float)_UNK_0388a108);
      *puVar6 = CONCAT44((float)((ulong)uVar20 >> 0x20) + (float)uVar12,(float)uVar20 + fVar22);
      uVar21 = ((undefined8 *)(lVar19 + uVar15))[1];
      uVar20 = *(undefined8 *)(lVar19 + uVar15);
      ((undefined8 *)(lVar19 + uVar15))[1] =
           CONCAT44((float)((ulong)uVar21 >> 0x20) + (float)((ulong)uVar9 >> 0x20),
                    (float)uVar21 + (float)uVar9);
      *(undefined8 *)(lVar19 + uVar15) =
           CONCAT44((float)((ulong)uVar20 >> 0x20) + (float)((ulong)uVar8 >> 0x20),
                    (float)uVar20 + (float)uVar8);
      *(uint *)(param_1 + 0x28 + (long)(int)uVar3 * 4) = uVar11 >> 1;
      *(uint *)(param_1 + 0x28 + (long)(int)uVar13 * 4) = uVar11 >> 1;
    }
    uVar12 = 0;
    do {
      if (*(int *)(param_1 + 0xb0 + uVar12 * 4 + -0x88) == 0) {
        puVar6 = (undefined8 *)(param_1 + 0xb0 + uVar12 * 0x10);
        puVar6[1] = 0x4b0000004b000000;
        *puVar6 = 0x4b0000004b000000;
      }
      uVar12 = uVar12 + 1;
    } while (param_2 != uVar12);
  }
  return;
}


