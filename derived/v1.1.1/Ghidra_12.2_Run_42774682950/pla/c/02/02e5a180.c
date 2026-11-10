/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5a180; name: FUN_02e5a180
 */


void FUN_02e5a180(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *puVar9;
  undefined4 *puVar8;
  
  *param_1 = &PTR_FUN_042a5e68;
  lVar4 = param_1[0xf];
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x50) = *(int *)(lVar4 + 0x50) + -1;
    param_1[0xf] = 0;
  }
  lVar4 = param_1[0x10];
  if (*(int *)(param_1 + 0x11) != 0) {
    lVar5 = lVar4;
    do {
      FUN_02e56f28(lVar5,param_1);
      lVar4 = param_1[0x10];
      lVar5 = lVar5 + 0x28;
    } while (lVar5 != lVar4 + (ulong)*(uint *)(param_1 + 0x11) * 0x28);
  }
  if (lVar4 == 0) {
    iVar1 = *(int *)(param_1 + 0x1d);
  }
  else {
    FUN_02e57ab0(param_1 + 0x10);
    FUN_02f59e60(9,param_1[0x10]);
    param_1[0x10] = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0;
    iVar1 = *(int *)(param_1 + 0x1d);
  }
  if (iVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1[1] + 0x48);
    puVar8 = (undefined4 *)param_1[0x1c];
    do {
      puVar9 = puVar8 + 1;
      FUN_02ea8058(*puVar8,uVar6,3,0,0xab,0,0,0);
      puVar8 = puVar9;
    } while (puVar9 != (undefined4 *)(param_1[0x1c] + (ulong)*(uint *)(param_1 + 0x1d) * 4));
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1b] != 0) {
    FUN_02f59e60(9);
  }
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[8] == 0) {
    lVar4 = param_1[0xd];
  }
  else {
    *(undefined4 *)(param_1 + 9) = 0;
    (*DAT_0442d158)(9);
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
    lVar4 = param_1[0xd];
  }
  if (lVar4 == 0) {
    puVar2 = (undefined8 *)param_1[0x13];
  }
  else {
    *(undefined4 *)(param_1 + 0xe) = 0;
    (*DAT_0442d158)(9);
    param_1[0xd] = 0;
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    puVar2 = (undefined8 *)param_1[0x13];
  }
  if (puVar2 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x14) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 0x14) * 0x50;
      do {
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + -0x50;
        puVar2 = puVar2 + 10;
      } while (lVar4 != 0);
      puVar2 = (undefined8 *)param_1[0x13];
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    (*DAT_0442d158)(0xb,puVar2);
    param_1[0x13] = 0;
    *(undefined4 *)((long)param_1 + 0xa4) = 0;
  }
  if ((*(uint *)(param_1[1] + 0x40) < 6) || (*(long *)(*(long *)(param_1[1] + 0x38) + 0x28) == 0)) {
    lVar4 = param_1[0x1c];
  }
  else {
    FUN_02ef7b18();
    lVar4 = param_1[0x1c];
  }
  if (lVar4 == 0) {
    lVar4 = param_1[0x1b];
  }
  else {
    *(undefined4 *)(param_1 + 0x1d) = 0;
    FUN_02f59e60(0);
    param_1[0x1c] = 0;
    *(undefined4 *)((long)param_1 + 0xec) = 0;
    lVar4 = param_1[0x1b];
  }
  if (lVar4 != 0) {
    FUN_02f59e60(9);
  }
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (*(int *)(param_1 + 0x17) != 0) {
    uVar7 = 0;
    do {
      lVar4 = param_1[0x16];
      plVar3 = *(long **)(lVar4 + uVar7 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          plVar3 = (long *)*plVar3;
          FUN_02f59e60(0xb);
        } while (plVar3 != (long *)0x0);
        lVar4 = param_1[0x16];
      }
      *(undefined8 *)(lVar4 + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x17));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x16] != 0) {
    *(undefined4 *)(param_1 + 0x17) = 0;
    FUN_02f59e60(0xb);
    param_1[0x16] = 0;
    *(undefined4 *)((long)param_1 + 0xbc) = 0;
  }
  FUN_02e5c2c8(param_1);
  return;
}


