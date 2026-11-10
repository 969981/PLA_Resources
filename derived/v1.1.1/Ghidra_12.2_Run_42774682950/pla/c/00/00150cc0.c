/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00150cc0; name: FUN_00150cc0
 */


bool FUN_00150cc0(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  
  if (0 < param_2) {
    piVar2 = (int *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(int **)(param_1 + 0x10) <= piVar2) {
      piVar2 = (int *)&DAT_039c5c28;
    }
    iVar1 = piVar2[2];
    if (iVar1 == 0) {
      return false;
    }
    goto LAB_00150d34;
  }
  if (param_2 < -0xf4627) {
    if (param_2 == -0xf4628) {
      piVar2 = (int *)(*(long *)(param_1 + 0x18) + 0x40);
      iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x48);
      if (iVar1 == 0) {
        return false;
      }
      goto LAB_00150d34;
    }
    plVar3 = (long *)**(long **)(param_1 + 0x20);
    piVar2 = (int *)&DAT_039c5c28;
    if ((int)plVar3[1] != 0x16) {
      lVar4 = *plVar3;
      piVar2 = (int *)&DAT_039c5c28;
      if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar4 + 10)) {
        piVar2 = (int *)(lVar4 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
      }
      iVar1 = piVar2[2];
      if (iVar1 == 0) {
        return false;
      }
      goto LAB_00150d34;
    }
  }
  else {
    piVar2 = (int *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
  }
  iVar1 = piVar2[2];
  if (iVar1 == 0) {
    return false;
  }
LAB_00150d34:
  if (iVar1 == 1) {
    return *piVar2 != 0;
  }
  return true;
}


