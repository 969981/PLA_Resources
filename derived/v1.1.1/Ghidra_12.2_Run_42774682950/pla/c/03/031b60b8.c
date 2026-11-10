/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b60b8; name: FUN_031b60b8
 */


void FUN_031b60b8(long param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  plVar2 = *(long **)(param_1 + 8);
  uVar5 = param_2 >> 0x16 & 0x3ff;
  iVar4 = (int)uVar5;
  if ((int)plVar2[0xe] != iVar4) {
    plVar2[3] = *(long *)(*(long *)(*plVar2 + 0x38) + uVar5 * 0xf0 + 0x10);
    *(int *)(plVar2 + 0xe) = iVar4;
    plVar2 = *(long **)(param_1 + 8);
  }
  lVar3 = plVar2[3];
  uVar10 = *(undefined8 *)(lVar3 + 0x40);
  uVar11 = *(undefined8 *)(lVar3 + 0x50);
  uVar12 = *(undefined8 *)(lVar3 + 0x60);
  uVar13 = *(undefined8 *)(lVar3 + 0x70);
  puVar1 = (undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0x38) + (param_2 & 0x3fffff) * 0x10);
  uVar7 = *puVar1;
  fVar6 = (float)uVar7;
  fVar8 = (float)((ulong)uVar7 >> 0x20);
  fVar9 = (float)puVar1[1];
  param_3[1] = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x78) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar3 + 0x68) >> 0x20) * fVar9 +
                        (float)((ulong)*(undefined8 *)(lVar3 + 0x48) >> 0x20) * fVar6 +
                        (float)((ulong)*(undefined8 *)(lVar3 + 0x58) >> 0x20) * fVar8,
                        (float)*(undefined8 *)(lVar3 + 0x78) +
                        (float)*(undefined8 *)(lVar3 + 0x68) * fVar9 +
                        (float)*(undefined8 *)(lVar3 + 0x48) * fVar6 +
                        (float)*(undefined8 *)(lVar3 + 0x58) * fVar8);
  *param_3 = CONCAT44((float)((ulong)uVar13 >> 0x20) +
                      (float)((ulong)uVar12 >> 0x20) * fVar9 +
                      (float)((ulong)uVar10 >> 0x20) * fVar6 +
                      (float)((ulong)uVar11 >> 0x20) * fVar8,
                      (float)uVar13 +
                      (float)uVar12 * fVar9 + (float)uVar10 * fVar6 + (float)uVar11 * fVar8);
  return;
}


