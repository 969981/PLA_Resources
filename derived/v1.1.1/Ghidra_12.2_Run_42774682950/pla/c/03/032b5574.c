/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b5574; name: FUN_032b5574
 */


uint FUN_032b5574(ulong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = (uint)*(byte *)((long)&DAT_04440a40 + (param_1 & 0xffffffff) * 0x38 + 2);
  if (uVar2 != 0) {
    uVar1 = (param_2 - 1U) / uVar2;
  }
  return (uVar1 + 1) * (uint)*(ushort *)(&DAT_04440a40 + (param_1 & 0xffffffff) * 0xe) >> 3;
}


