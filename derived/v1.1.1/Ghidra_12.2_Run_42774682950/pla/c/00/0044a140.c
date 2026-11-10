/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044a140; name: FUN_0044a140
 */


int FUN_0044a140(undefined8 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_00407cb0(param_2);
  if (lVar3 == 0) {
    param_3 = -2;
  }
  else if (param_1 == (undefined8 *)0x0) {
    param_3 = -1;
  }
  else {
    uVar5 = *param_1;
    if (param_3 < 0) {
      param_3 = -1;
    }
    iVar1 = FUN_00407950(uVar5);
    do {
      param_3 = param_3 + 1;
      if (iVar1 <= param_3) {
        return -1;
      }
      puVar4 = (undefined8 *)FUN_00407970(uVar5,param_3);
      iVar2 = FUN_00413a60(*puVar4,lVar3);
    } while (iVar2 != 0);
  }
  return param_3;
}


