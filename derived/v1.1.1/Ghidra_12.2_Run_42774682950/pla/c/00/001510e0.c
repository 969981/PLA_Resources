/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001510e0; name: FUN_001510e0
 */


long FUN_001510e0(long param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if (0 < param_2) {
    plVar2 = (long *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar2) {
      plVar2 = &DAT_039c5c28;
    }
    iVar1 = (int)plVar2[1];
    goto joined_r0x00151110;
  }
  if (param_2 < -0xf4627) {
    if (param_2 == -0xf4628) {
      plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x48);
      goto joined_r0x00151110;
    }
    plVar3 = (long *)**(long **)(param_1 + 0x20);
    plVar2 = &DAT_039c5c28;
    if ((int)plVar3[1] != 0x16) {
      lVar4 = *plVar3;
      plVar2 = &DAT_039c5c28;
      if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar4 + 10)) {
        plVar2 = (long *)(lVar4 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
      }
      iVar1 = (int)plVar2[1];
      goto joined_r0x00151110;
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
  }
  iVar1 = (int)plVar2[1];
joined_r0x00151110:
  if (iVar1 == 0x66) {
    plVar2 = (long *)(*plVar2 + 0x18);
  }
  else if (iVar1 != 0x16) {
    return 0;
  }
  return *plVar2;
}


