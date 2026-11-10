/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d702fc; name: FUN_00d702fc
 */


void FUN_00d702fc(long param_1)

{
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *(undefined4 *)(param_1 + 0x5b0) = 1;
  local_40 = (undefined1 *)0x8f31cd06928d1181;
  pcStack_38 = "baseInputChangePageL";
  local_30 = 0x14;
  uStack_28 = 0;
  FUN_00d703f8(param_1,&local_40,0);
  local_40 = &DAT_8f31b706928cec1f;
  pcStack_38 = "baseInputChangePageR";
  local_30 = 0x14;
  uStack_28 = 0;
  FUN_00d703f8(param_1,&local_40,0);
  local_40 = (undefined1 *)0x306ff043b504400c;
  pcStack_38 = "baseInputDecide";
  local_30 = 0xf;
  uStack_28 = 0;
  FUN_00d703f8(param_1,&local_40,0);
  local_40 = (undefined1 *)0xec6cac7e31c6b5ae;
  pcStack_38 = "baseInputCancel";
  local_30 = 0xf;
  uStack_28 = 0;
  FUN_00d703f8(param_1,&local_40,0);
  FUN_00d2f768(param_1 + 0x180,0x80,200);
  return;
}


