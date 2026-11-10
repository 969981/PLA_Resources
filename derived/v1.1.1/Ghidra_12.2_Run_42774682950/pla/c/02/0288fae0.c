/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0288fae0; name: FUN_0288fae0
 */


void FUN_0288fae0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10) - (long)puVar4;
  if (lVar2 != 0) {
    uVar7 = *(ulong *)(param_1 + 0x40);
    plVar8 = (long *)((long)puVar4 + (uVar7 >> 6 & 0x3fffffffffffff8));
    uVar5 = *(long *)(param_1 + 0x48) + uVar7;
    lVar6 = *plVar8 + (uVar7 & 0x1ff) * 8;
    lVar1 = *(long *)((long)puVar4 + (uVar5 >> 6 & 0x3fffffffffffff8)) + (uVar5 & 0x1ff) * 8;
    while (lVar1 != lVar6) {
      while (lVar6 = lVar6 + 8, lVar6 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        lVar6 = *plVar8;
        if (lVar1 == lVar6) goto LAB_0288fb0c;
      }
    }
  }
LAB_0288fb0c:
  uVar5 = lVar2 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar5) {
    lVar2 = tpidr_el0;
    do {
      plVar8 = *(long **)(param_1 + 0x50);
      uVar3 = *puVar4;
      uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar5 & 1) == 0) {
LAB_0288fc48:
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar3,0x1000,8);
      }
      else {
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0288fc48;
        FUN_02bcc824(plVar8,uVar3,0x1000,8);
      }
      puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      uVar5 = *(long *)(param_1 + 0x10) - (long)puVar4 >> 3;
      *(undefined8 **)(param_1 + 8) = puVar4;
    } while (2 < uVar5);
  }
  if (uVar5 == 1) {
    uVar3 = 0x100;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    uVar3 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  return;
}


