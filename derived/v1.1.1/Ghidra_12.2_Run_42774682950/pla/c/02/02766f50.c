/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02766f50; name: FUN_02766f50
 */


long FUN_02766f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long local_50 [3];
  undefined1 auStack_38 [8];
  undefined8 local_28;
  
  plVar1 = (long *)FUN_02766fc4(param_1,param_2,&local_28,auStack_38,param_3);
  lVar2 = *plVar1;
  if (*plVar1 == 0) {
    FUN_02767154(local_50,param_1,param_4);
    FUN_02765624(param_1,local_28,plVar1,local_50[0]);
    lVar2 = local_50[0];
  }
  return lVar2;
}


