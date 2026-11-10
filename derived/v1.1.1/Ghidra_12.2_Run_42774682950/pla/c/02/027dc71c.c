/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dc71c; name: FUN_027dc71c
 */


void FUN_027dc71c(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  long *local_28 [5];
  
code_r0x027dc71c:
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 1:
    iVar2 = (**(code **)(**(long **)(param_1 + 0x130) + 0x40))();
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    else if (iVar2 == 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined1 *)(param_1 + 0x1c);
    }
    *(undefined1 *)(param_1 + 0x1d) = uVar4;
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    uVar3 = FUN_027d7d8c(*(long *)(param_1 + 0x28),3);
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar6 = 2;
LAB_027dc904:
    *(undefined4 *)(param_1 + 0x10) = uVar6;
    return;
  case 2:
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    uVar6 = 3;
    uVar3 = FUN_027d7e5c(*(long *)(param_1 + 0x28),3);
    break;
  case 3:
    goto switchD_027dc754_caseD_3;
  case 4:
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    uVar3 = FUN_027d7d8c(*(long *)(param_1 + 0x28),6);
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar6 = 5;
    goto LAB_027dc904;
  case 5:
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    uVar6 = 6;
    uVar3 = FUN_027d7e5c(*(long *)(param_1 + 0x28),6);
    break;
  case 6:
    FUN_027db9f8(*(undefined8 *)(param_1 + 0x130));
    uVar6 = 7;
    goto LAB_027dc904;
  case 7:
    uVar3 = FUN_027dba0c(*(undefined8 *)(param_1 + 0x130));
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x1d) == '\0') {
      uVar6 = 9;
    }
    else {
      if (*(long *)(param_1 + 0x28) == 0) {
        return;
      }
      uVar3 = FUN_027d7d8c(*(long *)(param_1 + 0x28),0xb);
      if ((uVar3 & 1) == 0) {
        return;
      }
      uVar6 = 8;
    }
    goto LAB_027dc904;
  case 8:
  case 10:
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    uVar6 = 0xb;
    uVar3 = FUN_027d7e5c(*(long *)(param_1 + 0x28),0xb);
    break;
  case 9:
    iVar2 = *(int *)(param_1 + 0x20);
    iVar1 = iVar2 + -1;
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 != 0 && 0 < iVar2) {
      return;
    }
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    uVar3 = FUN_027d7d8c(*(long *)(param_1 + 0x28),0xb);
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar6 = 10;
    goto LAB_027dc904;
  case 0xb:
    FUN_027dba1c(*(undefined8 *)(param_1 + 0x130));
    uVar6 = 0xc;
    goto LAB_027dc904;
  case 0xc:
    uVar3 = FUN_027dba28(*(undefined8 *)(param_1 + 0x130));
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    uVar3 = FUN_027d7d8c(*(long *)(param_1 + 0x28),0xe);
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar6 = 0xd;
    goto LAB_027dc904;
  case 0xd:
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    uVar6 = 0xe;
    uVar3 = FUN_027d7e5c(*(long *)(param_1 + 0x28),0xe);
    break;
  case 0xe:
    if (*(int *)(param_1 + 0x18) == 0) {
      plVar8 = (long *)(param_1 + 0x30);
      if (*plVar8 != 0) {
        plVar7 = *(long **)(param_1 + 0x130);
        local_28[0] = plVar7;
        if (plVar7 == (long *)0x0) {
          FUN_027dc9b8(plVar8,local_28);
        }
        else {
          FUN_02a439f4(plVar7[0xb]);
          FUN_027dc9b8(plVar8,local_28);
          uVar3 = FUN_02a43a5c(plVar7[0xb]);
          if ((uVar3 & 1) != 0) {
            pcVar5 = *(code **)(*plVar7 + 0x20);
            goto LAB_027dc8f4;
          }
        }
      }
    }
    else {
      pcVar5 = *(code **)(param_1 + 0xb0);
      if (pcVar5 != (code *)0x0) {
        plVar7 = (long *)(param_1 + 0xd0);
LAB_027dc8f4:
        (*pcVar5)(plVar7);
      }
    }
    FUN_027dc4d8(param_1);
    uVar6 = 0x10;
    goto LAB_027dc904;
  default:
    return;
  }
  if ((uVar3 & 1) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  return;
switchD_027dc754_caseD_3:
  uVar3 = (**(code **)(**(long **)(param_1 + 0x130) + 0x50))();
  if ((uVar3 & 1) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 4;
  goto code_r0x027dc71c;
}


