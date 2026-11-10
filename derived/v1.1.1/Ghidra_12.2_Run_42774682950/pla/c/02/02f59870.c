/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f59870; name: FUN_02f59870
 */


void FUN_02f59870(int param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_02f598e0(param_1,(long)param_1 * 0x820 + (param_3 + -1) * 0x10 + 0x442c570);
  param_2 = param_2 + (param_3 + -1) * 8;
  *(long *)(param_2 + 0x7e0) = lVar1;
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x1c) < 2) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(lVar1 + 0x48);
      *(uint *)(lVar2 + 0x1c) = *(uint *)(lVar1 + 0x1c) - 1;
    }
    *(long *)(param_2 + 0x7e0) = lVar2;
  }
  return;
}


