/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023fdc7c; name: FUN_023fdc7c
 */


void FUN_023fdc7c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined *puStack_28;
  
  uVar1 = *param_2;
  FUN_023f24d4();
  puStack_28 = DAT_043e44b8;
  if ((DAT_043e44a8 & 1) == 0) {
    puStack_28 = &DAT_043e44a9;
  }
  local_30 = param_1;
  FUN_023fdcd4(param_1,&local_30,uVar1);
  return;
}


