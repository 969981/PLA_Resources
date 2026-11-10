/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5333c; name: FUN_02e5333c
 */


undefined8 * FUN_02e5333c(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar5 = *(uint *)((long)param_1 + 0xc);
  if (uVar5 <= uVar4) {
    iVar1 = uVar5 + (uVar5 >> 1);
    if (uVar5 == 0) {
      iVar1 = 1;
    }
    uVar6 = FUN_02e533ec(param_1,iVar1);
    if ((uVar6 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    uVar5 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar5 <= uVar4) {
    return (undefined8 *)0x0;
  }
  uVar4 = *(uint *)(param_1 + 1);
  puVar2 = (undefined8 *)(*param_1 + (ulong)uVar4 * 0x80);
  *(uint *)(param_1 + 1) = uVar4 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar3 = *param_1 + (ulong)uVar4 * 0x80;
  *puVar2 = 0xffffffffffffffff;
  *(undefined2 *)(lVar3 + 0x14) = 1;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined ***)(lVar3 + 8) = &PTR_LAB_042a5e38;
  *(undefined4 *)(lVar3 + 0x68) = 0;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined1 *)(lVar3 + 0x78) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  return puVar2;
}


