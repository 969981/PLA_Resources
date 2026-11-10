/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee6ec8; name: FUN_02ee6ec8
 */


long FUN_02ee6ec8(long *param_1,ulong param_2)

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
    uVar5 = FUN_02ee7090(param_1,iVar1);
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
  puVar4 = (undefined8 *)(lVar7 + (ulong)uVar2 * 0x28);
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = lVar7 + (ulong)uVar2 * 0x28;
    *(undefined4 *)(lVar7 + 8) = 0;
    *(undefined1 *)(lVar7 + 0xc) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *puVar4 = &PTR_LAB_042aab78;
    lVar7 = *param_1;
  }
  puVar6 = (undefined8 *)(lVar7 + param_2 * 0x28);
  if (puVar6 < puVar4) {
    do {
      puVar8 = puVar4 + -5;
      *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(puVar4 + -1);
      FUN_02ee4ff0(puVar4,puVar8);
      puVar6 = (undefined8 *)(*param_1 + param_2 * 0x28);
      puVar4 = puVar8;
    } while (puVar6 < puVar8);
  }
  (**(code **)*puVar6)(puVar6);
  lVar7 = *param_1;
  puVar4 = (undefined8 *)(lVar7 + param_2 * 0x28);
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = lVar7 + param_2 * 0x28;
    *(undefined4 *)(lVar7 + 8) = 0;
    *(undefined1 *)(lVar7 + 0xc) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *puVar4 = &PTR_LAB_042aab78;
    lVar7 = *param_1;
  }
  return lVar7 + param_2 * 0x28;
}


