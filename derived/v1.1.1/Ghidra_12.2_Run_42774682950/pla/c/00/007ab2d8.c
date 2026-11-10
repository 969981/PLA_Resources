/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ab2d8; name: FUN_007ab2d8
 */


void FUN_007ab2d8(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_007b29f0(param_1 + 0x10);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar1 + 8) & 1) == 0) {
      *(undefined2 *)(uVar1 + 8) = 0;
    }
    else {
      **(undefined1 **)(uVar1 + 0x18) = 0;
      *(undefined8 *)(uVar1 + 0x10) = 0;
    }
  }
  FUN_007ab1f0(param_1,param_2);
  return;
}


