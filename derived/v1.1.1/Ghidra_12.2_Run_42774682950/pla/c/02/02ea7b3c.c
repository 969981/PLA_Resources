/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7b3c; name: FUN_02ea7b3c
 */


long FUN_02ea7b3c(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar3 = *(uint *)(param_1 + 0x24);
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN_02ea7984(param_1,iVar1);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar3 = *(uint *)(param_1 + 0x24);
  }
  if (uVar3 <= uVar2) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x20) = uVar2 + 1;
  puVar6 = (undefined8 *)(lVar4 + (ulong)uVar2 * 0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0xffffffffffffffff;
    lVar4 = lVar4 + (ulong)uVar2 * 0x18;
    *(undefined4 *)(lVar4 + 8) = 0;
    *(undefined4 *)(lVar4 + 0x10) = 0x3f800000;
    lVar4 = *(long *)(param_1 + 0x18);
  }
  puVar7 = (undefined8 *)(lVar4 + (ulong)param_2 * 0x18);
  uVar5 = (ulong)param_2;
  if (puVar7 < puVar6) {
    do {
      puVar8 = puVar6 + -3;
      *puVar6 = *puVar8;
      puVar6[1] = puVar6[-2];
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar6 + -1);
      lVar4 = *(long *)(param_1 + 0x18);
      puVar7 = (undefined8 *)(lVar4 + uVar5 * 0x18);
      puVar6 = puVar8;
    } while (puVar7 < puVar8);
  }
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = 0xffffffffffffffff;
    lVar4 = lVar4 + uVar5 * 0x18;
    *(undefined4 *)(lVar4 + 8) = 0;
    *(undefined4 *)(lVar4 + 0x10) = 0x3f800000;
    lVar4 = *(long *)(param_1 + 0x18);
  }
  return lVar4 + uVar5 * 0x18;
}


