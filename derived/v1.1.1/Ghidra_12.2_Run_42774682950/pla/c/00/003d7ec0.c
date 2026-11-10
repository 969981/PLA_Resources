/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d7ec0; name: FUN_003d7ec0
 */


ulong FUN_003d7ec0(ulong param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 auStack_28 [8];
  
  uVar3 = FUN_002f12e0(param_1,param_2,auStack_28);
  if ((uVar3 & 1) == 0) {
    if (4 < param_1) {
      bVar2 = *(byte *)(param_1 + 0x2d);
      while (bVar2 != 0xff) {
        lVar1 = param_1 + (ulong)bVar2 * 8;
        uVar3 = FUN_003d7ec0(*(undefined8 *)(lVar1 + 0x38),param_2 & 0xffffffff);
        if (uVar3 != 0) {
          return uVar3;
        }
        bVar2 = *(byte *)(lVar1 + 0x40);
      }
    }
    param_1 = 0;
  }
  return param_1;
}


