/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ba378; name: FUN_008ba378
 */


uint FUN_008ba378(long param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  bVar1 = *(byte *)(param_1 + 0x7b);
  lVar3 = 3;
  if (0x17 < bVar1) {
    lVar3 = (ulong)(bVar1 < 0x1e) << 2;
  }
  lVar5 = 1;
  if (0x11 < bVar1) {
    lVar5 = lVar3;
  }
  lVar3 = 2;
  if (0xb < bVar1) {
    lVar3 = lVar5;
  }
  lVar5 = 0;
  if (5 < bVar1) {
    lVar5 = lVar3;
  }
  uVar2 = *(uint *)(*(long *)(*(long *)(*(long *)(**(long **)(param_1 + 0x70) + 0xd0) + 0x68) + 0x98
                             ) + 0x110);
  if ((uVar2 < 3) && ((&PTR_DAT_041b5e58)[(int)uVar2][lVar5] == '\0')) {
    uVar2 = 1;
  }
  else {
    lVar3 = FUN_00933eec();
    lVar5 = **(long **)(param_1 + 0x70);
    if ((*(char *)(*(long *)(lVar5 + 8) + 0x356) == '\0') &&
       (((lVar6 = *(long *)(*(long *)(*(long *)(lVar5 + 0x138) + 0x68) + 8),
         *(char *)(lVar6 + 0x354) == '\0' || (*(long *)(lVar6 + 0x438) == 0xbcaa84f3592b51)) ||
        (uVar4 = FUN_00935174(*(undefined8 *)(lVar5 + 0xd0)), (uVar4 & 1) != 0)))) {
      uVar2 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x70) + 0x60) + 0x98));
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2 & 1;
}


