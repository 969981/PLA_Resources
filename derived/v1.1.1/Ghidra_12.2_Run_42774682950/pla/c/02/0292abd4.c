/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292abd4; name: FUN_0292abd4
 */


void FUN_0292abd4(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_1[0xb] != 0) {
    if ((long *)param_1[6] != (long *)0x0) {
      lVar3 = tpidr_el0;
      plVar5 = (long *)param_1[6];
      do {
        while( true ) {
          plVar7 = (long *)*plVar5;
          FUN_0292a1c8(plVar5 + 0x14);
          FUN_0292a1c8(plVar5 + 7);
          plVar6 = (long *)param_1[7];
          uVar1 = (**(code **)(*plVar6 + 0xc0))(plVar6);
          if ((uVar1 & 1) != 0) break;
LAB_0292ac94:
          (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x108,8);
          plVar5 = plVar7;
          if (plVar7 == (long *)0x0) goto LAB_0292ad20;
        }
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_0292ac94;
        FUN_02bcc824(plVar6,plVar5,0x108,8);
        plVar5 = plVar7;
      } while (plVar7 != (long *)0x0);
    }
LAB_0292ad20:
    uVar1 = param_1[1];
    param_1[6] = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        do {
          lVar4 = lVar3 * 8;
          lVar3 = lVar3 + 4;
          *(undefined8 *)(*param_1 + lVar4) = 0;
          *(undefined8 *)(*param_1 + lVar4 + 8) = 0;
          *(undefined8 *)(*param_1 + lVar4 + 0x10) = 0;
          *(undefined8 *)(*param_1 + lVar4 + 0x18) = 0;
        } while (uVar1 - uVar2 != lVar3);
      }
      if (uVar2 != 0) {
        lVar3 = lVar3 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar3) = 0;
          uVar2 = uVar2 - 1;
          lVar3 = lVar3 + 8;
        } while (uVar2 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  return;
}


