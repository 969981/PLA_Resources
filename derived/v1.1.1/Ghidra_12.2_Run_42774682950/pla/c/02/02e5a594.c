/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5a594; name: FUN_02e5a594
 */


undefined8 FUN_02e5a594(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  lVar7 = *(long *)(param_1 + 0x78);
  if (lVar7 != 0) {
    if ((*(long *)(*(long *)(lVar7 + 8) + 0x48) == param_2) &&
       (*(char *)(*(long *)(lVar7 + 8) + 0x54) != '\0')) {
      return 1;
    }
    *(int *)(lVar7 + 0x50) = *(int *)(lVar7 + 0x50) + -1;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (param_2 == -1) {
    return 1;
  }
  uVar6 = *(uint *)(DAT_0440a140 + 0x38);
  if (uVar6 == 0) {
    return 2;
  }
  uVar2 = 0;
  if (uVar6 != 0) {
    uVar2 = (uint)param_2 / uVar6;
  }
  plVar8 = *(long **)(*(long *)(DAT_0440a140 + 0x30) + (ulong)((uint)param_2 - uVar2 * uVar6) * 8);
  if (plVar8 == (long *)0x0) {
    return 2;
  }
  while (plVar8[1] != param_2) {
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      return 2;
    }
  }
  *(int *)(plVar8[2] + 0x50) = *(int *)(plVar8[2] + 0x50) + 1;
  puVar9 = (undefined8 *)plVar8[2];
  if (puVar9 == (undefined8 *)0x0) {
    return 2;
  }
  lVar7 = FUN_02e42e10(puVar9);
  lVar3 = FUN_02e43014(puVar9);
  lVar4 = FUN_02e43210(puVar9);
  if (((lVar7 != 0) && (lVar3 != 0)) && (lVar4 != 0)) {
    *(long *)(param_1 + 0x78) = lVar3;
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
    uVar5 = 1;
    goto LAB_02e5a68c;
  }
  uVar6 = *(uint *)(puVar9 + 8);
  if (uVar6 < 8) {
LAB_02e5a6f4:
    if (5 < uVar6) {
      lVar7 = puVar9[7];
      goto LAB_02e5a700;
    }
  }
  else {
    lVar7 = puVar9[7];
    if (*(long *)(lVar7 + 0x38) != 0) {
      FUN_02eb1f30((long *)(lVar7 + 0x38));
      uVar6 = *(uint *)(puVar9 + 8);
      goto LAB_02e5a6f4;
    }
LAB_02e5a700:
    if (*(long *)(lVar7 + 0x28) != 0) {
      FUN_02eb1f30();
    }
  }
  uVar5 = 2;
LAB_02e5a68c:
  iVar1 = *(int *)(puVar9 + 10);
  *(int *)(puVar9 + 10) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)*puVar9)(puVar9);
    FUN_02f59e60(4,puVar9);
    return uVar5;
  }
  return uVar5;
}


