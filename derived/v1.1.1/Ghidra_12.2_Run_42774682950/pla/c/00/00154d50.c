/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154d50; name: FUN_00154d50
 */


long FUN_00154d50(undefined8 param_1,undefined4 param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 local_48;
  
  pcVar1 = (code *)FUN_00153500(param_1,&local_50);
  plVar2 = (long *)FUN_001511d0(param_1,param_2);
  lVar3 = (*pcVar1)(local_50,*plVar2,plVar2[1],param_3);
  if ((param_3 != 0) && (lVar3 == 0)) {
    pcVar1 = (code *)FUN_00153500(param_1,&local_48);
    puVar4 = (undefined8 *)FUN_001511d0(param_1,param_2);
    uVar5 = (*pcVar1)(local_48,*puVar4,puVar4[1],0);
    *puVar4 = uVar5;
    puVar4[1] = 0;
    FUN_00154110(param_1,"not enough memory for buffer allocation");
  }
  *plVar2 = lVar3;
  plVar2[1] = param_3;
  return lVar3;
}


