/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a7bcd0; name: FUN_02a7bcd0
 */


void FUN_02a7bcd0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  int local_34;
  
  local_34 = *(int *)(param_2 + 0x18);
  if (local_34 != -1) {
    lVar1 = param_1 + (long)local_34 * 4;
    if (*(int *)(lVar1 + 0x16c) != 3) {
      pcVar3 = *(char **)(param_2 + 0x28);
      plVar2 = *(long **)(param_2 + 0x38);
      if (plVar2 == (long *)0x0) {
        nn::fs::Unmount(pcVar3);
      }
      else {
        (**(code **)(*plVar2 + 0x18))(plVar2);
        nn::fs::Unmount(pcVar3);
        (**(code **)(*plVar2 + 0x20))(plVar2);
      }
    }
    *(undefined4 *)(lVar1 + 0x16c) = 0;
    FUN_02a7bbb0(param_1 + 0x198,&local_34);
  }
  return;
}


