/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aec1d4; name: FUN_02aec1d4
 */


void FUN_02aec1d4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  lVar3 = tpidr_el0;
  plVar2 = (long *)param_1[6];
  do {
    while( true ) {
      if (plVar2 == (long *)0x0) {
        lVar5 = *param_1;
        *param_1 = 0;
        if (lVar5 == 0) {
          return;
        }
        lVar1 = param_1[1];
        plVar2 = (long *)param_1[2];
        uVar4 = (**(code **)(*plVar2 + 0xc0))(plVar2);
        if ((uVar4 & 1) != 0) {
          if (*(char *)(lVar3 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar3 + 0x38d488) = 1;
            *(undefined8 *)(lVar3 + 0x38d478) = 0;
            *(undefined8 *)(lVar3 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar3 + 0x38d480)) {
            FUN_02bcc824(plVar2,lVar5,lVar1 << 3,8);
            return;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x02aec348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 << 3,8);
        return;
      }
      plVar7 = (long *)*plVar2;
      if ((long *)plVar2[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar2[5] + 0x20))();
      }
      plVar6 = (long *)param_1[7];
      uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar4 & 1) != 0) break;
LAB_02aec28c:
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar2,0x38,8);
      plVar2 = plVar7;
    }
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02aec28c;
    FUN_02bcc824(plVar6,plVar2,0x38,8);
    plVar2 = plVar7;
  } while( true );
}


