/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e3c70; name: FUN_010e3c70
 */


int FUN_010e3c70(ulong *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong local_f8 [15];
  ulong *local_80;
  uint local_78;
  ulong *local_70;
  undefined4 local_68;
  ulong **local_60;
  undefined4 local_58;
  ulong *local_50;
  undefined4 local_48;
  
  uVar6 = (0x20 - param_2) * 0x1e;
  uVar2 = (ulong)uVar6;
  if (0x3bf < uVar6) {
    uVar2 = 0x3c0;
  }
  uVar21 = uVar2 >> 6;
  puVar14 = local_f8 + uVar21;
  uVar6 = (uint)uVar2 & 0x3e;
  uVar12 = (ulong)uVar6;
  local_f8[0xd] = 0xffffffffffffffff;
  local_f8[0xe] = 0xffffffffffffffff;
  local_f8[0xb] = 0xffffffffffffffff;
  local_f8[0xc] = 0xffffffffffffffff;
  local_f8[0] = 0xffffffffffffffff;
  local_f8[9] = 0xffffffffffffffff;
  local_f8[10] = 0xffffffffffffffff;
  local_f8[7] = 0xffffffffffffffff;
  local_f8[8] = 0xffffffffffffffff;
  local_f8[5] = 0xffffffffffffffff;
  local_f8[6] = 0xffffffffffffffff;
  local_f8[3] = 0xffffffffffffffff;
  local_f8[4] = 0xffffffffffffffff;
  local_f8[1] = 0xffffffffffffffff;
  local_f8[2] = 0xffffffffffffffff;
  if ((uVar2 & 0x3e) == 0) {
    local_60 = &local_80;
    local_48 = 0;
    local_58 = 0;
    local_68 = 0;
    local_70 = local_f8;
    local_50 = puVar14;
    FUN_010e42b0(&local_80,&local_50,&local_60,&local_70);
  }
  else {
    uVar7 = ((ulong)~(uint)uVar2 & 0x3c0) - uVar12;
    puVar4 = local_f8;
    if ((long)uVar7 < 1) {
      uVar6 = 0;
    }
    else {
      uVar17 = (ulong)(0x40 - uVar6);
      uVar8 = uVar7;
      if ((long)uVar17 <= (long)uVar7) {
        uVar8 = uVar17;
      }
      uVar7 = uVar7 - uVar8;
      uVar20 = uVar8;
      if (0x3f < uVar8) {
        uVar20 = 0x40;
      }
      uVar17 = 0xffffffffffffffffU >> (uVar17 - uVar8 & 0x3f) & -1L << uVar12 & *puVar14;
      local_f8[0] = uVar17 >> uVar12 | 0xffffffffffffffffU >> (-uVar20 & 0x3f) ^ 0xffffffffffffffff;
      uVar8 = uVar8 - uVar20;
      puVar4 = (ulong *)((long)puVar4 + (uVar20 >> 3 & 0x1ffffffffffffff8));
      if ((long)uVar8 < 1) {
        uVar8 = (ulong)((uint)uVar20 & 0x3f);
      }
      else {
        *puVar4 = *puVar4 & (0xffffffffffffffffU >> (-uVar8 & 0x3f) ^ 0xffffffffffffffff) |
                  uVar17 >> (uVar20 + uVar12 & 0x3f);
      }
      puVar14 = local_f8 + uVar21 + 1;
      uVar6 = (uint)uVar8;
      uVar12 = -1L << (uVar8 & 0x3f);
      if (0x3f < (long)uVar7) {
        uVar20 = *puVar4;
        puVar3 = puVar4;
        puVar13 = puVar14;
        uVar17 = uVar7;
        do {
          puVar14 = puVar13 + 1;
          uVar1 = *puVar13;
          puVar4 = puVar3 + 1;
          *puVar3 = uVar1 << (uVar8 & 0x3f) | uVar20 & ~uVar12;
          uVar17 = uVar17 - 0x40;
          uVar20 = *puVar4 & uVar12 | uVar1 >> ((ulong)(0x40 - uVar6) & 0x3f);
          *puVar4 = uVar20;
          puVar3 = puVar4;
          puVar13 = puVar14;
        } while (0x3f < (long)uVar17);
        uVar7 = uVar7 & 0x3e;
      }
      if (0 < (long)uVar7) {
        uVar1 = (ulong)(0x40 - uVar6);
        uVar20 = *puVar14 & 0xffffffffffffffffU >> (-uVar7 & 0x3f);
        uVar17 = uVar1;
        if ((long)uVar7 <= (long)uVar1) {
          uVar17 = uVar7;
        }
        lVar10 = uVar7 - uVar17;
        *puVar4 = *puVar4 & (0xffffffffffffffffU >> (uVar1 - uVar17 & 0x3f) & uVar12 ^
                            0xffffffffffffffff) | uVar20 << (uVar8 & 0x3f);
        puVar4 = (ulong *)((long)puVar4 + (uVar17 + (uVar8 & 0xffffffff) >> 3 & 0x1ffffffffffffff8))
        ;
        if (lVar10 < 1) {
          uVar6 = uVar6 + (int)uVar17 & 0x3f;
        }
        else {
          *puVar4 = *puVar4 & (0xffffffffffffffffU >> (-lVar10 & 0x3fU) ^ 0xffffffffffffffff) |
                    uVar20 >> (uVar17 & 0x3f);
          uVar6 = (uint)lVar10;
        }
      }
    }
    local_80 = puVar4;
    local_78 = uVar6;
  }
  if (uVar2 != 0) {
    uVar12 = 0x3c0 - uVar2;
    uVar6 = (uint)uVar12 & 0x3e;
    uVar7 = uVar12 >> 3 & 0x1ffffffffffffff8;
    puVar14 = (ulong *)((long)local_f8 + uVar7);
    puVar4 = puVar14;
    if ((uVar12 & 0x3e) != 0) {
      uVar8 = (ulong)(0x40 - uVar6);
      uVar12 = uVar2;
      if (uVar8 <= uVar2) {
        uVar12 = uVar8;
      }
      uVar2 = uVar2 - uVar12;
      uVar21 = uVar2 >> 6;
      puVar4 = (ulong *)((long)local_f8 + uVar7 + 8);
      *puVar14 = *puVar14 &
                 (0xffffffffffffffffU >> (uVar8 - uVar12 & 0x3f) & -1L << uVar6 ^ 0xffffffffffffffff
                 );
    }
    memset(puVar4,0,uVar21 * 8);
    if ((uVar2 & 0x3f) != 0) {
      puVar4[uVar21] =
           puVar4[uVar21] & (0xffffffffffffffffU >> (-(uVar2 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
    }
  }
  uVar2 = (local_f8[1] & param_1[1]) - ((local_f8[1] & param_1[1]) >> 1 & 0x5555555555555555);
  uVar12 = (local_f8[0] & *param_1) - ((local_f8[0] & *param_1) >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar21 = (local_f8[2] & param_1[2]) - ((local_f8[2] & param_1[2]) >> 1 & 0x5555555555555555);
  uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
  uVar7 = (local_f8[3] & param_1[3]) - ((local_f8[3] & param_1[3]) >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar8 = (local_f8[4] & param_1[4]) - ((local_f8[4] & param_1[4]) >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar17 = (local_f8[5] & param_1[5]) - ((local_f8[5] & param_1[5]) >> 1 & 0x5555555555555555);
  uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
  uVar20 = (local_f8[6] & param_1[6]) - ((local_f8[6] & param_1[6]) >> 1 & 0x5555555555555555);
  uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
  uVar1 = (local_f8[7] & param_1[7]) - ((local_f8[7] & param_1[7]) >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar19 = (local_f8[8] & param_1[8]) - ((local_f8[8] & param_1[8]) >> 1 & 0x5555555555555555);
  uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
  uVar18 = (local_f8[9] & param_1[9]) - ((local_f8[9] & param_1[9]) >> 1 & 0x5555555555555555);
  uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
  uVar16 = (local_f8[10] & param_1[10]) - ((local_f8[10] & param_1[10]) >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar15 = (local_f8[0xb] & param_1[0xb]) -
           ((local_f8[0xb] & param_1[0xb]) >> 1 & 0x5555555555555555);
  uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
  uVar11 = (local_f8[0xc] & param_1[0xc]) -
           ((local_f8[0xc] & param_1[0xc]) >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar9 = (local_f8[0xd] & param_1[0xd]) -
          ((local_f8[0xd] & param_1[0xd]) >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar5 = (local_f8[0xe] & param_1[0xe]) -
          ((local_f8[0xe] & param_1[0xe]) >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  return (uint)(byte)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
         (uint)(byte)((uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
         (uint)(byte)((uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
         (uint)(byte)((uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
         (uint)(byte)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
         (uint)(byte)((uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
         (uint)(byte)((uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
         (uint)(byte)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
         (uint)(byte)((uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
         (uint)(byte)((uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
         (uint)(byte)((uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
         (uint)(byte)((uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
         (uint)(byte)((uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
         (uint)(byte)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
         (uint)(byte)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
}


