/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040f550; name: FUN_0040f550
 */


void FUN_0040f550(undefined4 *param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar3 = *param_2;
  uVar4 = *param_3;
  *param_1 = (int)((ulong)uVar4 * (ulong)uVar3);
  uVar5 = (ulong)param_3[1] * (ulong)*param_2 + ((ulong)uVar4 * (ulong)uVar3 >> 0x20);
  uVar10 = (ulong)*param_3 * (ulong)param_2[1] + (uVar5 & 0xffffffff);
  param_1[1] = (int)uVar10;
  uVar2 = (uVar10 >> 0x20) + (uVar5 >> 0x20);
  uVar5 = (ulong)*param_3 * (ulong)param_2[2] + (uVar2 & 0xffffffff);
  uVar1 = (ulong)param_3[1] * (ulong)param_2[1] + (uVar5 & 0xffffffff);
  uVar7 = (uint)((uint)uVar2 < (uint)(uVar10 >> 0x20));
  uVar4 = (uint)(uVar5 >> 0x20);
  uVar3 = 2;
  if (!CARRY4(uVar4,uVar7)) {
    uVar3 = 1;
  }
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar4 + uVar7 + uVar8;
  if (!CARRY4(uVar4 + uVar7,uVar8)) {
    uVar3 = (uint)CARRY4(uVar4,uVar7);
  }
  lVar6 = (ulong)param_3[2] * (ulong)*param_2 + (uVar1 & 0xffffffff);
  param_1[2] = (int)lVar6;
  uVar4 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar9,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)(uVar9 + uVar4) + (ulong)param_3[3] * (ulong)*param_2;
  uVar10 = (ulong)param_3[2] * (ulong)param_2[1] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar4 = 2;
  if (!CARRY4(uVar3,uVar7)) {
    uVar4 = 1;
  }
  uVar8 = (uint)(uVar10 >> 0x20);
  uVar9 = uVar3 + uVar7 + uVar8;
  if (!CARRY4(uVar3 + uVar7,uVar8)) {
    uVar4 = (uint)CARRY4(uVar3,uVar7);
  }
  uVar10 = (ulong)param_3[1] * (ulong)param_2[2] + (uVar10 & 0xffffffff);
  lVar6 = (ulong)*param_3 * (ulong)param_2[3] + (uVar10 & 0xffffffff);
  uVar7 = (uint)(uVar10 >> 0x20);
  uVar3 = uVar9 + uVar7;
  param_1[3] = (int)lVar6;
  if (CARRY4(uVar9,uVar7)) {
    uVar4 = uVar4 + 1;
  }
  uVar7 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar3,uVar7)) {
    uVar4 = uVar4 + 1;
  }
  uVar5 = (ulong)(uVar3 + uVar7) + (ulong)*param_3 * (ulong)param_2[4];
  uVar10 = (ulong)param_3[1] * (ulong)param_2[3] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar3 = 2;
  if (!CARRY4(uVar4,uVar7)) {
    uVar3 = 1;
  }
  uVar8 = (uint)(uVar10 >> 0x20);
  uVar9 = uVar4 + uVar7 + uVar8;
  if (!CARRY4(uVar4 + uVar7,uVar8)) {
    uVar3 = (uint)CARRY4(uVar4,uVar7);
  }
  uVar10 = (ulong)param_3[2] * (ulong)param_2[2] + (uVar10 & 0xffffffff);
  uVar7 = (uint)(uVar10 >> 0x20);
  uVar4 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uVar3 = uVar3 + 1;
  }
  uVar10 = (ulong)param_3[3] * (ulong)param_2[1] + (uVar10 & 0xffffffff);
  uVar9 = (uint)(uVar10 >> 0x20);
  uVar7 = uVar4 + uVar9;
  if (CARRY4(uVar4,uVar9)) {
    uVar3 = uVar3 + 1;
  }
  lVar6 = (ulong)param_3[4] * (ulong)*param_2 + (uVar10 & 0xffffffff);
  param_1[4] = (int)lVar6;
  uVar4 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar7,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)(uVar7 + uVar4) + (ulong)param_3[5] * (ulong)*param_2;
  uVar10 = (ulong)param_3[4] * (ulong)param_2[1] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar4 = 2;
  if (!CARRY4(uVar3,uVar7)) {
    uVar4 = 1;
  }
  uVar8 = (uint)(uVar10 >> 0x20);
  uVar9 = uVar3 + uVar7 + uVar8;
  if (!CARRY4(uVar3 + uVar7,uVar8)) {
    uVar4 = (uint)CARRY4(uVar3,uVar7);
  }
  uVar10 = (ulong)param_3[3] * (ulong)param_2[2] + (uVar10 & 0xffffffff);
  uVar5 = (ulong)param_3[2] * (ulong)param_2[3] + (uVar10 & 0xffffffff);
  uVar7 = (uint)(uVar10 >> 0x20);
  uVar3 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uVar4 = uVar4 + 1;
  }
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar7 = uVar3 + uVar9;
  if (CARRY4(uVar3,uVar9)) {
    uVar4 = uVar4 + 1;
  }
  uVar10 = (ulong)param_3[1] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  lVar6 = (ulong)*param_3 * (ulong)param_2[5] + (uVar10 & 0xffffffff);
  uVar9 = (uint)(uVar10 >> 0x20);
  uVar3 = uVar7 + uVar9;
  param_1[5] = (int)lVar6;
  if (CARRY4(uVar7,uVar9)) {
    uVar4 = uVar4 + 1;
  }
  uVar7 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar3,uVar7)) {
    uVar4 = uVar4 + 1;
  }
  uVar5 = (ulong)(uVar3 + uVar7) + (ulong)*param_3 * (ulong)param_2[6];
  uVar10 = (ulong)param_3[1] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar3 = 2;
  if (!CARRY4(uVar4,uVar7)) {
    uVar3 = 1;
  }
  uVar8 = (uint)(uVar10 >> 0x20);
  uVar9 = uVar4 + uVar7 + uVar8;
  if (!CARRY4(uVar4 + uVar7,uVar8)) {
    uVar3 = (uint)CARRY4(uVar4,uVar7);
  }
  uVar10 = (ulong)param_3[2] * (ulong)param_2[4] + (uVar10 & 0xffffffff);
  uVar7 = (uint)(uVar10 >> 0x20);
  uVar4 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uVar3 = uVar3 + 1;
  }
  uVar10 = (ulong)param_3[3] * (ulong)param_2[3] + (uVar10 & 0xffffffff);
  uVar9 = (uint)(uVar10 >> 0x20);
  uVar7 = uVar4 + uVar9;
  if (CARRY4(uVar4,uVar9)) {
    uVar3 = uVar3 + 1;
  }
  uVar10 = (ulong)param_3[4] * (ulong)param_2[2] + (uVar10 & 0xffffffff);
  uVar9 = (uint)(uVar10 >> 0x20);
  uVar4 = uVar7 + uVar9;
  if (CARRY4(uVar7,uVar9)) {
    uVar3 = uVar3 + 1;
  }
  uVar10 = (ulong)param_3[5] * (ulong)param_2[1] + (uVar10 & 0xffffffff);
  uVar9 = (uint)(uVar10 >> 0x20);
  uVar7 = uVar4 + uVar9;
  if (CARRY4(uVar4,uVar9)) {
    uVar3 = uVar3 + 1;
  }
  lVar6 = (ulong)param_3[6] * (ulong)*param_2 + (uVar10 & 0xffffffff);
  param_1[6] = (int)lVar6;
  uVar4 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar7,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)(uVar7 + uVar4) + (ulong)param_3[7] * (ulong)*param_2;
  uVar10 = (ulong)param_3[6] * (ulong)param_2[1] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar4 = 2;
  if (!CARRY4(uVar3,uVar7)) {
    uVar4 = 1;
  }
  uVar8 = (uint)(uVar10 >> 0x20);
  uVar9 = uVar3 + uVar7 + uVar8;
  if (!CARRY4(uVar3 + uVar7,uVar8)) {
    uVar4 = (uint)CARRY4(uVar3,uVar7);
  }
  uVar10 = (ulong)param_3[5] * (ulong)param_2[2] + (uVar10 & 0xffffffff);
  uVar5 = (ulong)param_3[4] * (ulong)param_2[3] + (uVar10 & 0xffffffff);
  uVar7 = (uint)(uVar10 >> 0x20);
  uVar3 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uVar4 = uVar4 + 1;
  }
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar7 = uVar3 + uVar9;
  if (CARRY4(uVar3,uVar9)) {
    uVar4 = uVar4 + 1;
  }
  uVar10 = (ulong)param_3[3] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar5 = (ulong)param_3[2] * (ulong)param_2[5] + (uVar10 & 0xffffffff);
  uVar9 = (uint)(uVar10 >> 0x20);
  uVar3 = uVar7 + uVar9;
  if (CARRY4(uVar7,uVar9)) {
    uVar4 = uVar4 + 1;
  }
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar7 = uVar3 + uVar9;
  if (CARRY4(uVar3,uVar9)) {
    uVar4 = uVar4 + 1;
  }
  uVar10 = (ulong)param_3[1] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  lVar6 = (ulong)*param_3 * (ulong)param_2[7] + (uVar10 & 0xffffffff);
  uVar9 = (uint)(uVar10 >> 0x20);
  uVar3 = uVar7 + uVar9;
  param_1[7] = (int)lVar6;
  if (CARRY4(uVar7,uVar9)) {
    uVar4 = uVar4 + 1;
  }
  uVar7 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar3,uVar7)) {
    uVar4 = uVar4 + 1;
  }
  uVar5 = (ulong)(uVar3 + uVar7) + (ulong)param_3[1] * (ulong)param_2[7];
  uVar10 = (ulong)param_3[2] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar3 = 2;
  if (!CARRY4(uVar4,uVar7)) {
    uVar3 = 1;
  }
  uVar8 = (uint)(uVar10 >> 0x20);
  uVar9 = uVar4 + uVar7 + uVar8;
  if (!CARRY4(uVar4 + uVar7,uVar8)) {
    uVar3 = (uint)CARRY4(uVar4,uVar7);
  }
  uVar10 = (ulong)param_3[3] * (ulong)param_2[5] + (uVar10 & 0xffffffff);
  uVar7 = (uint)(uVar10 >> 0x20);
  uVar4 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uVar3 = uVar3 + 1;
  }
  uVar10 = (ulong)param_3[4] * (ulong)param_2[4] + (uVar10 & 0xffffffff);
  uVar9 = (uint)(uVar10 >> 0x20);
  uVar7 = uVar4 + uVar9;
  if (CARRY4(uVar4,uVar9)) {
    uVar3 = uVar3 + 1;
  }
  uVar10 = (ulong)param_3[5] * (ulong)param_2[3] + (uVar10 & 0xffffffff);
  uVar9 = (uint)(uVar10 >> 0x20);
  uVar4 = uVar7 + uVar9;
  if (CARRY4(uVar7,uVar9)) {
    uVar3 = uVar3 + 1;
  }
  uVar10 = (ulong)param_3[6] * (ulong)param_2[2] + (uVar10 & 0xffffffff);
  uVar9 = (uint)(uVar10 >> 0x20);
  uVar7 = uVar4 + uVar9;
  if (CARRY4(uVar4,uVar9)) {
    uVar3 = uVar3 + 1;
  }
  lVar6 = (ulong)param_3[7] * (ulong)param_2[1] + (uVar10 & 0xffffffff);
  param_1[8] = (int)lVar6;
  uVar4 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar7,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)(uVar7 + uVar4) + (ulong)param_3[7] * (ulong)param_2[2];
  uVar10 = (ulong)param_3[6] * (ulong)param_2[3] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar4 = 2;
  if (!CARRY4(uVar3,uVar7)) {
    uVar4 = 1;
  }
  uVar8 = (uint)(uVar10 >> 0x20);
  uVar9 = uVar3 + uVar7 + uVar8;
  if (!CARRY4(uVar3 + uVar7,uVar8)) {
    uVar4 = (uint)CARRY4(uVar3,uVar7);
  }
  uVar10 = (ulong)param_3[5] * (ulong)param_2[4] + (uVar10 & 0xffffffff);
  uVar5 = (ulong)param_3[4] * (ulong)param_2[5] + (uVar10 & 0xffffffff);
  uVar7 = (uint)(uVar10 >> 0x20);
  uVar3 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uVar4 = uVar4 + 1;
  }
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar7 = uVar3 + uVar9;
  if (CARRY4(uVar3,uVar9)) {
    uVar4 = uVar4 + 1;
  }
  uVar10 = (ulong)param_3[3] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  lVar6 = (ulong)param_3[2] * (ulong)param_2[7] + (uVar10 & 0xffffffff);
  uVar9 = (uint)(uVar10 >> 0x20);
  uVar3 = uVar7 + uVar9;
  param_1[9] = (int)lVar6;
  if (CARRY4(uVar7,uVar9)) {
    uVar4 = uVar4 + 1;
  }
  uVar7 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar3,uVar7)) {
    uVar4 = uVar4 + 1;
  }
  uVar5 = (ulong)(uVar3 + uVar7) + (ulong)param_3[3] * (ulong)param_2[7];
  uVar10 = (ulong)param_3[4] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar3 = 2;
  if (!CARRY4(uVar4,uVar7)) {
    uVar3 = 1;
  }
  uVar8 = (uint)(uVar10 >> 0x20);
  uVar9 = uVar4 + uVar7 + uVar8;
  if (!CARRY4(uVar4 + uVar7,uVar8)) {
    uVar3 = (uint)CARRY4(uVar4,uVar7);
  }
  uVar10 = (ulong)param_3[5] * (ulong)param_2[5] + (uVar10 & 0xffffffff);
  uVar7 = (uint)(uVar10 >> 0x20);
  uVar4 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uVar3 = uVar3 + 1;
  }
  uVar10 = (ulong)param_3[6] * (ulong)param_2[4] + (uVar10 & 0xffffffff);
  uVar9 = (uint)(uVar10 >> 0x20);
  uVar7 = uVar4 + uVar9;
  if (CARRY4(uVar4,uVar9)) {
    uVar3 = uVar3 + 1;
  }
  lVar6 = (ulong)param_3[7] * (ulong)param_2[3] + (uVar10 & 0xffffffff);
  param_1[10] = (int)lVar6;
  uVar4 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar7,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)(uVar7 + uVar4) + (ulong)param_3[7] * (ulong)param_2[4];
  uVar10 = (ulong)param_3[6] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar4 = 2;
  if (!CARRY4(uVar3,uVar7)) {
    uVar4 = 1;
  }
  uVar8 = (uint)(uVar10 >> 0x20);
  uVar9 = uVar3 + uVar7 + uVar8;
  if (!CARRY4(uVar3 + uVar7,uVar8)) {
    uVar4 = (uint)CARRY4(uVar3,uVar7);
  }
  uVar10 = (ulong)param_3[5] * (ulong)param_2[6] + (uVar10 & 0xffffffff);
  lVar6 = (ulong)param_3[4] * (ulong)param_2[7] + (uVar10 & 0xffffffff);
  uVar7 = (uint)(uVar10 >> 0x20);
  uVar3 = uVar9 + uVar7;
  param_1[0xb] = (int)lVar6;
  if (CARRY4(uVar9,uVar7)) {
    uVar4 = uVar4 + 1;
  }
  uVar7 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar3,uVar7)) {
    uVar4 = uVar4 + 1;
  }
  uVar5 = (ulong)(uVar3 + uVar7) + (ulong)param_3[5] * (ulong)param_2[7];
  uVar10 = (ulong)param_3[6] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar3 = 2;
  if (!CARRY4(uVar4,uVar7)) {
    uVar3 = 1;
  }
  uVar8 = (uint)(uVar10 >> 0x20);
  uVar9 = uVar4 + uVar7 + uVar8;
  if (!CARRY4(uVar4 + uVar7,uVar8)) {
    uVar3 = (uint)CARRY4(uVar4,uVar7);
  }
  lVar6 = (ulong)param_3[7] * (ulong)param_2[5] + (uVar10 & 0xffffffff);
  param_1[0xc] = (int)lVar6;
  uVar4 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar9,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar10 = (ulong)(uVar9 + uVar4) + (ulong)param_3[7] * (ulong)param_2[6];
  lVar6 = (ulong)param_3[6] * (ulong)param_2[7] + (uVar10 & 0xffffffff);
  uVar7 = (uint)(uVar10 >> 0x20);
  param_1[0xd] = (int)lVar6;
  uVar4 = 2;
  if (!CARRY4(uVar3,uVar7)) {
    uVar4 = 1;
  }
  uVar9 = (uint)((ulong)lVar6 >> 0x20);
  if (!CARRY4(uVar3 + uVar7,uVar9)) {
    uVar4 = (uint)CARRY4(uVar3,uVar7);
  }
  lVar6 = (ulong)(uVar3 + uVar7 + uVar9) + (ulong)param_3[7] * (ulong)param_2[7];
  param_1[0xe] = (int)lVar6;
  param_1[0xf] = uVar4 + (int)((ulong)lVar6 >> 0x20);
  return;
}


