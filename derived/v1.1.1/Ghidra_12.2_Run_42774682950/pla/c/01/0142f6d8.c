/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0142f6d8; name: FUN_0142f6d8
 */


void FUN_0142f6d8(long param_1)

{
  long lVar1;
  undefined8 local_18;
  
  lVar1 = FUN_00d2eb20(param_1 + 0x180,"grid_panel");
  if (lVar1 != 0) {
    local_18 = 0;
    FUN_0280e8d8(lVar1,&local_18,1,0);
  }
  return;
}


