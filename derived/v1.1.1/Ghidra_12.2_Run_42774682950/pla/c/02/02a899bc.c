/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a899bc; name: FUN_02a899bc
 */


char * FUN_02a899bc(undefined8 param_1,char *param_2,char *param_3,ulong *param_4)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong *unaff_x19;
  char *unaff_x20;
  ulong uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  if ((1 < (long)param_3 - (long)param_2) && (param_3 + -1 != param_2)) {
    unaff_x20 = param_2;
    do {
      cVar1 = *unaff_x20;
      while (unaff_x19 = param_4, cVar1 != '.') {
        if (param_3 + -2 == unaff_x20) goto LAB_02a89a4c;
        cVar1 = unaff_x20[1];
        unaff_x20 = unaff_x20 + 1;
      }
      if (unaff_x20[1] == ']') goto LAB_02a89a50;
      unaff_x20 = unaff_x20 + 1;
    } while (param_3 + -1 != unaff_x20);
  }
LAB_02a89a4c:
  do {
    auVar7 = FUN_02a899b0();
LAB_02a89a50:
  } while (unaff_x20 == param_3);
  FUN_02a8a8cc(&local_58,auVar7._0_8_,auVar7._8_8_,unaff_x20);
  if ((*unaff_x19 & 1) == 0) {
    *(undefined2 *)unaff_x19 = 0;
    goto LAB_02a89b3c;
  }
  *(undefined1 *)unaff_x19[2] = 0;
  unaff_x19[1] = 0;
  plVar3 = DAT_043f1798;
  if ((*unaff_x19 & 1) == 0) goto LAB_02a89b3c;
  uVar5 = unaff_x19[2];
  if (uVar5 != 0) {
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar6,uVar5,0,8);
        goto LAB_02a89b38;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,0,8);
  }
LAB_02a89b38:
  *unaff_x19 = 0;
LAB_02a89b3c:
  unaff_x19[1] = uStack_50;
  unaff_x19[2] = local_48;
  *unaff_x19 = local_58;
  uVar5 = local_58 >> 1 & 0x7f;
  if ((local_58 & 1) != 0) {
    uVar5 = uStack_50;
  }
  if (1 < uVar5 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_02a8a8c0();
  }
  return unaff_x20 + 2;
}


