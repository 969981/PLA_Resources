/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a83b0; name: FUN_007a83b0
 */


void FUN_007a83b0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_007b29f0(param_1 + 0x10);
  if (*(int *)(param_1 + 0x34) == 3) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if (puVar1 == (ulong *)0x0) {
      FUN_007b2068(*(undefined8 *)(param_1 + 0x28));
    }
  }
  else if (*(int *)(param_1 + 0x34) == 2) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (lVar3 = *(long *)(param_1 + 0x28), lVar3 != 0)) {
      FUN_007a7908(lVar3);
      FUN_002e2ea0(PTR_LAB_04373088,lVar3);
      uVar2 = *(ulong *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x34) = 0;
      goto joined_r0x007a8438;
    }
  }
  uVar2 = *(ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x34) = 0;
joined_r0x007a8438:
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


