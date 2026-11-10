/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0142d4b0; name: FUN_0142d4b0
 */


void FUN_0142d4b0(long param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 0x808) == param_2) goto LAB_0142d4f8;
  plVar1 = *(long **)(param_1 + 0x818);
  *(int *)(param_1 + 0x808) = param_2;
  if (param_2 == 0) {
    if (*(char *)((long)plVar1 + 0xa2) != '\0') {
      *(undefined1 *)((long)plVar1 + 0xa2) = 0;
      (**(code **)(*plVar1 + 0x98))(plVar1,0);
    }
    plVar1 = *(long **)(param_1 + 0x820);
    if (*(char *)((long)plVar1 + 0xa2) != '\x01') {
      *(undefined1 *)((long)plVar1 + 0xa2) = 1;
      pcVar3 = *(code **)(*plVar1 + 0x98);
      uVar2 = 1;
      goto LAB_0142d568;
    }
  }
  else {
    if (*(char *)((long)plVar1 + 0xa2) != '\x01') {
      *(undefined1 *)((long)plVar1 + 0xa2) = 1;
      (**(code **)(*plVar1 + 0x98))(plVar1,1);
    }
    plVar1 = *(long **)(param_1 + 0x820);
    if (*(char *)((long)plVar1 + 0xa2) != '\0') {
      *(undefined1 *)((long)plVar1 + 0xa2) = 0;
      uVar2 = 0;
      pcVar3 = *(code **)(*plVar1 + 0x98);
LAB_0142d568:
      (*pcVar3)(plVar1,uVar2);
    }
  }
  FUN_0142b784(param_1);
LAB_0142d4f8:
  FUN_00d42438(param_1,1,1);
  return;
}


