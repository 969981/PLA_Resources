/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0d3a0; name: FUN_02f0d3a0
 */


undefined4 * FUN_02f0d3a0(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x188);
  uVar3 = *(uint *)(param_1 + 0x18c);
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN_02f0d430(param_1,iVar1);
    if ((uVar5 & 1) == 0) {
      return (undefined4 *)0x0;
    }
    uVar3 = *(uint *)(param_1 + 0x18c);
  }
  if (uVar3 <= uVar2) {
    return (undefined4 *)0x0;
  }
  uVar2 = *(uint *)(param_1 + 0x188);
  *(uint *)(param_1 + 0x188) = uVar2 + 1;
  puVar4 = (undefined4 *)(*(long *)(param_1 + 0x180) + (ulong)uVar2 * 0x18);
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  lVar6 = *(long *)(param_1 + 0x180) + (ulong)uVar2 * 0x18;
  *puVar4 = 0;
  *(undefined8 *)(lVar6 + 8) = 0;
  *(undefined4 *)(lVar6 + 0x10) = 0;
  return puVar4;
}


