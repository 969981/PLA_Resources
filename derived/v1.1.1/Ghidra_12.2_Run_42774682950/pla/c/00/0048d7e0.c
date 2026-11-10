/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0048d7e0; name: FUN_0048d7e0
 */


void FUN_0048d7e0(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (0x17 < param_3) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < (sizeof(iotas) / sizeof(iotas[0]))",
                  "external/openssl/crypto/sha/keccak1600.c",0x214,"Round");
  }
  uVar6 = param_2[5] ^ *param_2 ^ param_2[10] ^ param_2[0xf] ^ param_2[0x14];
  uVar3 = param_2[6] ^ param_2[1] ^ param_2[0xb] ^ param_2[0x10] ^ param_2[0x15];
  uVar9 = param_2[7] ^ param_2[2] ^ param_2[0xc] ^ param_2[0x11] ^ param_2[0x16];
  uVar1 = param_2[8] ^ param_2[3] ^ param_2[0xd] ^ param_2[0x12] ^ param_2[0x17];
  uVar4 = param_2[9] ^ param_2[4] ^ param_2[0xe] ^ param_2[0x13] ^ param_2[0x18];
  uVar2 = uVar6 ^ (uVar9 >> 0x3f | uVar9 << 1);
  uVar5 = uVar3 ^ (uVar1 >> 0x3f | uVar1 << 1);
  uVar3 = uVar4 ^ (uVar3 >> 0x3f | uVar3 << 1);
  uVar9 = uVar9 ^ (uVar4 >> 0x3f | uVar4 << 1);
  uVar1 = uVar1 ^ (uVar6 >> 0x3f | uVar6 << 1);
  uVar4 = uVar2 ^ param_2[6];
  uVar8 = uVar5 ^ param_2[0xc];
  uVar7 = uVar9 ^ param_2[0x12];
  uVar6 = uVar4 >> 0x14 | uVar4 << 0x2c;
  uVar10 = param_2[0x18] ^ uVar1;
  uVar8 = uVar8 >> 0x15 | uVar8 << 0x2b;
  uVar4 = uVar3 ^ *param_2;
  uVar7 = uVar7 >> 0x2b | uVar7 << 0x15;
  uVar10 = uVar10 >> 0x32 | uVar10 << 0xe;
  *param_1 = uVar8 & (uVar6 ^ 0xffffffffffffffff) ^ *(ulong *)(&DAT_03a158d0 + param_3 * 8) ^ uVar4;
  param_1[1] = uVar7 & (uVar8 ^ 0xffffffffffffffff) ^ uVar6;
  param_1[4] = uVar6 & (uVar4 ^ 0xffffffffffffffff) ^ uVar10;
  param_1[2] = uVar10 & (uVar7 ^ 0xffffffffffffffff) ^ uVar8;
  param_1[3] = uVar7 ^ uVar4 & (uVar10 ^ 0xffffffffffffffff);
  uVar6 = (param_2[9] ^ uVar1) >> 0x2c | (param_2[9] ^ uVar1) << 0x14;
  uVar7 = (param_2[10] ^ uVar3) >> 0x3d | (param_2[10] ^ uVar3) << 3;
  uVar8 = (param_2[0x10] ^ uVar2) >> 0x13 | (param_2[0x10] ^ uVar2) << 0x2d;
  uVar4 = (param_2[3] ^ uVar9) >> 0x24 | (param_2[3] ^ uVar9) << 0x1c;
  uVar10 = (param_2[0x16] ^ uVar5) >> 3 | (param_2[0x16] ^ uVar5) << 0x3d;
  param_1[5] = uVar7 & (uVar6 ^ 0xffffffffffffffff) ^ uVar4;
  param_1[6] = uVar8 & (uVar7 ^ 0xffffffffffffffff) ^ uVar6;
  param_1[9] = uVar10 ^ uVar6 & (uVar4 ^ 0xffffffffffffffff);
  param_1[7] = uVar10 & (uVar8 ^ 0xffffffffffffffff) ^ uVar7;
  param_1[8] = uVar4 & (uVar10 ^ 0xffffffffffffffff) ^ uVar8;
  uVar6 = (param_2[7] ^ uVar5) >> 0x3a | (param_2[7] ^ uVar5) << 6;
  uVar7 = (param_2[0xd] ^ uVar9) >> 0x27 | (param_2[0xd] ^ uVar9) << 0x19;
  uVar8 = (param_2[0x13] ^ uVar1) >> 0x38 | (param_2[0x13] ^ uVar1) << 8;
  uVar4 = (param_2[1] ^ uVar2) >> 0x3f | (param_2[1] ^ uVar2) << 1;
  uVar10 = (param_2[0x14] ^ uVar3) >> 0x2e | (param_2[0x14] ^ uVar3) << 0x12;
  param_1[10] = uVar7 & (uVar6 ^ 0xffffffffffffffff) ^ uVar4;
  param_1[0xb] = uVar8 & (uVar7 ^ 0xffffffffffffffff) ^ uVar6;
  param_1[0xe] = uVar10 ^ uVar6 & (uVar4 ^ 0xffffffffffffffff);
  param_1[0xc] = uVar10 & (uVar8 ^ 0xffffffffffffffff) ^ uVar7;
  param_1[0xd] = uVar4 & (uVar10 ^ 0xffffffffffffffff) ^ uVar8;
  uVar6 = (param_2[5] ^ uVar3) >> 0x1c | (param_2[5] ^ uVar3) << 0x24;
  uVar7 = (param_2[0xb] ^ uVar2) >> 0x36 | (param_2[0xb] ^ uVar2) << 10;
  uVar8 = (param_2[0x11] ^ uVar5) >> 0x31 | (param_2[0x11] ^ uVar5) << 0xf;
  uVar4 = (param_2[4] ^ uVar1) >> 0x25 | (param_2[4] ^ uVar1) << 0x1b;
  uVar10 = (param_2[0x17] ^ uVar9) >> 8 | (param_2[0x17] ^ uVar9) << 0x38;
  param_1[0xf] = uVar7 & (uVar6 ^ 0xffffffffffffffff) ^ uVar4;
  param_1[0x10] = uVar8 & (uVar7 ^ 0xffffffffffffffff) ^ uVar6;
  param_1[0x13] = uVar10 ^ uVar6 & (uVar4 ^ 0xffffffffffffffff);
  param_1[0x11] = uVar10 & (uVar8 ^ 0xffffffffffffffff) ^ uVar7;
  param_1[0x12] = uVar4 & (uVar10 ^ 0xffffffffffffffff) ^ uVar8;
  uVar9 = (param_2[8] ^ uVar9) >> 9 | (param_2[8] ^ uVar9) << 0x37;
  uVar4 = (param_2[0xe] ^ uVar1) >> 0x19 | (param_2[0xe] ^ uVar1) << 0x27;
  uVar3 = (param_2[0xf] ^ uVar3) >> 0x17 | (param_2[0xf] ^ uVar3) << 0x29;
  uVar5 = (param_2[2] ^ uVar5) >> 2 | (param_2[2] ^ uVar5) << 0x3e;
  uVar1 = (param_2[0x15] ^ uVar2) >> 0x3e | (param_2[0x15] ^ uVar2) << 2;
  param_1[0x14] = uVar4 & (uVar9 ^ 0xffffffffffffffff) ^ uVar5;
  param_1[0x15] = uVar3 & (uVar4 ^ 0xffffffffffffffff) ^ uVar9;
  param_1[0x16] = uVar1 & (uVar3 ^ 0xffffffffffffffff) ^ uVar4;
  param_1[0x17] = uVar5 & (uVar1 ^ 0xffffffffffffffff) ^ uVar3;
  param_1[0x18] = uVar1 ^ uVar9 & (uVar5 ^ 0xffffffffffffffff);
  return;
}


