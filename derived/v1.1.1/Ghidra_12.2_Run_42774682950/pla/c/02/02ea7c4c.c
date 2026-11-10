/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7c4c; name: FUN_02ea7c4c
 */


undefined8 * FUN_02ea7c4c(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar5 = *(uint *)(param_1 + 0x24);
  if (uVar5 <= uVar2) {
    iVar1 = uVar5 + (uVar5 >> 1);
    if (uVar5 == 0) {
      iVar1 = 1;
    }
    uVar3 = FUN_02ea7984(param_1,iVar1);
    if ((uVar3 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    uVar5 = *(uint *)(param_1 + 0x24);
  }
  if (uVar5 <= uVar2) {
    return (undefined8 *)0x0;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x20) = uVar2 + 1;
  puVar4 = (undefined8 *)(lVar6 + (ulong)uVar2 * 0x18);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar4 = 0xffffffffffffffff;
  lVar6 = lVar6 + (ulong)uVar2 * 0x18;
  *(undefined4 *)(lVar6 + 8) = 0;
  *(undefined4 *)(lVar6 + 0x10) = 0x3f800000;
  return puVar4;
}


