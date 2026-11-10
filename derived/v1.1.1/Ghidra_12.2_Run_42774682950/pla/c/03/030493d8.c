/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030493d8; name: FUN_030493d8
 */


long FUN_030493d8(long param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((1 << (ulong)(param_2 & 0x1f) & (uint)*(byte *)(param_1 + 0x15)) == 0) {
    uVar3 = (param_4 + (*(uint *)(param_1 + 0x1c) & 0xff)) - 1 & -param_4;
    uVar1 = uVar3 + ((param_3 & 0xff) + 3 & 0x1fc);
    uVar2 = uVar1 + 0xf & 0xfffffff0;
    if ((int)uVar2 < 0x41) {
      *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | (byte)(1 << (ulong)(param_2 & 0x1f));
      uVar5 = (param_2 & 0xff) << 2;
      uVar5 = (uVar3 >> 2) << (ulong)(uVar5 & 0x1f) |
              *(uint *)(param_1 + 0x1c) & (0xf << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
      *(uint *)(param_1 + 0x1c) = uVar5;
      iVar4 = (uint)*(byte *)(param_1 + 0x1b) * 0x10;
      uVar2 = iVar4 + uVar2;
      if ((uint)*(byte *)(param_1 + 9) * 0x10 < uVar2) {
        *(char *)(param_1 + 9) = (char)(uVar2 >> 4);
      }
      *(uint *)(param_1 + 0x1c) = uVar5 & 0xffffff00 | uVar1;
      return (ulong)(iVar4 + uVar3) + param_1;
    }
  }
  return 0;
}


