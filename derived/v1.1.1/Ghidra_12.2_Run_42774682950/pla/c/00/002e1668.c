/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e1668; name: FUN_002e1668
 */


void FUN_002e1668(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_00633bd0(param_1 + 0x10);
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
  FUN_002dec54(param_1,param_2);
  return;
}


