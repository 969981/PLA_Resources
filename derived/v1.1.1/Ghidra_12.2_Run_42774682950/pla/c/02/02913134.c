/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02913134; name: FUN_02913134
 */


bool FUN_02913134(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                 ulong param_6)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 local_28;
  
  uVar4 = 2;
  if ((param_6 & 1) == 0) {
    uVar4 = 0;
  }
  if ((param_3 & 1) == 0) {
    local_28 = *(undefined8 *)(param_2 + 8);
    plVar3 = *(long **)(*(long *)(param_1 + 0x158) + 0x60);
    iVar1 = (**(code **)(*plVar3 + 0xf0))(plVar3,uVar4,&local_28,1);
  }
  else {
    uVar2 = FUN_0291827c(*(undefined8 *)(param_1 + 0x1b8),param_4,param_5);
    local_28 = *(undefined8 *)(param_2 + 8);
    plVar3 = *(long **)(*(long *)(param_1 + 0x158) + 0x60);
    iVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3,uVar4,&local_28,1,&LAB_0290f420,uVar2);
  }
  return iVar1 == 1;
}


