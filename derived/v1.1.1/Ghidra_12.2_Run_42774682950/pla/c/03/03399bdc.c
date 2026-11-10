/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03399bdc; name: FUN_03399bdc
 */


undefined4 FUN_03399bdc(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_18;
  
  local_28 = 0;
  local_30 = 0;
  iVar1 = FUN_03399c38(param_1,param_2,&local_30);
  if (iVar1 < 0) {
    uVar2 = 0x80040200;
  }
  else {
    local_18 = 0;
    uVar2 = FUN_03399b18(&local_30,&local_18);
    *param_3 = (int)local_18;
  }
  return uVar2;
}


