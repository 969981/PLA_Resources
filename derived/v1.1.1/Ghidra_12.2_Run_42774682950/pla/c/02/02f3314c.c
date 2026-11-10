/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3314c; name: FUN_02f3314c
 */


undefined4 FUN_02f3314c(undefined1 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  FUN_02e717c0(&LAB_02f330d4,param_1,&DAT_0440a4a0,&DAT_0440b090,"AK::EventManager");
  uVar1 = 1;
  if (DAT_0440b0d0 == '\0') {
    uVar1 = 2;
  }
  return uVar1;
}


