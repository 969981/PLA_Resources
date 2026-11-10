/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c5fe6c; name: FUN_00c5fe6c
 */


void FUN_00c5fe6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long *local_38;
  
  FUN_00b5f3e4(&local_38,*(undefined8 *)(param_1 + 0xa0));
  FUN_00c38094(local_38,param_1 + 0xa8,param_2);
  FUN_00bc05f0(local_38,param_1 + 0xb0,param_3);
  FUN_00bc05f0(local_38,param_1 + 0xb8,param_4);
  if ((local_38 != (long *)0x0) && (uVar1 = FUN_02a43a5c(local_38[0xb]), (uVar1 & 1) != 0)) {
    (**(code **)(*local_38 + 0x20))(local_38);
  }
  return;
}


