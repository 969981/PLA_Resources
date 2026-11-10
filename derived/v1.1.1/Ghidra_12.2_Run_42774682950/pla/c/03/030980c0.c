/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030980c0; name: FUN_030980c0
 */


void FUN_030980c0(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  
  do {
    uVar5 = *(uint *)(param_1 + (long)(param_2 + param_3 >> 1) * 0x30 + 0x20);
    iVar15 = param_2;
    iVar9 = param_3;
    do {
      puVar8 = (undefined8 *)(param_1 + -0x30 + (long)iVar15 * 0x30);
      do {
        iVar7 = iVar15;
        puVar11 = puVar8;
        puVar8 = puVar11 + 6;
        iVar15 = iVar7 + 1;
      } while (*(uint *)(puVar11 + 10) < uVar5);
      puVar13 = (undefined8 *)(param_1 + 0x30 + (long)iVar9 * 0x30);
      iVar9 = iVar9 + 1;
      do {
        iVar10 = iVar9;
        puVar12 = puVar13;
        uVar6 = *(uint *)(puVar12 + -2);
        puVar13 = puVar12 + -6;
        iVar9 = iVar10 + -1;
      } while (uVar5 < uVar6);
      iVar15 = iVar7;
      if (iVar7 <= iVar9) {
        if (iVar7 != iVar9) {
          uVar1 = puVar12[-4];
          uVar2 = *puVar13;
          uVar3 = puVar12[-5];
          uVar14 = puVar11[8];
          uVar4 = puVar11[7];
          *puVar13 = *puVar8;
          puVar12[-5] = uVar4;
          puVar12[-4] = uVar14;
          *(undefined4 *)(puVar12 + -2) = *(undefined4 *)(puVar11 + 10);
          puVar11[7] = uVar3;
          puVar11[8] = uVar1;
          *puVar8 = uVar2;
          *(uint *)(puVar11 + 10) = uVar6;
        }
        iVar9 = iVar10 + -2;
        iVar15 = iVar7 + 1;
      }
    } while (iVar15 <= iVar9);
    if (param_2 < iVar9) {
      FUN_030980c0(param_1);
    }
    param_2 = iVar15;
  } while (iVar15 < param_3);
  return;
}


