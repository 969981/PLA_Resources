/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecab9c; name: FUN_02ecab9c
 */


undefined4 * FUN_02ecab9c(long *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar5 = *(uint *)((long)param_1 + 0xc);
  if (uVar5 <= uVar3) {
    iVar1 = uVar5 + (uVar5 >> 1);
    if (uVar5 == 0) {
      iVar1 = 1;
    }
    uVar4 = FUN_02ecac0c(param_1,iVar1);
    if ((uVar4 & 1) == 0) {
      return (undefined4 *)0x0;
    }
    uVar5 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar5 <= uVar3) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar2 = 0;
  return puVar2;
}


