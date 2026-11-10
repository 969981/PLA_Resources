/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d8710; name: FUN_031d8710
 */


void FUN_031d8710(undefined8 param_1,long param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 local_48 [2];
  undefined4 local_38 [2];
  
  lVar1 = FUN_031dc4f4(param_2,param_3);
  if (lVar1 == 0) {
    uVar3 = 0xffffffff00000000;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (ulong)*(uint *)(lVar1 + 4);
    uVar3 = (lVar1 - *(long *)(param_2 + 0x10)) * 0x20000000;
  }
  local_38[0] = *param_3;
  local_48[0] = *param_4;
  FUN_031dc8e8(param_1,param_2,uVar2 | uVar3,local_38,local_48,param_5);
  return;
}


