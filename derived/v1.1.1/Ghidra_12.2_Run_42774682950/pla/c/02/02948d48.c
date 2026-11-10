/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02948d48; name: FUN_02948d48
 */


uint FUN_02948d48(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  
  bVar3 = *(byte *)(param_2 + 0x7d);
  lVar1 = 3;
  if (0x17 < bVar3) {
    lVar1 = (ulong)(bVar3 < 0x1e) << 2;
  }
  lVar2 = 1;
  if (0x11 < bVar3) {
    lVar2 = lVar1;
  }
  lVar1 = 2;
  if (0xb < bVar3) {
    lVar1 = lVar2;
  }
  lVar2 = 0;
  if (5 < bVar3) {
    lVar2 = lVar1;
  }
  if ((*(uint *)(param_1 + 0x110) < 3) &&
     ((&PTR_DAT_04276820)[(int)*(uint *)(param_1 + 0x110)][lVar2] == '\x01')) {
    uVar4 = (uint)*(undefined8 *)(*(uint **)(param_1 + 0x58) + 0x410);
    if ((uVar4 >> 10 & 1) != 0) {
      return 3;
    }
    if ((uVar4 >> 0xb & 1) != 0) {
      return 4;
    }
    if ((uVar4 >> 0xc & 1) != 0) {
      return 5;
    }
    if (**(uint **)(param_1 + 0x58) < 2) {
      uVar5 = FUN_02c6d5b0(*(undefined8 *)(*(long *)(param_2 + 0x60) + 0x98));
      if ((uVar5 & 1) == 0) {
        uVar4 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(param_2 + 0x60) + 0x98));
        return uVar4 & 1;
      }
      return 2;
    }
  }
  return 0;
}


