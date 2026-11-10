/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02761380; name: FUN_02761380
 */


void FUN_02761380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_38 [8];
  undefined8 local_28;
  
  plVar1 = (long *)FUN_02761400(param_1,param_2,&local_28,auStack_38,param_3);
  if (*plVar1 == 0) {
    lVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),0x28,8);
    *(undefined8 *)(lVar2 + 0x1c) = *param_4;
    FUN_0276152c(param_1,local_28,plVar1,lVar2);
  }
  return;
}


