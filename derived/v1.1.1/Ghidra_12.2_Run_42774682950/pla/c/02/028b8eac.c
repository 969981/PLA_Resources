/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b8eac; name: FUN_028b8eac
 */


undefined8 FUN_028b8eac(undefined8 param_1,int *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ushort *puVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  float fVar16;
  undefined4 uVar17;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xd) {
    piVar8 = (int *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6];
    piVar8 = (int *)0x0;
    if (uVar7 != 0) {
      puVar12 = (uint *)((long)param_2 + uVar7);
      piVar8 = (int *)((long)puVar12 + (ulong)*puVar12);
    }
  }
  puVar10 = (ushort *)((long)piVar8 - (long)*piVar8);
  if (*puVar10 < 5) {
    lVar9 = 0;
LAB_028b90dc:
    puVar12 = (uint *)0x0;
  }
  else {
    lVar9 = 0;
    if ((ulong)puVar10[2] != 0) {
      puVar12 = (uint *)((long)piVar8 + (ulong)puVar10[2]);
      lVar9 = (long)puVar12 + (ulong)*puVar12;
    }
    if (*puVar10 < 7) goto LAB_028b90dc;
    puVar12 = (uint *)0x0;
    if ((ulong)puVar10[3] != 0) {
      puVar12 = (uint *)((long)piVar8 + (ulong)puVar10[3]);
      puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
    }
  }
  uVar2 = *puVar12;
  uVar7 = (ulong)uVar2;
  uVar3 = *(uint *)(param_3 + 4);
  uVar13 = (ulong)uVar3;
  if (-1 < (int)uVar3) {
    if (uVar2 <= uVar3) {
      return param_1;
    }
    if (*(char *)(param_3 + 2) == '\0') goto LAB_028b8fa4;
    bVar15 = *(byte *)(lVar9 + uVar13 + 4);
    *(undefined1 *)(param_3 + 2) = 0;
    fVar16 = (float)NEON_ucvtf((uint)bVar15);
    if ((float)param_1 <= fVar16) goto LAB_028b8fa4;
    *(undefined4 *)(param_3 + 4) = 0xffffffff;
    *(undefined4 *)(param_3 + 0xc) = 1;
  }
  pbVar6 = (byte *)(lVar9 + 6U);
  uVar13 = ~(lVar9 + 6U) + lVar9 + 4 + uVar7;
  while (pbVar5 = pbVar6, uVar13 != 0) {
    uVar14 = uVar13 >> 1;
    pbVar6 = pbVar5 + uVar14 + 1;
    uVar13 = uVar13 + ~uVar14;
    if ((float)param_1 <= (float)pbVar5[uVar14]) {
      pbVar6 = pbVar5;
      uVar13 = uVar14;
    }
  }
  uVar13 = (ulong)(((int)pbVar5 - (int)(lVar9 + 4)) - 2);
LAB_028b8fa4:
  if ((uint)uVar13 < uVar2) {
    lVar9 = lVar9 + 4;
    uVar17 = NEON_ucvtf((uint)*(byte *)(lVar9 + uVar13));
    param_1 = 0;
    uVar11 = (ulong)(*(int *)(param_3 + 0xc) + 2U & 4);
    *(undefined4 *)(param_3 + uVar11 * 4 + 0x10) = uVar17;
    uVar4 = *(undefined8 *)(puVar12 + uVar13 * 3 + 1);
    lVar1 = param_3 + uVar11 * 0x10;
    uVar14 = uVar13 + 1;
    *(ulong *)(lVar1 + 0x38) = (ulong)(puVar12 + uVar13 * 3 + 1)[2];
    *(undefined8 *)(lVar1 + 0x30) = uVar4;
    if (uVar14 < uVar7) {
      uVar17 = NEON_ucvtf((uint)*(byte *)(lVar9 + uVar14));
      *(undefined4 *)(param_3 + (uVar11 | 1) * 4 + 0x10) = uVar17;
      uVar4 = *(undefined8 *)(puVar12 + uVar14 * 3 + 1);
      lVar1 = param_3 + (uVar11 | 1) * 0x10;
      *(ulong *)(lVar1 + 0x38) = (ulong)(puVar12 + uVar14 * 3 + 1)[2];
      *(undefined8 *)(lVar1 + 0x30) = uVar4;
      uVar14 = uVar13 + 2;
      if (uVar14 < uVar7) {
        uVar17 = NEON_ucvtf((uint)*(byte *)(lVar9 + uVar14));
        *(undefined4 *)(param_3 + (uVar11 | 2) * 4 + 0x10) = uVar17;
        uVar4 = *(undefined8 *)(puVar12 + uVar14 * 3 + 1);
        lVar1 = param_3 + (uVar11 | 2) * 0x10;
        *(ulong *)(lVar1 + 0x38) = (ulong)(puVar12 + uVar14 * 3 + 1)[2];
        *(undefined8 *)(lVar1 + 0x30) = uVar4;
        uVar14 = uVar13 + 3;
        if (uVar14 < uVar7) {
          uVar17 = NEON_ucvtf((uint)*(byte *)(lVar9 + uVar14));
          *(undefined4 *)(param_3 + (uVar11 | 3) * 4 + 0x10) = uVar17;
          param_1 = *(undefined8 *)(puVar12 + uVar14 * 3 + 1);
          lVar9 = param_3 + (uVar11 | 3) * 0x10;
          *(ulong *)(lVar9 + 0x38) = (ulong)(puVar12 + uVar14 * 3 + 1)[2];
          *(undefined8 *)(lVar9 + 0x30) = param_1;
        }
      }
    }
  }
  *(uint *)(param_3 + 4) = (uint)uVar13 + 4;
  return param_1;
}


