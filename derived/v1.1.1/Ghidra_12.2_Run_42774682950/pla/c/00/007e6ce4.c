/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e6ce4; name: FUN_007e6ce4
 */


/* WARNING: Removing unreachable block (ram,0x007e6f70) */

void FUN_007e6ce4(undefined4 *param_1,byte *param_2,uint param_3)

{
  undefined8 uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *__dest;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  __dest = (undefined8 *)(param_1 + 10);
  *__dest = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  if (param_3 == 0xc) {
    memcpy(__dest,param_2,0xc);
    uVar11 = 1;
    *(undefined1 *)((long)param_1 + 0x37) = 1;
LAB_007e7150:
    param_1[0x20] = uVar11;
    (**(code **)(param_1 + 4))(param_1 + 0x12,__dest,*(undefined8 *)(param_1 + 2));
    *param_1 = 2;
    return;
  }
  uVar9 = (ulong)(param_3 << 3);
  if (0xf < param_3) {
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar13 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar11 = param_3;
LAB_007e6df8:
    *(byte *)(param_1 + 10) = (byte)uVar24 ^ *param_2;
    *(byte *)((long)param_1 + 0x29) = (byte)uVar23 ^ param_2[1];
    *(byte *)((long)param_1 + 0x2a) = (byte)uVar22 ^ param_2[2];
    *(byte *)((long)param_1 + 0x2b) = (byte)uVar21 ^ param_2[3];
    *(byte *)(param_1 + 0xb) = (byte)uVar20 ^ param_2[4];
    *(byte *)((long)param_1 + 0x2d) = (byte)uVar8 ^ param_2[5];
    *(byte *)((long)param_1 + 0x2e) = (byte)uVar7 ^ param_2[6];
    *(byte *)((long)param_1 + 0x2f) = (byte)uVar6 ^ param_2[7];
    *(byte *)(param_1 + 0xc) = (byte)uVar13 ^ param_2[8];
    *(byte *)((long)param_1 + 0x31) = (byte)uVar5 ^ param_2[9];
    *(byte *)((long)param_1 + 0x32) = (byte)uVar4 ^ param_2[10];
    *(byte *)((long)param_1 + 0x33) = (byte)uVar3 ^ param_2[0xb];
    *(byte *)(param_1 + 0xd) = (byte)uVar19 ^ param_2[0xc];
    *(byte *)((long)param_1 + 0x35) = (byte)uVar18 ^ param_2[0xd];
    *(byte *)((long)param_1 + 0x36) = (byte)uVar17 ^ param_2[0xe];
    lVar14 = 0;
    uVar15 = (uint)uVar16 ^ (uint)param_2[0xf];
    *(char *)((long)param_1 + 0x37) = (char)uVar15;
    uVar12 = uVar15 >> 4;
    uVar15 = uVar15 & 0xf;
    do {
      uVar1 = *(undefined8 *)(param_1 + (ulong)uVar15 * 4 + 0x24);
      *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + (ulong)uVar15 * 4 + 0x22);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      uVar13 = *(ulong *)(param_1 + 0x16);
      uVar3 = *(ulong *)(param_1 + 0x18);
      while( true ) {
        uVar4 = *(ulong *)(param_1 + (ulong)uVar12 * 4 + 0x24);
        *(ulong *)(param_1 + 0x16) =
             *(ulong *)(param_1 + (ulong)uVar12 * 4 + 0x22) ^ uVar13 >> 4 ^
             (ulong)*(uint *)(&DAT_03a7180c + (uVar3 & 0xf) * 4) << 0x20;
        *(ulong *)(param_1 + 0x18) = uVar4 ^ (uVar3 >> 4 | uVar13 << 0x3c);
        if (lVar14 == -0xf) {
          uVar11 = uVar11 - 0x10;
          *__dest = *(undefined8 *)(param_1 + 0x16);
          *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x18);
          param_2 = param_2 + 0x10;
          uVar13 = (*(ulong *)(param_1 + 10) & 0xff00ff00ff00ff00) >> 8 |
                   (*(ulong *)(param_1 + 10) & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar24 = uVar3 >> 0x20 | uVar3 << 0x20;
          uVar13 = (*(ulong *)(param_1 + 0xc) & 0xff00ff00ff00ff00) >> 8 |
                   (*(ulong *)(param_1 + 0xc) & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar13 = uVar16 >> 0x20 | uVar16 << 0x20;
          uVar23 = uVar24 >> 8;
          uVar22 = uVar24 >> 0x10;
          uVar21 = uVar24 >> 0x18;
          uVar20 = uVar3 & 0xffffffff;
          uVar8 = (uVar3 & 0xffffffff) >> 8;
          uVar7 = (uVar3 & 0xffffffff) >> 0x10;
          uVar6 = (uVar3 & 0xffffffff) >> 0x18;
          uVar5 = uVar13 >> 8;
          uVar4 = uVar13 >> 0x10;
          uVar3 = uVar13 >> 0x18;
          uVar19 = uVar16 & 0xffffffff;
          uVar18 = (uVar16 & 0xffffffff) >> 8;
          uVar17 = (uVar16 & 0xffffffff) >> 0x10;
          uVar16 = (uVar16 & 0xffffffff) >> 0x18;
          *(ulong *)(param_1 + 10) = uVar24;
          *(ulong *)(param_1 + 0xc) = uVar13;
          if (0xf < uVar11) goto LAB_007e6df8;
          param_3 = param_3 & 0xf;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = uVar9 >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          goto joined_r0x007e6f7c;
        }
        bVar2 = *(byte *)((long)param_1 + lVar14 + 0x36);
        lVar14 = lVar14 + -1;
        uVar12 = (uint)(bVar2 >> 4);
        uVar15 = bVar2 & 0xf;
        if (lVar14 == 0) break;
        uVar13 = *(ulong *)(param_1 + (ulong)uVar15 * 4 + 0x22) ^ *(ulong *)(param_1 + 0x16) >> 4 ^
                 (ulong)*(uint *)(&DAT_03a7180c + (*(ulong *)(param_1 + 0x18) & 0xf) * 4) << 0x20;
        uVar3 = *(ulong *)(param_1 + (ulong)uVar15 * 4 + 0x24) ^
                (*(ulong *)(param_1 + 0x18) >> 4 | *(ulong *)(param_1 + 0x16) << 0x3c);
        *(ulong *)(param_1 + 0x16) = uVar13;
        *(ulong *)(param_1 + 0x18) = uVar3;
      }
    } while( true );
  }
  uVar13 = 0;
  uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
  uVar9 = uVar9 >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
joined_r0x007e6f7c:
  if (param_3 == 0) {
LAB_007e7088:
    lVar14 = 0;
    *(ulong *)(param_1 + 0xc) = uVar13 ^ uVar9 << 0x20;
    bVar2 = *(byte *)((long)param_1 + 0x37);
    uVar9 = (ulong)(bVar2 >> 4);
    uVar13 = (ulong)bVar2 & 0xf;
    do {
      uVar1 = *(undefined8 *)(param_1 + uVar13 * 4 + 0x24);
      *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + uVar13 * 4 + 0x22);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      uVar3 = *(ulong *)(param_1 + 0x16);
      uVar13 = *(ulong *)(param_1 + 0x18);
      lVar10 = lVar14;
      while( true ) {
        uVar4 = *(ulong *)(param_1 + uVar9 * 4 + 0x24);
        lVar14 = lVar10 + -1;
        *(ulong *)(param_1 + 0x16) =
             *(ulong *)(param_1 + uVar9 * 4 + 0x22) ^ uVar3 >> 4 ^
             (ulong)*(uint *)(&DAT_03a7180c + (uVar13 & 0xf) * 4) << 0x20;
        *(ulong *)(param_1 + 0x18) = uVar4 ^ (uVar13 >> 4 | uVar3 << 0x3c);
        if (lVar10 == -0xf) {
          *__dest = *(undefined8 *)(param_1 + 0x16);
          *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x18);
          uVar9 = (*(ulong *)(param_1 + 10) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(param_1 + 10) & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          *(ulong *)(param_1 + 10) = uVar9 >> 0x20 | uVar9 << 0x20;
          uVar9 = (*(ulong *)(param_1 + 0xc) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(param_1 + 0xc) & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          *(ulong *)(param_1 + 0xc) = uVar9 >> 0x20 | uVar9 << 0x20;
          uVar11 = ((uint)uVar9 & 0xff00ff00) >> 8 | ((uint)uVar9 & 0xff00ff) << 8;
          uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
          goto LAB_007e7150;
        }
        bVar2 = ((byte *)((long)param_1 + 0x37))[lVar14];
        uVar9 = (ulong)(bVar2 >> 4);
        uVar13 = (ulong)bVar2 & 0xf;
        if (lVar14 == 0) break;
        uVar3 = *(ulong *)(param_1 + uVar13 * 4 + 0x22) ^ *(ulong *)(param_1 + 0x16) >> 4 ^
                (ulong)*(uint *)(&DAT_03a7180c + (*(ulong *)(param_1 + 0x18) & 0xf) * 4) << 0x20;
        uVar13 = *(ulong *)(param_1 + uVar13 * 4 + 0x24) ^
                 (*(ulong *)(param_1 + 0x18) >> 4 | *(ulong *)(param_1 + 0x16) << 0x3c);
        *(ulong *)(param_1 + 0x16) = uVar3;
        *(ulong *)(param_1 + 0x18) = uVar13;
        lVar10 = lVar14;
      }
    } while( true );
  }
  if (param_3 == 1) {
    lVar10 = 0;
  }
  else {
    lVar14 = 0;
    do {
      *(byte *)((long)param_1 + lVar14 + 0x28) =
           *(byte *)((long)param_1 + lVar14 + 0x28) ^ param_2[lVar14];
      lVar10 = lVar14 + 2;
      *(byte *)((long)param_1 + lVar14 + 0x29) =
           *(byte *)((long)param_1 + lVar14 + 0x29) ^ (param_2 + lVar14)[1];
      lVar14 = lVar10;
    } while ((ulong)param_3 - ((ulong)param_3 & 1) != lVar10);
    if ((param_3 & 1) == 0) goto LAB_007e6fd4;
  }
  *(byte *)((long)__dest + lVar10) = *(byte *)((long)__dest + lVar10) ^ param_2[lVar10];
LAB_007e6fd4:
  lVar14 = 0;
  bVar2 = *(byte *)((long)param_1 + 0x37);
  uVar13 = (ulong)(bVar2 >> 4);
  uVar3 = (ulong)bVar2 & 0xf;
  do {
    uVar1 = *(undefined8 *)(param_1 + uVar3 * 4 + 0x24);
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + uVar3 * 4 + 0x22);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    uVar4 = *(ulong *)(param_1 + 0x16);
    uVar3 = *(ulong *)(param_1 + 0x18);
    lVar10 = lVar14;
    while( true ) {
      uVar5 = *(ulong *)(param_1 + uVar13 * 4 + 0x24);
      lVar14 = lVar10 + -1;
      *(ulong *)(param_1 + 0x16) =
           *(ulong *)(param_1 + uVar13 * 4 + 0x22) ^ uVar4 >> 4 ^
           (ulong)*(uint *)(&DAT_03a7180c + (uVar3 & 0xf) * 4) << 0x20;
      *(ulong *)(param_1 + 0x18) = uVar5 ^ (uVar3 >> 4 | uVar4 << 0x3c);
      if (lVar10 == -0xf) {
        *__dest = *(undefined8 *)(param_1 + 0x16);
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x18);
        uVar13 = (*(ulong *)(param_1 + 10) & 0xff00ff00ff00ff00) >> 8 |
                 (*(ulong *)(param_1 + 10) & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = (*(ulong *)(param_1 + 0xc) & 0xff00ff00ff00ff00) >> 8 |
                 (*(ulong *)(param_1 + 0xc) & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
        *(ulong *)(param_1 + 10) = uVar3 >> 0x20 | uVar3 << 0x20;
        *(ulong *)(param_1 + 0xc) = uVar13;
        goto LAB_007e7088;
      }
      bVar2 = ((byte *)((long)param_1 + 0x37))[lVar14];
      uVar13 = (ulong)(bVar2 >> 4);
      uVar3 = (ulong)bVar2 & 0xf;
      if (lVar14 == 0) break;
      uVar4 = *(ulong *)(param_1 + uVar3 * 4 + 0x22) ^ *(ulong *)(param_1 + 0x16) >> 4 ^
              (ulong)*(uint *)(&DAT_03a7180c + (*(ulong *)(param_1 + 0x18) & 0xf) * 4) << 0x20;
      uVar3 = *(ulong *)(param_1 + uVar3 * 4 + 0x24) ^
              (*(ulong *)(param_1 + 0x18) >> 4 | *(ulong *)(param_1 + 0x16) << 0x3c);
      *(ulong *)(param_1 + 0x16) = uVar4;
      *(ulong *)(param_1 + 0x18) = uVar3;
      lVar10 = lVar14;
    }
  } while( true );
}


