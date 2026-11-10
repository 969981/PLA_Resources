/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289805c; name: FUN_0289805c
 */


void FUN_0289805c(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar1 = FUN_02898d80();
  }
  FUN_0315bb08(uVar1,param_2,param_3);
  return;
}


