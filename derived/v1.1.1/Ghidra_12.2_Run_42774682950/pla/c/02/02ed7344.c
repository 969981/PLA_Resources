/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed7344; name: FUN_02ed7344
 */


undefined4 FUN_02ed7344(long param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  undefined4 *puVar16;
  ulong uVar17;
  
  bVar6 = *(byte *)*param_2;
  *param_2 = (long)((byte *)*param_2 + 1);
  uVar1 = *(uint *)(param_1 + 0xa0) | 0x20000ffe;
  if ((bVar6 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0xa0) & 0xdffff001;
  }
  *(uint *)(param_1 + 0xa0) = uVar1;
  uVar4 = *(uint *)(param_1 + 0xaa);
  uVar1 = uVar4 & 0x7ffff | ((bVar6 & 2) >> 1) << 0x13;
  *(uint *)(param_1 + 0xaa) = uVar4 & 0xfff00000 | uVar1;
  if ((bVar6 & 1) == 0) {
    return 1;
  }
  *(uint *)(param_1 + 0xaa) = uVar4 & 0xff800000 | uVar1 | (bVar6 >> 2 & 3) << 0x14;
  *(ushort *)(param_1 + 0xa8) = *(ushort *)(param_1 + 0xa8) & 0xfff8 | bVar6 >> 5 & 3;
  if ((bVar6 & 2) == 0) {
    return 1;
  }
  bVar6 = *(byte *)*param_2;
  uVar9 = (ushort)bVar6 << 3;
  *param_2 = (long)((byte *)*param_2 + 1);
  uVar8 = *(ushort *)(param_1 + 0xa8);
  *(ushort *)(param_1 + 0xa8) =
       uVar8 & 0xfc07 | uVar9 & 0x18 | uVar9 & 0x40 | uVar9 & 0x80 | (bVar6 & 0x80) << 2 |
       (bVar6 >> 5 & 1) << 8;
  if (1 < (ushort)((uVar8 & 7) - 1)) {
    return 1;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x70);
  if (puVar11 == (undefined8 *)0x0) {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x20000ffe;
    puVar11 = (undefined8 *)(*DAT_0442d138)(2,0x48);
    if (puVar11 == (undefined8 *)0x0) {
      return 0x34;
    }
    puVar11[7] = 0;
    puVar11[8] = 0;
    *puVar11 = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    *(undefined4 *)puVar11 = *(undefined4 *)(param_1 + 0x10);
    *(undefined8 **)(param_1 + 0x70) = puVar11;
  }
  bVar7 = *(byte *)*param_2;
  *param_2 = (long)((byte *)*param_2 + 1);
  *(uint *)(puVar11 + 2) = (uint)bVar7;
  *(uint *)(puVar11 + 6) = (bVar6 & 0x40) << 0x19 | *(uint *)(puVar11 + 6) & 0x7fffffff;
  uVar10 = *(undefined4 *)*param_2;
  *param_2 = (long)((undefined4 *)*param_2 + 1);
  *(undefined4 *)((long)puVar11 + 0x14) = uVar10;
  puVar13 = (uint *)*param_2 + 1;
  uVar1 = *(uint *)*param_2;
  if (uVar1 == 0) {
    puVar12 = (uint *)0x0;
  }
  else {
    puVar12 = puVar13;
    puVar13 = puVar13 + (ulong)uVar1 * 4;
  }
  *param_2 = (long)puVar13;
  puVar14 = puVar13 + 1;
  uVar4 = *puVar13;
  *param_2 = (long)puVar14;
  if (uVar4 == 0) {
    return 1;
  }
  *param_2 = (long)(puVar14 + (ulong)uVar4 * 2);
  if (uVar1 == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = FUN_02ed77cc(param_1,puVar12,(ulong)uVar1,puVar14,uVar4);
  }
  puVar16 = (undefined4 *)*param_2;
  uVar5 = *puVar16;
  *param_2 = (long)(puVar16 + 1);
  uVar2 = puVar16[1];
  *param_2 = (long)(puVar16 + 2);
  uVar3 = puVar16[2];
  *param_2 = (long)(puVar16 + 3);
  puVar11 = *(undefined8 **)(param_1 + 0x70);
  if (puVar11 == (undefined8 *)0x0) {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x20000ffe;
    puVar11 = (undefined8 *)(*DAT_0442d138)(2,0x48);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)(param_1 + 0x70);
    }
    else {
      puVar11[7] = 0;
      puVar11[8] = 0;
      *puVar11 = 0;
      puVar11[5] = 0;
      puVar11[6] = 0;
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *(undefined4 *)puVar11 = *(undefined4 *)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x70) = puVar11;
    }
    if (puVar11 != (undefined8 *)0x0) goto LAB_02ed74f4;
  }
  else {
LAB_02ed74f4:
    if ((*(uint *)(puVar11 + 6) & 0x7fffffff) != 0) {
      *(undefined4 *)(puVar11[5] + 0xc) = uVar5;
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x28) + 0x10) = uVar2;
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x28) + 0x14) = uVar3;
    }
  }
  if (uVar4 == 1) {
    return uVar10;
  }
  puVar16 = (undefined4 *)*param_2;
  uVar5 = *puVar16;
  *param_2 = (long)(puVar16 + 1);
  uVar2 = puVar16[1];
  *param_2 = (long)(puVar16 + 2);
  uVar3 = puVar16[2];
  *param_2 = (long)(puVar16 + 3);
  puVar11 = *(undefined8 **)(param_1 + 0x70);
  if (puVar11 == (undefined8 *)0x0) {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x20000ffe;
    puVar11 = (undefined8 *)(*DAT_0442d138)(2,0x48);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)(param_1 + 0x70);
    }
    else {
      puVar11[7] = 0;
      puVar11[8] = 0;
      *puVar11 = 0;
      puVar11[5] = 0;
      puVar11[6] = 0;
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *(undefined4 *)puVar11 = *(undefined4 *)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x70) = puVar11;
    }
    if (puVar11 == (undefined8 *)0x0) goto LAB_02ed7584;
  }
  if ((*(uint *)(puVar11 + 6) & 0x7ffffffe) != 0) {
    *(undefined4 *)(puVar11[5] + 0x24) = uVar5;
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x28) + 0x28) = uVar2;
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x28) + 0x2c) = uVar3;
  }
LAB_02ed7584:
  if (uVar4 == 2) {
    return uVar10;
  }
  lVar15 = 0;
  uVar17 = 2;
  do {
    puVar16 = (undefined4 *)*param_2;
    uVar5 = *puVar16;
    *param_2 = (long)(puVar16 + 1);
    uVar2 = puVar16[1];
    *param_2 = (long)(puVar16 + 2);
    uVar3 = puVar16[2];
    *param_2 = (long)(puVar16 + 3);
    puVar11 = *(undefined8 **)(param_1 + 0x70);
    if (puVar11 == (undefined8 *)0x0) {
      *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x20000ffe;
      puVar11 = (undefined8 *)(*DAT_0442d138)(2,0x48);
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = *(undefined8 **)(param_1 + 0x70);
      }
      else {
        puVar11[7] = 0;
        puVar11[8] = 0;
        *puVar11 = 0;
        puVar11[5] = 0;
        puVar11[6] = 0;
        puVar11[3] = 0;
        puVar11[4] = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        *(undefined4 *)puVar11 = *(undefined4 *)(param_1 + 0x10);
        *(undefined8 **)(param_1 + 0x70) = puVar11;
      }
      if (puVar11 != (undefined8 *)0x0) goto LAB_02ed75cc;
    }
    else {
LAB_02ed75cc:
      if (uVar17 < ((ulong)*(uint *)(puVar11 + 6) & 0x7fffffff)) {
        *(undefined4 *)(puVar11[5] + lVar15 + 0x3c) = uVar5;
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x28) + lVar15 + 0x40) = uVar2;
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x28) + lVar15 + 0x44) = uVar3;
      }
    }
    uVar17 = uVar17 + 1;
    lVar15 = lVar15 + 0x18;
    if (uVar4 == uVar17) {
      return uVar10;
    }
  } while( true );
}


