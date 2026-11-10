/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b0d4c; name: FUN_016b0d4c
 */


void FUN_016b0d4c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  size_t sVar7;
  byte *pbVar8;
  int *piVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  float fVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined4 uVar15;
  uint uVar16;
  undefined8 local_58;
  
  puVar11 = &DAT_cbf29ce484222645;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03996322;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = *(undefined8 *)PTR_DAT_04379570;
  uVar3 = *(undefined8 *)(PTR_DAT_04379570 + 8);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  local_58 = param_3;
  lVar6 = FUN_01675fe0(param_2 + 0x78,&local_58);
  if (lVar6 == 0) {
    return;
  }
  piVar9 = *(int **)(lVar6 + 0x18);
  puVar10 = (ushort *)((long)piVar9 - (long)*piVar9);
  uVar5 = *puVar10;
  if (uVar5 < 0x13) {
    fVar12 = (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0) * 0.0;
    if (10 < uVar5) goto LAB_016b0dfc;
  }
  else {
    if ((ulong)puVar10[9] == 0) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = *(float *)((long)piVar9 + (ulong)puVar10[9]);
    }
    fVar12 = fVar12 * (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0);
LAB_016b0dfc:
    if ((ulong)puVar10[5] != 0) {
      puVar1 = (uint *)((long)piVar9 + (ulong)puVar10[5]);
      lVar6 = (long)puVar1 + (ulong)*puVar1;
      goto LAB_016b0e10;
    }
  }
  lVar6 = 0;
LAB_016b0e10:
  sVar7 = strlen((char *)(lVar6 + 4));
  bVar4 = *(byte *)(lVar6 + 4);
  if (bVar4 != 0) {
    pbVar8 = (byte *)(lVar6 + 5);
    do {
      puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar4 != 0);
  }
  *param_1 = puVar11;
  param_1[1] = (char *)(lVar6 + 4);
  param_1[2] = sVar7;
  param_1[3] = 0;
  if (uVar5 < 0xd) {
    uVar13 = 0;
    uVar15 = 0;
    uVar16 = 0;
  }
  else {
    uVar13 = 0;
    uVar15 = 0;
    if ((ulong)puVar10[6] != 0) {
      uVar15 = *(undefined4 *)((long)piVar9 + (ulong)puVar10[6]);
    }
    if (uVar5 < 0xf) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      uVar13 = 0;
      if ((ulong)puVar10[7] != 0) {
        uVar13 = *(undefined4 *)((long)piVar9 + (ulong)puVar10[7]);
      }
      if ((0x10 < uVar5) && ((ulong)puVar10[8] != 0)) {
        uVar16 = *(uint *)((long)piVar9 + (ulong)puVar10[8]);
      }
    }
  }
  param_1[5] = (ulong)uVar16;
  param_1[4] = CONCAT44(uVar13,uVar15);
  auVar14 = FUN_009a7ff4(fVar12,0,0);
  *(undefined1 (*) [16])(param_1 + 6) = auVar14;
  return;
}


