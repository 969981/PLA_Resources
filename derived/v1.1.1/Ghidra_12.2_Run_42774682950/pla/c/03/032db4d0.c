/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032db4d0; name: FUN_032db4d0
 */


uint FUN_032db4d0(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar2 = *param_1;
  uVar5 = (ulong)(uVar2 >> 0x10) & 0xfff;
  uVar4 = uVar2 >> 0x1c;
  uVar1 = (uint)uVar5;
  if (uVar5 <= (ulong)(long)(param_2 << 2)) {
    uVar1 = param_2 << 2;
  }
  uVar3 = uVar2 >> 0x10 & 0xfff;
  if (uVar3 <= (uint)(1 << (ulong)uVar4)) {
    uVar3 = 1 << (ulong)uVar4;
  }
  if (uVar4 == 0) {
    uVar3 = uVar2 >> 0x10 & 0xfff;
  }
  if (uVar4 != 0xf) {
    uVar1 = uVar3;
  }
  return uVar1;
}


