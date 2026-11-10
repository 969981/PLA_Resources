/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015a2cc0; name: FUN_015a2cc0
 */


void FUN_015a2cc0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined *puStack_28;
  
  uVar1 = *param_2;
  FUN_015a0c84();
  puStack_28 = DAT_043c9d80;
  if ((DAT_043c9d70 & 1) == 0) {
    puStack_28 = &DAT_043c9d71;
  }
  local_30 = param_1;
  FUN_015a2d18(param_1,&local_30,uVar1);
  return;
}


