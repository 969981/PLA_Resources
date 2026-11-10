/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e625ac; name: FUN_02e625ac
 */


undefined8 * FUN_02e625ac(long *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 <= uVar1) {
    uVar4 = FUN_02e626dc(param_1);
    if ((uVar4 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    uVar2 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar2 <= uVar1) {
    return (undefined8 *)0x0;
  }
  uVar1 = *(uint *)(param_1 + 1);
  lVar5 = *param_1;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  puVar3 = (undefined8 *)(lVar5 + (ulong)uVar1 * 0x50);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar3 = &PTR_LAB_042a5f70;
  lVar5 = lVar5 + (ulong)uVar1 * 0x50;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  return puVar3;
}


