/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030469d4; name: FUN_030469d4
 */


void FUN_030469d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0332448c(param_3,"TriggerEvent bodyIds=");
  uVar2 = FUN_03324694(uVar2,*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_0332448c(uVar2,&DAT_038ee629);
  FUN_03324694(uVar2,*(undefined8 *)(param_1 + 0x10));
  pcVar1 = " Status=Entered";
  if (*(char *)(param_1 + 0x1c) != '\0') {
    pcVar1 = " Status=Exited";
  }
  FUN_0332448c(param_3,pcVar1);
  return;
}


