/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0123116c; name: FUN_0123116c
 */


void FUN_0123116c(undefined8 param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  FUN_01230f54(param_1,0,param_4,param_2 == 0,param_5 & 1);
  if ((param_3 != 1) && (FUN_01230f54(param_1,1,param_4,param_2 == 1,param_5 & 1), param_3 != 2)) {
    iVar2 = 2;
    do {
      iVar1 = iVar2;
      if (param_2 == iVar2) {
        iVar1 = param_2;
      }
      FUN_01230f54(param_1,iVar1,param_4,param_2 == iVar2,param_5 & 1);
      iVar2 = iVar2 + 1;
    } while (param_3 != iVar2);
  }
  return;
}


