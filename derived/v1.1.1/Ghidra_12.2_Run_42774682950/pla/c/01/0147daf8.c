/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147daf8; name: FUN_0147daf8
 */


void FUN_0147daf8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != puVar3) {
    uVar6 = *(ulong *)(param_1 + 0x40);
    lVar8 = puVar3[uVar6 / 0x2e] + (uVar6 % 0x2e) * 0x58;
    uVar5 = *(long *)(param_1 + 0x48) + uVar6;
    lVar7 = puVar3[uVar5 / 0x2e] + (uVar5 % 0x2e) * 0x58;
    if (lVar7 != lVar8) {
      plVar9 = puVar3 + uVar6 / 0x2e;
      plVar1 = *(long **)(puVar3[uVar6 / 0x2e] + (uVar6 % 0x2e) * 0x58 + 0x38);
      while( true ) {
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x20))();
        }
        lVar8 = lVar8 + 0x58;
        if (lVar8 - *plVar9 == 0xfd0) {
          plVar9 = plVar9 + 1;
          lVar8 = *plVar9;
        }
        if (lVar7 == lVar8) break;
        plVar1 = *(long **)(lVar8 + 0x38);
      }
      puVar3 = *(undefined8 **)(param_1 + 8);
      puVar4 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  uVar5 = (long)puVar4 - (long)puVar3 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar5) {
    lVar8 = tpidr_el0;
    do {
      plVar9 = *(long **)(param_1 + 0x50);
      uVar2 = *puVar3;
      uVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar5 & 1) == 0) {
LAB_0147dcb8:
        (**(code **)(*plVar9 + 0x18))(plVar9,uVar2,0xfd0,8);
      }
      else {
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0147dcb8;
        FUN_02bcc824(plVar9,uVar2,0xfd0,8);
      }
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      uVar5 = *(long *)(param_1 + 0x10) - (long)puVar3 >> 3;
      *(undefined8 **)(param_1 + 8) = puVar3;
    } while (2 < uVar5);
  }
  if (uVar5 == 1) {
    uVar2 = 0x17;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    uVar2 = 0x2e;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  return;
}


