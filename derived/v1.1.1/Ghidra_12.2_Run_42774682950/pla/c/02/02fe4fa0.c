/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe4fa0; name: FUN_02fe4fa0
 */


void FUN_02fe4fa0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar5 + param_1 + 0x40;
  }
  uVar3 = *param_2;
  puVar7 = (undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = param_2[1];
  *puVar7 = uVar3;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar5 + 0x20);
  iVar2 = *(int *)(lVar5 + 0x40);
  if (iVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (long)iVar2 + lVar5 + 0x40;
  }
  FUN_02ffe20c(lVar4,*(undefined4 *)(lVar5 + 0x44),param_3,puVar7,(undefined4 *)(param_1 + 0x20),
               param_1 + 0x60);
  fVar8 = (float)*puVar7;
  fVar9 = (float)((ulong)*puVar7 >> 0x20);
  fVar11 = (float)*(undefined8 *)(param_1 + 0x58);
  uVar10 = -(uint)(fVar9 < 0.0);
  uVar12 = -(uint)(fVar11 < 0.0);
  uVar1 = uVar10 & 2;
  uVar1 = (uVar1 + (fVar8 < 0.0) | uVar12 & 4) - (uVar1 >> 1);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar6 = 0;
  if (fVar11 == fVar8 && fVar9 == fVar8) {
    uVar6 = (uint)((-(uint)(fVar8 < 0.0) & uVar10 & uVar12) == 0);
  }
  *(uint *)(param_1 + 0x5c) =
       (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x17 & 2 | uVar6 | 0x3f000000;
  lVar5 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0x48))(param_1);
  if (lVar5 == 0) {
    return;
  }
  uVar3 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0x48))(param_1);
  FUN_02f6ff60(uVar3,param_1,3);
  return;
}


