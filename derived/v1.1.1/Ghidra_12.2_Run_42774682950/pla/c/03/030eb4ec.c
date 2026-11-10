/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030eb4ec; name: FUN_030eb4ec
 */


void FUN_030eb4ec(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_2 + 8) == 0) {
    lVar2 = 0;
  }
  else {
    FUN_032d5af0(*(long *)(param_2 + 8),"TtShiftBroadphaseSubTask",0x18);
    lVar2 = *(long *)(param_2 + 8);
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x28) + 0x4c0);
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1 + 0x30);
  if (lVar2 == 0) {
    return;
  }
  FUN_032d5b34(lVar2,&DAT_0390f40e);
  return;
}


