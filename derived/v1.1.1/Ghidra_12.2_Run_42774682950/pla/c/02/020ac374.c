/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020ac374; name: FUN_020ac374
 */


void FUN_020ac374(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_28;
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  local_28 = 0;
  lVar4 = FUN_020aa950(param_1,1,&local_28);
  iVar2 = FUN_00150cc0(param_1,2);
  pcVar5 = *(code **)(lVar3 + 0x1f8);
  plVar1 = (long *)(lVar4 + ((long)*(ulong *)(lVar3 + 0x200) >> 1));
  if ((*(ulong *)(lVar3 + 0x200) & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *plVar1);
  }
  (*pcVar5)(plVar1,iVar2 != 0);
  FUN_0014ff10(param_1,0);
  return;
}


