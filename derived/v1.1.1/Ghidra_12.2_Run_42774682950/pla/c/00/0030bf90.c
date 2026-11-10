/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030bf90; name: FUN_0030bf90
 */


void FUN_0030bf90(long param_1)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if (*(long *)(uVar1 + 8) != *(long *)(uVar1 + 0x10)) {
      FUN_0030cac0();
      return;
    }
  }
  return;
}


