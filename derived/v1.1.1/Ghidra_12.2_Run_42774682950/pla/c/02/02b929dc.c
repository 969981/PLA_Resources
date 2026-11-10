/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b929dc; name: FUN_02b929dc
 */


void FUN_02b929dc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10) - (long)puVar2;
  if (lVar1 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x40);
    uVar3 = *(long *)(param_1 + 0x48) + uVar5;
    lVar4 = puVar2[uVar5 / 0x38] + (uVar5 % 0x38) * 0x48;
    lVar6 = puVar2[uVar3 / 0x38] + (uVar3 % 0x38) * 0x48;
    if (lVar6 != lVar4) {
      plVar8 = puVar2 + uVar5 / 0x38;
      do {
        lVar4 = lVar4 + 0x48;
        if (lVar4 - *plVar8 == 0xfc0) {
          plVar8 = plVar8 + 1;
          lVar4 = *plVar8;
        }
      } while (lVar6 != lVar4);
    }
  }
  uVar3 = lVar1 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar3) {
    lVar1 = tpidr_el0;
    do {
      plVar8 = *(long **)(param_1 + 0x50);
      uVar7 = *puVar2;
      uVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar3 & 1) == 0) {
LAB_02b92b1c:
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar7,0xfc0,8);
      }
      else {
        if (*(char *)(lVar1 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar1 + 0x38d488) = 1;
          *(undefined8 *)(lVar1 + 0x38d478) = 0;
          *(undefined8 *)(lVar1 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b92b1c;
        FUN_02bcc824(plVar8,uVar7,0xfc0,8);
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      uVar3 = *(long *)(param_1 + 0x10) - (long)puVar2 >> 3;
      *(undefined8 **)(param_1 + 8) = puVar2;
    } while (2 < uVar3);
  }
  if (uVar3 == 1) {
    uVar7 = 0x1c;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    uVar7 = 0x38;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  return;
}


