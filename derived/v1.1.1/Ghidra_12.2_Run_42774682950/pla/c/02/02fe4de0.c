/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe4de0; name: FUN_02fe4de0
 */


undefined8 * FUN_02fe4de0(long param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  uVar2 = *(undefined1 *)(param_2 + 0x19);
  puVar8[1] = 0xffffffff;
  puVar8[2] = 1;
  *(undefined1 *)((long)puVar8 + 0x19) = uVar2;
  *(undefined2 *)((long)puVar8 + 0x1a) = 0;
  *(undefined1 *)((long)puVar8 + 0x1c) = 0;
  *(undefined1 *)(puVar8 + 3) = 0x11;
  *(undefined4 *)(puVar8 + 4) = 0;
  *puVar8 = &PTR_LAB_042babd0;
  lVar6 = 0;
  if (param_2 != 0) {
    lVar6 = param_2 - (long)(puVar8 + 8);
  }
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = lVar6;
  uVar1 = *(ushort *)(param_2 + 0x1a) & 0x8080;
  *(ushort *)((long)puVar8 + 0x1a) = uVar1;
  *puVar8 = &PTR_LAB_042baa28;
  *(ushort *)((long)puVar8 + 0x1a) = uVar1 | *(ushort *)(param_2 + 0x1a) & 0x8010;
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar6 + (long)(puVar8 + 8);
  }
  uVar11 = *param_3;
  puVar9 = puVar8 + 10;
  puVar8[0xb] = param_3[1];
  *puVar9 = uVar11;
  *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(lVar6 + 0x20);
  iVar3 = *(int *)(lVar6 + 0x40);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (long)iVar3 + lVar6 + 0x40;
  }
  FUN_02ffe20c(lVar5,*(undefined4 *)(lVar6 + 0x44),param_4,puVar9,puVar8 + 4,puVar8 + 0xc);
  puVar8[1] = 0;
  fVar10 = (float)*puVar9;
  fVar12 = (float)((ulong)*puVar9 >> 0x20);
  uVar13 = -(uint)(fVar12 < 0.0);
  uVar14 = -(uint)((float)puVar8[0xb] < 0.0);
  uVar7 = uVar13 & 2;
  uVar4 = (uVar7 + (fVar10 < 0.0) | uVar14 & 4) - (uVar7 >> 1);
  uVar7 = 0;
  if ((float)puVar8[0xb] == fVar10 && fVar12 == fVar10) {
    uVar7 = (uint)((-(uint)(fVar10 < 0.0) & uVar13 & uVar14) == 0);
  }
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  *(uint *)((long)puVar8 + 0x5c) =
       (uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x17 & 2 | uVar7 | 0x3f000000;
  *(undefined8 **)(param_1 + 8) = puVar8;
  return puVar8;
}


