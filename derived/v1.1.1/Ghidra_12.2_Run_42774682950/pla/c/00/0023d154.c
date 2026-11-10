/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023d154; name: FUN_0023d154
 */


void FUN_0023d154(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffc00000;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffc00000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 8) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x48) = 0xe0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  bVar9 = *(byte *)(param_2 + 0x48);
  *(byte *)(param_1 + 0x48) = bVar9 & 0xf | 0xe0;
  *(byte *)(param_1 + 0x48) = *(byte *)(param_2 + 0x48) & 0xf0 | bVar9 & 0xf;
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x38) == 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    bVar9 = *(byte *)(param_2 + 0x49);
  }
  else {
    puVar13 = (undefined8 *)FUN_00232654(0x10);
    *(undefined8 **)(param_1 + 0x38) = puVar13;
    uVar1 = (*(undefined8 **)(param_2 + 0x38))[1];
    *puVar13 = **(undefined8 **)(param_2 + 0x38);
    puVar13[1] = uVar1;
    *(undefined4 *)(*(long *)(param_1 + 0x38) + 0xc) = 0;
    bVar9 = *(byte *)(param_2 + 0x49);
  }
  if ((bVar9 >> 5 & 1) == 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    puVar13 = (undefined8 *)FUN_00232654(0x20);
    *(undefined8 **)(param_1 + 8) = puVar13;
    puVar17 = *(undefined8 **)(param_2 + 8);
    uVar1 = puVar17[2];
    uVar2 = puVar17[3];
    uVar3 = puVar17[1];
    *puVar13 = *puVar17;
    puVar13[1] = uVar3;
    puVar13[2] = uVar1;
    puVar13[3] = uVar2;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffc00000;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffc00000;
  uVar4 = *(uint *)(param_2 + 0x10);
  FUN_0023baf4(param_1,uVar4 & 3,uVar4 >> 2 & 3,uVar4 >> 4 & 3,uVar4 >> 6 & 7,uVar4 >> 9 & 1,
               uVar4 >> 10 & 3,uVar4 >> 0xc & 1,uVar4 >> 0xd & 3,(byte)(uVar4 >> 0xf) & 1,
               (byte)(uVar4 >> 0x10) & 1,(byte)(uVar4 >> 0x11) & 1,uVar4 >> 0x12 & 3,
               uVar4 >> 0x14 & 3);
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    uVar4 = *(uint *)(param_1 + 0x14);
    uVar5 = *(uint *)(param_2 + 0x14);
    uVar12 = uVar5 & 3;
    *(uint *)(param_1 + 0x14) = uVar4 & 0xfffffffc | uVar12;
    uVar6 = *(uint *)(param_2 + 0x14);
    uVar18 = uVar6 & 0xc;
    *(uint *)(param_1 + 0x14) = uVar4 & 0xfffffff0 | uVar12 | uVar18;
    uVar7 = *(uint *)(param_2 + 0x14);
    uVar19 = uVar7 & 0x30;
    *(uint *)(param_1 + 0x14) = uVar4 & 0xffffffc0 | uVar12 | uVar18 | uVar19;
    uVar21 = *(uint *)(param_2 + 0x14) & 0x1c0;
    uVar20 = (ulong)(*(uint *)(param_2 + 0x14) >> 6) & 7;
    *(uint *)(param_1 + 0x14) = uVar4 & 0xfffffe00 | uVar12 | uVar18 | uVar19 | uVar21;
    uVar22 = (ulong)*(uint *)(param_2 + 0x14) & 0x6000;
    uVar10 = (uint)uVar22;
    *(uint *)(param_1 + 0x14) = uVar4 & 0xffff9e00 | uVar12 | uVar18 | uVar19 | uVar21 | uVar10;
    uVar8 = *(uint *)(param_2 + 0x14);
    uVar14 = uVar8 & 0x8000;
    *(uint *)(param_1 + 0x14) =
         uVar4 & 0xffff1e00 | uVar12 | uVar18 | uVar19 | uVar21 | uVar10 | uVar14;
    uVar15 = (ulong)*(uint *)(param_2 + 0x14) & 0xc0000;
    uVar23 = (ulong)(uVar4 >> 0x10) & 1;
    uVar11 = (uint)uVar15;
    *(uint *)(param_1 + 0x14) =
         uVar4 & 0xfff31e00 | uVar12 | uVar18 | uVar19 | uVar21 | uVar10 | uVar14 | uVar11;
    uVar16 = (ulong)(*(uint *)(param_2 + 0x14) >> 0x14) & 3;
    *(uint *)(param_1 + 0x14) =
         uVar4 & 0xffc31e00 | uVar12 | uVar18 | uVar19 | uVar21 | uVar10 | uVar14 | uVar11 |
         *(uint *)(param_2 + 0x14) & 0x300000;
    memcpy(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),
           (((ulong)(uVar7 >> 4) & 3) + ((ulong)uVar5 & 3) + uVar20 * uVar23) * 0x10 +
           (ulong)((int)uVar16 != 0) * 0x10 +
           ((ulong)(uVar4 >> 0x11) & 1) * 0x74 + uVar16 * 0x58 + (uVar15 >> 0xd) +
           ((ulong)(uVar4 >> 0xc) & 1) * 0xc + uVar23 * 0x1c +
           (uVar20 + ((ulong)(uVar4 >> 10) & 3)) * 4 +
           (((ulong)(uVar8 >> 0xf) & 1) + ((ulong)(uVar4 >> 9) & 1)) * 8 +
           ((uVar22 >> 0xd) + ((ulong)(uVar6 >> 2) & 3)) * 0x14);
  }
  FUN_0023d43c(param_1,param_2,param_3);
  FUN_0023c380(param_1,*param_3);
  return;
}


