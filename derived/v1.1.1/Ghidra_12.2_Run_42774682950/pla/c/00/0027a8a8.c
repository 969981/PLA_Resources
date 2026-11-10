/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027a8a8; name: FUN_0027a8a8
 */


bool FUN_0027a8a8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 + (param_3 & 0xffffffff) * 8;
  iVar1 = *(int *)(param_1 + 0x154);
  iVar2 = *(int *)(param_1 + 0x158);
  if (iVar1 != -1) {
    FUN_00878324(param_2,iVar1,0,param_4,param_5);
  }
  if (iVar2 != -1) {
    FUN_00878324(param_2,iVar2,4,param_4,param_5);
  }
  return iVar2 != -1 || iVar1 != -1;
}


