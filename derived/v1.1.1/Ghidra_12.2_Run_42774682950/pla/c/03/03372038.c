/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03372038; name: FUN_03372038
 */


void FUN_03372038(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar8 = PTR_DAT_04389418;
  param_1[2] = 1;
  *param_1 = (long)(puVar8 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[5] = *(long *)(param_2 + 0x28);
  param_1[4] = *(long *)(param_2 + 0x20);
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  lVar9 = FUN_032cf5b0(0x20);
  FUN_0332cf84();
  param_1[9] = lVar9;
  iVar6 = *(int *)(param_2 + 0x38);
  iVar7 = (int)param_1[7];
  puVar12 = *(undefined8 **)(param_2 + 0x30);
  lVar9 = param_1[6];
  iVar2 = iVar7 + iVar6;
  if ((int)(*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) < iVar2) {
    lVar9 = FUN_03372a5c(PTR_PTR_0434a080,iVar2,lVar9,iVar7);
    param_1[6] = lVar9;
  }
  if (iVar6 != 0) {
    puVar10 = (undefined8 *)(lVar9 + (long)iVar7 * 0x40);
    lVar9 = (long)iVar6 * 0x40 + -0x40;
    puVar11 = puVar12;
    if (((uint)lVar9 >> 6 & 1) == 0) {
      uVar3 = puVar12[6];
      uVar4 = puVar12[7];
      puVar10[5] = puVar12[5];
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      uVar3 = puVar12[2];
      uVar4 = puVar12[3];
      puVar10[1] = puVar12[1];
      puVar10[2] = uVar3;
      puVar10[3] = uVar4;
      *puVar10 = *puVar12;
      puVar10[4] = puVar12[4];
      puVar10 = puVar10 + 8;
      puVar11 = puVar12 + 8;
    }
    if (lVar9 != 0) {
      do {
        uVar3 = puVar11[6];
        uVar4 = puVar11[7];
        puVar10[5] = puVar11[5];
        puVar10[6] = uVar3;
        puVar10[7] = uVar4;
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        puVar10[1] = puVar11[1];
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
        *puVar10 = *puVar11;
        puVar10[4] = puVar11[4];
        uVar3 = puVar11[8];
        uVar4 = puVar11[9];
        uVar5 = puVar11[0xb];
        puVar10[10] = puVar11[10];
        puVar10[0xb] = uVar5;
        puVar10[8] = uVar3;
        puVar10[9] = uVar4;
        uVar3 = puVar11[0xc];
        uVar4 = puVar11[0xd];
        puVar1 = puVar11 + 0xe;
        uVar5 = puVar11[0xf];
        puVar11 = puVar11 + 0x10;
        puVar10[0xe] = *puVar1;
        puVar10[0xf] = uVar5;
        puVar10[0xc] = uVar3;
        puVar10[0xd] = uVar4;
        puVar10 = puVar10 + 0x10;
      } while (puVar11 != puVar12 + (long)iVar6 * 8);
    }
  }
  *(int *)(param_1 + 7) = iVar2;
  return;
}


