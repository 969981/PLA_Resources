/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071de28; name: FUN_0071de28
 */


void FUN_0071de28(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_043730c0;
  pbVar4 = *(byte **)(param_1 + 0x10);
  if (pbVar4 == PTR_DAT_043730c0) {
LAB_0071de54:
    pbVar4 = *(byte **)(param_1 + 0x18);
  }
  else {
    if ((*pbVar4 & 1) == 0) {
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      goto LAB_0071de54;
    }
    **(undefined1 **)(pbVar4 + 0x10) = 0;
    pbVar4[8] = 0;
    pbVar4[9] = 0;
    pbVar4[10] = 0;
    pbVar4[0xb] = 0;
    pbVar4[0xc] = 0;
    pbVar4[0xd] = 0;
    pbVar4[0xe] = 0;
    pbVar4[0xf] = 0;
    pbVar4 = *(byte **)(param_1 + 0x18);
  }
  if (pbVar4 != puVar2) {
    if ((*pbVar4 & 1) == 0) {
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      uVar3 = *(ulong *)(param_1 + 8);
      goto joined_r0x0071de74;
    }
    **(undefined1 **)(pbVar4 + 0x10) = 0;
    pbVar4[8] = 0;
    pbVar4[9] = 0;
    pbVar4[10] = 0;
    pbVar4[0xb] = 0;
    pbVar4[0xc] = 0;
    pbVar4[0xd] = 0;
    pbVar4[0xe] = 0;
    pbVar4[0xf] = 0;
  }
  uVar3 = *(ulong *)(param_1 + 8);
joined_r0x0071de74:
  plVar5 = (long *)(uVar3 & 0xfffffffffffffffe);
  if ((uVar3 & 1) == 0) {
    plVar1 = plVar5;
  }
  else {
    plVar1 = (long *)*plVar5;
  }
  if ((plVar1 == (long *)0x0) && (lVar7 = *(long *)(param_1 + 0x20), lVar7 != 0)) {
    FUN_002e0f54(lVar7);
    FUN_002e2ea0(PTR_LAB_04373088,lVar7);
    uVar3 = *(ulong *)(param_1 + 8);
    plVar5 = (long *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar6 = uVar3 & 1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((uVar3 & 1) != 0) {
    plVar5 = (long *)*plVar5;
  }
  if ((plVar5 == (long *)0x0) && (lVar7 = *(long *)(param_1 + 0x28), lVar7 != 0)) {
    FUN_0071ea94(lVar7);
    FUN_002e2ea0(PTR_LAB_04373088,lVar7);
    uVar3 = *(ulong *)(param_1 + 8);
    uVar6 = uVar3 & 1;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (uVar6 != 0) {
    uVar3 = uVar3 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar3 + 8) & 1) != 0) {
      **(undefined1 **)(uVar3 + 0x18) = 0;
      *(undefined8 *)(uVar3 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar3 + 8) = 0;
  }
  return;
}


