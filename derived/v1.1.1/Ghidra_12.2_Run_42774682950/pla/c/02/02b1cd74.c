/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b1cd74; name: FUN_02b1cd74
 */


void FUN_02b1cd74(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = (long *)param_1[1];
  lVar1 = (long)plVar5 - *param_1 >> 3;
  uVar2 = lVar1 * 0x6db6db6db6db6db7;
  if (uVar2 < param_2) {
    FUN_02b1dc20(param_1,param_2 + lVar1 * -0x6db6db6db6db6db7);
    return;
  }
  if (uVar2 != param_2) {
    plVar7 = (long *)(*param_1 + param_2 * 0x38);
    if (plVar7 != plVar5) {
      lVar1 = tpidr_el0;
      do {
        while( true ) {
          plVar6 = plVar5 + -7;
          lVar4 = *plVar6;
          if (lVar4 != 0) break;
LAB_02b1ce30:
          plVar5 = plVar6;
          if (plVar6 == plVar7) goto LAB_02b1cf34;
        }
        lVar3 = plVar5[-6];
        if (lVar3 == lVar4) {
          lVar3 = lVar4;
        }
        else {
          do {
            lVar3 = lVar3 + -0x30;
            FUN_009849e8(lVar3);
          } while (lVar4 != lVar3);
          lVar3 = *plVar6;
        }
        plVar5[-6] = lVar4;
        lVar4 = plVar5[-5];
        plVar5 = (long *)plVar5[-4];
        uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
        if ((uVar2 & 1) == 0) {
LAB_02b1ce14:
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,lVar4 - lVar3,8);
          goto LAB_02b1ce30;
        }
        if (*(char *)(lVar1 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar1 + 0x38d488) = 1;
          *(undefined8 *)(lVar1 + 0x38d478) = 0;
          *(undefined8 *)(lVar1 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b1ce14;
        FUN_02bcc824(plVar5,lVar3,lVar4 - lVar3,8);
        plVar5 = plVar6;
      } while (plVar6 != plVar7);
    }
LAB_02b1cf34:
    param_1[1] = (long)plVar7;
  }
  return;
}


