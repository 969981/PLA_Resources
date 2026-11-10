/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004826d0; name: FUN_004826d0
 */


void FUN_004826d0(ushort *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  
  uVar31 = (ulong)(*(uint3 *)((long)param_1 + 0x2f) >> 2) & 0x1fffff;
  uVar25 = (ulong)(*(uint *)((long)param_1 + 0x31) >> 7) & 0x1fffff;
  uVar26 = (ulong)(*(uint *)(param_1 + 0x1a) >> 4) & 0x1fffff;
  uVar27 = (ulong)(*(uint3 *)((long)param_1 + 0x37) >> 1) & 0x1fffff;
  uVar28 = (ulong)(*(uint *)((long)param_1 + 0x39) >> 6) & 0x1fffff;
  lVar30 = ((ulong)(*(uint *)((long)param_1 + 0xf) >> 6) & 0x1fffff) + uVar31 * 0xa2c13;
  uVar1 = lVar30 + 0x100000;
  lVar17 = uVar31 * 0x72d18 +
           (((ulong)(byte)param_1[9] & 0xf8 | (ulong)*(byte *)((long)param_1 + 0x13) << 8 |
            (ulong)(byte)param_1[10] << 0x10) >> 3) + (uVar1 >> 0x15) + uVar25 * 0xa2c13;
  uVar29 = ((ulong)(byte)param_1[0x1e] & 0xf8 | (ulong)*(byte *)((long)param_1 + 0x3d) << 8 |
            (ulong)(byte)param_1[0x1f] << 0x10 | (ulong)*(byte *)((long)param_1 + 0x3f) << 0x18) >>
           3;
  lVar22 = ((ulong)(*(uint *)(param_1 + 0x12) >> 6) & 0x1fffff) + uVar27 * -0xa6f7d +
           uVar28 * 0x215d1 + uVar29 * -0xf39ad;
  lVar24 = ((ulong)param_1[0x15] | ((ulong)(byte)*(uint *)(param_1 + 0x16) & 0x1f) << 0x10) +
           uVar29 * -0xa6f7d;
  lVar12 = ((ulong)(*(uint *)((long)param_1 + 0x1f) >> 4) & 0x1fffff) + uVar25 * -0xa6f7d +
           uVar26 * 0x215d1 + uVar27 * -0xf39ad + uVar28 * 0x9fb67 + uVar29 * 0x72d18;
  lVar10 = ((ulong)*(ushort *)((long)param_1 + 0x15) |
           ((ulong)*(byte *)((long)param_1 + 0x17) & 0x1f) << 0x10) + uVar31 * 0x9fb67 +
           uVar25 * 0x72d18 + uVar26 * 0xa2c13;
  lVar14 = ((ulong)(*(uint3 *)(param_1 + 0xd) >> 2) & 0x1fffff) + uVar31 * 0x215d1 +
           uVar25 * -0xf39ad + uVar26 * 0x9fb67 + uVar27 * 0x72d18 + uVar28 * 0xa2c13;
  uVar2 = lVar12 + 0x100000;
  uVar3 = lVar14 + 0x100000;
  lVar13 = ((ulong)(*(uint3 *)(param_1 + 0x11) >> 1) & 0x1fffff) + uVar26 * -0xa6f7d +
           uVar27 * 0x215d1 + uVar28 * -0xf39ad + uVar29 * 0x9fb67 + ((long)uVar2 >> 0x15);
  uVar4 = lVar22 + 0x100000;
  lVar16 = uVar28 * -0xa6f7d +
           (((ulong)*(byte *)((long)param_1 + 0x27) & 0xf8 | (ulong)(byte)param_1[0x14] << 8 |
            (ulong)*(byte *)((long)param_1 + 0x29) << 0x10) >> 3) + uVar29 * 0x215d1 +
           ((long)uVar4 >> 0x15);
  uVar5 = lVar24 + 0x100000;
  uVar6 = lVar10 + 0x100000;
  lVar7 = ((ulong)(*(uint *)((long)param_1 + 0x17) >> 5) & 0x1fffff) + uVar31 * -0xf39ad +
          uVar25 * 0x9fb67 + uVar26 * 0x72d18 + uVar27 * 0xa2c13 + (uVar6 >> 0x15);
  lVar8 = ((ulong)(*(uint *)(param_1 + 0xe) >> 7) & 0x1fffff) + uVar31 * -0xa6f7d + uVar25 * 0x215d1
          + uVar26 * -0xf39ad + uVar27 * 0x9fb67 + uVar28 * 0x72d18 + uVar29 * 0xa2c13 +
          ((long)uVar3 >> 0x15);
  lVar9 = ((ulong)(*(uint *)(param_1 + 0x16) >> 5) & 0x1fffff) + ((long)uVar5 >> 0x15);
  uVar25 = lVar17 + 0x100000;
  uVar26 = lVar7 + 0x100000;
  uVar27 = lVar8 + 0x100000;
  lVar12 = (lVar12 - (uVar2 & 0xffffffffffe00000)) + ((long)uVar27 >> 0x15);
  uVar2 = lVar13 + 0x100000;
  lVar22 = (lVar22 - (uVar4 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  uVar4 = lVar16 + 0x100000;
  lVar13 = lVar13 - (uVar2 & 0xffffffffffe00000);
  lVar24 = (lVar24 - (uVar5 & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15);
  lVar16 = lVar16 - (uVar4 & 0xffffffffffe00000);
  lVar15 = ((lVar14 + ((long)uVar26 >> 0x15)) - (uVar3 & 0xffffffffffe00000)) + lVar9 * -0xa6f7d;
  lVar18 = ((ulong)*param_1 | ((ulong)(byte)*(uint *)(param_1 + 1) & 0x1f) << 0x10) +
           lVar12 * 0xa2c13;
  lVar20 = ((ulong)(*(uint3 *)((long)param_1 + 5) >> 2) & 0x1fffff) + lVar12 * 0x9fb67 +
           lVar22 * 0xa2c13 + lVar13 * 0x72d18;
  lVar11 = ((lVar10 + (uVar25 >> 0x15)) - (uVar6 & 0xffffffffffe00000)) + lVar9 * -0xf39ad +
           lVar24 * 0x215d1 + lVar16 * -0xa6f7d;
  lVar30 = (lVar30 - (uVar1 & 0x7ffffe00000)) + lVar9 * 0x72d18 + lVar24 * 0x9fb67 +
           lVar16 * -0xf39ad + lVar22 * 0x215d1 + lVar13 * -0xa6f7d;
  uVar1 = lVar18 + 0x100000;
  lVar10 = ((ulong)(*(uint *)(param_1 + 1) >> 5) & 0x1fffff) + lVar12 * 0x72d18 + lVar13 * 0xa2c13 +
           ((long)uVar1 >> 0x15);
  uVar2 = lVar15 + 0x100000;
  lVar8 = (lVar8 - (uVar27 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  lVar21 = ((ulong)(*(uint *)(param_1 + 5) >> 4) & 0x1fffff) + lVar24 * 0xa2c13 + lVar16 * 0x72d18 +
           lVar12 * 0x215d1 + lVar22 * 0x9fb67 + lVar13 * -0xf39ad;
  uVar3 = lVar30 + 0x100000;
  lVar14 = (lVar17 - (uVar25 & 0xffffffffffe00000)) + lVar9 * 0x9fb67 + lVar24 * -0xf39ad +
           lVar16 * 0x215d1 + lVar22 * -0xa6f7d + ((long)uVar3 >> 0x15);
  uVar4 = lVar11 + 0x100000;
  lVar7 = (lVar7 - (uVar26 & 0xffffffffffe00000)) + lVar9 * 0x215d1 + lVar24 * -0xa6f7d +
          ((long)uVar4 >> 0x15);
  uVar5 = lVar14 + 0x100000;
  uVar6 = lVar7 + 0x100000;
  uVar25 = lVar20 + 0x100000;
  lVar17 = ((ulong)(*(uint *)((long)param_1 + 7) >> 7) & 0x1fffff) + lVar16 * 0xa2c13 +
           lVar12 * -0xf39ad + lVar22 * 0x72d18 + lVar13 * 0x9fb67 + ((long)uVar25 >> 0x15);
  uVar26 = lVar8 + 0x100000;
  lVar23 = (long)uVar26 >> 0x15;
  uVar27 = lVar10 + 0x100000;
  uVar28 = lVar17 + 0x100000;
  uVar29 = lVar21 + 0x100000;
  uVar19 = (lVar18 - (uVar1 & 0xffffffffffe00000)) + lVar23 * 0xa2c13;
  lVar13 = ((ulong)(*(uint3 *)((long)param_1 + 0xd) >> 1) & 0x1fffff) + lVar9 * 0xa2c13 +
           lVar24 * 0x72d18 + lVar16 * 0x9fb67 + lVar12 * -0xa6f7d + lVar22 * -0xf39ad +
           lVar13 * 0x215d1 + ((long)uVar29 >> 0x15);
  uVar1 = lVar13 + 0x100000;
  uVar31 = ((lVar10 + lVar23 * 0x72d18) - (uVar27 & 0xffffffffffe00000)) + ((long)uVar19 >> 0x15);
  uVar25 = ((lVar20 + lVar23 * 0x9fb67) - (uVar25 & 0xffffffffffe00000)) + ((long)uVar27 >> 0x15) +
           ((long)uVar31 >> 0x15);
  uVar27 = ((lVar17 + lVar23 * -0xf39ad) - (uVar28 & 0xffffffffffe00000)) + ((long)uVar25 >> 0x15);
  uVar28 = ((lVar21 + lVar23 * 0x215d1) - (uVar29 & 0xffffffffffe00000)) + ((long)uVar28 >> 0x15) +
           ((long)uVar27 >> 0x15);
  uVar29 = ((lVar13 + lVar23 * -0xa6f7d) - (uVar1 & 0xffffffffffe00000)) + ((long)uVar28 >> 0x15);
  uVar1 = (lVar30 - (uVar3 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15) + ((long)uVar29 >> 0x15);
  uVar3 = (lVar14 - (uVar5 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15);
  uVar4 = (lVar11 - (uVar4 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15) + ((long)uVar3 >> 0x15);
  uVar5 = (lVar7 - (uVar6 & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15);
  uVar2 = (lVar15 - (uVar2 & 0xffffffffffe00000)) + ((long)uVar6 >> 0x15) + ((long)uVar5 >> 0x15);
  uVar6 = (lVar8 - (uVar26 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  lVar13 = (long)uVar6 >> 0x15;
  lVar16 = (uVar19 & 0x1fffff) + lVar13 * 0xa2c13;
  *(char *)((long)param_1 + 1) = (char)((ulong)lVar16 >> 8);
  uVar26 = (uVar31 & 0x1fffff) + lVar13 * 0x72d18 + (lVar16 >> 0x15);
  uVar25 = (uVar25 & 0x1fffff) + lVar13 * 0x9fb67 + ((long)uVar26 >> 0x15);
  *(char *)((long)param_1 + 3) = (char)(uVar26 >> 3);
  *(char *)(param_1 + 2) = (char)(uVar26 >> 0xb);
  *(byte *)((long)param_1 + 5) =
       (byte)((uint)uVar26 >> 0x13) & 3 | (byte)(((uint)uVar25 & 0x1fffff) << 2);
  *(char *)(param_1 + 3) = (char)(uVar25 >> 6);
  uVar27 = (uVar27 & 0x1fffff) + lVar13 * -0xf39ad + ((long)uVar25 >> 0x15);
  *(byte *)((long)param_1 + 7) =
       (byte)((uint)uVar25 >> 0xe) & 0x7f | (byte)(((uint)uVar27 & 0x1fffff) << 7);
  uVar25 = (uVar28 & 0x1fffff) + lVar13 * 0x215d1 + ((long)uVar27 >> 0x15);
  uVar28 = (uVar29 & 0x1fffff) + lVar13 * -0xa6f7d + ((long)uVar25 >> 0x15);
  *(char *)(param_1 + 4) = (char)(uVar27 >> 1);
  *(char *)((long)param_1 + 9) = (char)(uVar27 >> 9);
  *(byte *)(param_1 + 5) =
       (byte)((uint)uVar27 >> 0x11) & 0xf | (byte)(((uint)uVar25 & 0x1fffff) << 4);
  *(char *)((long)param_1 + 0xb) = (char)(uVar25 >> 4);
  *(char *)(param_1 + 6) = (char)(uVar25 >> 0xc);
  uVar1 = (uVar1 & 0x1fffff) + ((long)uVar28 >> 0x15);
  *(byte *)((long)param_1 + 0xd) =
       (byte)((uint)uVar25 >> 0x14) & 1 | (byte)(((uint)uVar28 & 0x1fffff) << 1);
  *(char *)(param_1 + 7) = (char)(uVar28 >> 7);
  *(byte *)((long)param_1 + 0xf) =
       (byte)((uint)uVar28 >> 0xf) & 0x3f | (byte)(((uint)uVar1 & 0x1fffff) << 6);
  *(char *)(param_1 + 8) = (char)(uVar1 >> 2);
  *(char *)((long)param_1 + 0x11) = (char)(uVar1 >> 10);
  uVar3 = (uVar3 & 0x1fffff) + ((long)uVar1 >> 0x15);
  *(byte *)(param_1 + 9) = (byte)((uint)uVar1 >> 0x12) & 7 | (byte)((int)uVar3 << 3);
  *(char *)((long)param_1 + 0x13) = (char)(uVar3 >> 5);
  *(char *)(param_1 + 10) = (char)(uVar3 >> 0xd);
  lVar13 = (uVar4 & 0x1fffff) + ((long)uVar3 >> 0x15);
  *(char *)(param_1 + 0xb) = (char)((ulong)lVar13 >> 8);
  uVar1 = (uVar5 & 0x1fffff) + (lVar13 >> 0x15);
  *(char *)((long)param_1 + 0x15) = (char)lVar13;
  *(byte *)((long)param_1 + 0x17) =
       (byte)((ulong)lVar13 >> 0x10) & 0x1f | (byte)(((uint)uVar1 & 0x1fffff) << 5);
  *(char *)(param_1 + 0xc) = (char)(uVar1 >> 3);
  uVar2 = (uVar2 & 0x1fffff) + ((long)uVar1 >> 0x15);
  *(char *)((long)param_1 + 0x19) = (char)(uVar1 >> 0xb);
  uVar3 = (uVar6 & 0x1fffff) + ((long)uVar2 >> 0x15);
  *(byte *)(param_1 + 0xd) = (byte)((uint)uVar1 >> 0x13) & 3 | (byte)(((uint)uVar2 & 0x1fffff) << 2)
  ;
  *(byte *)(param_1 + 0xe) = (byte)((uint)uVar2 >> 0xe) & 0x7f | (byte)((int)uVar3 << 7);
  *(char *)((long)param_1 + 0x1d) = (char)(uVar3 >> 1);
  *(char *)param_1 = (char)lVar16;
  *(byte *)(param_1 + 1) =
       (byte)((ulong)lVar16 >> 0x10) & 0x1f | (byte)(((uint)uVar26 & 0x1fffff) << 5);
  *(char *)((long)param_1 + 0x1b) = (char)(uVar2 >> 6);
  *(char *)(param_1 + 0xf) = (char)(uVar3 >> 9);
  *(char *)((long)param_1 + 0x1f) = (char)(uVar3 >> 0x11);
  return;
}


