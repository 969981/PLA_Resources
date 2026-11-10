/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023f5378; name: FUN_023f5378
 */


void FUN_023f5378(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined *puStack_28;
  
  uVar1 = *param_2;
  FUN_023ec798();
  puStack_28 = DAT_043e42c0;
  if ((DAT_043e42b0 & 1) == 0) {
    puStack_28 = &DAT_043e42b1;
  }
  local_30 = param_1;
  FUN_023f53d0(param_1,&local_30,uVar1);
  return;
}


