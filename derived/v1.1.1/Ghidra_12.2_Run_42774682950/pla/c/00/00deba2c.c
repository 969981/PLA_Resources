/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00deba2c; name: FUN_00deba2c
 */


void FUN_00deba2c(undefined8 param_1)

{
  uint uVar1;
  undefined1 *local_30;
  undefined8 uStack_28;
  
  FUN_001511d0(param_1,0xfff0b9d6);
  local_30 = &LAB_00deb660;
  uStack_28 = 0;
  uVar1 = FUN_00deb86c(param_1,&uStack_28,&local_30);
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,uVar1 & 1);
  return;
}


