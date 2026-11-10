/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c436cc; name: FUN_02c436cc
 */


undefined8 FUN_02c436cc(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *local_30;
  long local_28;
  undefined8 local_18;
  
  lVar4 = *(long *)(param_1 + 0x88);
  if (*(code **)(param_1 + 0x560) == (code *)0x0) {
    plVar3 = *(long **)(lVar4 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x02c43780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0x78))(plVar3,param_2,1);
    return uVar2;
  }
  local_28 = param_1;
  local_18 = param_2;
  (**(code **)(param_1 + 0x560))(&local_30,param_1 + 0x580,&local_18,&local_28);
  plVar1 = *(long **)(lVar4 + 0x18);
  plVar3 = (long *)PTR_PTR_04379d00;
  if (local_30 != (long *)0x0) {
    plVar3 = local_30 + 0xc;
  }
  uVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,*plVar3,1);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  return uVar2;
}


