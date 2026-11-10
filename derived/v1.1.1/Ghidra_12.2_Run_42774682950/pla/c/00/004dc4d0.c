/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dc4d0; name: FUN_004dc4d0
 */


undefined8 FUN_004dc4d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_a0;
  undefined1 auStack_98 [120];
  
  local_a0 = 0;
  uVar1 = FUN_00415400(param_3,0x3a,1,&LAB_004dc550,&local_a0);
  if ((int)uVar1 != 0) {
    if (param_1 == 0) {
      return 1;
    }
    uVar1 = FUN_004dc3a0(param_1,param_2,auStack_98,local_a0);
  }
  return uVar1;
}


