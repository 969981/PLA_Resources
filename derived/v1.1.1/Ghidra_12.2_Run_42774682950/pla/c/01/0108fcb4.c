/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108fcb4; name: FUN_0108fcb4
 */


void FUN_0108fcb4(undefined8 param_1,ulong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((int)param_2 != 1) {
    uVar1 = FUN_02c624d0(param_1);
    param_2 = FUN_0109ff50(param_3,param_2 & 0xffffffff,uVar1);
    param_2 = param_2 & 0xffffffff;
  }
  FUN_02c5fc38(param_1,param_2);
  return;
}


