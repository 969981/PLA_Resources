/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01491734; name: FUN_01491734
 */


void FUN_01491734(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10) - (long)puVar3;
  if (lVar1 != 0) {
    uVar6 = *(ulong *)(param_1 + 0x40);
    uVar4 = *(long *)(param_1 + 0x48) + uVar6;
    lVar5 = puVar3[uVar6 / 0xcc] + (uVar6 % 0xcc) * 0x14;
    lVar7 = puVar3[uVar4 / 0xcc] + (uVar4 % 0xcc) * 0x14;
    if (lVar7 != lVar5) {
      plVar8 = puVar3 + uVar6 / 0xcc;
      do {
        lVar5 = lVar5 + 0x14;
        if (lVar5 - *plVar8 == 0xff0) {
          plVar8 = plVar8 + 1;
          lVar5 = *plVar8;
        }
      } while (lVar7 != lVar5);
    }
  }
  uVar4 = lVar1 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar4) {
    lVar1 = tpidr_el0;
    do {
      plVar8 = *(long **)(param_1 + 0x50);
      uVar2 = *puVar3;
      uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar4 & 1) == 0) {
LAB_014918ac:
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar2,0xff0,4);
      }
      else {
        if (*(char *)(lVar1 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar1 + 0x38d488) = 1;
          *(undefined8 *)(lVar1 + 0x38d478) = 0;
          *(undefined8 *)(lVar1 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_014918ac;
        FUN_02bcc824(plVar8,uVar2,0xff0,4);
      }
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      uVar4 = *(long *)(param_1 + 0x10) - (long)puVar3 >> 3;
      *(undefined8 **)(param_1 + 8) = puVar3;
    } while (2 < uVar4);
  }
  if (uVar4 == 1) {
    uVar2 = 0x66;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    uVar2 = 0xcc;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  return;
}


