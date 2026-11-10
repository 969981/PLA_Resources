/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023fea2c; name: FUN_023fea2c
 */


void FUN_023fea2c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined *puStack_28;
  
  uVar1 = *param_2;
  FUN_023fb85c();
  puStack_28 = DAT_043e4810;
  if ((DAT_043e4800 & 1) == 0) {
    puStack_28 = &DAT_043e4801;
  }
  local_30 = param_1;
  FUN_023fea84(param_1,&local_30,uVar1);
  return;
}


