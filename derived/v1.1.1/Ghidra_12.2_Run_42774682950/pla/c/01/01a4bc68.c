/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4bc68; name: FUN_01a4bc68
 */


undefined1  [16] FUN_01a4bc68(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (*(char *)(param_1 + 0x370) == '\0') {
    local_70 = FUN_01a4b7e0();
    FUN_01831870(&local_60,param_1 + 0x340,local_70);
  }
  else {
    uStack_58 = *(undefined8 *)(param_1 + 0x348);
    local_60 = *(undefined8 *)(param_1 + 0x340);
  }
  auVar1._8_8_ = uStack_58;
  auVar1._0_8_ = local_60;
  return auVar1;
}


