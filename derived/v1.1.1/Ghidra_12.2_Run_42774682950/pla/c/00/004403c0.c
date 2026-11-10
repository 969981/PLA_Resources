/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004403c0; name: FUN_004403c0
 */


undefined8 FUN_004403c0(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  
  uVar11 = 0xffffffff;
  if ((param_1 != (uint *)0x0) && (param_3 != (uint *)0x0)) {
    if ((param_2 != 0x80) && ((param_2 != 0x100 && (param_2 != 0xc0)))) {
      return 0xfffffffe;
    }
    if (param_2 == 0x80) {
      uVar13 = 10;
    }
    else if (param_2 == 0xc0) {
      uVar13 = 0xc;
    }
    else {
      uVar13 = 0xe;
    }
    param_3[0x3c] = uVar13;
    uVar13 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
    *param_3 = uVar13;
    uVar10 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
    param_3[1] = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
    param_3[2] = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
    param_3[3] = uVar10 >> 0x10 | uVar10 << 0x10;
    if (param_2 == 0x80) {
      lVar12 = 0;
      do {
        uVar5 = param_3[3];
        puVar1 = (uint *)((long)&DAT_03a0ab00 + lVar12);
        lVar12 = lVar12 + 4;
        uVar13 = uVar13 ^ (uint)(byte)(&DAT_03a09b03)[(ulong)(byte)(uVar5 >> 0x10) * 4] << 0x18 ^
                 (uint)(byte)(&DAT_03a09f02)[(ulong)(byte)(uVar5 >> 8) * 4] << 0x10 ^
                 (uint)(byte)(&DAT_03a0a301)[(ulong)(byte)uVar5 * 4] << 8 ^
                 (uint)(byte)(&DAT_03a0a700)[(ulong)(uVar5 >> 0x16) & 0x3fc] ^ *puVar1;
        param_3[4] = uVar13;
        param_3[5] = param_3[1] ^ uVar13;
        uVar10 = param_3[2] ^ param_3[1] ^ uVar13;
        param_3[6] = uVar10;
        param_3[7] = uVar10 ^ uVar5;
        param_3 = param_3 + 4;
      } while (lVar12 != 0x28);
    }
    else {
      uVar10 = (param_1[4] & 0xff00ff00) >> 8 | (param_1[4] & 0xff00ff) << 8;
      param_3[4] = uVar10 >> 0x10 | uVar10 << 0x10;
      uVar10 = (param_1[5] & 0xff00ff00) >> 8 | (param_1[5] & 0xff00ff) << 8;
      param_3[5] = uVar10 >> 0x10 | uVar10 << 0x10;
      if (param_2 == 0xc0) {
        uVar4 = param_3[5];
        uVar13 = uVar13 ^ (uint)(byte)(&DAT_03a09b03)[(ulong)(byte)(uVar4 >> 0x10) * 4] << 0x18 ^
                 (uint)(byte)(&DAT_03a09f02)[(ulong)(byte)(uVar4 >> 8) * 4] << 0x10 ^
                 (uint)(byte)(&DAT_03a0a301)[(ulong)(byte)uVar4 * 4] << 8 ^
                 (uint)(byte)(&DAT_03a0a700)[(ulong)(uVar4 >> 0x16) & 0x3fc] ^ 0x1000000;
        uVar2 = param_3[1] ^ uVar13;
        uVar3 = param_3[2] ^ uVar2;
        uVar5 = param_3[3] ^ uVar3;
        uVar10 = param_3[4] ^ uVar5;
        uVar4 = uVar10 ^ uVar4;
        param_3[6] = uVar13;
        param_3[7] = uVar2;
        param_3[8] = uVar3;
        param_3[9] = uVar5;
        param_3[10] = uVar10;
        param_3[0xb] = uVar4;
        uVar13 = uVar13 ^ (uint)(byte)(&DAT_03a09b03)[(ulong)(uVar4 >> 0x10 & 0xff) * 4] << 0x18 ^
                 (uint)(byte)(&DAT_03a09f02)[(ulong)(uVar4 >> 8 & 0xff) * 4] << 0x10 ^
                 (uint)(byte)(&DAT_03a0a301)[(ulong)(uVar4 & 0xff) * 4] << 8 ^
                 (uint)(byte)(&DAT_03a0a700)[(ulong)(uVar4 >> 0x18) * 4] ^ 0x2000000;
        uVar2 = uVar2 ^ uVar13;
        uVar3 = uVar3 ^ uVar2;
        uVar5 = uVar5 ^ uVar3;
        uVar10 = uVar10 ^ uVar5;
        uVar4 = uVar10 ^ uVar4;
        param_3[0xc] = uVar13;
        param_3[0xd] = uVar2;
        param_3[0xe] = uVar3;
        param_3[0xf] = uVar5;
        param_3[0x10] = uVar10;
        param_3[0x11] = uVar4;
        uVar13 = uVar13 ^ (uint)(byte)(&DAT_03a09b03)[(ulong)(uVar4 >> 0x10 & 0xff) * 4] << 0x18 ^
                 (uint)(byte)(&DAT_03a09f02)[(ulong)(uVar4 >> 8 & 0xff) * 4] << 0x10 ^
                 (uint)(byte)(&DAT_03a0a301)[(ulong)(uVar4 & 0xff) * 4] << 8 ^
                 (uint)(byte)(&DAT_03a0a700)[(ulong)(uVar4 >> 0x18) * 4] ^ 0x4000000;
        uVar2 = uVar2 ^ uVar13;
        uVar3 = uVar3 ^ uVar2;
        uVar5 = uVar5 ^ uVar3;
        uVar10 = uVar10 ^ uVar5;
        uVar4 = uVar10 ^ uVar4;
        param_3[0x12] = uVar13;
        param_3[0x13] = uVar2;
        param_3[0x14] = uVar3;
        param_3[0x15] = uVar5;
        param_3[0x16] = uVar10;
        param_3[0x17] = uVar4;
        uVar13 = uVar13 ^ (uint)(byte)(&DAT_03a09b03)[(ulong)(uVar4 >> 0x10 & 0xff) * 4] << 0x18 ^
                 (uint)(byte)(&DAT_03a09f02)[(ulong)(uVar4 >> 8 & 0xff) * 4] << 0x10 ^
                 (uint)(byte)(&DAT_03a0a301)[(ulong)(uVar4 & 0xff) * 4] << 8 ^
                 (uint)(byte)(&DAT_03a0a700)[(ulong)(uVar4 >> 0x18) * 4] ^ 0x8000000;
        uVar2 = uVar2 ^ uVar13;
        uVar3 = uVar3 ^ uVar2;
        uVar5 = uVar5 ^ uVar3;
        uVar10 = uVar10 ^ uVar5;
        uVar4 = uVar10 ^ uVar4;
        param_3[0x18] = uVar13;
        param_3[0x19] = uVar2;
        param_3[0x1a] = uVar3;
        param_3[0x1b] = uVar5;
        param_3[0x1c] = uVar10;
        param_3[0x1d] = uVar4;
        uVar13 = uVar13 ^ (uint)(byte)(&DAT_03a09b03)[(ulong)(uVar4 >> 0x10 & 0xff) * 4] << 0x18 ^
                 (uint)(byte)(&DAT_03a09f02)[(ulong)(uVar4 >> 8 & 0xff) * 4] << 0x10 ^
                 (uint)(byte)(&DAT_03a0a301)[(ulong)(uVar4 & 0xff) * 4] << 8 ^
                 (uint)(byte)(&DAT_03a0a700)[(ulong)(uVar4 >> 0x18) * 4] ^ 0x10000000;
        uVar2 = uVar2 ^ uVar13;
        uVar3 = uVar3 ^ uVar2;
        uVar5 = uVar5 ^ uVar3;
        uVar10 = uVar10 ^ uVar5;
        uVar4 = uVar10 ^ uVar4;
        param_3[0x1e] = uVar13;
        param_3[0x1f] = uVar2;
        param_3[0x20] = uVar3;
        param_3[0x21] = uVar5;
        param_3[0x22] = uVar10;
        param_3[0x23] = uVar4;
        uVar13 = uVar13 ^ (uint)(byte)(&DAT_03a09b03)[(ulong)(uVar4 >> 0x10 & 0xff) * 4] << 0x18 ^
                 (uint)(byte)(&DAT_03a09f02)[(ulong)(uVar4 >> 8 & 0xff) * 4] << 0x10 ^
                 (uint)(byte)(&DAT_03a0a301)[(ulong)(uVar4 & 0xff) * 4] << 8 ^
                 (uint)(byte)(&DAT_03a0a700)[(ulong)(uVar4 >> 0x18) * 4] ^ 0x20000000;
        uVar2 = uVar2 ^ uVar13;
        uVar3 = uVar3 ^ uVar2;
        uVar5 = uVar5 ^ uVar3;
        uVar10 = uVar10 ^ uVar5;
        uVar4 = uVar10 ^ uVar4;
        bVar6 = (&DAT_03a09b03)[(ulong)(uVar4 >> 0x10 & 0xff) * 4];
        bVar7 = (&DAT_03a09f02)[(ulong)(uVar4 >> 8 & 0xff) * 4];
        bVar8 = (&DAT_03a0a301)[(ulong)(uVar4 & 0xff) * 4];
        bVar9 = (&DAT_03a0a700)[(ulong)(uVar4 >> 0x18) * 4];
        param_3[0x24] = uVar13;
        param_3[0x25] = uVar2;
        param_3[0x26] = uVar3;
        param_3[0x27] = uVar5;
        param_3[0x28] = uVar10;
        param_3[0x29] = uVar4;
        uVar13 = uVar13 ^ (uint)bVar6 << 0x18 ^ (uint)bVar7 << 0x10 ^ (uint)bVar8 << 8 ^ (uint)bVar9
                 ^ 0x40000000;
        uVar2 = uVar2 ^ uVar13;
        uVar3 = uVar3 ^ uVar2;
        uVar5 = uVar5 ^ uVar3;
        uVar4 = uVar10 ^ uVar5 ^ uVar4;
        param_3[0x2e] = uVar10 ^ uVar5;
        param_3[0x2f] = uVar4;
        param_3[0x2a] = uVar13;
        param_3[0x2b] = uVar2;
        param_3[0x2c] = uVar3;
        param_3[0x2d] = uVar5;
        uVar13 = uVar13 ^ (uint)(byte)(&DAT_03a09b03)[(ulong)(uVar4 >> 0x10 & 0xff) * 4] << 0x18 ^
                 (uint)(byte)(&DAT_03a09f02)[(ulong)(uVar4 >> 8 & 0xff) * 4] << 0x10 ^
                 (uint)(byte)(&DAT_03a0a301)[(ulong)(uVar4 & 0xff) * 4] << 8 ^
                 (uint)(byte)(&DAT_03a0a700)[(ulong)(uVar4 >> 0x18) * 4] ^ 0x80000000;
        uVar2 = uVar2 ^ uVar13;
        param_3[0x30] = uVar13;
        param_3[0x31] = uVar2;
        uVar3 = uVar3 ^ uVar2;
        param_3[0x32] = uVar3;
        param_3[0x33] = uVar5 ^ uVar3;
        return 0;
      }
      uVar10 = (param_1[6] & 0xff00ff00) >> 8 | (param_1[6] & 0xff00ff) << 8;
      param_3[6] = uVar10 >> 0x10 | uVar10 << 0x10;
      uVar10 = (param_1[7] & 0xff00ff00) >> 8 | (param_1[7] & 0xff00ff) << 8;
      param_3[7] = uVar10 >> 0x10 | uVar10 << 0x10;
      if (param_2 == 0x100) {
        lVar12 = 0;
        while( true ) {
          uVar4 = param_3[7];
          uVar13 = uVar13 ^ (uint)(byte)(&DAT_03a09b03)[(ulong)(byte)(uVar4 >> 0x10) * 4] << 0x18 ^
                   (uint)(byte)(&DAT_03a09f02)[(ulong)(byte)(uVar4 >> 8) * 4] << 0x10 ^
                   (uint)(byte)(&DAT_03a0a301)[(ulong)(byte)uVar4 * 4] << 8 ^
                   (uint)(byte)(&DAT_03a0a700)[(ulong)(uVar4 >> 0x16) & 0x3fc] ^
                   *(uint *)((long)&DAT_03a0ab00 + lVar12);
          param_3[8] = uVar13;
          param_3[9] = param_3[1] ^ uVar13;
          uVar10 = param_3[2] ^ param_3[1] ^ uVar13;
          uVar5 = param_3[3] ^ uVar10;
          param_3[10] = uVar10;
          param_3[0xb] = uVar5;
          if (lVar12 == 0x18) break;
          uVar10 = param_3[4] ^ (uint)(byte)(&DAT_03a09b03)[(ulong)(uVar5 >> 0x18) * 4] << 0x18 ^
                   (uint)(byte)(&DAT_03a09f02)[(ulong)(uVar5 >> 0x10 & 0xff) * 4] << 0x10 ^
                   (uint)(byte)(&DAT_03a0a301)[(ulong)(uVar5 >> 8 & 0xff) * 4] << 8 ^
                   (uint)(byte)(&DAT_03a0a700)[(ulong)(uVar5 & 0xff) * 4];
          uVar5 = param_3[5] ^ uVar10;
          param_3[0xc] = uVar10;
          param_3[0xd] = uVar5;
          uVar5 = param_3[6] ^ uVar5;
          param_3[0xe] = uVar5;
          param_3[0xf] = uVar5 ^ uVar4;
          lVar12 = lVar12 + 4;
          param_3 = param_3 + 8;
        }
      }
    }
    uVar11 = 0;
  }
  return uVar11;
}


