/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00150410; name: FUN_00150410
 */


bool FUN_00150410(long param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar2 = (long *)**(long **)(param_1 + 0x20);
        puVar1 = &DAT_039c5c28;
        if ((int)plVar2[1] != 0x16) {
          lVar3 = *plVar2;
          puVar1 = &DAT_039c5c28;
          if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar3 + 10)) {
            puVar1 = (undefined8 *)(lVar3 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar1 = (undefined8 *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(undefined8 **)(param_1 + 0x10) <= puVar1) {
      puVar1 = &DAT_039c5c28;
    }
  }
  return *(int *)(puVar1 + 1) == 0x16 || *(int *)(puVar1 + 1) == 0x66;
}


