/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00150750; name: FUN_00150750
 */


undefined8 FUN_00150750(long param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x20);
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        puVar1 = &DAT_039c5c28;
        if ((int)((long *)*plVar4)[1] != 0x16) {
          lVar5 = *(long *)*plVar4;
          puVar1 = &DAT_039c5c28;
          if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar5 + 10)) {
            puVar1 = (undefined8 *)(lVar5 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar1 = (undefined8 *)(*plVar4 + (long)param_2 * 0x10);
    if (*(undefined8 **)(param_1 + 0x10) <= puVar1) {
      puVar1 = &DAT_039c5c28;
    }
  }
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        if (puVar1 != &DAT_039c5c28 && *(byte **)(param_1 + 0x18) != &BYTE_039c5be8)
        goto LAB_001507e8;
      }
      else if ((int)((long *)*plVar4)[1] != 0x16) {
        lVar5 = *(long *)*plVar4;
        puVar2 = &DAT_039c5c28;
        if (-param_3 + -0xf4628 <= (int)(uint)*(byte *)(lVar5 + 10)) {
          puVar2 = (undefined8 *)(lVar5 + (long)(-param_3 + -0xf4629) * 0x10 + 0x20);
        }
        if (puVar1 != &DAT_039c5c28 && puVar2 != &DAT_039c5c28) goto LAB_001507e8;
      }
    }
    else if (puVar1 != &DAT_039c5c28 &&
             (undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_3 * 0x10) != &DAT_039c5c28)
    goto LAB_001507e8;
  }
  else {
    puVar2 = (undefined8 *)(*plVar4 + (long)param_3 * 0x10);
    if (*(undefined8 **)(param_1 + 0x10) <= puVar2) {
      puVar2 = &DAT_039c5c28;
    }
    if (puVar1 != &DAT_039c5c28 && puVar2 != &DAT_039c5c28) {
LAB_001507e8:
      uVar3 = FUN_00175d10(0);
      return uVar3;
    }
  }
  return 0;
}


