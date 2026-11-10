/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e79dc; name: FUN_007e79dc
 */


void FUN_007e79dc(uint *param_1,void *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  
  memcpy(param_1,param_2,(ulong)param_3);
  if (param_3 < 0xb0) {
    uVar1 = param_3 >> 2;
    uVar4 = (ulong)*(uint *)((long)param_1 + ((ulong)(uVar1 << 2) - 4));
    uVar3 = (ulong)(param_3 >> 2);
    puVar5 = param_1;
    uVar7 = uVar3;
    if (param_3 < 0x1c) {
      do {
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = (uint)uVar7 / uVar1;
        }
        if ((uint)uVar7 == uVar2 * uVar1) {
          uVar4 = (ulong)(CONCAT13((&DAT_03a7186a)[uVar4 & 0xff],
                                   CONCAT12((&DAT_03a7186a)[uVar4 >> 0x18],
                                            CONCAT11((&DAT_03a7186a)[uVar4 >> 0x10 & 0xff],
                                                     (&DAT_03a7186a)[uVar4 >> 8 & 0xff]))) ^
                         (uint)(byte)(&DAT_03a7184b)[(int)uVar2]);
        }
        uVar2 = *puVar5 ^ (uint)uVar4;
        uVar4 = (ulong)uVar2;
        uVar7 = uVar7 + 1;
        puVar5[uVar3] = uVar2;
        puVar5 = puVar5 + 1;
      } while (uVar7 < 0x2c);
    }
    else {
      do {
        uVar2 = 0;
        uVar6 = (uint)uVar7;
        if (uVar1 != 0) {
          uVar2 = uVar6 / uVar1;
        }
        if (uVar6 == uVar2 * uVar1) {
          uVar4 = (ulong)(CONCAT13((&DAT_03a7186a)[uVar4 & 0xff],
                                   CONCAT12((&DAT_03a7186a)[uVar4 >> 0x18],
                                            CONCAT11((&DAT_03a7186a)[uVar4 >> 0x10 & 0xff],
                                                     (&DAT_03a7186a)[uVar4 >> 8 & 0xff]))) ^
                         (uint)(byte)(&DAT_03a7184b)[(int)uVar2]);
        }
        else if (uVar6 - uVar2 * uVar1 == 4) {
          uVar4 = (ulong)CONCAT13((&DAT_03a7186a)[uVar4 >> 0x18],
                                  CONCAT12((&DAT_03a7186a)[uVar4 >> 0x10 & 0xff],
                                           CONCAT11((&DAT_03a7186a)[uVar4 >> 8 & 0xff],
                                                    (&DAT_03a7186a)[uVar4 & 0xff])));
        }
        uVar2 = *puVar5 ^ (uint)uVar4;
        uVar4 = (ulong)uVar2;
        uVar7 = uVar7 + 1;
        puVar5[uVar3] = uVar2;
        puVar5 = puVar5 + 1;
      } while (uVar7 < 0x2c);
    }
  }
  if ((param_4 & 1) == 0) {
    FUN_007e7be0(param_1 + 4,param_1 + 4);
    FUN_007e7be0(param_1 + 8,param_1 + 8);
    FUN_007e7be0(param_1 + 0xc,param_1 + 0xc);
    FUN_007e7be0(param_1 + 0x10,param_1 + 0x10);
    FUN_007e7be0(param_1 + 0x14,param_1 + 0x14);
    FUN_007e7be0(param_1 + 0x18,param_1 + 0x18);
    FUN_007e7be0(param_1 + 0x1c,param_1 + 0x1c);
    FUN_007e7be0(param_1 + 0x20,param_1 + 0x20);
    FUN_007e7be0(param_1 + 0x24,param_1 + 0x24);
    return;
  }
  return;
}


