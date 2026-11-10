/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5bef4; name: FUN_02e5bef4
 */


void FUN_02e5bef4(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  *param_1 = &PTR_FUN_042a5e90;
  if (*(int *)(param_1 + 10) != 0) {
    puVar4 = PTR_DAT_043885f8;
    while (puVar4 = *(undefined **)(puVar4 + 0x10), puVar4 != (undefined *)0x0) {
      while (*(undefined8 **)(puVar4 + 0x78) == param_1) {
        *(undefined8 *)(puVar4 + 0x78) = 0;
        *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + -1;
        puVar4 = *(undefined **)(puVar4 + 0x10);
        if (puVar4 == (undefined *)0x0) goto LAB_02e5bf54;
      }
    }
  }
LAB_02e5bf54:
  if (*(int *)(param_1 + 9) != 0) {
    puVar2 = (undefined8 *)param_1[8];
    do {
      puVar6 = (undefined8 *)*puVar2;
      iVar1 = *(int *)(puVar6 + 10);
      *(int *)(puVar6 + 10) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*puVar6)(puVar6);
        FUN_02f59e60(4,puVar6);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined8 *)(param_1[8] + (ulong)*(uint *)(param_1 + 9) * 8));
  }
  puVar2 = (undefined8 *)param_1[0xc];
  *(undefined4 *)(param_1 + 9) = 0;
  if (puVar2 == (undefined8 *)0x0) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  else {
    if (*(uint *)(param_1 + 0xd) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 0xd) * 0x50;
      do {
        (**(code **)*puVar2)(puVar2);
        lVar5 = lVar5 + -0x50;
        puVar2 = puVar2 + 10;
      } while (lVar5 != 0);
      puVar2 = (undefined8 *)param_1[0xc];
    }
    *(undefined4 *)(param_1 + 0xd) = 0;
    (*DAT_0442d158)(0xb,puVar2);
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
    iVar1 = *(int *)(param_1 + 0x10);
  }
  if (iVar1 != 0) {
    uVar7 = 0;
    do {
      lVar5 = param_1[0xf];
      plVar3 = *(long **)(lVar5 + uVar7 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          plVar3 = (long *)*plVar3;
          FUN_02f59e60(0xb);
        } while (plVar3 != (long *)0x0);
        lVar5 = param_1[0xf];
      }
      *(undefined8 *)(lVar5 + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0xf] != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_02f59e60(0xb);
    param_1[0xf] = 0;
    *(undefined4 *)((long)param_1 + 0x84) = 0;
  }
  FUN_02e5c0cc(param_1 + 8);
  FUN_02e441a0(param_1);
  return;
}


