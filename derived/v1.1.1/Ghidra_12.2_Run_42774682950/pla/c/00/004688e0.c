/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004688e0; name: FUN_004688e0
 */


bool FUN_004688e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = FUN_0045e1a0(param_1,param_3,0xffffffff);
  if (iVar2 < 0) {
    lVar4 = 0;
  }
  else {
    iVar3 = FUN_0045e1a0(param_1,param_3,iVar2);
    if (iVar3 != -1) {
      return false;
    }
    FUN_0045e1b0(param_1,iVar2);
    lVar4 = FUN_0045b5d0();
  }
  iVar2 = FUN_0045e1a0(param_2,param_3,0xffffffff);
  if (iVar2 < 0) {
    lVar5 = 0;
    if (lVar4 != 0) goto LAB_00468990;
  }
  else {
    iVar3 = FUN_0045e1a0(param_2,param_3,iVar2);
    if (iVar3 != -1) {
      return false;
    }
    FUN_0045e1b0(param_2,iVar2);
    lVar5 = FUN_0045b5d0();
    if (lVar4 != 0 || lVar5 != 0) {
LAB_00468990:
      bVar1 = false;
      if ((lVar4 != 0) && (lVar5 != 0)) {
        iVar2 = thunk_FUN_0040a680(lVar4);
        bVar1 = iVar2 == 0;
      }
      return bVar1;
    }
  }
  return true;
}


