/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00935c20; name: FUN_00935c20
 */


bool FUN_00935c20(long *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  if (*(char *)(*param_1 + 2) == '\0') {
    return true;
  }
  bVar2 = *(byte *)(*(long *)(*param_2 + 0x70) + 0x7d);
  uVar6 = 3;
  if (0x17 < bVar2) {
    uVar6 = (uint)(bVar2 < 0x1e) << 2;
  }
  lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1[1] + 0x68) + 0x98) + 0x370) + 8);
  uVar1 = 1;
  if (0x11 < bVar2) {
    uVar1 = uVar6;
  }
  uVar6 = 2;
  if (0xb < bVar2) {
    uVar6 = uVar1;
  }
  uVar1 = 0;
  if (5 < bVar2) {
    uVar1 = uVar6;
  }
  uVar6 = (uint)*(byte *)(lVar5 + (ulong)uVar1 * 0x38 + 0x38);
  if (uVar6 != 0) {
    uVar4 = 0;
    do {
      if (*(byte *)(*(long *)(lVar5 + (ulong)uVar1 * 0x38 + (ulong)(uVar4 & 0xff) * 8 + 8) + 0x7d)
          == bVar2) {
        cVar3 = FUN_0294753c();
        if (cVar3 != '\x06') goto LAB_00935cdc;
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar6 != uVar4);
  }
  cVar3 = '\x06';
LAB_00935cdc:
  return cVar3 == '\x06';
}


