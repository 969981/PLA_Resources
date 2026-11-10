/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00152c70; name: FUN_00152c70
 */


void FUN_00152c70(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar1 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_1 + 0x20);
        plVar1 = &DAT_039c5c28;
        if ((int)plVar4[1] != 0x16) {
          lVar2 = *plVar4;
          plVar1 = &DAT_039c5c28;
          if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar2 + 10)) {
            plVar1 = (long *)(lVar2 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = (long *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar1) {
      plVar1 = &DAT_039c5c28;
    }
  }
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *plVar1;
  *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + -0x10);
  *(char *)(lVar3 + 10) = (char)*(undefined4 *)(lVar2 + -8);
  lVar2 = *(long *)(param_1 + 0x10);
  if ((((*(byte *)(lVar2 + -8) >> 6 & 1) != 0) && ((*(byte *)(*plVar1 + 9) >> 2 & 1) != 0)) &&
     ((*(byte *)(*(long *)(lVar2 + -0x10) + 9) & 3) != 0)) {
    FUN_0015ca90(param_1);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x10) = lVar2 + -0x10;
  return;
}


