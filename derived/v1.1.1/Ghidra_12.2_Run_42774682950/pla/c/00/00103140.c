/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00103140; name: FUN_00103140
 */


uint FUN_00103140(byte *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  
  if (((ulong)param_1 & 3) == 0) {
    if (param_2 < 0x10) {
      iVar8 = param_3 + 0x165667b1;
    }
    else {
      pbVar10 = param_1 + (param_2 - 0xf);
      uVar5 = param_3 + 0x24234428;
      uVar9 = param_3 + 0x85ebca77;
      uVar7 = param_3 + 0x61c8864f;
      do {
        uVar9 = uVar9 + *(int *)(param_1 + 4) * -0x7a143589;
        uVar5 = uVar5 + *(int *)param_1 * -0x7a143589;
        uVar1 = uVar5 >> 0x13 | uVar5 * 0x2000;
        uVar2 = uVar9 >> 0x13 | uVar9 * 0x2000;
        param_3 = param_3 + *(int *)(param_1 + 8) * -0x7a143589;
        uVar7 = uVar7 + *(int *)(param_1 + 0xc) * -0x7a143589;
        uVar5 = uVar1 * -0x61c8864f;
        uVar3 = param_3 >> 0x13 | param_3 * 0x2000;
        uVar4 = uVar7 >> 0x13 | uVar7 * 0x2000;
        uVar9 = uVar2 * -0x61c8864f;
        param_3 = uVar3 * -0x61c8864f;
        uVar7 = uVar4 * -0x61c8864f;
        param_1 = param_1 + 0x10;
      } while (param_1 < pbVar10);
      iVar8 = (uVar2 * 0x1bbcd880 | uVar9 >> 0x19) + (uVar1 * 0x3c6ef362 | uVar5 >> 0x1f) +
              (uVar3 * 0x779b1000 | param_3 >> 0x14) + (uVar4 * -0x193c0000 | uVar7 >> 0xe);
    }
  }
  else if (param_2 < 0x10) {
    iVar8 = param_3 + 0x165667b1;
  }
  else {
    pbVar10 = param_1 + (param_2 - 0xf);
    uVar5 = param_3 + 0x24234428;
    uVar9 = param_3 + 0x85ebca77;
    uVar7 = param_3 + 0x61c8864f;
    do {
      uVar9 = uVar9 + *(int *)(param_1 + 4) * -0x7a143589;
      uVar5 = uVar5 + *(int *)param_1 * -0x7a143589;
      uVar1 = uVar5 >> 0x13 | uVar5 * 0x2000;
      uVar2 = uVar9 >> 0x13 | uVar9 * 0x2000;
      param_3 = param_3 + *(int *)(param_1 + 8) * -0x7a143589;
      uVar7 = uVar7 + *(int *)(param_1 + 0xc) * -0x7a143589;
      uVar5 = uVar1 * -0x61c8864f;
      uVar3 = param_3 >> 0x13 | param_3 * 0x2000;
      uVar4 = uVar7 >> 0x13 | uVar7 * 0x2000;
      uVar9 = uVar2 * -0x61c8864f;
      param_3 = uVar3 * -0x61c8864f;
      uVar7 = uVar4 * -0x61c8864f;
      param_1 = param_1 + 0x10;
    } while (param_1 < pbVar10);
    iVar8 = (uVar2 * 0x1bbcd880 | uVar9 >> 0x19) + (uVar1 * 0x3c6ef362 | uVar5 >> 0x1f) +
            (uVar3 * 0x779b1000 | param_3 >> 0x14) + (uVar4 * -0x193c0000 | uVar7 >> 0xe);
  }
  uVar5 = iVar8 + (int)param_2;
  pbVar10 = param_1;
  pbVar6 = param_1;
  switch(param_2 & 0xf) {
  case 0:
    goto switchD_001035a8_caseD_0;
  case 0xc:
    pbVar10 = param_1 + 4;
    uVar5 = uVar5 + *(int *)param_1 * -0x3d4d51c3;
    uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f;
  case 8:
    param_1 = pbVar10 + 4;
    uVar5 = uVar5 + *(int *)pbVar10 * -0x3d4d51c3;
    uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f;
  case 4:
    uVar5 = uVar5 + *(int *)param_1 * -0x3d4d51c3;
    uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f;
    goto switchD_001035a8_caseD_0;
  case 0xd:
    pbVar10 = param_1 + 4;
    uVar5 = uVar5 + *(int *)param_1 * -0x3d4d51c3;
    uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f;
  case 9:
    param_1 = pbVar10 + 4;
    uVar5 = uVar5 + *(int *)pbVar10 * -0x3d4d51c3;
    uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f;
  case 5:
    uVar5 = uVar5 + *(int *)param_1 * -0x3d4d51c3;
    uVar5 = (uint)param_1[4] * 0x165667b1 + (uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f;
    break;
  case 0xe:
    pbVar10 = param_1 + 4;
    uVar5 = uVar5 + *(int *)param_1 * -0x3d4d51c3;
    uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f;
  case 10:
    param_1 = pbVar10 + 4;
    uVar5 = uVar5 + *(int *)pbVar10 * -0x3d4d51c3;
    uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f;
  case 6:
    uVar5 = uVar5 + *(int *)param_1 * -0x3d4d51c3;
    uVar5 = (uint)param_1[4] * 0x165667b1 + (uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f;
    uVar5 = (uint)param_1[5] * 0x165667b1 + (uVar5 >> 0x15 | uVar5 * 0x800) * -0x61c8864f;
    break;
  case 0xf:
    pbVar6 = param_1 + 4;
    uVar5 = uVar5 + *(int *)param_1 * -0x3d4d51c3;
    uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f;
  case 0xb:
    pbVar10 = pbVar6 + 4;
    uVar5 = uVar5 + *(int *)pbVar6 * -0x3d4d51c3;
    uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f;
  case 7:
    param_1 = pbVar10 + 4;
    uVar5 = uVar5 + *(int *)pbVar10 * -0x3d4d51c3;
    uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f;
  case 3:
    pbVar10 = param_1 + 1;
    uVar5 = uVar5 + (uint)*param_1 * 0x165667b1;
    uVar5 = (uVar5 >> 0x15 | uVar5 * 0x800) * -0x61c8864f;
  case 2:
    param_1 = pbVar10 + 1;
    uVar5 = uVar5 + (uint)*pbVar10 * 0x165667b1;
    uVar5 = (uVar5 >> 0x15 | uVar5 * 0x800) * -0x61c8864f;
  case 1:
    uVar5 = uVar5 + (uint)*param_1 * 0x165667b1;
  }
  uVar5 = (uVar5 >> 0x15 | uVar5 << 0xb) * -0x61c8864f;
switchD_001035a8_caseD_0:
  uVar5 = (uVar5 ^ uVar5 >> 0xf) * -0x7a143589;
  uVar5 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51c3;
  return uVar5 ^ uVar5 >> 0x10;
}


