/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bb35c; name: FUN_031bb35c
 */


void FUN_031bb35c(long param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == -1) {
    if ((param_5 != -1) && (*(int *)(param_1 + 0x20) == 0)) {
      FUN_031bad88(param_2,param_1 + 0x90,param_4,param_1 + 0x18);
      return;
    }
  }
  else {
    if (param_5 != -1) {
      if (param_3 == param_5) {
        FUN_031baf1c();
        return;
      }
      FUN_031baff8(param_1,param_2,param_4,param_5);
      return;
    }
    iVar2 = -1;
    if (param_3 == 0) {
      iVar2 = 1;
    }
    iVar1 = 0;
    if (param_3 != 1) {
      iVar1 = iVar2;
    }
    if ((iVar1 != -1) && (*(int *)(param_1 + 0x20) == 0)) {
      FUN_031bad88(param_4,param_1 + 0x90,param_2,param_1 + 0x18);
      return;
    }
  }
  return;
}


