/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4d874; name: FUN_02e4d874
 */


long FUN_02e4d874(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar6;
  undefined8 *puVar5;
  undefined8 *puVar7;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 <= uVar1) {
    uVar3 = FUN_02e4ddb4(param_1,1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar2 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar2 <= uVar1) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  puVar5 = (undefined8 *)(lVar4 + (ulong)uVar1 * 0x20);
  if (puVar5 != (undefined8 *)0x0) {
    lVar4 = lVar4 + (ulong)uVar1 * 0x20;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    lVar4 = *param_1;
  }
  uVar3 = (ulong)param_2;
  puVar7 = (undefined8 *)(lVar4 + uVar3 * 0x20);
  if (puVar7 < puVar5) {
    do {
      puVar6 = puVar5 + -4;
      *puVar5 = *puVar6;
      puVar5[1] = puVar5[-3];
      puVar5[2] = puVar5[-2];
      puVar5[3] = puVar5[-1];
      lVar4 = *param_1;
      puVar7 = (undefined8 *)(lVar4 + uVar3 * 0x20);
      puVar5 = puVar6;
    } while (puVar7 < puVar6);
  }
  if (puVar7 != (undefined8 *)0x0) {
    lVar4 = lVar4 + uVar3 * 0x20;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    lVar4 = *param_1;
  }
  return lVar4 + uVar3 * 0x20;
}


