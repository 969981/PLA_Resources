/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e539c0; name: FUN_02e539c0
 */


long FUN_02e539c0(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar7 = FUN_02e53bd4(param_1,iVar1);
    if ((uVar7 & 1) == 0) {
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
  puVar5 = (undefined8 *)(lVar4 + (ulong)uVar2 * 0x38);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0xffffffffffffffff;
    puVar5[1] = 0xffffffffffffffff;
    lVar4 = lVar4 + (ulong)uVar2 * 0x38;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined2 *)(lVar4 + 0x24) = 1;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined ***)(lVar4 + 0x18) = &PTR_LAB_042a5e38;
    lVar4 = *param_1;
  }
  uVar7 = (ulong)param_2;
  if ((undefined8 *)(lVar4 + (ulong)param_2 * 0x38) < puVar5) {
    do {
      puVar8 = puVar5 + -7;
      *puVar5 = *puVar8;
      puVar5[1] = puVar5[-6];
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar5 + -5);
      *(undefined4 *)((long)puVar5 + 0x14) = *(undefined4 *)((long)puVar5 + -0x24);
      FUN_02e44c8c(puVar5 + 5,puVar5 + -2);
      lVar4 = *param_1;
      puVar5 = puVar8;
    } while ((undefined8 *)(lVar4 + uVar7 * 0x38) < puVar8);
  }
  plVar6 = (long *)(lVar4 + uVar7 * 0x38 + 0x28);
  if (*plVar6 != 0) {
    lVar4 = lVar4 + uVar7 * 0x38;
    *(undefined4 *)(lVar4 + 0x30) = 0;
    (*DAT_0442d158)(9);
    *plVar6 = 0;
    *(undefined4 *)(lVar4 + 0x34) = 0;
    lVar4 = *param_1;
  }
  puVar5 = (undefined8 *)(lVar4 + uVar7 * 0x38);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0xffffffffffffffff;
    puVar5[1] = 0xffffffffffffffff;
    lVar4 = lVar4 + uVar7 * 0x38;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined2 *)(lVar4 + 0x24) = 1;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined ***)(lVar4 + 0x18) = &PTR_LAB_042a5e38;
    lVar4 = *param_1;
  }
  return lVar4 + uVar7 * 0x38;
}


