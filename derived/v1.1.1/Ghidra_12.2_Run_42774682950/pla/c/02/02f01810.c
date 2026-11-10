/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f01810; name: FUN_02f01810
 */


undefined4 * FUN_02f01810(long *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)((long)param_1 + 0xc);
  if (uVar4 <= uVar3) {
    iVar1 = uVar4 + (uVar4 >> 1);
    if (uVar4 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN_02f01890(param_1,iVar1);
    if ((uVar5 & 1) == 0) {
      return (undefined4 *)0x0;
    }
    uVar4 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar4 <= uVar3) {
    return (undefined4 *)0x0;
  }
  lVar6 = *param_1;
  uVar3 = *(uint *)(param_1 + 1);
  puVar2 = (undefined4 *)(lVar6 + (ulong)uVar3 * 0x10);
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar2 = 0;
  *(undefined4 *)(lVar6 + (ulong)uVar3 * 0x10 + 4) = 0;
  return puVar2;
}


