/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00966ac0; name: FUN_00966ac0
 */


void FUN_00966ac0(long *param_1,int **param_2,long *param_3,long *param_4)

{
  int *piVar1;
  size_t __n;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  int **ppiVar8;
  int *piVar9;
  undefined8 local_98;
  int local_90;
  int *local_88;
  int *local_80;
  long local_78;
  long *local_70;
  int *local_68;
  int *piStack_60;
  undefined4 local_58;
  
  param_1[1] = *param_1;
  local_78 = 0;
  local_70 = param_4;
  local_88 = (int *)0x0;
  local_80 = (int *)0x0;
  local_68 = (int *)0x1555555555555555;
  piStack_60 = (int *)0x0;
  local_58 = 0;
  if (&local_88 == param_2) {
    ppiVar8 = param_2 + 1;
    goto LAB_00966b64;
  }
  if ((long *)param_2[3] != param_4) {
    local_80 = (int *)0x0;
    uVar3 = (**(code **)(*param_4 + 0xc0))(param_4);
    if ((uVar3 & 1) != 0) {
      lVar7 = tpidr_el0;
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(param_4,0,0,4);
        goto LAB_00966b2c;
      }
    }
    (**(code **)(*param_4 + 0x18))(param_4,0,0,4);
  }
LAB_00966b2c:
  local_78 = 0;
  local_80 = (int *)0x0;
  local_88 = (int *)0x0;
  local_70 = (long *)param_2[3];
  local_68 = param_2[4];
  piStack_60 = param_2[5];
  local_58 = *(undefined4 *)(param_2 + 6);
  piVar6 = *param_2;
  ppiVar8 = param_2 + 1;
  param_2 = &local_88;
  FUN_0096775c(&local_88,piVar6,*ppiVar8);
  piVar9 = local_80;
  ppiVar8 = &local_80;
  piVar6 = local_88;
  if (local_88 != local_80) {
    do {
      piVar5 = (int *)*param_3;
      piVar1 = (int *)param_3[1];
      if (piVar5 == piVar1) {
LAB_00966bf8:
        if (piVar5 != piVar1) {
          local_98 = *(undefined8 *)piVar6;
          local_90 = piVar5[2];
          FUN_00966ea8(param_1,&local_98);
          *piVar6 = 0x15;
        }
      }
      else {
        do {
          if (*piVar5 == *piVar6) goto LAB_00966bf8;
          piVar5 = piVar5 + 3;
        } while (piVar1 != piVar5);
      }
      piVar6 = piVar6 + 3;
    } while (piVar6 != piVar9);
    param_2 = &local_88;
  }
LAB_00966b64:
  piVar9 = *ppiVar8;
  piVar6 = local_88;
  if (local_88 != piVar9) {
    do {
      piVar5 = piVar6 + 3;
      if (*piVar6 == 0x15) {
        __n = (long)piVar9 - (long)piVar5;
        if (__n != 0) {
          memmove(piVar6,piVar5,__n);
        }
        piVar9 = piVar6 + ((long)__n >> 2);
        *ppiVar8 = piVar9;
        piVar5 = piVar6;
      }
      piVar6 = piVar5;
    } while (piVar5 != piVar9);
    for (piVar6 = *param_2; piVar6 != piVar9; piVar6 = piVar6 + 3) {
      FUN_00966ea8(param_1,piVar6);
    }
  }
  lVar7 = *param_1;
  lVar4 = param_1[1];
  if (lVar7 == lVar4) {
    lVar4 = lVar7;
  }
  else {
    do {
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      lVar7 = lVar7 + 0xc;
    } while (lVar4 != lVar7);
    lVar7 = *param_1;
    lVar4 = param_1[1];
  }
  FUN_00967c50(lVar7,lVar4);
  piVar6 = *param_2;
  if (piVar6 != (int *)0x0) {
    *ppiVar8 = piVar6;
    plVar2 = local_70;
    lVar7 = local_78 - (long)piVar6;
    uVar3 = (**(code **)(*local_70 + 0xc0))(local_70);
    if ((uVar3 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar2,piVar6,lVar7,4);
        return;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,piVar6,lVar7,4);
  }
  return;
}


