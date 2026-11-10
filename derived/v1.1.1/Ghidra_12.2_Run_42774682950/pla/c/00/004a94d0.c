/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a94d0; name: FUN_004a94d0
 */


void FUN_004a94d0(uint *param_1,undefined1 *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  if ((((param_1 != (uint *)0x0) && (param_2 != (undefined1 *)0x0)) && (param_3 != (uint *)0x0)) &&
     ((uVar7 = param_3[0x44], uVar7 < 0x11 && ((1 << (ulong)(uVar7 & 0x1f) & 0x15000U) != 0)))) {
    uVar11 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    uVar10 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
    uVar12 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
    uVar16 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
    uVar10 = param_3[1] ^ (uVar10 >> 0x10 | uVar10 << 0x10);
    uVar11 = *param_3 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
    uVar12 = param_3[2] ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar16 = param_3[3] ^ (uVar16 >> 0x10 | uVar16 << 0x10);
    uVar14 = *(uint *)(&DAT_03a1c650 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1c250 + (ulong)(uVar11 >> 0x18) * 4) ^
             *(uint *)(&DAT_03a1ca50 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1ce50 + (ulong)(uVar11 & 0xff) * 4);
    uVar3 = *(uint *)(&DAT_03a1c650 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03a1c250 + (ulong)(uVar12 >> 0x18) * 4) ^
            *(uint *)(&DAT_03a1ca50 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03a1ce50 + (ulong)(uVar12 & 0xff) * 4);
    uVar10 = *(uint *)(&DAT_03a1c650 + (ulong)(uVar10 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1c250 + (ulong)(uVar10 >> 0x18) * 4) ^
             *(uint *)(&DAT_03a1ca50 + (ulong)(uVar10 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1ce50 + (ulong)(uVar10 & 0xff) * 4) ^ uVar3;
    uVar12 = *(uint *)(&DAT_03a1c650 + (ulong)(uVar16 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1c250 + (ulong)(uVar16 >> 0x18) * 4) ^
             *(uint *)(&DAT_03a1ca50 + (ulong)(uVar16 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1ce50 + (ulong)(uVar16 & 0xff) * 4);
    uVar11 = uVar10 ^ uVar14;
    uVar3 = uVar12 ^ uVar3;
    uVar14 = uVar3 ^ uVar14;
    uVar12 = uVar12 ^ uVar10;
    uVar3 = uVar3 ^ uVar11;
    uVar10 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
    uVar3 = uVar12 >> 0x10 | uVar12 << 0x10;
    uVar14 = ((uVar14 & 0xff00ff) << 8 | uVar14 >> 8 & 0xff00ff) ^ uVar10;
    uVar10 = uVar10 ^ uVar3;
    uVar16 = uVar14 ^ uVar11;
    uVar11 = param_3[5] ^ uVar11 ^ uVar10;
    uVar12 = uVar16 ^ param_3[4];
    uVar16 = uVar10 ^ param_3[6] ^ uVar16;
    uVar14 = param_3[7] ^ uVar3 ^ uVar14;
    puVar13 = param_3 + 8;
    iVar15 = uVar7 - 2;
    if (iVar15 != 0) {
      do {
        uVar10 = *(uint *)(&DAT_03a1ce50 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_03a1ca50 + (ulong)(uVar12 >> 0x18) * 4) ^
                 *(uint *)(&DAT_03a1c250 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_03a1c650 + (ulong)(uVar12 & 0xff) * 4);
        iVar15 = iVar15 + -2;
        uVar3 = *(uint *)(&DAT_03a1ce50 + (ulong)(uVar16 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_03a1ca50 + (ulong)(uVar16 >> 0x18) * 4) ^
                *(uint *)(&DAT_03a1c250 + (ulong)(uVar16 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_03a1c650 + (ulong)(uVar16 & 0xff) * 4);
        uVar11 = *(uint *)(&DAT_03a1ce50 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_03a1ca50 + (ulong)(uVar11 >> 0x18) * 4) ^
                 *(uint *)(&DAT_03a1c250 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_03a1c650 + (ulong)(uVar11 & 0xff) * 4) ^ uVar3;
        uVar16 = *(uint *)(&DAT_03a1ce50 + (ulong)(uVar14 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_03a1ca50 + (ulong)(uVar14 >> 0x18) * 4) ^
                 *(uint *)(&DAT_03a1c250 + (ulong)(uVar14 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_03a1c650 + (ulong)(uVar14 & 0xff) * 4);
        uVar12 = uVar11 ^ uVar10;
        uVar3 = uVar16 ^ uVar3;
        uVar16 = uVar16 ^ uVar11;
        uVar14 = uVar3 ^ uVar12;
        uVar3 = uVar3 ^ uVar10;
        uVar10 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar3 = (uVar16 & 0xff00ff) << 8 | uVar16 >> 8 & 0xff00ff;
        uVar16 = uVar12 >> 0x10 | uVar12 << 0x10;
        uVar10 = (uVar10 >> 0x10 | uVar10 << 0x10) ^ uVar14;
        uVar11 = uVar10 ^ uVar16;
        uVar14 = uVar3 ^ uVar14;
        uVar12 = uVar11 ^ *puVar13;
        uVar16 = puVar13[1] ^ uVar16 ^ uVar14;
        uVar14 = uVar11 ^ puVar13[2] ^ uVar14;
        uVar3 = uVar10 ^ puVar13[3] ^ uVar3;
        uVar12 = *(uint *)(&DAT_03a1c650 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_03a1c250 + (ulong)(uVar12 >> 0x18) * 4) ^
                 *(uint *)(&DAT_03a1ca50 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_03a1ce50 + (ulong)(uVar12 & 0xff) * 4);
        uVar4 = *(uint *)(&DAT_03a1c650 + (ulong)(uVar14 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_03a1c250 + (ulong)(uVar14 >> 0x18) * 4) ^
                *(uint *)(&DAT_03a1ca50 + (ulong)(uVar14 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_03a1ce50 + (ulong)(uVar14 & 0xff) * 4);
        uVar14 = *(uint *)(&DAT_03a1c650 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_03a1c250 + (ulong)(uVar3 >> 0x18) * 4) ^
                 *(uint *)(&DAT_03a1ca50 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_03a1ce50 + (ulong)(uVar3 & 0xff) * 4);
        uVar10 = *(uint *)(&DAT_03a1c650 + (ulong)(uVar16 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_03a1c250 + (ulong)(uVar16 >> 0x18) * 4) ^
                 *(uint *)(&DAT_03a1ca50 + (ulong)(uVar16 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_03a1ce50 + (ulong)(uVar16 & 0xff) * 4) ^ uVar4;
        uVar4 = uVar14 ^ uVar4;
        uVar11 = uVar10 ^ uVar12;
        puVar1 = puVar13 + 6;
        puVar5 = puVar13 + 7;
        uVar12 = uVar4 ^ uVar12;
        uVar14 = uVar14 ^ uVar10;
        uVar4 = uVar4 ^ uVar11;
        uVar10 = uVar4 >> 0x10 | uVar4 << 0x10;
        uVar16 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
        uVar3 = uVar16 >> 0x10 | uVar16 << 0x10;
        uVar14 = ((uVar12 & 0xff00ff) << 8 | uVar12 >> 8 & 0xff00ff) ^ uVar10;
        uVar10 = uVar10 ^ uVar3;
        puVar2 = puVar13 + 4;
        puVar6 = puVar13 + 5;
        puVar13 = puVar13 + 8;
        uVar16 = uVar14 ^ uVar11;
        uVar11 = *puVar6 ^ uVar11 ^ uVar10;
        uVar12 = uVar16 ^ *puVar2;
        uVar14 = *puVar5 ^ uVar3 ^ uVar14;
        uVar16 = uVar10 ^ *puVar1 ^ uVar16;
      } while (iVar15 != 0);
      puVar13 = param_3 + ((ulong)(uVar7 - 4 & 0xfffffffe) + 4) * 4;
    }
    uVar3 = *(uint *)(&DAT_03a1ce50 + (ulong)(uVar16 >> 0x10 & 0xff) * 4);
    uVar7 = ((*(uint *)(&DAT_03a1ce50 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) & 0xff00) << 8 |
             *(int *)(&DAT_03a1ca50 + (ulong)(uVar12 >> 0x18) * 4) << 0x18 |
             (*(uint *)(&DAT_03a1c250 + (ulong)(uVar12 >> 8 & 0xff) * 4) & 0xff) << 8 |
            (uint)(byte)(&DAT_03a1c650)[(ulong)(uVar12 & 0xff) * 4]) ^ *puVar13;
    uVar10 = ((*(uint *)(&DAT_03a1ce50 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) & 0xff00) << 8 |
              *(int *)(&DAT_03a1ca50 + (ulong)(uVar11 >> 0x18) * 4) << 0x18 |
              (*(uint *)(&DAT_03a1c250 + (ulong)(uVar11 >> 8 & 0xff) * 4) & 0xff) << 8 |
             (uint)(byte)(&DAT_03a1c650)[(ulong)(uVar11 & 0xff) * 4]) ^ puVar13[1];
    iVar15 = *(int *)(&DAT_03a1ca50 + (ulong)(uVar16 >> 0x18) * 4);
    iVar8 = *(int *)(&DAT_03a1ca50 + (ulong)(uVar14 >> 0x18) * 4);
    uVar11 = puVar13[2];
    uVar12 = puVar13[3];
    *param_2 = (char)(uVar7 >> 0x18);
    uVar4 = *(uint *)(&DAT_03a1c250 + (ulong)(uVar16 >> 8 & 0xff) * 4);
    bVar9 = (&DAT_03a1c650)[(ulong)(uVar16 & 0xff) * 4];
    param_2[1] = (char)(uVar7 >> 0x10);
    param_2[2] = (char)(uVar7 >> 8);
    uVar16 = *(uint *)(&DAT_03a1ce50 + (ulong)(uVar14 >> 0x10 & 0xff) * 4);
    param_2[3] = (char)uVar7;
    param_2[4] = (char)(uVar10 >> 0x18);
    uVar11 = ((uVar3 & 0xff00) << 8 | iVar15 << 0x18 | (uVar4 & 0xff) << 8 | (uint)bVar9) ^ uVar11;
    param_2[5] = (char)(uVar10 >> 0x10);
    uVar7 = *(uint *)(&DAT_03a1c250 + (ulong)(uVar14 >> 8 & 0xff) * 4);
    param_2[8] = (char)(uVar11 >> 0x18);
    param_2[9] = (char)(uVar11 >> 0x10);
    param_2[7] = (char)uVar10;
    param_2[0xb] = (char)uVar11;
    param_2[10] = (char)(uVar11 >> 8);
    param_2[6] = (char)(uVar10 >> 8);
    uVar12 = ((uVar16 & 0xff00) << 8 | iVar8 << 0x18 | (uVar7 & 0xff) << 8 |
             (uint)(byte)(&DAT_03a1c650)[(ulong)(uVar14 & 0xff) * 4]) ^ uVar12;
    param_2[0xc] = (char)(uVar12 >> 0x18);
    param_2[0xd] = (char)(uVar12 >> 0x10);
    param_2[0xe] = (char)(uVar12 >> 8);
    param_2[0xf] = (char)uVar12;
  }
  return;
}


