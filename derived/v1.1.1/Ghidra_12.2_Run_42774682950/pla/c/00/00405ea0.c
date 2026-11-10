/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00405ea0; name: FUN_00405ea0
 */


ulong FUN_00405ea0(char *param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      return 0;
    }
    uVar4 = 0;
    uVar5 = 0x100;
    do {
      param_1 = param_1 + 1;
      uVar2 = FUN_00405460(cVar1);
      uVar3 = uVar5 | (long)(int)uVar2;
      uVar5 = uVar5 + 0x100;
      uVar2 = (uVar2 ^ uVar2 >> 2) & 0xf;
      uVar4 = (ulong)((uint)(uVar4 >> ((ulong)(0x20 - uVar2) & 0x3f)) | (int)uVar4 << (ulong)uVar2)
              ^ uVar3 * uVar3;
      cVar1 = *param_1;
    } while (cVar1 != '\0');
    uVar4 = uVar4 ^ uVar4 >> 0x10;
  }
  return uVar4;
}


