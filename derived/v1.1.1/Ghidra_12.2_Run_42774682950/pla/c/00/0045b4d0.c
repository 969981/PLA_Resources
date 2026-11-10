/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045b4d0; name: FUN_0045b4d0
 */


int FUN_0045b4d0(long param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = FUN_00407cb0(param_2);
  if (lVar3 == 0) {
    param_3 = -2;
  }
  else if (param_1 == 0) {
    param_3 = -1;
  }
  else {
    if (param_3 < 0) {
      param_3 = -1;
    }
    iVar1 = FUN_00407950(param_1);
    do {
      param_3 = param_3 + 1;
      if (iVar1 <= param_3) {
        return -1;
      }
      puVar4 = (undefined8 *)FUN_00407970(param_1,param_3);
      iVar2 = FUN_00413a60(*puVar4,lVar3);
    } while (iVar2 != 0);
  }
  return param_3;
}


