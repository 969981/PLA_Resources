/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00152790; name: FUN_00152790
 */


void FUN_00152790(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_1 + 0x20);
        plVar5 = &DAT_039c5c28;
        if ((int)plVar4[1] != 0x16) {
          lVar3 = *plVar4;
          plVar5 = &DAT_039c5c28;
          if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar3 + 10)) {
            plVar5 = (long *)(lVar3 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar5 = (long *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar5) {
      plVar5 = &DAT_039c5c28;
    }
  }
  puVar2 = (undefined8 *)FUN_00171c60(param_1,*plVar5,*(long *)(param_1 + 0x10) + -0x20);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
  *puVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -0x10);
  puVar2[1] = uVar1;
  *(undefined1 *)(*plVar5 + 10) = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  if ((((*(byte *)(lVar3 + -8) >> 6 & 1) != 0) && ((*(byte *)(*plVar5 + 9) >> 2 & 1) != 0)) &&
     ((*(byte *)(*(long *)(lVar3 + -0x10) + 9) & 3) != 0)) {
    FUN_0015cbe0(param_1);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x10) = lVar3 + -0x20;
  return;
}


