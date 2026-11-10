/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032da0a0; name: FUN_032da0a0
 */


void FUN_032da0a0(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  *(undefined8 *)(param_1 + 0x108) = 0;
  uVar1 = param_4 << 0x10 | 0x200000;
  if ((param_4 & 0x30) != 0) {
    uVar1 = param_4 << 0x10;
  }
  *(undefined8 *)(param_1 + 0xf8) = param_2;
  *(ulong *)(param_1 + 0x100) = (ulong)(uVar1 | param_3 & 0xffff);
  *(ulong *)(param_1 + 0x70) = *(ulong *)(param_1 + 0x70) | 0x70000;
  return;
}


