/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0013e330; name: FUN_0013e330
 */


void FUN_0013e330(long param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined2 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined2 *puVar18;
  long *plVar19;
  
  lVar12 = 0;
  param_2 = param_2 & 1;
  lVar13 = param_1 + 0x408;
  lVar15 = param_1 + 0x674;
  lVar17 = param_1;
  do {
    lVar5 = 0;
    uVar4 = 0;
    do {
      puVar14 = (undefined2 *)(lVar13 + lVar5);
      lVar5 = lVar5 + 6;
      *puVar14 = (short)(uVar4 / 0x108);
      puVar14[1] = (short)((ulong)(uVar4 + 0x7fdc) / 0x108);
      puVar14[2] = (short)((ulong)(uVar4 + 0xffb8) / 0x108);
      uVar4 = uVar4 + 0x17f94;
    } while (lVar5 != 0x210);
    lVar6 = param_1 + lVar12 * 0xd74;
    *(undefined8 *)(lVar6 + 0x618) = 0x7fdf7fde7fdd7fdc;
    *(undefined8 *)(lVar6 + 0x620) = 0x7fe37fe27fe17fe0;
    *(undefined8 *)(lVar6 + 0x628) = 0x7fe77fe67fe57fe4;
    *(undefined8 *)(lVar6 + 0x630) = 0x7feb7fea7fe97fe8;
    lVar5 = 0;
    *(undefined8 *)(lVar6 + 0x640) = 0x7ff37ff27ff17ff0;
    *(undefined8 *)(lVar6 + 0x648) = 0x7ff77ff67ff57ff4;
    *(undefined8 *)(lVar6 + 0x650) = 0x7ffb7ffa7ff97ff8;
    *(undefined8 *)(lVar6 + 0x658) = 0x7fff7ffe7ffd7ffc;
    *(undefined2 *)(lVar6 + 0x660) = 0x8000;
    *(undefined4 *)(lVar6 + 0x8bc) = 0x400;
    *(undefined8 *)(lVar6 + 0x638) = 0x7fef7fee7fed7fec;
    do {
      lVar6 = lVar15 + lVar5;
      lVar5 = lVar5 + 0x14;
      *(undefined8 *)(lVar6 + -0x12) = 0x1000100010001;
      *(undefined8 *)(lVar6 + -10) = 0x1000100010001;
      *(undefined4 *)(lVar6 + -2) = 0x10001;
    } while (lVar5 != 600);
    plVar7 = (long *)(param_1 + lVar12 * 0xd74);
    lVar6 = 0;
    lVar5 = 0;
    plVar19 = plVar7 + 0x118;
    *(uint *)(plVar7 + 0x118) = param_2;
    do {
      lVar11 = param_1 + lVar12 * 0xd74;
      plVar9 = (long *)(lVar11 + ((ulong)*(ushort *)(lVar11 + (lVar5 << 1 | 2U) + 0x408) - 1 >> 5 &
                                 0x7fffffffffffffe));
      do {
        plVar8 = plVar7 + 1;
        *plVar7 = lVar6;
        plVar7 = plVar8;
      } while (plVar8 <= plVar9);
      lVar11 = param_1 + lVar12 * 0xd74;
      lVar5 = lVar5 + 2;
      plVar7 = (long *)(lVar11 + ((ulong)*(ushort *)(lVar11 + lVar5 * 2 + 0x408) - 1 >> 5 &
                                 0x7fffffffffffffe));
      plVar9 = (long *)((long)plVar9 + 2);
      do {
        plVar8 = plVar9 + 1;
        *plVar9 = lVar6 + 0x1000100010001;
        plVar9 = plVar8;
      } while (plVar8 <= plVar7);
      plVar7 = (long *)((long)plVar7 + 2);
      lVar6 = lVar6 + 0x2000200020002;
    } while (lVar5 != 300);
    if ((int)*plVar19 != 0) {
      lVar5 = 0;
      uVar4 = (uint)*(ushort *)(param_1 + lVar12 * 0xd74 + 0x408);
      do {
        uVar10 = (uint)*(ushort *)(lVar17 + lVar5 * 2 + 0x40a);
        iVar2 = uVar10 - uVar4;
        uVar3 = 0x1f - (int)LZCOUNT(iVar2);
        uVar4 = (uint)(iVar2 * 0x8000) >> (ulong)(uVar3 & 0x1f);
        lVar11 = (ulong)(uVar4 >> 10) * 2;
        lVar6 = lVar5 * 4;
        lVar5 = lVar5 + 1;
        *(uint *)(lVar17 + lVar6 + 0x8c4) =
             ((0x3c000 - (uint)*(ushort *)(&DAT_039c4ec8 + lVar11)) + uVar3 * -0x4000) -
             ((uVar4 & 0x3ff) *
              ((uint)*(ushort *)(&DAT_039c4eca + lVar11) - (uint)*(ushort *)(&DAT_039c4ec8 + lVar11)
              ) + 0x200 >> 10);
        uVar4 = uVar10;
      } while (lVar5 != 300);
    }
    lVar12 = lVar12 + 1;
    lVar13 = lVar13 + 0xd74;
    lVar15 = lVar15 + 0xd74;
    lVar17 = lVar17 + 0xd74;
  } while (lVar12 != 4);
  lVar13 = 0;
  puVar14 = (undefined2 *)(param_1 + 0x365a);
  lVar15 = param_1 + 0x3704;
  do {
    puVar18 = puVar14;
    for (uVar16 = 0; puVar18[-1] = (short)((uVar16 & 0xffffffff) / 0x28), uVar16 != 0x140000;
        uVar16 = uVar16 + 0x10000) {
      *puVar18 = (short)((ulong)((int)uVar16 + 0x8000) / 0x28);
      puVar18 = puVar18 + 2;
    }
    lVar5 = param_1 + lVar13 * 0x1d4;
    lVar17 = 0;
    lVar12 = 0;
    *(undefined4 *)(lVar5 + 0x36fc) = 0x400;
    plVar19 = (long *)(lVar5 + 0x35d0);
    *(undefined8 *)(lVar5 + 0x36aa) = 0x1000100010001;
    *(undefined8 *)(lVar5 + 0x36b2) = 0x1000100010001;
    *(undefined8 *)(lVar5 + 0x36ba) = 0x1000100010001;
    *(undefined8 *)(lVar5 + 0x36c2) = 0x1000100010001;
    *(undefined8 *)(lVar5 + 0x36ca) = 0x1000100010001;
    *(undefined8 *)(lVar5 + 0x36d2) = 0x1000100010001;
    *(undefined8 *)(lVar5 + 0x36da) = 0x1000100010001;
    *(undefined8 *)(lVar5 + 0x36e2) = 0x1000100010001;
    *(undefined8 *)(lVar5 + 0x36ea) = 0x1000100010001;
    *(undefined8 *)(lVar5 + 0x36f2) = 0x1000100010001;
    *(uint *)(lVar5 + 0x3700) = param_2;
    do {
      lVar6 = param_1 + lVar13 * 0x1d4 + 0x35d0;
      plVar7 = (long *)(lVar6 + ((ulong)*(ushort *)(lVar6 + (lVar12 << 1 | 2U) + 0x88) - 1 >> 8 &
                                0xfffffffffffffe));
      do {
        plVar9 = plVar19 + 1;
        *plVar19 = lVar17;
        plVar19 = plVar9;
      } while (plVar9 <= plVar7);
      lVar12 = lVar12 + 2;
      lVar6 = param_1 + lVar13 * 0x1d4 + 0x35d0;
      plVar19 = (long *)(lVar6 + ((ulong)*(ushort *)(lVar6 + lVar12 * 2 + 0x88) - 1 >> 8 &
                                 0xfffffffffffffe));
      plVar7 = (long *)((long)plVar7 + 2);
      do {
        plVar9 = plVar7 + 1;
        *plVar7 = lVar17 + 0x1000100010001;
        plVar7 = plVar9;
      } while (plVar9 <= plVar19);
      plVar19 = (long *)((long)plVar19 + 2);
      lVar17 = lVar17 + 0x2000200020002;
    } while (lVar12 != 0x28);
    if (*(int *)(lVar5 + 0x3700) != 0) {
      lVar12 = 0;
      uVar4 = (uint)*(ushort *)(param_1 + lVar13 * 0x1d4 + 0x3658);
      do {
        uVar1 = puVar14[lVar12];
        iVar2 = uVar1 - uVar4;
        uVar3 = 0x1f - (int)LZCOUNT(iVar2);
        uVar4 = (uint)(iVar2 * 0x8000) >> (ulong)(uVar3 & 0x1f);
        lVar17 = (ulong)(uVar4 >> 10) * 2;
        *(uint *)(lVar15 + lVar12 * 4) =
             ((0x3c000 - (uint)*(ushort *)(&DAT_039c4ec8 + lVar17)) + uVar3 * -0x4000) -
             ((uVar4 & 0x3ff) *
              ((uint)*(ushort *)(&DAT_039c4eca + lVar17) - (uint)*(ushort *)(&DAT_039c4ec8 + lVar17)
              ) + 0x200 >> 10);
        lVar12 = lVar12 + 1;
        uVar4 = (uint)uVar1;
      } while (lVar12 != 0x28);
    }
    lVar13 = lVar13 + 1;
    puVar14 = puVar14 + 0xea;
    lVar15 = lVar15 + 0x1d4;
  } while (lVar13 != 4);
  *(undefined8 *)(param_1 + 0x3db0) = 0x2aaa24921e791861;
  *(undefined8 *)(param_1 + 0x3db8) = 0x430c3cf336db30c3;
  *(undefined8 *)(param_1 + 0x3dc0) = 0x5b6d55554f3c4924;
  *(undefined8 *)(param_1 + 0x3dc8) = 0x73cf6db6679e6186;
  *(undefined4 *)(param_1 + 0x3dd0) = 0x800079e7;
  *(undefined8 *)(param_1 + 0x3da8) = 0x12490c3006180000;
  *(undefined4 *)(param_1 + 0x3e00) = 0x400;
  *(undefined8 *)(param_1 + 0x3dd4) = 0x1000100010001;
  *(undefined8 *)(param_1 + 0x3ddc) = 0x1000100010001;
  *(undefined8 *)(param_1 + 0x3de4) = 0x1000100010001;
  *(undefined8 *)(param_1 + 0x3dec) = 0x1000100010001;
  *(undefined8 *)(param_1 + 0x3df4) = 0x1000100010001;
  *(undefined2 *)(param_1 + 0x3dfc) = 1;
  *(uint *)(param_1 + 0x3e04) = param_2;
  FUN_0013f1e0(param_1 + 0x3d20);
  return;
}


