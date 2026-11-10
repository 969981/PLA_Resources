/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332452c; name: FUN_0332452c
 */


long FUN_0332452c(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined1 auStack_2758 [10024];
  
  FUN_032c47e0(auStack_2758,0x2728,0x2728,&DAT_03952942,param_2);
  plVar2 = *(long **)(param_1 + 8);
  uVar1 = FUN_032c4900(auStack_2758);
  (**(code **)(*plVar2 + 0x28))(plVar2,auStack_2758,uVar1);
  return param_1;
}


