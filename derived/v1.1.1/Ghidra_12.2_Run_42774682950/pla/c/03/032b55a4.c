/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b55a4; name: FUN_032b55a4
 */


int FUN_032b55a4(ulong param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar2 = (param_1 & 0xffffffff) * 0x38;
  uVar1 = 0;
  uVar4 = (uint)*(byte *)((long)&DAT_04440a40 + lVar2 + 3);
  if (uVar4 != 0) {
    uVar1 = (param_3 - 1U) / uVar4;
  }
  uVar4 = 0;
  uVar3 = (uint)*(byte *)((long)&DAT_04440a40 + lVar2 + 2);
  if (uVar3 != 0) {
    uVar4 = (param_2 - 1U) / uVar3;
  }
  return ((uVar4 + 1) * (uint)*(ushort *)(&DAT_04440a40 + (param_1 & 0xffffffff) * 0xe) >> 3) *
         (uVar1 + 1);
}


