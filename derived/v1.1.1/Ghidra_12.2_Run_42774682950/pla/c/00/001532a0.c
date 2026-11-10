/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001532a0; name: FUN_001532a0
 */


void FUN_001532a0(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar3 = (long *)**(long **)(param_1 + 0x20);
        puVar2 = &DAT_039c5c28;
        if ((int)plVar3[1] != 0x16) {
          lVar4 = *plVar3;
          puVar2 = &DAT_039c5c28;
          if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar4 + 10)) {
            puVar2 = (undefined8 *)(lVar4 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(undefined8 **)(param_1 + 0x10) <= puVar2) {
      puVar2 = &DAT_039c5c28;
    }
  }
  iVar1 = FUN_001716a0(param_1,*puVar2,*(long *)(param_1 + 0x10) + -0x10);
  lVar4 = 0x10;
  if (iVar1 == 0) {
    lVar4 = -0x10;
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar4;
  return;
}


