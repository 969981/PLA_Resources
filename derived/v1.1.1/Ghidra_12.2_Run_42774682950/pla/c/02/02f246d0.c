/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f246d0; name: FUN_02f246d0
 */


undefined1  [16] FUN_02f246d0(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x110) = 0x42ca0000;
  }
  if ((*(byte *)(param_1 + 0x50) >> 2 & 1) != 0) {
    DAT_0440ae44 = 1;
  }
  lVar6 = *param_2;
  lVar3 = *(long *)(lVar6 + 0x58);
  lVar4 = *(long *)(lVar3 + 0x20);
  plVar5 = (long *)(lVar4 + 0x40);
  if (lVar4 == 0 || lVar6 == lVar4) {
    lVar7 = lVar4;
    lVar4 = 0;
  }
  else {
    lVar7 = *plVar5;
    plVar5 = (long *)(lVar7 + 0x40);
    if (lVar7 != 0 && lVar6 != lVar7) {
      do {
        lVar4 = lVar7;
        lVar7 = *plVar5;
        plVar5 = (long *)(lVar7 + 0x40);
      } while (lVar7 != 0 && lVar6 != lVar7);
    }
  }
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar3 + 0x20);
    if (*(long *)(lVar3 + 0x20) != lVar7) {
      plVar1 = (long *)(lVar4 + 0x40);
    }
    *plVar1 = *plVar5;
    if (*(long *)(lVar3 + 0x18) == lVar7) {
      *(long *)(lVar3 + 0x18) = lVar4;
    }
  }
  puVar2 = (undefined8 *)*param_2;
  lVar3 = param_2[1];
  lVar4 = puVar2[9];
  plVar5 = (long *)(param_1 + 0x28);
  if (*(undefined8 **)(param_1 + 0x28) != puVar2) {
    plVar5 = (long *)(lVar3 + 0x48);
  }
  *plVar5 = lVar4;
  *param_2 = lVar4;
  param_2[1] = lVar3;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (*DAT_0442d158)(5,puVar2);
    lVar4 = *param_2;
    lVar3 = param_2[1];
  }
  auVar8._8_8_ = lVar3;
  auVar8._0_8_ = lVar4;
  return auVar8;
}


