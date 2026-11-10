/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280a5d8; name: FUN_0280a5d8
 */


void FUN_0280a5d8(long param_1,uint param_2,long *param_3,uint param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  lVar4 = *param_3;
  *(long *)(param_1 + (ulong)param_2 * 8 + 0x4a8) = lVar4;
  if ((param_4 & 1) != 0) {
    lVar2 = param_1 + (ulong)param_2;
    param_1 = param_1 + (ulong)param_2 * 0x20;
    puVar1 = (undefined1 *)(lVar2 + 0x6f8);
    *(undefined1 *)(lVar2 + 0x6f8) = 0;
    if (lVar4 == 0x400000000) {
      uVar5 = 0xe88312eb8d4f2301;
      pcVar6 = "PLAY_UI_COMMON_CANCEL";
    }
    else {
      uVar5 = 0xc1a949029450238f;
      pcVar6 = "PLAY_UI_COMMON_DECIDE";
    }
    *(undefined8 *)(param_1 + 0x538) = uVar5;
    plVar3 = *(long **)(param_1 + 0x550);
    *(char **)(param_1 + 0x540) = pcVar6;
    *(undefined8 *)(param_1 + 0x548) = 0x15;
    *(undefined8 *)(param_1 + 0x550) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    *puVar1 = 0;
    plVar3 = *(long **)(param_1 + 0x630);
    *(undefined8 *)(param_1 + 0x618) = uVar5;
    *(char **)(param_1 + 0x620) = pcVar6;
    *(undefined8 *)(param_1 + 0x628) = 0x15;
    *(undefined8 *)(param_1 + 0x630) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    *puVar1 = 1;
  }
  return;
}


