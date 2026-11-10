/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081a85c; name: FUN_0081a85c
 */


uint FUN_0081a85c(byte *param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  
  puVar3 = PTR_DAT_04377b18;
  puVar2 = PTR_DAT_04377b10;
  if (*PTR_DAT_04377b10 == '\0') {
    uVar4 = 0;
    do {
      uVar5 = (uint)(uVar4 >> 1) & 0x7fffffff;
      if ((uVar4 & 1) != 0) {
        uVar5 = uVar5 ^ 0xedb88320;
      }
      uVar1 = uVar5 >> 1;
      if ((uVar5 & 1) != 0) {
        uVar1 = uVar5 >> 1 ^ 0xedb88320;
      }
      uVar5 = uVar1 >> 1;
      if ((uVar1 & 1) != 0) {
        uVar5 = uVar1 >> 1 ^ 0xedb88320;
      }
      uVar1 = uVar5 >> 1;
      if ((uVar5 & 1) != 0) {
        uVar1 = uVar5 >> 1 ^ 0xedb88320;
      }
      uVar5 = uVar1 >> 1;
      if ((uVar1 & 1) != 0) {
        uVar5 = uVar1 >> 1 ^ 0xedb88320;
      }
      uVar1 = uVar5 >> 1;
      if ((uVar5 & 1) != 0) {
        uVar1 = uVar5 >> 1 ^ 0xedb88320;
      }
      uVar5 = uVar1 >> 1;
      if ((uVar1 & 1) != 0) {
        uVar5 = uVar1 >> 1 ^ 0xedb88320;
      }
      uVar1 = uVar5 >> 1;
      if ((uVar5 & 1) != 0) {
        uVar1 = uVar5 >> 1 ^ 0xedb88320;
      }
      *(uint *)(puVar3 + uVar4 * 4) = uVar1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x100);
    *puVar2 = 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  do {
    uVar5 = *(uint *)(puVar3 + (ulong)(uVar5 & 0xff ^ (uint)*param_1) * 4) ^ uVar5 >> 8;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  } while (param_2 != 0);
  return ~uVar5;
}


