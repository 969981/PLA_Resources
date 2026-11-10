/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002007d8; name: FUN_002007d8
 */


undefined8
FUN_002007d8(undefined8 *param_1,undefined4 param_2,long param_3,long param_4,long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_48;
  
  local_48 = 0;
  *param_5 = 0;
  iVar1 = FUN_001ddbec(*param_1,0,1);
  if (-1 < iVar1) {
    lVar4 = 0;
    do {
      iVar1 = FUN_001f3550(param_2,0xffffffff,0xffffffff,(long)iVar1);
      if (iVar1 < 1) {
        return 0xffffffff;
      }
      uVar2 = FUN_001f4118(param_2,param_3,param_4,&local_48);
      lVar3 = param_4;
      if ((int)uVar2 != 0x51) {
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        lVar3 = param_4 - local_48;
        if (lVar3 == 0) {
          *param_5 = param_4 + lVar4;
          return 0;
        }
        if (local_48 == 0) {
          return 0xffffffff;
        }
        param_3 = param_3 + local_48;
        lVar4 = local_48 + lVar4;
      }
      iVar1 = FUN_001ddbec(*param_1,0,1);
      param_4 = lVar3;
    } while (-1 < iVar1);
  }
  return 0x1c;
}


