/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f47260; name: FUN_01f47260
 */


void FUN_01f47260(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10) - (long)puVar3;
  if (lVar1 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x40);
    plVar7 = (long *)((long)puVar3 + (uVar5 >> 7 & 0x1fffffffffffff8));
    uVar4 = *(long *)(param_1 + 0x48) + uVar5;
    lVar6 = *plVar7 + (uVar5 & 0x3ff) * 4;
    while (*(long *)((long)puVar3 + (uVar4 >> 7 & 0x1fffffffffffff8)) + (uVar4 & 0x3ff) * 4 != lVar6
          ) {
      lVar6 = lVar6 + 4;
      if (lVar6 - *plVar7 == 0x1000) {
        plVar7 = plVar7 + 1;
        lVar6 = *plVar7;
      }
    }
  }
  uVar4 = lVar1 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar4) {
    lVar1 = tpidr_el0;
    do {
      plVar7 = *(long **)(param_1 + 0x50);
      uVar2 = *puVar3;
      uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar4 & 1) == 0) {
LAB_01f473b8:
        (**(code **)(*plVar7 + 0x18))(plVar7,uVar2,0x1000,4);
      }
      else {
        if (*(char *)(lVar1 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar1 + 0x38d488) = 1;
          *(undefined8 *)(lVar1 + 0x38d478) = 0;
          *(undefined8 *)(lVar1 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_01f473b8;
        FUN_02bcc824(plVar7,uVar2,0x1000,4);
      }
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      uVar4 = *(long *)(param_1 + 0x10) - (long)puVar3 >> 3;
      *(undefined8 **)(param_1 + 8) = puVar3;
    } while (2 < uVar4);
  }
  if (uVar4 == 1) {
    uVar2 = 0x200;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    uVar2 = 0x400;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  return;
}


