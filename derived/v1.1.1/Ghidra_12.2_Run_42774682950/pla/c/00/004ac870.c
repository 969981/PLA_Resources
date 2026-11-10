/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ac870; name: FUN_004ac870
 */


void FUN_004ac870(uint param_1,uint *param_2,uint *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar10 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uVar9 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  uVar11 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  uVar10 = (uVar10 >> 0x10 | uVar10 << 0x10) ^ *param_3;
  uVar9 = (uVar9 >> 0x10 | uVar9 << 0x10) ^ param_3[1];
  uVar6 = -(ulong)((param_1 & 0xfffffff) >> 0x1b) & 0xfffffffc00000000 | (ulong)(param_1 << 4) << 2;
  uVar11 = (uVar11 >> 0x10 | uVar11 << 0x10) ^ param_3[2];
  uVar12 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
  uVar12 = (uVar12 >> 0x10 | uVar12 << 0x10) ^ param_3[3];
  puVar8 = param_3 + 10;
  uVar7 = uVar6;
  while( true ) {
    uVar7 = uVar7 - 0x40;
    uVar3 = puVar8[-6] ^ uVar10;
    uVar4 = puVar8[-5] ^ uVar9;
    uVar3 = *(uint *)(&DAT_03a1eef8 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar3 & 0xff) * 4) ^
            *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar3 >> 0x18) * 4);
    uVar5 = *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar4 & 0xff) * 4) ^ uVar3 ^
            *(uint *)(&DAT_03a1eef8 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar4 >> 0x18) * 4);
    uVar12 = uVar12 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar5;
    uVar5 = uVar5 ^ uVar11;
    uVar11 = uVar12 ^ puVar8[-3];
    uVar3 = uVar5 ^ puVar8[-4];
    uVar3 = *(uint *)(&DAT_03a1eef8 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar3 & 0xff) * 4) ^
            *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar3 >> 0x18) * 4);
    uVar4 = *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar11 & 0xff) * 4) ^ uVar3 ^
            *(uint *)(&DAT_03a1eef8 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar11 >> 0x18) * 4);
    uVar9 = uVar9 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar4;
    uVar4 = uVar4 ^ uVar10;
    uVar10 = uVar9 ^ puVar8[-1];
    uVar11 = uVar4 ^ puVar8[-2];
    uVar11 = *(uint *)(&DAT_03a1eef8 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar11 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar11 >> 0x18) * 4);
    uVar10 = *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar10 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar10 & 0xff) * 4) ^ uVar11 ^
             *(uint *)(&DAT_03a1eef8 + (ulong)(uVar10 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar10 >> 0x18) * 4);
    uVar5 = uVar10 ^ uVar5;
    uVar10 = uVar12 ^ (uVar11 >> 8 | uVar11 << 0x18) ^ uVar10;
    uVar11 = uVar5 ^ *puVar8;
    uVar12 = uVar10 ^ puVar8[1];
    uVar11 = *(uint *)(&DAT_03a1eef8 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar11 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar11 >> 0x18) * 4);
    uVar3 = *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar12 & 0xff) * 4) ^ uVar11 ^
            *(uint *)(&DAT_03a1eef8 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar12 >> 0x18) * 4);
    uVar4 = uVar3 ^ uVar4;
    uVar12 = uVar4 ^ puVar8[2];
    uVar3 = uVar9 ^ (uVar11 >> 8 | uVar11 << 0x18) ^ uVar3;
    uVar9 = uVar3 ^ puVar8[3];
    uVar11 = *(uint *)(&DAT_03a1eef8 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar12 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar12 >> 0x18) * 4);
    uVar12 = *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar9 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar9 & 0xff) * 4) ^ uVar11 ^
             *(uint *)(&DAT_03a1eef8 + (ulong)(uVar9 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar9 >> 0x18) * 4);
    uVar5 = uVar12 ^ uVar5;
    uVar12 = uVar10 ^ (uVar11 >> 8 | uVar11 << 0x18) ^ uVar12;
    uVar10 = uVar5 ^ puVar8[4];
    uVar9 = uVar12 ^ puVar8[5];
    uVar10 = *(uint *)(&DAT_03a1eef8 + (ulong)(uVar10 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar10 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar10 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar10 >> 0x18) * 4);
    uVar9 = *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar9 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar9 & 0xff) * 4) ^ uVar10 ^
            *(uint *)(&DAT_03a1eef8 + (ulong)(uVar9 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar9 >> 0x18) * 4);
    uVar4 = uVar9 ^ uVar4;
    uVar9 = uVar3 ^ (uVar10 >> 8 | uVar10 << 0x18) ^ uVar9;
    if (uVar7 == 0) break;
    uVar10 = uVar4 & puVar8[6];
    uVar9 = uVar9 ^ (uVar10 >> 0x1f | uVar10 << 1);
    puVar2 = puVar8 + 8;
    uVar11 = (puVar8[9] | uVar12) ^ uVar5;
    puVar1 = puVar8 + 7;
    puVar8 = puVar8 + 0x10;
    uVar10 = (*puVar1 | uVar9) ^ uVar4;
    uVar12 = uVar12 ^ ((uVar11 & *puVar2) >> 0x1f | (uVar11 & *puVar2) << 1);
  }
  uVar5 = puVar8[6] ^ uVar5;
  uVar10 = *(uint *)((long)param_3 + uVar6 + 4);
  uVar11 = *(uint *)((long)param_3 + uVar6 + 8);
  uVar3 = *(uint *)((long)param_3 + uVar6 + 0xc);
  *param_4 = (char)(uVar5 >> 0x18);
  param_4[1] = (char)(uVar5 >> 0x10);
  param_4[3] = (char)uVar5;
  param_4[2] = (char)(uVar5 >> 8);
  uVar10 = uVar10 ^ uVar12;
  param_4[7] = (char)uVar10;
  uVar11 = uVar11 ^ uVar4;
  param_4[0xb] = (char)uVar11;
  param_4[4] = (char)(uVar10 >> 0x18);
  param_4[6] = (char)(uVar10 >> 8);
  uVar3 = uVar3 ^ uVar9;
  param_4[5] = (char)(uVar10 >> 0x10);
  param_4[8] = (char)(uVar11 >> 0x18);
  param_4[9] = (char)(uVar11 >> 0x10);
  param_4[10] = (char)(uVar11 >> 8);
  param_4[0xc] = (char)(uVar3 >> 0x18);
  param_4[0xd] = (char)(uVar3 >> 0x10);
  param_4[0xe] = (char)(uVar3 >> 8);
  param_4[0xf] = (char)uVar3;
  return;
}


