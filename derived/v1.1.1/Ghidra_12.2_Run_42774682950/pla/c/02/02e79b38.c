/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e79b38; name: FUN_02e79b38
 */


void FUN_02e79b38(undefined8 *param_1)

{
  long lVar1;
  
  FUN_02e784a0(&LAB_02e79a44,0x90);
  lVar1 = param_1[1];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 8);
    FUN_02e7c858();
  }
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  *param_1 = &PTR_LAB_042a71a8;
  DAT_0440a320 = 0;
  FUN_02e79efc();
  FUN_02f59e60(0,param_1);
  return;
}


