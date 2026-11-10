/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0095cfc0; name: FUN_0095cfc0
 */


int FUN_0095cfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_0095cf00();
  uVar2 = FUN_0095ca3c(param_6,param_5,param_4);
  if ((uVar2 & 1) != 0) {
    FUN_0095cb70(param_4,param_5);
    uVar2 = FUN_0095ca3c(param_6,param_4,param_3);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      FUN_0095cb70(param_3,param_4);
      uVar2 = FUN_0095ca3c(param_6,param_3,param_2);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        FUN_0095cb70(param_2,param_3);
        uVar2 = FUN_0095ca3c(param_6,param_2,param_1);
        if ((uVar2 & 1) == 0) {
          iVar1 = iVar1 + 3;
        }
        else {
          FUN_0095cb70(param_1,param_2);
          iVar1 = iVar1 + 4;
        }
      }
    }
  }
  return iVar1;
}


