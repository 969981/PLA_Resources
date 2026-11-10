/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02767154; name: FUN_02767154
 */


void FUN_02767154(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_2 + 0x10);
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0x60,8);
  *param_1 = lVar2;
  param_1[1] = (long)(param_2 + 0x10);
  FUN_02762fb0(lVar2 + 0x20,param_3);
  FUN_02762fb0(lVar2 + 0x40,param_3 + 0x20);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


