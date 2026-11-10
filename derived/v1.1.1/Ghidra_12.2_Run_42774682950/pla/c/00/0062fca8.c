/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0062fca8; name: FUN_0062fca8
 */


void FUN_0062fca8(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_006307b8(param_1 + 0x10);
  FUN_006308d8(param_1 + 0x28);
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
  FUN_0062fbb4(param_1,param_2);
  return;
}


