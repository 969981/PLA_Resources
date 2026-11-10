/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293a970; name: FUN_0293a970
 */


undefined8 FUN_0293a970(long param_1,byte param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_2 < 6) {
    uVar6 = 0;
  }
  else {
    uVar4 = 3;
    if (0x17 < param_2) {
      uVar4 = (uint)(param_2 < 0x1e) << 2;
    }
    uVar1 = 1;
    if (0x11 < param_2) {
      uVar1 = uVar4;
    }
    uVar4 = 2;
    if (0xb < param_2) {
      uVar4 = uVar1;
    }
    uVar6 = (ulong)uVar4;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x88) + 8);
  bVar3 = FUN_0294da60(*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x55),uVar6);
  bVar2 = *(byte *)(lVar7 + uVar6 * 0x38 + 0x38);
  if (bVar3 < bVar2) {
    uVar4 = (uint)bVar3;
    do {
      lVar5 = *(long *)(lVar7 + uVar6 * 0x38 + (ulong)(uVar4 & 0xff) * 8 + 8);
      if (((((*(byte *)(lVar5 + 0x98) & 7) != 0) || ((*(byte *)(lVar5 + 0xa0) & 7) != 0)) ||
          ((*(byte *)(lVar5 + 0xa8) & 7) != 0)) ||
         ((((*(byte *)(lVar5 + 0xb0) & 7) != 0 || ((*(byte *)(lVar5 + 0xb8) & 7) != 0)) ||
          (((*(byte *)(lVar5 + 0xc0) & 7) != 0 || ((*(byte *)(lVar5 + 200) & 7) != 0)))))) {
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (bVar2 != uVar4);
  }
  return 0;
}


