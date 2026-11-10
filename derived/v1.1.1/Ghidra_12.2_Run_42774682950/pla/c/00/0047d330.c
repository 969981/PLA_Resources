/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0047d330; name: FUN_0047d330
 */


void FUN_0047d330(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = (*param_1 ^ param_1[1] >> 4) & 0xf0f0f0f;
  uVar8 = uVar5 ^ *param_1;
  uVar6 = param_1[1] ^ uVar5 << 4;
  uVar5 = (uVar8 ^ uVar8 << 0x12) & 0xcccc0000;
  uVar8 = uVar5 ^ uVar8 ^ uVar5 >> 0x12;
  uVar5 = (uVar6 ^ uVar6 << 0x12) & 0xcccc0000;
  uVar6 = uVar5 ^ uVar6 ^ uVar5 >> 0x12;
  uVar5 = (uVar8 ^ uVar6 >> 1) & 0x55555555;
  uVar6 = uVar6 ^ uVar5 << 1;
  uVar5 = uVar5 ^ uVar8;
  uVar8 = (uVar6 ^ uVar5 >> 8) & 0xff00ff;
  uVar5 = uVar5 ^ uVar8 << 8;
  uVar8 = uVar8 ^ uVar6;
  uVar6 = (uVar5 ^ uVar8 >> 1) & 0x55555555;
  uVar5 = uVar6 ^ uVar5;
  uVar8 = uVar8 ^ uVar6 << 1;
  uVar8 = uVar5 >> 4 & 0xf000000 | uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | uVar8 >> 0x10 & 0xff;
  uVar4 = 0;
  do {
    uVar2 = uVar4 & 0x3f;
    uVar4 = uVar4 + 1;
    bVar3 = (0x7efcUL >> uVar2 & 1) != 0;
    uVar6 = 1;
    if (bVar3) {
      uVar6 = 2;
    }
    uVar7 = 0x1a;
    if (!bVar3) {
      uVar7 = 0x1b;
    }
    uVar1 = (uVar5 & 0xfffffff) >> (ulong)uVar6;
    uVar6 = uVar8 >> (ulong)uVar6;
    uVar5 = uVar1 | uVar5 << (ulong)uVar7;
    uVar7 = uVar6 | uVar8 << (ulong)uVar7;
    uVar1 = *(uint *)(&DAT_03a0d424 + (ulong)(uVar1 >> 7 & 0x3c | uVar1 >> 6 & 3) * 4) |
            *(uint *)(&DAT_03a0d324 + (ulong)(uVar1 & 0x3f) * 4) |
            *(uint *)(&DAT_03a0d524 + (ulong)(uVar1 >> 0xe & 0x30 | uVar1 >> 0xd & 0xf) * 4) |
            *(uint *)(&DAT_03a0d624 +
                     (ulong)(uVar1 >> 0x15 & 6 | uVar1 >> 0x14 & 1 | uVar5 >> 0x16 & 0x38) * 4);
    uVar8 = uVar7 & 0xfffffff;
    uVar6 = *(uint *)(&DAT_03a0d824 + (ulong)(uVar6 >> 8 & 0x3c | uVar6 >> 7 & 3) * 4) |
            *(uint *)(&DAT_03a0d724 + (ulong)(uVar6 & 0x3f) * 4) |
            *(uint *)(&DAT_03a0d924 + (ulong)(uVar6 >> 0xf & 0x3f) * 4) |
            *(uint *)(&DAT_03a0da24 + (ulong)(uVar7 >> 0x16 & 0x30 | uVar6 >> 0x15 & 0xf) * 4);
    *param_2 = uVar6 >> 0xe & 3 | (uVar1 & 0xffff | uVar6 << 0x10) << 2;
    param_2[1] = (uint)(CONCAT44(uVar6 & 0x3ff0000 | uVar1 >> 0x10,uVar6) >> 0x1a);
    param_2 = param_2 + 2;
  } while (uVar4 != 0x10);
  return;
}


