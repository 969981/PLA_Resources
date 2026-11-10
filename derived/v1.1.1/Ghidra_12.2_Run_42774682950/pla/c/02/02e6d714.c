/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6d714; name: FUN_02e6d714
 */


void FUN_02e6d714(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x358) != '\0') {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      plVar2 = *(long **)(param_1 + 0x28);
      do {
        *(undefined4 *)(*plVar2 + 0x20) = 0xffffffff;
        lVar1 = *plVar2;
        if (*(short *)(lVar1 + 0x24) == 0) {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)(lVar1 + 0x1c);
          FUN_02e6e524(param_1 + 0x38,*(int *)(lVar1 + 8) - *(int *)(param_1 + 0x338),
                       *(undefined4 *)(lVar1 + 0x1c));
          if (lVar1 != 0) {
            (*DAT_0442d150)(7,lVar1);
          }
          lVar1 = *(long *)(param_1 + 0x360);
          if ((*(char *)(lVar1 + 0x218) != '\0') &&
             (*(undefined1 *)(lVar1 + 0x218) = 0, *(int *)(lVar1 + 0x214) != 0)) {
            nn::os::SignalConditionVariable((ConditionVariableType *)(lVar1 + 0x208));
          }
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != (long *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 8))
      ;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}


