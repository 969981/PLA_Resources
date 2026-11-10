/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00150260; name: FUN_00150260
 */


void FUN_00150260(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_1 + 0x20);
        puVar3 = &DAT_039c5c28;
        if ((int)plVar4[1] != 0x16) {
          lVar5 = *plVar4;
          puVar3 = &DAT_039c5c28;
          if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar5 + 10)) {
            puVar3 = (undefined8 *)(lVar5 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      puVar3 = puVar2 + (long)param_2 * 2;
    }
  }
  else {
    puVar3 = (undefined8 *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (puVar2 <= puVar3) {
      puVar3 = &DAT_039c5c28;
    }
  }
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}


