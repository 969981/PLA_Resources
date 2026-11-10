/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cfde0; name: FUN_004cfde0
 */


uint FUN_004cfde0(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  uVar1 = param_4 + 1;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) & 1) == 0) {
    uVar7 = *(ulong *)(param_2 + 8);
    if (uVar7 < uVar1) {
      return 0;
    }
    lVar9 = *(long *)(param_2 + 0x20);
  }
  else {
    if (*(ulong *)(param_2 + 8) < uVar1 + param_3) {
      return 0;
    }
    lVar9 = *(long *)(param_2 + 0x20) + param_3;
    *(long *)(param_2 + 0x20) = lVar9;
    *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + param_3;
    uVar7 = *(ulong *)(param_2 + 8) - param_3;
    *(ulong *)(param_2 + 8) = uVar7;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) - param_3;
  }
  bVar2 = *(byte *)(uVar7 + lVar9 + -1);
  uVar18 = (ulong)bVar2;
  FUN_0041c7c0(*(undefined8 *)(param_1 + 0x438));
  uVar3 = FUN_0041c7b0();
  uVar7 = *(ulong *)(param_2 + 8);
  if ((uVar3 >> 0x15 & 1) != 0) {
    *(ulong *)(param_2 + 8) = uVar7 + ~uVar18;
    return 1;
  }
  uVar1 = uVar1 + uVar18;
  uVar10 = (long)((uVar7 - uVar1 ^ uVar1 | uVar7 ^ uVar1) ^ uVar7) >> 0x3f ^ 0xffffffffffffffff;
  bVar8 = (byte)uVar10;
  uVar1 = uVar7;
  if (0xff < uVar7) {
    uVar1 = 0x100;
  }
  if (uVar1 != 0) {
    lVar9 = *(long *)(param_2 + 0x20);
    if (uVar1 < 4) {
      uVar11 = 0;
    }
    else {
      uVar14 = 0xffffffffffffffff;
      uVar13 = 0;
      uVar11 = uVar1 & 0x1fc;
      uVar16 = 0xffffffffffffffff;
      uVar17 = 0xffffffffffffffff;
      pbVar12 = (byte *)(uVar7 + lVar9 + -1);
      uVar15 = uVar18;
      do {
        uVar4 = uVar13 ^ 0xfffffffffffffffe;
        uVar5 = uVar13 ^ 0xfffffffffffffffd;
        uVar6 = uVar13 ^ 0xfffffffffffffffc;
        uVar3 = (uint)(uVar13 >> 0x20);
        uVar13 = uVar13 + 4;
        uVar10 = uVar10 & ~((uint)(*pbVar12 ^ bVar2) &
                           ((int)((uint)(uVar15 >> 0x20) | uVar3) >> 0x1f ^ 0xffffffffU));
        uVar14 = uVar14 & ~((uint)(*(byte *)(lVar9 + uVar7 + uVar4) ^ bVar2) &
                           ((int)((uint)(uVar15 - 1 >> 0x20) | uVar3) >> 0x1f ^ 0xffffffffU));
        uVar16 = uVar16 & ~((uint)(*(byte *)(lVar9 + uVar7 + uVar5) ^ bVar2) &
                           ((int)((uint)(uVar15 - 2 >> 0x20) | uVar3) >> 0x1f ^ 0xffffffffU));
        uVar17 = uVar17 & ~((uint)(*(byte *)(lVar9 + uVar7 + uVar6) ^ bVar2) &
                           ((int)((uint)(uVar15 - 3 >> 0x20) | uVar3) >> 0x1f ^ 0xffffffffU));
        uVar15 = uVar15 - 4;
        pbVar12 = pbVar12 + -4;
      } while (uVar11 != uVar13);
      uVar10 = uVar17 & uVar16 & uVar14 & uVar10;
      bVar8 = (byte)uVar10;
      if (uVar1 == uVar11) goto LAB_004d0008;
    }
    pbVar12 = (byte *)((uVar7 - uVar11) + lVar9);
    lVar9 = uVar18 - uVar11;
    do {
      pbVar12 = pbVar12 + -1;
      uVar13 = (ulong)lVar9 >> 0x20;
      uVar15 = uVar11 >> 0x20;
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + -1;
      uVar10 = uVar10 & ~((uint)(*pbVar12 ^ bVar2) &
                         ((int)((uint)uVar13 | (uint)uVar15) >> 0x1f ^ 0xffffffffU));
      bVar8 = (byte)uVar10;
    } while (uVar11 < uVar1);
  }
LAB_004d0008:
  *(ulong *)(param_2 + 8) = uVar7 - ((long)(0xfe - (ulong)bVar8) >> 0x3f & uVar18 + 1);
  return ((uint)((long)(0xfe - (ulong)bVar8) >> 0x3f) | 1) ^ 0xfffffffe;
}


