/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00405700; name: FUN_00405700
 */


ulong FUN_00405700(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = 0;
  if (param_1 != (byte *)0x0) {
    bVar2 = *param_1;
    if (bVar2 == 0) {
      return 0;
    }
    uVar3 = 0;
    uVar4 = 0x100;
    do {
      param_1 = param_1 + 1;
      uVar5 = uVar4 | bVar2;
      uVar4 = uVar4 + 0x100;
      uVar1 = (byte)(bVar2 ^ bVar2 >> 2) & 0xf;
      uVar3 = (ulong)((uint)(uVar3 >> ((ulong)(0x20 - uVar1) & 0x3f)) | (int)uVar3 << (ulong)uVar1)
              ^ uVar5 * uVar5;
      bVar2 = *param_1;
    } while (bVar2 != 0);
    uVar3 = uVar3 ^ uVar3 >> 0x10;
  }
  return uVar3;
}


