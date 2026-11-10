/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292a698; name: FUN_0292a698
 */


void FUN_0292a698(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  if (param_1[0xb] != 0) {
    if ((long *)param_1[6] != (long *)0x0) {
      lVar4 = tpidr_el0;
      plVar7 = (long *)param_1[6];
      do {
        while( true ) {
          plVar8 = (long *)param_1[7];
          plVar9 = (long *)*plVar7;
          uVar2 = (**(code **)(*plVar8 + 0xc0))(plVar8);
          if ((uVar2 & 1) != 0) break;
LAB_0292a744:
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x38,8);
          plVar7 = plVar9;
          if (plVar9 == (long *)0x0) goto LAB_0292a7d0;
        }
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0292a744;
        FUN_02bcc824(plVar8,plVar7,0x38,8);
        plVar7 = plVar9;
      } while (plVar9 != (long *)0x0);
    }
LAB_0292a7d0:
    uVar2 = param_1[1];
    param_1[6] = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        do {
          lVar6 = lVar4 * 8;
          lVar4 = lVar4 + 4;
          *(undefined8 *)(*param_1 + lVar6) = 0;
          *(undefined8 *)(*param_1 + lVar6 + 8) = 0;
          *(undefined8 *)(*param_1 + lVar6 + 0x10) = 0;
          *(undefined8 *)(*param_1 + lVar6 + 0x18) = 0;
        } while (uVar2 - uVar3 != lVar4);
      }
      if (uVar3 != 0) {
        lVar4 = lVar4 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar4) = 0;
          uVar3 = uVar3 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar3 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  lVar4 = *param_2;
  *param_2 = 0;
  lVar6 = *param_1;
  *param_1 = lVar4;
  if (lVar6 != 0) {
    lVar4 = param_1[1];
    plVar7 = (long *)param_1[2];
    uVar2 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar2 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar7,lVar6,lVar4 << 3,8);
        goto LAB_0292a8ec;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,lVar4 << 3,8);
  }
LAB_0292a8ec:
  param_1[1] = param_2[1];
  lVar5 = param_2[4];
  lVar4 = param_2[2];
  lVar6 = param_2[3];
  param_2[1] = 0;
  *(int *)(param_1 + 5) = (int)param_2[5];
  param_1[2] = lVar4;
  param_1[3] = lVar6;
  param_1[4] = lVar5;
  lVar5 = param_2[9];
  lVar4 = param_2[7];
  lVar6 = param_2[8];
  *(int *)(param_1 + 10) = (int)param_2[10];
  param_1[8] = lVar6;
  param_1[9] = lVar5;
  param_1[7] = lVar4;
  lVar6 = param_2[0xb];
  param_1[0xb] = lVar6;
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  lVar4 = param_2[6];
  param_1[6] = lVar4;
  if (lVar6 != 0) {
    uVar3 = param_1[1];
    uVar2 = *(ulong *)(lVar4 + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      uVar2 = uVar3 - 1 & uVar2;
    }
    else if (uVar3 <= uVar2) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar2 / uVar3;
      }
      uVar2 = uVar2 - uVar1 * uVar3;
    }
    *(long **)(*param_1 + uVar2 * 8) = param_1 + 6;
    param_2[6] = 0;
    param_2[0xb] = 0;
  }
  return;
}


