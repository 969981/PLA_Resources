/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e531fc; name: FUN_02e531fc
 */


long FUN_02e531fc(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  param_2 = param_2 & 0xffffffff;
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN_02e533ec(param_1,iVar1);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar3 <= uVar2) {
    return 0;
  }
  lVar6 = *param_1;
  uVar2 = *(uint *)(param_1 + 1);
  puVar4 = (undefined8 *)(lVar6 + (ulong)uVar2 * 0x80);
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (puVar4 != (undefined8 *)0x0) {
    lVar6 = lVar6 + (ulong)uVar2 * 0x80;
    *puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined2 *)(lVar6 + 0x14) = 1;
    *(undefined ***)(lVar6 + 8) = &PTR_LAB_042a5e38;
    *(undefined4 *)(lVar6 + 0x68) = 0;
    *(undefined8 *)(lVar6 + 0x70) = 0;
    *(undefined1 *)(lVar6 + 0x78) = 0;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined8 *)(lVar6 + 0x40) = 0;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined8 *)(lVar6 + 0x58) = 0;
    *(undefined8 *)(lVar6 + 0x60) = 0;
    lVar6 = *param_1;
  }
  puVar7 = (undefined8 *)(lVar6 + param_2 * 0x80);
  if (puVar7 < puVar4) {
    do {
      puVar8 = puVar4 + -0x10;
      FUN_02e44b70(puVar4,puVar8);
      puVar7 = (undefined8 *)(*param_1 + param_2 * 0x80);
      puVar4 = puVar8;
    } while (puVar7 < puVar8);
  }
  FUN_02e4499c(puVar7);
  lVar6 = *param_1;
  puVar4 = (undefined8 *)(lVar6 + param_2 * 0x80);
  if (puVar4 != (undefined8 *)0x0) {
    lVar6 = lVar6 + param_2 * 0x80;
    *puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined2 *)(lVar6 + 0x14) = 1;
    *(undefined ***)(lVar6 + 8) = &PTR_LAB_042a5e38;
    *(undefined4 *)(lVar6 + 0x68) = 0;
    *(undefined8 *)(lVar6 + 0x70) = 0;
    *(undefined1 *)(lVar6 + 0x78) = 0;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined8 *)(lVar6 + 0x40) = 0;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined8 *)(lVar6 + 0x58) = 0;
    *(undefined8 *)(lVar6 + 0x60) = 0;
    lVar6 = *param_1;
  }
  return lVar6 + param_2 * 0x80;
}


