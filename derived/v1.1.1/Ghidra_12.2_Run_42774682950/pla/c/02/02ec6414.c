/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec6414; name: FUN_02ec6414
 */


undefined8 * FUN_02ec6414(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar4 = *(uint *)(param_1 + 0x108);
  uVar5 = *(uint *)(param_1 + 0x10c);
  if (uVar5 <= uVar4) {
    iVar1 = uVar5 + (uVar5 >> 1);
    if (uVar5 == 0) {
      iVar1 = 1;
    }
    uVar6 = FUN_02eb52b8(param_1,iVar1);
    if ((uVar6 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    uVar5 = *(uint *)(param_1 + 0x10c);
  }
  if (uVar5 <= uVar4) {
    return (undefined8 *)0x0;
  }
  uVar4 = *(uint *)(param_1 + 0x108);
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x100) + (ulong)uVar4 * 0x20);
  *(uint *)(param_1 + 0x108) = uVar4 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar3 = *(long *)(param_1 + 0x100) + (ulong)uVar4 * 0x20;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  return puVar2;
}


