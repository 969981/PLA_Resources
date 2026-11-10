/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e6534; name: FUN_001e6534
 */


long FUN_001e6534(undefined8 param_1)

{
  int iVar1;
  undefined1 local_100 [128];
  long local_60;
  long local_58;
  long local_50;
  int local_48;
  
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  local_60 = 0;
  iVar1 = FUN_001e543c(&local_60,&LAB_001e6610,param_1,local_100 + 0x80);
  if ((iVar1 == -1) || (local_48 != 0)) {
    if (local_50 != 0) {
      FUN_002044d4(local_60);
    }
    local_60 = 0;
  }
  else if (local_50 == 0) {
    local_60 = FUN_002044f4(&DAT_03996322);
  }
  else {
    *(undefined1 *)(local_60 + local_58) = 0;
  }
  return local_60;
}


