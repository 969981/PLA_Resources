/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00495860; name: FUN_00495860
 */


bool FUN_00495860(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_28;
  
  local_28 = 0;
  *param_1 = 0;
  if ((param_2 == 0) || (iVar1 = FUN_0041ccb0(param_2), iVar1 == 0x40)) {
    return true;
  }
  iVar1 = FUN_0041ccb0(param_2);
  if (iVar1 == 0x40) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_00446a40();
    if (lVar4 == 0) goto LAB_0049591c;
    FUN_00446b30(lVar4,param_2);
  }
  lVar2 = FUN_0041eda0(lVar4,PTR_DAT_04374288,&local_28);
  if (lVar2 != 0) {
    lVar2 = FUN_00446a40();
    *param_1 = lVar2;
    if (lVar2 != 0) {
      uVar3 = FUN_00407cb0(0x38f);
      FUN_00446a60(lVar2,uVar3,0x10,local_28);
      local_28 = 0;
    }
  }
LAB_0049591c:
  FUN_0040a4b0(local_28);
  FUN_00446a50(lVar4);
  return *param_1 != 0;
}


