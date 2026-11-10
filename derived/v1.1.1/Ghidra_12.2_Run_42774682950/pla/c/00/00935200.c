/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00935200; name: FUN_00935200
 */


undefined1 FUN_00935200(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  undefined1 uVar5;
  
  bVar3 = *(byte *)(*(long *)(param_2 + 0x70) + 0x7d);
  lVar1 = 3;
  if (0x17 < bVar3) {
    lVar1 = (ulong)(bVar3 < 0x1e) << 2;
  }
  uVar4 = *(uint *)(*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x68) + 0xd0) + 0x68) + 0x98)
                   + 0x110);
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
  if (2 < uVar4) {
    return 2;
  }
  uVar5 = (&PTR_DAT_041c22d8)[(int)uVar4][lVar2] == 0;
  if (1 < (byte)(&PTR_DAT_041c22d8)[(int)uVar4][lVar2]) {
    uVar5 = 2;
  }
  return uVar5;
}


