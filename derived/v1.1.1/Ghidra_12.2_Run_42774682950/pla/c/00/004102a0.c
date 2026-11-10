/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004102a0; name: FUN_004102a0
 */


void FUN_004102a0(undefined4 *param_1,uint *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  
  uVar5 = (ulong)*param_2 * (ulong)*param_2;
  *param_1 = (int)uVar5;
  uVar9 = (ulong)*param_2 * (ulong)param_2[1] + (uVar5 >> 0x20);
  uVar5 = (ulong)*param_2 * (ulong)param_2[1] + (uVar9 & 0xffffffff);
  param_1[1] = (int)uVar5;
  uVar2 = (uVar5 >> 0x20) + (uVar9 >> 0x20);
  uVar9 = (ulong)param_2[1] * (ulong)param_2[1] + (uVar2 & 0xffffffff);
  uVar1 = (ulong)*param_2 * (ulong)param_2[2] + (uVar9 & 0xffffffff);
  uVar4 = (uint)((uint)uVar2 < (uint)(uVar5 >> 0x20));
  uVar7 = (uint)(uVar9 >> 0x20);
  lVar6 = (ulong)*param_2 * (ulong)param_2[2] + (uVar1 & 0xffffffff);
  uVar3 = 2;
  if (!CARRY4(uVar7,uVar4)) {
    uVar3 = 1;
  }
  uVar10 = (uint)(uVar1 >> 0x20);
  uVar8 = uVar7 + uVar4 + uVar10;
  param_1[2] = (int)lVar6;
  if (!CARRY4(uVar7 + uVar4,uVar10)) {
    uVar3 = (uint)CARRY4(uVar7,uVar4);
  }
  uVar4 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar8,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar9 = (ulong)*param_2 * (ulong)param_2[3] + (ulong)(uVar8 + uVar4);
  uVar5 = (ulong)*param_2 * (ulong)param_2[3] + (uVar9 & 0xffffffff);
  uVar7 = (uint)(uVar9 >> 0x20);
  uVar9 = (ulong)param_2[1] * (ulong)param_2[2] + (uVar5 & 0xffffffff);
  uVar4 = 2;
  if (!CARRY4(uVar3,uVar7)) {
    uVar4 = 1;
  }
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar8 = uVar3 + uVar7 + uVar10;
  lVar6 = (ulong)param_2[1] * (ulong)param_2[2] + (uVar9 & 0xffffffff);
  if (!CARRY4(uVar3 + uVar7,uVar10)) {
    uVar4 = (uint)CARRY4(uVar3,uVar7);
  }
  uVar7 = (uint)(uVar9 >> 0x20);
  uVar3 = uVar8 + uVar7;
  if (CARRY4(uVar8,uVar7)) {
    uVar4 = uVar4 + 1;
  }
  uVar7 = (uint)((ulong)lVar6 >> 0x20);
  param_1[3] = (int)lVar6;
  if (CARRY4(uVar3,uVar7)) {
    uVar4 = uVar4 + 1;
  }
  uVar9 = (ulong)(uVar3 + uVar7) + (ulong)param_2[2] * (ulong)param_2[2];
  uVar5 = (ulong)param_2[1] * (ulong)param_2[3] + (uVar9 & 0xffffffff);
  uVar7 = (uint)(uVar9 >> 0x20);
  lVar6 = (ulong)param_2[1] * (ulong)param_2[3] + (uVar5 & 0xffffffff);
  uVar3 = 2;
  if (!CARRY4(uVar4,uVar7)) {
    uVar3 = 1;
  }
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar8 = uVar4 + uVar7 + uVar10;
  if (!CARRY4(uVar4 + uVar7,uVar10)) {
    uVar3 = (uint)CARRY4(uVar4,uVar7);
  }
  uVar4 = (uint)((ulong)lVar6 >> 0x20);
  param_1[4] = (int)lVar6;
  if (CARRY4(uVar8,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)param_2[2] * (ulong)param_2[3] + (ulong)(uVar8 + uVar4);
  lVar6 = (ulong)param_2[2] * (ulong)param_2[3] + (uVar5 & 0xffffffff);
  param_1[5] = (int)lVar6;
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar4 = 2;
  if (!CARRY4(uVar3,uVar7)) {
    uVar4 = 1;
  }
  uVar8 = (uint)((ulong)lVar6 >> 0x20);
  if (!CARRY4(uVar3 + uVar7,uVar8)) {
    uVar4 = (uint)CARRY4(uVar3,uVar7);
  }
  lVar6 = (ulong)(uVar3 + uVar7 + uVar8) + (ulong)param_2[3] * (ulong)param_2[3];
  param_1[6] = (int)lVar6;
  param_1[7] = uVar4 + (int)((ulong)lVar6 >> 0x20);
  return;
}


