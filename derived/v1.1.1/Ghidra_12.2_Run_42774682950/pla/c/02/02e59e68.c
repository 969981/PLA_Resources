/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e59e68; name: FUN_02e59e68
 */


long FUN_02e59e68(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 <= uVar1) {
    uVar4 = FUN_02e5a02c(param_1);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    uVar2 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar2 <= uVar1) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 1);
  lVar5 = *param_1;
  puVar6 = (undefined8 *)(lVar5 + (ulong)uVar1 * 0x30);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  puVar3 = PTR_DAT_04388738;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0xffffffffffffffff;
    puVar6[1] = 0xffffffffffffffff;
    lVar5 = lVar5 + (ulong)uVar1 * 0x30;
    *(undefined2 *)(lVar5 + 0x1c) = 1;
    *(undefined **)(lVar5 + 0x10) = puVar3 + 0x10;
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    lVar5 = *param_1;
  }
  puVar8 = (undefined8 *)(lVar5 + (ulong)param_2 * 0x30);
  uVar4 = (ulong)param_2;
  if (puVar8 < puVar6) {
    do {
      puVar7 = puVar6 + -6;
      *puVar6 = *puVar7;
      puVar6[1] = puVar6[-5];
      puVar6[4] = puVar6[-2];
      puVar6[5] = puVar6[-1];
      *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar6 + -3);
      *(undefined2 *)((long)puVar6 + 0x1c) = *(undefined2 *)((long)puVar6 + -0x14);
      lVar5 = *param_1;
      puVar8 = (undefined8 *)(lVar5 + uVar4 * 0x30);
      puVar6 = puVar7;
    } while (puVar8 < puVar7);
  }
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0xffffffffffffffff;
    puVar8[1] = 0xffffffffffffffff;
    lVar5 = lVar5 + uVar4 * 0x30;
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined2 *)(lVar5 + 0x1c) = 1;
    *(undefined **)(lVar5 + 0x10) = puVar3 + 0x10;
    lVar5 = *param_1;
  }
  return lVar5 + uVar4 * 0x30;
}


