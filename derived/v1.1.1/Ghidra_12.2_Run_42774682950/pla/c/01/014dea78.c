/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014dea78; name: FUN_014dea78
 */


void FUN_014dea78(long param_1)

{
  long *plVar1;
  long lVar2;
  
  switch(*(undefined4 *)(param_1 + 0x78)) {
  case 0:
  case 2:
  case 6:
    plVar1 = (long *)0x0;
    if (*(long *)(param_1 + 0x90) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x90) + 0x5b0);
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    plVar1 = (long *)0x0;
    if (*(long *)(param_1 + 0x98) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x98) + 0x5b0);
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    plVar1 = (long *)0x0;
    if (*(long *)(param_1 + 0xa0) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0xa0) + 0x5b0);
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    if (*(char *)(param_1 + 0xb0) != '\0') {
      FUN_00d6a73c(*(undefined8 *)(param_1 + 0xa8));
      *(undefined1 *)(param_1 + 0xb0) = 0;
    }
    goto LAB_014debec;
  case 1:
    lVar2 = *(long *)(param_1 + 0x98);
    break;
  case 3:
  case 4:
  case 5:
    lVar2 = *(long *)(param_1 + 0x90);
    break;
  case 7:
  case 8:
  case 9:
  case 10:
    plVar1 = (long *)0x0;
    if (*(long *)(param_1 + 0x90) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x90) + 0x5b0);
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar2 = *(long *)(param_1 + 0x98);
    goto LAB_014debc0;
  default:
    return;
  }
  plVar1 = (long *)0x0;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x5b0);
  }
  (**(code **)(*plVar1 + 8))(plVar1);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  lVar2 = *(long *)(param_1 + 0xa0);
LAB_014debc0:
  plVar1 = (long *)0x0;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x5b0);
  }
  (**(code **)(*plVar1 + 8))(plVar1);
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_014debec:
  FUN_027bcfc0(param_1 + 0xc0);
  return;
}


