/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00215370; name: FUN_00215370
 */


uint FUN_00215370(uint param_1,long param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  
  if (param_2 == 0) {
    return 0;
  }
  param_1 = ~param_1;
  if (param_3 != 0) {
    lVar6 = 0;
    uVar7 = param_3 - 0x20;
    do {
      puVar3 = (uint *)(param_2 + lVar6);
      if (((ulong)puVar3 & 3) == 0) {
        uVar4 = param_3 - lVar6;
        if (uVar4 < 0x20) {
          uVar7 = uVar4 - 4;
        }
        else {
          do {
            param_1 = *puVar3 ^ param_1;
            uVar1 = *(uint *)(&DAT_039cd260 + (ulong)(param_1 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cd660 + (ulong)(param_1 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cce60 + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cca60 + (ulong)(param_1 >> 0x18) * 4) ^ puVar3[1];
            uVar1 = *(uint *)(&DAT_039cd260 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cd660 + (ulong)(uVar1 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cce60 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cca60 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar3[2];
            uVar1 = *(uint *)(&DAT_039cd260 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cd660 + (ulong)(uVar1 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cce60 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cca60 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar3[3];
            uVar4 = uVar4 - 0x20;
            uVar1 = *(uint *)(&DAT_039cd260 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cd660 + (ulong)(uVar1 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cce60 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cca60 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar3[4];
            uVar1 = *(uint *)(&DAT_039cd260 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cd660 + (ulong)(uVar1 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cce60 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cca60 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar3[5];
            puVar8 = puVar3 + 6;
            puVar2 = puVar3 + 7;
            puVar3 = puVar3 + 8;
            uVar1 = *(uint *)(&DAT_039cd260 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cd660 + (ulong)(uVar1 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cce60 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cca60 + (ulong)(uVar1 >> 0x18) * 4) ^ *puVar8;
            uVar1 = *(uint *)(&DAT_039cd260 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cd660 + (ulong)(uVar1 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cce60 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_039cca60 + (ulong)(uVar1 >> 0x18) * 4) ^ *puVar2;
            param_1 = *(uint *)(&DAT_039cd260 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
                      *(uint *)(&DAT_039cd660 + (ulong)(uVar1 & 0xff) * 4) ^
                      *(uint *)(&DAT_039cce60 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
                      *(uint *)(&DAT_039cca60 + (ulong)(uVar1 >> 0x18) * 4);
          } while (0x1f < uVar4);
          lVar5 = (param_3 - (uVar7 & 0xffffffffffffffe0)) - lVar6;
          puVar3 = (uint *)(param_2 + (uVar7 & 0xffffffffffffffe0) + lVar6 + 0x20);
          uVar4 = lVar5 - 0x20;
          uVar7 = lVar5 - 0x24;
        }
        if (3 < uVar4) {
          puVar8 = puVar3;
          do {
            param_1 = *puVar8 ^ param_1;
            uVar4 = uVar4 - 4;
            param_1 = *(uint *)(&DAT_039cd260 + (ulong)(param_1 >> 8 & 0xff) * 4) ^
                      *(uint *)(&DAT_039cd660 + (ulong)(param_1 & 0xff) * 4) ^
                      *(uint *)(&DAT_039cce60 + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
                      *(uint *)(&DAT_039cca60 + (ulong)(param_1 >> 0x18) * 4);
            puVar8 = puVar8 + 1;
          } while (3 < uVar4);
          puVar3 = (uint *)((long)puVar3 + (uVar7 & 0xfffffffffffffffc) + 4);
          uVar4 = uVar7 & 3;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          param_1 = *(uint *)(&DAT_039cca60 + (ulong)(param_1 & 0xff ^ (uint)(byte)*puVar3) * 4) ^
                    param_1 >> 8;
          puVar3 = (uint *)((long)puVar3 + 1);
        }
        break;
      }
      param_1 = *(uint *)(&DAT_039cca60 + (ulong)(param_1 & 0xff ^ (uint)(byte)*puVar3) * 4) ^
                param_1 >> 8;
      lVar6 = lVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (param_3 != lVar6);
  }
  return ~param_1;
}


