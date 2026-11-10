/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00171d30; name: FUN_00171d30
 */


void FUN_00171d30(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  if (*(long *)(param_2 + 0x20) != 0) {
    uVar1 = 1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f);
    FUN_00161510(param_1,*(undefined8 *)(param_2 + 0x18),
                 -(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5,0);
  }
  FUN_00161510(param_1,*(undefined8 *)(param_2 + 0x10),(ulong)*(uint *)(param_2 + 0xc) << 4,0);
  FUN_00161510(param_1,param_2,0x38,0);
  return;
}


