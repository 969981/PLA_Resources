/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092dcd0; name: FUN_0092dcd0
 */


void FUN_0092dcd0(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_1[0xb] != 0) {
    if ((long *)param_1[6] != (long *)0x0) {
      lVar4 = tpidr_el0;
      plVar2 = (long *)param_1[6];
      do {
        plVar8 = (long *)*plVar2;
        pcVar3 = (code *)plVar2[5];
        if (pcVar3 != (code *)0x0) {
          plVar2[6] = 0;
          plVar2[7] = 0;
          plVar2[4] = 0;
          plVar2[5] = 0;
          (*pcVar3)(plVar2 + 8);
        }
        plVar7 = (long *)param_1[7];
        uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7);
        if ((uVar5 & 1) == 0) {
LAB_0092de44:
          (**(code **)(*plVar7 + 0x18))(plVar7,plVar2,0xa0,0x10);
        }
        else {
          if (*(char *)(lVar4 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar4 + 0x38d488) = 1;
            *(undefined8 *)(lVar4 + 0x38d478) = 0;
            *(undefined8 *)(lVar4 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0092de44;
          FUN_02bcc824(plVar7,plVar2,0xa0,0x10);
        }
        plVar2 = plVar8;
      } while (plVar8 != (long *)0x0);
    }
    uVar5 = param_1[1];
    param_1[6] = 0;
    if (uVar5 != 0) {
      uVar1 = uVar5 & 3;
      if (uVar5 - 1 < 3) {
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
        } while (uVar5 - uVar1 != lVar4);
      }
      if (uVar1 != 0) {
        lVar4 = lVar4 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar4) = 0;
          uVar1 = uVar1 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar1 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  return;
}


