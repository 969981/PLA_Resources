/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007265d0; name: FUN_007265d0
 */


void FUN_007265d0(long *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  byte *pbVar5;
  
  *param_1 = (long)(PTR_DAT_04376708 + 0x10);
  uVar1 = param_1[1];
  if (((uVar1 & 1) != 0) &&
     (plVar4 = (long *)(uVar1 & 0xfffffffffffffffe), *plVar4 == 0 && plVar4 != (long *)0x0)) {
    if ((*(byte *)(plVar4 + 1) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,plVar4[3]);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar4);
    uVar1 = param_1[1];
  }
  *param_1 = (long)(PTR_DAT_04376710 + 0x10);
  puVar2 = (ulong *)(uVar1 & 0xfffffffffffffffe);
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 == (ulong *)0x0) {
    pbVar5 = (byte *)param_1[2];
    if ((pbVar5 != PTR_DAT_043730c0) && (pbVar5 != (byte *)0x0)) {
      if ((*pbVar5 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar5 + 0x10));
      }
      FUN_002e2ea0(PTR_LAB_04373088,pbVar5);
    }
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      FUN_0030be58(lVar3);
      FUN_002e2ea0(PTR_LAB_04373088,lVar3);
      return;
    }
  }
  return;
}


