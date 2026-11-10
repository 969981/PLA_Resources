/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00173770; name: FUN_00173770
 */


ulong FUN_00173770(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_00150310(param_1,2);
  if (iVar1 == 0) {
    uVar2 = FUN_001508c0(param_1,param_2,param_3,1);
    return uVar2;
  }
  FUN_00150260(param_1,2);
  FUN_00150260(param_1,param_2 + -1);
  FUN_00150260(param_1,param_3 + -2);
  FUN_00152d80(param_1,2,1,0,0);
  uVar2 = FUN_00150cc0(param_1,0xffffffff);
  FUN_0014ff10(param_1,0xfffffffe);
  return uVar2 & 0xffffffff;
}


