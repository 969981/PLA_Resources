/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b5430; name: FUN_032b5430
 */


uint FUN_032b5430(ulong param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)((long)&DAT_04440a5d + (param_1 & 0xffffffff) * 0x38 + 7) == '\0') {
    return (uint)*(ushort *)(&DAT_04440a40 + (param_1 & 0xffffffff) * 0xe);
  }
  lVar1 = (param_1 & 0xffffffff) * 0x38;
  iVar2 = (uint)*(byte *)((long)&DAT_04440a40 + lVar1 + 3) *
          (uint)*(byte *)((long)&DAT_04440a40 + lVar1 + 2) * (uint)(byte)(&DAT_04440a44)[lVar1];
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = (int)((uint)*(ushort *)(&DAT_04440a40 + (param_1 & 0xffffffff) * 0xe) + iVar2 + -1) /
            iVar2;
  }
  return uVar3;
}


