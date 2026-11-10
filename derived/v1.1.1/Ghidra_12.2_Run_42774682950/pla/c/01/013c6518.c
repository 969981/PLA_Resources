/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c6518; name: FUN_013c6518
 */


void FUN_013c6518(long param_1)

{
  long *plVar1;
  long lVar2;
  
  switch(*(undefined4 *)(param_1 + 0x78)) {
  case 0:
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
    plVar1 = (long *)0x0;
    if (*(long *)(param_1 + 0xa8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0xa8) + 0x5b0);
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    plVar1 = (long *)0x0;
    if (*(long *)(param_1 + 0xb0) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0xb0) + 0x5b0);
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    plVar1 = (long *)0x0;
    if (*(long *)(param_1 + 0xb8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0xb8) + 0x5b0);
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    if (*(char *)(param_1 + 0x278) != '\0') {
      FUN_00d6a73c(*(undefined8 *)(param_1 + 0x270));
      *(undefined1 *)(param_1 + 0x278) = 0;
    }
    goto LAB_013c692c;
  case 1:
    lVar2 = *(long *)(param_1 + 0x98);
    break;
  case 2:
    lVar2 = *(long *)(param_1 + 0x90);
    break;
  case 3:
    lVar2 = *(long *)(param_1 + 0x90);
    goto LAB_013c6580;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xc:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
    plVar1 = (long *)0x0;
    if (*(long *)(param_1 + 0x90) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x90) + 0x5b0);
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar2 = *(long *)(param_1 + 0x98);
LAB_013c6580:
    plVar1 = (long *)0x0;
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 0x5b0);
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    plVar1 = (long *)0x0;
    if (*(long *)(param_1 + 0xa0) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0xa0) + 0x5b0);
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar2 = *(long *)(param_1 + 0xa8);
LAB_013c65e0:
    plVar1 = (long *)0x0;
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 0x5b0);
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar2 = *(long *)(param_1 + 0xb0);
LAB_013c6610:
    plVar1 = (long *)0x0;
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 0x5b0);
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    plVar1 = (long *)0x0;
    if (*(long *)(param_1 + 0xb8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0xb8) + 0x5b0);
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    FUN_027bcfc0(param_1 + 0xc0);
    if (*(char *)(param_1 + 0x278) != '\0') {
      FUN_00d6a73c(*(undefined8 *)(param_1 + 0x270));
      *(undefined1 *)(param_1 + 0x278) = 0;
    }
switchD_013c6548_default:
    return;
  case 9:
  case 10:
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
    lVar2 = *(long *)(param_1 + 0xa0);
    goto LAB_013c68a0;
  case 0xb:
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
    lVar2 = *(long *)(param_1 + 0xa0);
    goto LAB_013c65e0;
  case 0xd:
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
    lVar2 = *(long *)(param_1 + 0xa8);
    goto LAB_013c6610;
  case 0xe:
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
    plVar1 = (long *)0x0;
    if (*(long *)(param_1 + 0xa8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0xa8) + 0x5b0);
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar2 = *(long *)(param_1 + 0xb0);
    goto LAB_013c6900;
  default:
    goto switchD_013c6548_default;
  }
  plVar1 = (long *)0x0;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x5b0);
  }
  (**(code **)(*plVar1 + 8))(plVar1);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  plVar1 = (long *)0x0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0xa0) + 0x5b0);
  }
  (**(code **)(*plVar1 + 8))(plVar1);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  lVar2 = *(long *)(param_1 + 0xa8);
LAB_013c68a0:
  plVar1 = (long *)0x0;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x5b0);
  }
  (**(code **)(*plVar1 + 8))(plVar1);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  plVar1 = (long *)0x0;
  if (*(long *)(param_1 + 0xb0) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0xb0) + 0x5b0);
  }
  (**(code **)(*plVar1 + 8))(plVar1);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  lVar2 = *(long *)(param_1 + 0xb8);
LAB_013c6900:
  plVar1 = (long *)0x0;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x5b0);
  }
  (**(code **)(*plVar1 + 8))(plVar1);
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_013c692c:
  FUN_027bcfc0(param_1 + 0xc0);
  return;
}


