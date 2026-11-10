/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e66b8; name: FUN_001e66b8
 */


long FUN_001e66b8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  long local_20;
  int local_18;
  
  local_18 = 0;
  local_28 = 0;
  local_20 = 0;
  local_50 = *param_2;
  local_48 = param_2[1];
  uStack_40 = param_2[2];
  local_38 = param_2[3];
  local_30 = 0;
  iVar1 = FUN_001e543c(&local_30,&LAB_001e6610,param_1,&local_50);
  if ((iVar1 == -1) || (local_18 != 0)) {
    if (local_20 != 0) {
      FUN_002044d4(local_30);
    }
    local_30 = 0;
  }
  else if (local_20 == 0) {
    local_30 = FUN_002044f4(&DAT_03996322);
  }
  else {
    *(undefined1 *)(local_30 + local_28) = 0;
  }
  return local_30;
}


