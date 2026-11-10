/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0072094c; name: FUN_0072094c
 */


void FUN_0072094c(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  FUN_00726330(param_1 + 0x10);
  pbVar1 = *(byte **)(param_1 + 0x28);
  if (pbVar1 != PTR_DAT_043730c0) {
    if ((*pbVar1 & 1) == 0) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      uVar2 = *(ulong *)(param_1 + 8);
      goto joined_r0x007209a4;
    }
    **(undefined1 **)(pbVar1 + 0x10) = 0;
    pbVar1[8] = 0;
    pbVar1[9] = 0;
    pbVar1[10] = 0;
    pbVar1[0xb] = 0;
    pbVar1[0xc] = 0;
    pbVar1[0xd] = 0;
    pbVar1[0xe] = 0;
    pbVar1[0xf] = 0;
  }
  uVar2 = *(ulong *)(param_1 + 8);
joined_r0x007209a4:
  plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
  if ((uVar2 & 1) == 0) {
    plVar5 = plVar3;
  }
  else {
    plVar5 = (long *)*plVar3;
  }
  if ((plVar5 == (long *)0x0) && (*(long *)(param_1 + 0x30) != 0)) {
    FUN_007262a4();
    uVar2 = *(ulong *)(param_1 + 8);
    plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar5 = plVar3;
  if ((uVar2 & 1) != 0) {
    plVar5 = (long *)*plVar3;
  }
  if ((plVar5 == (long *)0x0) && (lVar6 = *(long *)(param_1 + 0x38), lVar6 != 0)) {
    FUN_0030be58(lVar6);
    FUN_002e2ea0(PTR_LAB_04373088,lVar6);
    uVar2 = *(ulong *)(param_1 + 8);
    plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar5 = plVar3;
  if ((uVar2 & 1) != 0) {
    plVar5 = (long *)*plVar3;
  }
  if ((plVar5 == (long *)0x0) && (lVar6 = *(long *)(param_1 + 0x40), lVar6 != 0)) {
    FUN_00602294(lVar6);
    FUN_002e2ea0(PTR_LAB_04373088,lVar6);
    uVar2 = *(ulong *)(param_1 + 8);
    plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar4 = uVar2 & 1;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)*plVar3;
  }
  if ((plVar3 == (long *)0x0) && (lVar6 = *(long *)(param_1 + 0x48), lVar6 != 0)) {
    FUN_0030be58(lVar6);
    FUN_002e2ea0(PTR_LAB_04373088,lVar6);
    uVar2 = *(ulong *)(param_1 + 8);
    uVar4 = uVar2 & 1;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
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


