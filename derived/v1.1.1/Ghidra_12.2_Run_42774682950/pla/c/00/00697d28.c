/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00697d28; name: FUN_00697d28
 */


void FUN_00697d28(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if (puVar1 == (ulong *)0x0) {
      FUN_0069e168(*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if (*(int *)(param_1 + 0x1c) == 1) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if (puVar1 == (ulong *)0x0) {
      FUN_0069e0dc(*(undefined8 *)(param_1 + 0x10));
      uVar2 = *(ulong *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      goto joined_r0x00697d8c;
    }
  }
  uVar2 = *(ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x1c) = 0;
joined_r0x00697d8c:
  if ((uVar2 & 1) != 0) {
    uVar2 = uVar2 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar2 + 8) & 1) != 0) {
      **(undefined1 **)(uVar2 + 0x18) = 0;
      *(undefined8 *)(uVar2 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar2 + 8) = 0;
  }
  return;
}


