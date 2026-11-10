/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e57c08; name: FUN_02e57c08
 */


long FUN_02e57c08(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar8 = FUN_02e57dd0(param_1,iVar1);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar3 <= uVar2) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  lVar5 = *param_1;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  puVar4 = (undefined4 *)(lVar5 + (ulong)uVar2 * 0x28);
  if (puVar4 != (undefined4 *)0x0) {
    lVar5 = lVar5 + (ulong)uVar2 * 0x28;
    *puVar4 = 0;
    *(undefined8 *)(lVar5 + 8) = 0;
    *(undefined4 *)(lVar5 + 0x10) = 0;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    *(undefined8 *)(lVar5 + 0x20) = 0;
    lVar5 = *param_1;
  }
  uVar8 = (ulong)param_2;
  if ((undefined4 *)(lVar5 + (ulong)param_2 * 0x28) < puVar4) {
    do {
      puVar6 = puVar4 + -10;
      FUN_02e57eb8(puVar4,puVar6);
      lVar5 = *param_1;
      puVar4 = puVar6;
    } while ((undefined4 *)(lVar5 + uVar8 * 0x28) < puVar6);
  }
  plVar7 = (long *)(lVar5 + uVar8 * 0x28 + 8);
  if (*plVar7 != 0) {
    FUN_02f59e60(9);
  }
  *plVar7 = 0;
  *(undefined4 *)(lVar5 + uVar8 * 0x28) = 0;
  lVar5 = *param_1;
  puVar4 = (undefined4 *)(lVar5 + uVar8 * 0x28);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    lVar5 = lVar5 + uVar8 * 0x28;
    *(undefined8 *)(lVar5 + 8) = 0;
    *(undefined4 *)(lVar5 + 0x10) = 0;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    *(undefined8 *)(lVar5 + 0x20) = 0;
    lVar5 = *param_1;
  }
  return lVar5 + uVar8 * 0x28;
}


