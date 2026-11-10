/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00713824; name: FUN_00713824
 */


void FUN_00713824(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  
  FUN_0032b96c(param_1 + 0x10);
  pbVar1 = *(byte **)(param_1 + 0x28);
  if (pbVar1 != PTR_DAT_043730c0) {
    if ((*pbVar1 & 1) == 0) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      uVar2 = *(ulong *)(param_1 + 8);
      goto joined_r0x00713884;
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
joined_r0x00713884:
  puVar4 = (ulong *)(uVar2 & 0xfffffffffffffffe);
  uVar3 = uVar2 & 1;
  if ((uVar2 & 1) != 0) {
    puVar4 = (ulong *)*puVar4;
  }
  if ((puVar4 == (ulong *)0x0) && (lVar5 = *(long *)(param_1 + 0x30), lVar5 != 0)) {
    FUN_00718d5c(lVar5);
    FUN_002e2ea0(PTR_LAB_04373088,lVar5);
    uVar2 = *(ulong *)(param_1 + 8);
    uVar3 = uVar2 & 1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (uVar3 != 0) {
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


