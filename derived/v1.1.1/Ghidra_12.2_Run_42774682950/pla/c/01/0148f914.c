/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148f914; name: FUN_0148f914
 */


void FUN_0148f914(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar5 = DAT_043c39c8;
  lVar4 = DAT_043c39b0;
  plVar8 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar2 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if (DAT_043c39c8 != (long *)0x0) {
    (**(code **)(*DAT_043c39c8 + 0x18))(DAT_043c39c8);
  }
  plVar3 = plVar8;
  if ((lVar2 != 0) && (*plVar8 != lVar4)) {
    lVar7 = lVar2 * 0x30;
    plVar6 = plVar8 + lVar2 * 6;
    do {
      lVar7 = lVar7 + -0x30;
      plVar3 = plVar6;
      if (lVar7 == 0) break;
      plVar1 = plVar8 + 6;
      plVar8 = plVar8 + 6;
      plVar3 = plVar8;
    } while (*plVar1 != lVar4);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  *(byte *)(plVar3[4] + 0x58) = *(byte *)(plVar3[4] + 0x58) | 1;
  FUN_0148fb50(param_1,param_2);
  local_60 = 0xca879a697d0cc79c;
  pcStack_58 = "PLAY_UI_COMMON_HUD_SLIDE_IN";
  local_50 = 0x1b;
  local_48 = (long *)0x0;
  FUN_028354b0(&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (*(char *)(param_1 + 0x1780) == '\0') {
    *(char *)(param_1 + 0x1780) = '\x01';
  }
  return;
}


