/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d73cb0; name: FUN_00d73cb0
 */


long FUN_00d73cb0(long *param_1)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,0x18,8);
  FUN_00d73d44(lVar1,param_1);
  local_40 = 0xe5d621f8a5d3fc6f;
  pcStack_38 = "common/strinput.dat";
  local_30 = 0x13;
  local_28 = (long *)0x0;
  FUN_010bc6b4(*(undefined8 *)(lVar1 + 8),&local_40,0,1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return lVar1;
}


