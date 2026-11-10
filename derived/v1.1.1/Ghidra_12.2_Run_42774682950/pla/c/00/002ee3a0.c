/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ee3a0; name: FUN_002ee3a0
 */


undefined1  [16] FUN_002ee3a0(ulong param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((int)param_2 < 0xd) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      uVar5 = (uVar2 & 0xffffffff) * 0x48c27395;
      uVar3 = (uVar2 >> 0x20) * 0x48c2739500000000;
      uVar1 = uVar3 + uVar5;
      uVar6 = (param_1 & 0xffffffff) * 0x48c27395;
      uVar4 = uVar6 + (param_1 >> 0x20) * 0x48c2739500000000 +
              ((uVar2 >> 0x20) * 0x48c27395 >> 0x20);
      if (CARRY8(uVar3,uVar5)) {
        uVar4 = uVar4 + 1;
      }
      uVar3 = (param_1 >> 0x20) * 0x48c27395 >> 0x20;
      if (uVar4 < uVar6) {
        uVar3 = uVar3 + 1;
      }
      uVar5 = LZCOUNT(uVar3);
      param_2 = param_2 - 0xd;
      uVar2 = uVar1;
      param_1 = uVar4;
      if (uVar3 != 0) {
        uVar2 = (uVar1 >> ((ulong)(uint)-(int)uVar5 & 0x3f)) + (uVar4 << (uVar5 & 0x3f));
        param_1 = (uVar4 >> ((ulong)(uint)-(int)uVar5 & 0x3f)) + (uVar3 << (uVar5 & 0x3f));
      }
    } while (0xc < (int)param_2);
  }
  uVar3 = (ulong)*(uint *)(&DAT_039f8f1c + (ulong)(param_2 & 0xf) * 4);
  uVar5 = (uVar2 & 0xffffffff) * uVar3;
  uVar4 = (uVar2 >> 0x20) * uVar3;
  uVar6 = (param_1 & 0xffffffff) * uVar3;
  uVar3 = (param_1 >> 0x20) * uVar3;
  uVar2 = uVar4 << 0x20;
  uVar1 = uVar5 + uVar2;
  uVar4 = uVar6 + (uVar3 << 0x20) + (uVar4 >> 0x20);
  if (CARRY8(uVar5,uVar2)) {
    uVar4 = uVar4 + 1;
  }
  uVar3 = uVar3 >> 0x20;
  if (uVar4 < uVar6) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = LZCOUNT(uVar3);
  uVar2 = uVar4;
  if (uVar3 != 0) {
    uVar2 = (uVar4 >> ((ulong)(uint)-(int)uVar5 & 0x3f)) + (uVar3 << (uVar5 & 0x3f));
  }
  if (uVar3 != 0) {
    uVar1 = (uVar1 >> ((ulong)(uint)-(int)uVar5 & 0x3f)) + (uVar4 << (uVar5 & 0x3f));
  }
  uVar3 = LZCOUNT(uVar2);
  uVar4 = uVar1;
  if (uVar3 != 0) {
    uVar4 = uVar1 << (uVar3 & 0x3f);
    uVar2 = (uVar1 >> ((ulong)(uint)-(int)uVar3 & 0x3f)) + (uVar2 << (uVar3 & 0x3f));
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = uVar2;
  return auVar7;
}


