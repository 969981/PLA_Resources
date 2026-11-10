/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f4d04; name: FUN_031f4d04
 */


void FUN_031f4d04(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar7 = (long)*(int *)(param_1 + 0x20) + -1;
  lVar5 = *(long *)(param_1 + 0x18);
  lVar4 = lVar5 + lVar7 * 0x40;
  puVar1 = (undefined8 *)(lVar4 + 0x10);
  iVar3 = FUN_031f5e80(puVar1);
  if (iVar3 == 0) {
    uVar9 = *(undefined8 *)(lVar4 + 0x18);
    uVar8 = *(undefined8 *)(lVar4 + 0x10);
    FUN_031f5d88(puVar1,&local_50);
    fVar10 = (float)uVar8;
    fVar11 = (float)((ulong)uVar8 >> 0x20);
    fVar12 = (float)uVar9;
    fVar13 = (float)((ulong)uVar9 >> 0x20);
    local_50 = CONCAT44(fVar11 + ((float)((ulong)local_50 >> 0x20) - fVar11) * 0.5,
                        fVar10 + ((float)local_50 - fVar10) * 0.5);
    uStack_48 = CONCAT44(fVar13 + ((float)((ulong)uStack_48 >> 0x20) - fVar13) * 0.5,
                         fVar12 + ((float)uStack_48 - fVar12) * 0.5);
  }
  else {
    uStack_48 = *(undefined8 *)(lVar4 + 0x18);
    local_50 = *puVar1;
  }
  puVar1 = (undefined8 *)(lVar5 + lVar7 * 0x40);
  puVar1[1] = uStack_48;
  *puVar1 = local_50;
  uVar2 = *(int *)(param_1 + 0x20) - 2;
  if (-1 < (int)uVar2) {
    lVar4 = (long)(int)uVar2 + 1;
    uVar6 = -(ulong)(uVar2 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar2 << 6;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + uVar6);
      FUN_031f61a0(puVar1 + 2,&local_50,&local_50);
      lVar4 = lVar4 + -1;
      uVar6 = uVar6 - 0x40;
      puVar1[1] = uStack_48;
      *puVar1 = local_50;
    } while (0 < lVar4);
  }
  return;
}


