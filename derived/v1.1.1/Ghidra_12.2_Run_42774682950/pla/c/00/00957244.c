/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00957244; name: FUN_00957244
 */


void FUN_00957244(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_2 != (long *)0x0) {
    lVar1 = tpidr_el0;
    do {
      plVar8 = (long *)*param_2;
      plVar7 = (long *)param_2[9];
      while (plVar7 != (long *)0x0) {
        plVar5 = (long *)*plVar7;
        pcVar6 = (code *)plVar7[5];
        if (pcVar6 != (code *)0x0) {
          plVar7[6] = 0;
          plVar7[7] = 0;
          plVar7[4] = 0;
          plVar7[5] = 0;
          (*pcVar6)(plVar7 + 8);
        }
        plVar3 = (long *)param_2[10];
        uVar2 = (**(code **)(*plVar3 + 0xc0))();
        if ((uVar2 & 1) == 0) {
LAB_00957420:
          (**(code **)(*plVar3 + 0x18))(plVar3,plVar7,0xa0,0x10);
          plVar7 = plVar5;
        }
        else {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_00957420;
          FUN_02bcc824(plVar3,plVar7,0xa0,0x10);
          plVar7 = plVar5;
        }
      }
      lVar4 = param_2[3];
      param_2[3] = 0;
      if (lVar4 != 0) {
        FUN_009574a8(param_2 + 4);
      }
      plVar7 = *(long **)(param_1 + 0x38);
      uVar2 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar2 & 1) == 0) {
LAB_00957308:
        (**(code **)(*plVar7 + 0x18))(plVar7,param_2,0x80,8);
      }
      else {
        if (*(char *)(lVar1 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar1 + 0x38d488) = 1;
          *(undefined8 *)(lVar1 + 0x38d478) = 0;
          *(undefined8 *)(lVar1 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_00957308;
        FUN_02bcc824(plVar7,param_2,0x80,8);
      }
      param_2 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return;
}


