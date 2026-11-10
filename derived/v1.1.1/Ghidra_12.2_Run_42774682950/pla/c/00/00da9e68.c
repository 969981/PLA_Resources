/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da9e68; name: FUN_00da9e68
 */


undefined1  [16] FUN_00da9e68(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    local_20 = 0;
    uStack_18 = 0;
    iVar1 = nn::account::GetUserId((Uid *)&local_20,(UserHandle *)(param_1 + 0x58));
    if (iVar1 == 0) goto LAB_00da9e9c;
  }
  uStack_18 = 0;
  local_20 = 0;
LAB_00da9e9c:
  auVar2._8_8_ = uStack_18;
  auVar2._0_8_ = local_20;
  return auVar2;
}


