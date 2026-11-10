/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b39cb4; name: FUN_02b39cb4
 */


void FUN_02b39cb4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = *(long **)(param_1 + 0xf0);
  for (plVar1 = *(long **)(param_1 + 0xe8); plVar1 != plVar3; plVar1 = plVar1 + 1) {
    plVar4 = *(long **)(*plVar1 + 0x98);
    for (plVar2 = *(long **)(*plVar1 + 0x90); plVar2 != plVar4; plVar2 = plVar2 + 1) {
      if ((*(char *)param_4[1] == '\0') || (*(long *)(*plVar2 + 0x58) == *param_4)) {
        plVar5 = (long *)(*(long *)(*plVar2 + 0x120) + 0x58);
        (**(code **)(*plVar5 + 0x40))(plVar5,param_2,param_3);
      }
    }
  }
  return;
}


