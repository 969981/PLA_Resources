/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b9d98; name: FUN_031b9d98
 */


void FUN_031b9d98(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar13;
  undefined8 uVar12;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar9 = *(long *)(param_1 + 0x20);
  piVar8 = (int *)FUN_031b9f50(*(undefined8 *)(lVar9 + 0x28),*(undefined4 *)(lVar9 + 0x30),
                               lVar9 + 0xc0,lVar9 + 0xe0,*(undefined8 *)(lVar9 + 0x58),lVar9 + 0x130
                               ,lVar9 + 0x150,lVar9 + 0x70,*param_2,*(undefined4 *)(lVar9 + 0x60),
                               param_5);
  iVar6 = *(int *)(lVar9 + 0x40);
  iVar4 = *piVar8;
  iVar5 = piVar8[1];
  uVar12 = *(undefined8 *)(param_1 + 0x60);
  uVar16 = *(undefined8 *)(param_1 + 0x70);
  uVar17 = *(undefined8 *)(param_1 + 0x80);
  uVar18 = *(undefined8 *)(param_1 + 0x90);
  iVar1 = 0;
  if (iVar6 <= iVar4) {
    iVar1 = iVar6;
  }
  plVar2 = (long *)(lVar9 + 0x38);
  if (iVar6 <= iVar4) {
    plVar2 = (long *)(lVar9 + 0xf0);
  }
  plVar3 = (long *)(lVar9 + 0x38);
  if (iVar6 <= iVar5) {
    plVar3 = (long *)(lVar9 + 0xf0);
  }
  puVar7 = (undefined8 *)(*plVar2 + (long)(iVar4 - iVar1) * 0x10);
  uVar11 = *puVar7;
  fVar10 = (float)uVar11;
  iVar1 = 0;
  if (iVar6 <= iVar5) {
    iVar1 = iVar6;
  }
  fVar13 = (float)((ulong)uVar11 >> 0x20);
  fVar14 = (float)puVar7[1];
  puVar7 = (undefined8 *)(*plVar3 + (long)(iVar5 - iVar1) * 0x10);
  uVar15 = puVar7[1];
  uVar11 = *puVar7;
  param_3[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * fVar14 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) * fVar10 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar13,
                        (float)*(undefined8 *)(param_1 + 0x98) +
                        (float)*(undefined8 *)(param_1 + 0x88) * fVar14 +
                        (float)*(undefined8 *)(param_1 + 0x68) * fVar10 +
                        (float)*(undefined8 *)(param_1 + 0x78) * fVar13);
  *param_3 = CONCAT44((float)((ulong)uVar18 >> 0x20) +
                      (float)((ulong)uVar17 >> 0x20) * fVar14 +
                      (float)((ulong)uVar12 >> 0x20) * fVar10 +
                      (float)((ulong)uVar16 >> 0x20) * fVar13,
                      (float)uVar18 +
                      (float)uVar17 * fVar14 + (float)uVar12 * fVar10 + (float)uVar16 * fVar13);
  uVar12 = *(undefined8 *)(param_1 + 0x60);
  uVar16 = *(undefined8 *)(param_1 + 0x70);
  uVar17 = *(undefined8 *)(param_1 + 0x80);
  uVar18 = *(undefined8 *)(param_1 + 0x90);
  fVar13 = (float)((ulong)uVar11 >> 0x20);
  fVar10 = (float)uVar11;
  fVar14 = (float)uVar15;
  param_4[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * fVar14 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) * fVar10 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar13,
                        (float)*(undefined8 *)(param_1 + 0x98) +
                        (float)*(undefined8 *)(param_1 + 0x88) * fVar14 +
                        (float)*(undefined8 *)(param_1 + 0x68) * fVar10 +
                        (float)*(undefined8 *)(param_1 + 0x78) * fVar13);
  *param_4 = CONCAT44((float)((ulong)uVar18 >> 0x20) +
                      (float)((ulong)uVar17 >> 0x20) * fVar14 +
                      (float)((ulong)uVar12 >> 0x20) * fVar10 +
                      (float)((ulong)uVar16 >> 0x20) * fVar13,
                      (float)uVar18 +
                      (float)uVar17 * fVar14 + (float)uVar12 * fVar10 + (float)uVar16 * fVar13);
  return;
}


