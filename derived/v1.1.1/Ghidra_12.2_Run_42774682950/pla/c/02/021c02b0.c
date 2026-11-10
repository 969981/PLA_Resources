/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021c02b0; name: FUN_021c02b0
 */


void FUN_021c02b0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double __x;
  undefined4 local_64;
  
  iVar1 = param_2[1] + 1;
  *param_2 = 1;
  param_2[1] = iVar1;
  iVar2 = FUN_001504d0(param_1,iVar1);
  if (iVar2 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar1,0);
    lVar3 = llround(__x);
    local_64 = (undefined4)lVar3;
  }
  else {
    local_64 = FUN_00150ba0(param_1,iVar1,0);
  }
  FUN_021c038c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,&local_64);
  return;
}


