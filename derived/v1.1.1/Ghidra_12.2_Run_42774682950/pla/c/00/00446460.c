/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00446460; name: FUN_00446460
 */


void FUN_00446460(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00407d80(*param_1);
  iVar1 = FUN_0046f370(uVar2,1,param_1);
  if (iVar1 != 0) {
    uVar3 = FUN_00407e60(*param_1);
    iVar1 = FUN_0046f370(uVar3,1,param_1);
    if (iVar1 != 0) {
      iVar1 = param_1[1];
      if ((iVar1 != 0) && (*param_1 != iVar1)) {
        uVar3 = FUN_00407d80(iVar1);
        iVar1 = FUN_0046f370(uVar3,0x8001,uVar2);
        if (iVar1 != 0) {
          uVar3 = FUN_00407e60(param_1[1]);
          FUN_0046f370(uVar3,0x8001,uVar2);
          return;
        }
      }
    }
  }
  return;
}


