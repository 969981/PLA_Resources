/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00935d20; name: FUN_00935d20
 */


bool FUN_00935d20(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  
  if (*(char *)(*param_1 + 3) == '\x02') {
    return true;
  }
  bVar3 = *(byte *)(*(long *)(*param_2 + 0x70) + 0x7d);
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
  uVar4 = *(uint *)(*(long *)(*(long *)(*(long *)(*(long *)(*param_2 + 0x68) + 0xd0) + 0x68) + 0x98)
                   + 0x110);
  if (uVar4 < 3) {
    cVar5 = (&PTR_DAT_041c22d8)[(int)uVar4][lVar2];
  }
  else {
    cVar5 = '\x02';
  }
  return cVar5 == *(char *)(*param_1 + 3);
}


