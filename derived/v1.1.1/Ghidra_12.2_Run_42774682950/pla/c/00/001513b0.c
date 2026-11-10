/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001513b0; name: FUN_001513b0
 */


long FUN_001513b0(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar3 = (long *)**(long **)(param_1 + 0x20);
        plVar2 = &DAT_039c5c28;
        if ((int)plVar3[1] != 0x16) {
          lVar1 = *plVar3;
          plVar2 = &DAT_039c5c28;
          if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar1 + 10)) {
            plVar2 = (long *)(lVar1 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar2) {
      plVar2 = &DAT_039c5c28;
    }
  }
  lVar1 = 0;
  switch(*(uint *)(plVar2 + 1) & 0x3f) {
  case 2:
  case 5:
  case 6:
  case 8:
  case 0x16:
  case 0x26:
    lVar1 = *plVar2;
    break;
  case 7:
    return *plVar2 + 0x28;
  }
  return lVar1;
}


