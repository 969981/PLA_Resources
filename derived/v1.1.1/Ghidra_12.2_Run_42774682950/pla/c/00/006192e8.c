/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006192e8; name: FUN_006192e8
 */


ulong FUN_006192e8(long *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar6 = param_1[4];
  if (uVar6 == 0) {
    uVar5 = 0;
    uVar8 = param_1[3];
    if (uVar8 == 0) {
      return 0;
    }
  }
  else {
    lVar7 = *param_1;
    uVar10 = param_1[2];
    uVar8 = param_1[5];
    uVar9 = *(ulong *)(lVar7 + 0x9c0);
    if (uVar10 < 0x40) {
      uVar5 = 0;
      uVar11 = 0;
      do {
        do {
          lVar4 = uVar9 * 4;
          uVar1 = uVar9 + 0x18d;
          uVar9 = (uVar9 + 1) % 0x270;
          uVar3 = *(uint *)(lVar7 + uVar9 * 4);
          uVar3 = (uVar3 & 1) * -0x66f74f21 ^ *(uint *)(lVar7 + (uVar1 % 0x270) * 4) ^
                  (uVar3 & 0x7ffffffe | *(uint *)(lVar7 + lVar4) & 0x80000000) >> 1;
          *(uint *)(lVar7 + lVar4) = uVar3;
          uVar3 = uVar3 ^ uVar3 >> 0xb;
          uVar3 = (uVar3 & 0x13a58ad) << 7 ^ uVar3;
          uVar3 = (uVar3 & 0x1df8c) << 0xf ^ uVar3;
          uVar3 = uVar3 ^ uVar3 >> 0x12;
        } while (uVar8 <= uVar3);
        uVar11 = uVar11 + 1;
        uVar5 = (uVar5 << (uVar10 & 0x3f)) + (ulong)(*(uint *)(param_1 + 7) & uVar3);
      } while (uVar11 < uVar6);
    }
    else {
      uVar5 = 0;
      do {
        do {
          lVar4 = uVar9 * 4;
          uVar10 = uVar9 + 0x18d;
          uVar9 = (uVar9 + 1) % 0x270;
          uVar3 = *(uint *)(lVar7 + uVar9 * 4);
          uVar3 = (uVar3 & 1) * -0x66f74f21 ^ *(uint *)(lVar7 + (uVar10 % 0x270) * 4) ^
                  (uVar3 & 0x7ffffffe | *(uint *)(lVar7 + lVar4) & 0x80000000) >> 1;
          *(uint *)(lVar7 + lVar4) = uVar3;
          uVar3 = uVar3 ^ uVar3 >> 0xb;
          uVar3 = (uVar3 & 0x13a58ad) << 7 ^ uVar3;
          uVar3 = (uVar3 & 0x1df8c) << 0xf ^ uVar3;
          uVar3 = uVar3 ^ uVar3 >> 0x12;
        } while (uVar8 <= uVar3);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
      uVar5 = (ulong)(*(uint *)(param_1 + 7) & uVar3);
    }
    *(ulong *)(lVar7 + 0x9c0) = uVar9;
    uVar8 = param_1[3];
    if (uVar8 <= uVar6) {
      return uVar5;
    }
  }
  lVar7 = *param_1;
  uVar11 = param_1[2];
  uVar9 = param_1[6];
  uVar10 = *(ulong *)(lVar7 + 0x9c0);
  if (0x3e < uVar11) {
    do {
      do {
        lVar4 = uVar10 * 4;
        uVar5 = uVar10 + 0x18d;
        uVar10 = (uVar10 + 1) % 0x270;
        uVar3 = *(uint *)(lVar7 + uVar10 * 4);
        uVar3 = (uVar3 & 1) * -0x66f74f21 ^ *(uint *)(lVar7 + (uVar5 % 0x270) * 4) ^
                (uVar3 & 0x7ffffffe | *(uint *)(lVar7 + lVar4) & 0x80000000) >> 1;
        *(uint *)(lVar7 + lVar4) = uVar3;
        uVar3 = uVar3 ^ uVar3 >> 0xb;
        uVar3 = (uVar3 & 0x13a58ad) << 7 ^ uVar3;
        uVar3 = (uVar3 & 0x1df8c) << 0xf ^ uVar3;
        uVar3 = uVar3 ^ uVar3 >> 0x12;
      } while (uVar9 <= uVar3);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
    uVar2 = *(uint *)((long)param_1 + 0x3c);
    *(ulong *)(lVar7 + 0x9c0) = uVar10;
    return (ulong)(uVar2 & uVar3);
  }
  do {
    do {
      lVar4 = uVar10 * 4;
      uVar1 = uVar10 + 0x18d;
      uVar10 = (uVar10 + 1) % 0x270;
      uVar3 = *(uint *)(lVar7 + uVar10 * 4);
      uVar3 = (uVar3 & 1) * -0x66f74f21 ^ *(uint *)(lVar7 + (uVar1 % 0x270) * 4) ^
              (uVar3 & 0x7ffffffe | *(uint *)(lVar7 + lVar4) & 0x80000000) >> 1;
      *(uint *)(lVar7 + lVar4) = uVar3;
      uVar3 = uVar3 ^ uVar3 >> 0xb;
      uVar3 = (uVar3 & 0x13a58ad) << 7 ^ uVar3;
      uVar3 = (uVar3 & 0x1df8c) << 0xf ^ uVar3;
      uVar3 = uVar3 ^ uVar3 >> 0x12;
    } while (uVar9 <= uVar3);
    uVar6 = uVar6 + 1;
    uVar5 = (uVar5 << (uVar11 + 1 & 0x3f)) + (ulong)(*(uint *)((long)param_1 + 0x3c) & uVar3);
  } while (uVar6 < uVar8);
  *(ulong *)(lVar7 + 0x9c0) = uVar10;
  return uVar5;
}


