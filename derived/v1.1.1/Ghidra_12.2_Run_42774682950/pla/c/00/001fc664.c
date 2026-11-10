/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fc664; name: FUN_001fc664
 */


undefined8 FUN_001fc664(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong local_28;
  undefined8 local_18;
  
  local_18 = 0;
  if ((param_3 < 0) ||
     (iVar1 = FUN_001fc6dc(param_1,param_2,(long)param_3,&local_18,&local_28,0), iVar1 != 0)) {
    local_18 = 0;
  }
  else if (param_4 != (undefined4 *)0x0) {
    if (local_28 >> 0x1f == 0) {
      uVar2 = FUN_00204350();
      *param_4 = uVar2;
    }
    else {
      FUN_002044d4(local_18);
      local_18 = 0;
    }
  }
  return local_18;
}


