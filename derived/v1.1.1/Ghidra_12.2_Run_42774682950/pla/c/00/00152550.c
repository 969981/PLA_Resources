/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00152550; name: FUN_00152550
 */


void FUN_00152550(long param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  if (0 < param_2) {
    puVar1 = (undefined8 *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(undefined8 **)(param_1 + 0x10) <= puVar1) {
      puVar1 = &DAT_039c5c28;
    }
    FUN_001522e0(param_1,puVar1);
    return;
  }
  if (-0xf4628 < param_2) {
    FUN_001522e0(param_1,*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    return;
  }
  if (param_2 == -0xf4628) {
    FUN_001522e0(param_1,*(long *)(param_1 + 0x18) + 0x40);
    return;
  }
  plVar3 = (long *)**(long **)(param_1 + 0x20);
  puVar1 = &DAT_039c5c28;
  if ((int)plVar3[1] != 0x16) {
    lVar2 = *plVar3;
    puVar1 = &DAT_039c5c28;
    if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar2 + 10)) {
      puVar1 = (undefined8 *)(lVar2 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
    }
  }
  FUN_001522e0(param_1,puVar1);
  return;
}


