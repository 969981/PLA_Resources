/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292aa0c; name: FUN_0292aa0c
 */


void FUN_0292aa0c(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  FUN_0292abd4();
  lVar4 = *param_2;
  *param_2 = 0;
  lVar7 = *param_1;
  *param_1 = lVar4;
  if (lVar7 != 0) {
    lVar4 = param_1[1];
    plVar1 = (long *)param_1[2];
    uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar3 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar1,lVar7,lVar4 << 3,8);
        goto LAB_0292aabc;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,lVar4 << 3,8);
  }
LAB_0292aabc:
  param_1[1] = param_2[1];
  lVar5 = param_2[4];
  lVar4 = param_2[2];
  lVar7 = param_2[3];
  param_2[1] = 0;
  *(int *)(param_1 + 5) = (int)param_2[5];
  param_1[2] = lVar4;
  param_1[3] = lVar7;
  param_1[4] = lVar5;
  lVar5 = param_2[9];
  lVar4 = param_2[7];
  lVar7 = param_2[8];
  *(int *)(param_1 + 10) = (int)param_2[10];
  param_1[8] = lVar7;
  param_1[9] = lVar5;
  param_1[7] = lVar4;
  lVar7 = param_2[0xb];
  param_1[0xb] = lVar7;
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  lVar4 = param_2[6];
  param_1[6] = lVar4;
  if (lVar7 != 0) {
    uVar6 = param_1[1];
    uVar3 = *(ulong *)(lVar4 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar3 = uVar6 - 1 & uVar3;
    }
    else if (uVar6 <= uVar3) {
      uVar2 = 0;
      if (uVar6 != 0) {
        uVar2 = uVar3 / uVar6;
      }
      uVar3 = uVar3 - uVar2 * uVar6;
    }
    *(long **)(*param_1 + uVar3 * 8) = param_1 + 6;
    param_2[6] = 0;
    param_2[0xb] = 0;
  }
  return;
}


