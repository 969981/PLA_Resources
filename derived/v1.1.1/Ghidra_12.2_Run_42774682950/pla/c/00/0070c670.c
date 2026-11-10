/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070c670; name: FUN_0070c670
 */


bool FUN_0070c670(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  long lStack_48;
  undefined4 local_38;
  undefined4 uStack_34;
  long lStack_30;
  
  iVar2 = FUN_00782714();
  iVar3 = FUN_00782714(param_2);
  if (iVar2 != iVar3) {
    return false;
  }
  uVar4 = FUN_00782704(param_1);
  if ((uVar4 & 1) == 0) {
    FUN_00782760(&local_38,param_1);
    FUN_00782760(&local_50,param_2);
    iVar2 = FUN_007826fc(&local_38);
    iVar3 = FUN_007826fc(&local_50);
    if (iVar2 != iVar3) {
      return false;
    }
    bVar1 = CONCAT44(uStack_34,local_38) == CONCAT44(uStack_4c,local_50) && lStack_30 == lStack_48;
  }
  else {
    local_38 = FUN_0078271c(param_1);
    local_50 = FUN_0078271c(param_2);
    iVar2 = FUN_007826f4(&local_38);
    iVar3 = FUN_007826f4(&local_50);
    bVar1 = iVar2 == iVar3;
  }
  return bVar1;
}


