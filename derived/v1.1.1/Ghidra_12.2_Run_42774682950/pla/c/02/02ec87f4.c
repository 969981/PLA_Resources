/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec87f4; name: FUN_02ec87f4
 */


long FUN_02ec87f4(long param_1,undefined4 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_02ec8868(param_1 + 0x78,param_2);
  if (plVar1 != (long *)0x0) {
    *plVar1 = 0;
    FUN_02ef828c(*(undefined4 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x40),plVar1);
    if (*plVar1 != 0) {
      return *plVar1;
    }
  }
  FUN_02ec88ec(param_1 + 0x78,param_2);
  return 0;
}


