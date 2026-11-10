/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebeb6c; name: FUN_02ebeb6c
 */


long FUN_02ebeb6c(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  param_2 = param_2 & 0xffffffff;
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN_02ebed34(param_1,iVar1);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar3 <= uVar2) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  puVar4 = (undefined8 *)(lVar7 + (ulong)uVar2 * 0x30);
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = lVar7 + (ulong)uVar2 * 0x30;
    *(undefined8 *)(lVar7 + 8) = 0;
    *(undefined1 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    *puVar4 = &PTR_LAB_042a9f18;
    lVar7 = *param_1;
  }
  puVar6 = (undefined8 *)(lVar7 + param_2 * 0x30);
  if (puVar6 < puVar4) {
    do {
      puVar8 = puVar4 + -6;
      *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(puVar4 + -1);
      FUN_02ebd53c(puVar4,puVar8);
      puVar6 = (undefined8 *)(*param_1 + param_2 * 0x30);
      puVar4 = puVar8;
    } while (puVar6 < puVar8);
  }
  (**(code **)*puVar6)(puVar6);
  lVar7 = *param_1;
  puVar4 = (undefined8 *)(lVar7 + param_2 * 0x30);
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = lVar7 + param_2 * 0x30;
    *(undefined8 *)(lVar7 + 8) = 0;
    *(undefined1 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    *puVar4 = &PTR_LAB_042a9f18;
    lVar7 = *param_1;
  }
  return lVar7 + param_2 * 0x30;
}


