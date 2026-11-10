/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b88d4; name: FUN_028b88d4
 */


undefined8 FUN_028b88d4(undefined8 param_1,int *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  ushort *puVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  ushort *puVar12;
  ulong uVar13;
  ushort uVar14;
  float fVar15;
  undefined4 uVar16;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xd) {
    piVar6 = (int *)0x0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6];
    piVar6 = (int *)0x0;
    if (uVar5 != 0) {
      puVar9 = (uint *)((long)param_2 + uVar5);
      piVar6 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  puVar8 = (ushort *)((long)piVar6 - (long)*piVar6);
  if (*puVar8 < 5) {
    lVar7 = 0;
LAB_028b8950:
    puVar9 = (uint *)0x0;
  }
  else {
    lVar7 = 0;
    if ((ulong)puVar8[2] != 0) {
      puVar9 = (uint *)((long)piVar6 + (ulong)puVar8[2]);
      lVar7 = (long)puVar9 + (ulong)*puVar9;
    }
    if ((*puVar8 < 7) || ((ulong)puVar8[3] == 0)) goto LAB_028b8950;
    puVar9 = (uint *)((long)piVar6 + (ulong)puVar8[3]);
    puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
  }
  uVar1 = *puVar9;
  uVar5 = (ulong)uVar1;
  uVar2 = *(uint *)(param_3 + 4);
  uVar11 = (ulong)uVar2;
  if (-1 < (int)uVar2) {
    if (uVar1 <= uVar2) {
      return param_1;
    }
    if (*(char *)(param_3 + 2) == '\0') goto LAB_028b89e8;
    uVar14 = *(ushort *)(lVar7 + uVar11 * 2 + 4);
    *(undefined1 *)(param_3 + 2) = 0;
    fVar15 = (float)NEON_ucvtf((uint)uVar14);
    if ((float)param_1 <= fVar15) goto LAB_028b89e8;
    *(undefined4 *)(param_3 + 4) = 0xffffffff;
    *(undefined4 *)(param_3 + 0xc) = 1;
  }
  puVar8 = (ushort *)(lVar7 + 8);
  lVar3 = ((lVar7 + 4 + uVar5 * 2) - (long)puVar8) + -2;
  if (lVar3 != 0) {
    uVar11 = lVar3 >> 1;
    puVar12 = puVar8;
    do {
      uVar13 = uVar11 >> 1;
      puVar8 = puVar12 + uVar13 + 1;
      uVar11 = uVar11 + ~uVar13;
      if ((float)param_1 <= (float)puVar12[uVar13]) {
        puVar8 = puVar12;
        uVar11 = uVar13;
      }
      puVar12 = puVar8;
    } while (uVar11 != 0);
  }
  uVar11 = (ulong)((int)((ulong)((long)puVar8 - (lVar7 + 4)) >> 1) - 2);
LAB_028b89e8:
  if ((uint)uVar11 < uVar1) {
    lVar7 = lVar7 + 4;
    uVar16 = NEON_ucvtf((uint)*(ushort *)(lVar7 + uVar11 * 2));
    param_1 = 0;
    uVar10 = (ulong)(*(int *)(param_3 + 0xc) + 2U & 4);
    *(undefined4 *)(param_3 + uVar10 * 4 + 0x10) = uVar16;
    uVar4 = *(undefined8 *)(puVar9 + uVar11 * 3 + 1);
    lVar3 = param_3 + uVar10 * 0x10;
    uVar13 = uVar11 + 1;
    *(ulong *)(lVar3 + 0x38) = (ulong)(puVar9 + uVar11 * 3 + 1)[2];
    *(undefined8 *)(lVar3 + 0x30) = uVar4;
    if (uVar13 < uVar5) {
      uVar16 = NEON_ucvtf((uint)*(ushort *)(lVar7 + uVar13 * 2));
      *(undefined4 *)(param_3 + (uVar10 | 1) * 4 + 0x10) = uVar16;
      uVar4 = *(undefined8 *)(puVar9 + uVar13 * 3 + 1);
      lVar3 = param_3 + (uVar10 | 1) * 0x10;
      *(ulong *)(lVar3 + 0x38) = (ulong)(puVar9 + uVar13 * 3 + 1)[2];
      *(undefined8 *)(lVar3 + 0x30) = uVar4;
      uVar13 = uVar11 + 2;
      if (uVar13 < uVar5) {
        uVar16 = NEON_ucvtf((uint)*(ushort *)(lVar7 + uVar13 * 2));
        *(undefined4 *)(param_3 + (uVar10 | 2) * 4 + 0x10) = uVar16;
        uVar4 = *(undefined8 *)(puVar9 + uVar13 * 3 + 1);
        lVar3 = param_3 + (uVar10 | 2) * 0x10;
        *(ulong *)(lVar3 + 0x38) = (ulong)(puVar9 + uVar13 * 3 + 1)[2];
        *(undefined8 *)(lVar3 + 0x30) = uVar4;
        uVar13 = uVar11 + 3;
        if (uVar13 < uVar5) {
          uVar16 = NEON_ucvtf((uint)*(ushort *)(lVar7 + uVar13 * 2));
          lVar7 = param_3 + (uVar10 | 3) * 0x10;
          *(undefined4 *)(param_3 + (uVar10 | 3) * 4 + 0x10) = uVar16;
          param_1 = *(undefined8 *)(puVar9 + uVar13 * 3 + 1);
          *(ulong *)(lVar7 + 0x38) = (ulong)(puVar9 + uVar13 * 3 + 1)[2];
          *(undefined8 *)(lVar7 + 0x30) = param_1;
        }
      }
    }
  }
  *(uint *)(param_3 + 4) = (uint)uVar11 + 4;
  return param_1;
}


