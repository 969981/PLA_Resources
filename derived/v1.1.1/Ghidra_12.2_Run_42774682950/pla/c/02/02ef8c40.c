/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef8c40; name: FUN_02ef8c40
 */


undefined8 FUN_02ef8c40(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((param_2 < *(uint *)(param_1 + 8)) || (param_2 <= *(uint *)(param_1 + 0xc))) ||
     (uVar1 = FUN_02f017cc(param_1,param_2 - *(uint *)(param_1 + 8)), (uVar1 & 1) != 0)) {
    uVar2 = 1;
    *(uint *)(param_1 + 8) = param_2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


