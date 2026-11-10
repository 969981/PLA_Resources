/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f244ac; name: FUN_02f244ac
 */


void FUN_02f244ac(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  *param_1 = &PTR_FUN_042ac398;
  plVar7 = param_1 + 5;
  puVar6 = (undefined8 *)*plVar7;
  while (puVar6 != (undefined8 *)0x0) {
    if (param_1[1] != 0) {
      *(undefined4 *)(param_1[1] + 0x110) = 0x42ca0000;
    }
    if ((*(byte *)(param_1 + 10) >> 2 & 1) != 0) {
      DAT_0440ae44 = 1;
    }
    lVar1 = puVar6[0xb];
    puVar5 = *(undefined8 **)(lVar1 + 0x20);
    puVar8 = puVar5 + 8;
    puVar4 = (undefined8 *)0x0;
    puVar3 = puVar5;
    if ((puVar5 != (undefined8 *)0x0) && (puVar6 != puVar5)) {
      puVar3 = (undefined8 *)*puVar8;
      puVar8 = puVar3 + 8;
      puVar4 = puVar5;
      if ((puVar3 != (undefined8 *)0x0) && (puVar6 != puVar3)) {
        do {
          puVar4 = puVar3;
          puVar3 = (undefined8 *)*puVar8;
          puVar8 = puVar3 + 8;
        } while (puVar3 != (undefined8 *)0x0 && puVar6 != puVar3);
      }
    }
    if (puVar3 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)(lVar1 + 0x20);
      if (*(undefined8 **)(lVar1 + 0x20) != puVar3) {
        puVar5 = puVar4 + 8;
      }
      *puVar5 = *puVar8;
      if (*(undefined8 **)(lVar1 + 0x18) == puVar3) {
        *(undefined8 **)(lVar1 + 0x18) = puVar4;
      }
    }
    puVar8 = (undefined8 *)puVar6[9];
    plVar2 = plVar7;
    if ((undefined8 *)*plVar7 != puVar6) {
      plVar2 = (long *)&DAT_00000048;
    }
    *plVar2 = (long)puVar8;
    (**(code **)*puVar6)(puVar6);
    (*DAT_0442d158)(5,puVar6);
    puVar6 = puVar8;
  }
  if (param_1[6] == 0) {
    lVar1 = param_1[8];
  }
  else {
    *(undefined4 *)(param_1 + 7) = 0;
    (*DAT_0442d150)(0);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
    lVar1 = param_1[8];
  }
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    (*DAT_0442d150)(5);
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
  }
  puVar6 = (undefined8 *)param_1[5];
  param_1[3] = 0;
  param_1[4] = 0;
  while (puVar6 != (undefined8 *)0x0) {
    if (puVar6[9] == 0) {
      *plVar7 = 0;
    }
    else {
      *plVar7 = puVar6[9];
    }
    (**(code **)*puVar6)(puVar6);
    (*DAT_0442d158)(5,puVar6);
    puVar6 = (undefined8 *)*plVar7;
  }
  *plVar7 = 0;
  return;
}


