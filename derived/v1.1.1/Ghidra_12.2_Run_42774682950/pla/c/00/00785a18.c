/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00785a18; name: FUN_00785a18
 */


undefined8 FUN_00785a18(long param_1)

{
  undefined8 uVar1;
  long local_28;
  
  FUN_00785cd4(param_1 + 0xe0);
  if (*(char *)(param_1 + 0x110) == '\0') {
    local_28 = 0;
    FUN_007850e8(param_1,&local_28);
    if (local_28 == 0) {
      FUN_007853a8(param_1,&local_28);
      if (local_28 == 0) goto LAB_00785a40;
    }
    FUN_00785034(param_1);
    uVar1 = 1;
  }
  else {
LAB_00785a40:
    uVar1 = 0;
  }
  FUN_00785d0c(param_1 + 0xe0);
  return uVar1;
}


