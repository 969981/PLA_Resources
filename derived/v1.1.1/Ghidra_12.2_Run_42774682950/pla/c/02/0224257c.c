/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0224257c; name: FUN_0224257c
 */


void FUN_0224257c(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 local_38;
  
  iVar1 = param_2[1] + 2;
  iVar2 = FUN_00150310(param_1,iVar1);
  if (iVar2 == 0) {
    *param_2 = 1;
    local_38 = 0;
    param_2[1] = param_2[1] + 1;
  }
  else {
    lVar3 = FUN_001511d0(param_1,iVar1);
    *param_2 = 1;
    param_2[1] = param_2[1] + 1;
    local_38 = FUN_01602d14(param_1,*(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7)),iVar1,
                            param_2);
  }
  FUN_0224263c(param_1,param_2,param_3,param_4,&local_38);
  return;
}


