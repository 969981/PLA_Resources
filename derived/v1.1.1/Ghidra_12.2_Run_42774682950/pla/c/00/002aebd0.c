/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002aebd0; name: FUN_002aebd0
 */


void FUN_002aebd0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + 8);
  plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
  plVar1 = plVar3;
  if ((uVar2 & 1) != 0) {
    plVar1 = (long *)*plVar3;
  }
  if ((plVar1 == (long *)0x0) && (lVar5 = *(long *)(param_1 + 0x10), lVar5 != 0)) {
    FUN_002a8a84(lVar5);
    FUN_002e2ea0(PTR_LAB_04373088,lVar5);
    uVar2 = *(ulong *)(param_1 + 8);
    plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar4 = uVar2 & 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)*plVar3;
  }
  if ((plVar3 == (long *)0x0) && (*(long *)(param_1 + 0x18) != 0)) {
    FUN_002b4014();
    uVar2 = *(ulong *)(param_1 + 8);
    uVar4 = uVar2 & 1;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (uVar4 != 0) {
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


