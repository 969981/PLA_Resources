/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03324750; name: FUN_03324750
 */


void FUN_03324750(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined1 auStack_2768 [10024];
  
  FUN_032c4730(auStack_2768,0x2728,0x2728,param_2,auStack_2768 + 0x2728);
  plVar2 = *(long **)(param_1 + 8);
  uVar1 = FUN_032c4900(auStack_2768);
  (**(code **)(*plVar2 + 0x28))(plVar2,auStack_2768,uVar1);
  return;
}


