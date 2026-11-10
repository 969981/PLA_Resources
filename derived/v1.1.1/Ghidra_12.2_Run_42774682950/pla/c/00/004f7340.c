/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f7340; name: FUN_004f7340
 */


bool FUN_004f7340(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_004f5df0();
    lVar3 = FUN_0046adb0(param_1,uVar2);
    if (lVar3 == 0) {
      return false;
    }
    iVar1 = FUN_0046a9f0(lVar3,1,param_2,1,0);
    if (iVar1 != 1) {
      return false;
    }
  }
  if (param_3 != 0) {
    uVar2 = FUN_004f6a60();
    lVar3 = FUN_0046adb0(param_1,uVar2);
    if (lVar3 == 0) {
      return false;
    }
    iVar1 = FUN_0046a9f0(lVar3,2,param_3,1,0);
    if (iVar1 != 1) {
      return false;
    }
  }
  return param_2 != 0 || param_3 != 0;
}


