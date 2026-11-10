/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02929420; name: FUN_02929420
 */


void FUN_02929420(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  uVar2 = DAT_03a7e9bc;
  uVar1 = DAT_03a7e9ac;
  *(undefined8 *)(param_1 + 0x10) = DAT_03a7e9b4;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  if (*(long *)(param_1 + 0x78) != 0) {
    if (*(long **)(param_1 + 0x50) != (long *)0x0) {
      lVar5 = tpidr_el0;
      plVar7 = *(long **)(param_1 + 0x50);
      do {
        while( true ) {
          plVar8 = *(long **)(param_1 + 0x58);
          plVar9 = (long *)*plVar7;
          uVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8);
          if ((uVar3 & 1) != 0) break;
LAB_029294e4:
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x30,8);
          plVar7 = plVar9;
          if (plVar9 == (long *)0x0) goto LAB_0292956c;
        }
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_029294e4;
        FUN_02bcc824(plVar8,plVar7,0x30,8);
        plVar7 = plVar9;
      } while (plVar9 != (long *)0x0);
    }
LAB_0292956c:
    uVar3 = *(ulong *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (uVar3 != 0) {
      uVar4 = uVar3 & 3;
      if (uVar3 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar6 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6 + 0x18) = 0;
        } while (uVar3 - uVar4 != lVar5);
      }
      if (uVar4 != 0) {
        lVar5 = lVar5 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5) = 0;
          uVar4 = uVar4 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar4 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  FUN_0292adc8(param_1 + 0x88);
  FUN_0292abd4(param_1 + 0x178);
  FUN_0292abd4(param_1 + 0x1e0);
  return;
}


