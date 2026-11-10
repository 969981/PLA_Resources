/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00206d80; name: FUN_00206d80
 */


undefined8 FUN_00206d80(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_002120d8(param_2);
  if ((iVar1 == 0) || (uVar2 = FUN_00211d28(param_2), (int)uVar2 == 0)) {
    FUN_002112b0(param_1,*(undefined4 *)(param_2 + 0xb8));
    FUN_00211818(param_2);
    FUN_0020c748(param_1 + 0x890,param_2);
    uVar2 = 0;
  }
  return uVar2;
}


