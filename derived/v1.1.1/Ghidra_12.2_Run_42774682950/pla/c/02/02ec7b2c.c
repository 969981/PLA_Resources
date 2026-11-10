/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec7b2c; name: FUN_02ec7b2c
 */


long FUN_02ec7b2c(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar8;
  undefined8 *puVar7;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN_02ec7c80(param_1,iVar1);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar3 <= uVar2) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  puVar7 = (undefined8 *)(lVar4 + (ulong)uVar2 * 0x10);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(lVar4 + (ulong)uVar2 * 0x10 + 8) = 0;
    lVar4 = *param_1;
  }
  puVar6 = (undefined8 *)(lVar4 + (ulong)param_2 * 0x10);
  uVar5 = (ulong)param_2;
  if (puVar6 < puVar7) {
    do {
      puVar8 = puVar7 + -2;
      *puVar7 = *puVar8;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar7 + -1);
      lVar4 = *param_1;
      puVar6 = (undefined8 *)(lVar4 + uVar5 * 0x10);
      puVar7 = puVar8;
    } while (puVar6 < puVar8);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(lVar4 + uVar5 * 0x10 + 8) = 0;
    lVar4 = *param_1;
  }
  return lVar4 + uVar5 * 0x10;
}


