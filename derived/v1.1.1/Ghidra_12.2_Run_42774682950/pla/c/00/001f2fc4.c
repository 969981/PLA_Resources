/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f2fc4; name: FUN_001f2fc4
 */


int FUN_001f2fc4(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = 0;
  if ((param_3 != 0) && (param_1 = param_1 - param_2, param_1 != 0)) {
    if (param_1 < 0x20c49ba5e353f7) {
      lVar3 = 0;
      if (param_3 != 0) {
        lVar3 = (param_1 * 1000) / param_3;
      }
    }
    else {
      lVar1 = 0;
      if (param_3 != 0) {
        lVar1 = param_1 / param_3;
      }
      lVar3 = lVar1 * 1000;
      if (0x20c49a < lVar1) {
        lVar3 = 0x7fffffff;
      }
    }
    iVar2 = FUN_001f8fe0(param_6,param_7,param_4,param_5);
    if (iVar2 < lVar3) {
      iVar2 = (int)lVar3 - iVar2;
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}


