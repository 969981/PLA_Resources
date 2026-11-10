/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ae44c; name: FUN_007ae44c
 */


void FUN_007ae44c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_007ae4bc;
    uVar2 = *(ulong *)(param_1 + 8);
  }
  puVar1 = (ulong *)(uVar2 & 0xfffffffffffffffe);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)*puVar1;
  }
  if ((puVar1 == (ulong *)0x0) && (lVar3 = *(long *)(param_1 + 0x18), lVar3 != 0)) {
    FUN_002ded3c(lVar3);
    FUN_002e2ea0(PTR_LAB_04373088,lVar3);
    *(undefined4 *)(param_1 + 0x24) = 0;
    return;
  }
LAB_007ae4bc:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


