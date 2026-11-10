/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6d800; name: FUN_02e6d800
 */


short FUN_02e6d800(long param_1,long param_2)

{
  short sVar1;
  long lVar2;
  long *plVar3;
  
  sVar1 = *(short *)(param_2 + 0x24) + -1;
  *(short *)(param_2 + 0x24) = sVar1;
  if (sVar1 == 0) {
    if (*(int *)(param_2 + 0x20) == -1) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)(param_2 + 0x1c);
      FUN_02e6e524(param_1 + 0x38,*(int *)(param_2 + 8) - *(int *)(param_1 + 0x338),
                   *(undefined4 *)(param_2 + 0x1c));
      (*DAT_0442d150)(7,param_2);
      lVar2 = *(long *)(param_1 + 0x360);
      if ((*(char *)(lVar2 + 0x218) != '\0') &&
         (*(undefined1 *)(lVar2 + 0x218) = 0, *(int *)(lVar2 + 0x214) != 0)) {
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar2 + 0x208));
      }
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x10) = 0;
      plVar3 = (long *)(param_1 + 0x18);
      if (*plVar3 != 0) {
        plVar3 = (long *)(*(long *)(param_1 + 0x10) + 0x10);
      }
      *plVar3 = param_2;
      *(long *)(param_1 + 0x10) = param_2;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      lVar2 = *(long *)(param_1 + 0x360);
      if ((*(char *)(lVar2 + 0x218) != '\0') &&
         (*(undefined1 *)(lVar2 + 0x218) = 0, *(int *)(lVar2 + 0x214) != 0)) {
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar2 + 0x208));
      }
    }
  }
  return sVar1;
}


