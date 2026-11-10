/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00304fc0; name: FUN_00304fc0
 */


bool FUN_00304fc0(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*param_1 == 0) {
    lVar2 = (long)param_1 + 9;
    uVar3 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar3 = param_1[1];
    lVar2 = param_1[2];
  }
  iVar1 = FUN_002ec740(lVar2,uVar3,param_2);
  return iVar1 != 0;
}


