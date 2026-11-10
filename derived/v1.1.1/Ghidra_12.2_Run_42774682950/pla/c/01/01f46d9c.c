/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f46d9c; name: FUN_01f46d9c
 */


void FUN_01f46d9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10) - (long)puVar3;
  if (lVar1 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x40);
    lVar7 = puVar3[uVar5 / 0x155] + (uVar5 % 0x155) * 0xc;
    uVar4 = *(long *)(param_1 + 0x48) + uVar5;
    lVar6 = puVar3[uVar4 / 0x155] + (uVar4 % 0x155) * 0xc;
    if (lVar6 != lVar7) {
      plVar8 = puVar3 + uVar5 / 0x155;
      do {
        while (lVar7 = lVar7 + 0xc, lVar7 - *plVar8 != 0xffc) {
          if (lVar6 == lVar7) goto LAB_01f46e68;
        }
        plVar8 = plVar8 + 1;
        lVar7 = *plVar8;
      } while (lVar6 != lVar7);
    }
  }
LAB_01f46e68:
  uVar4 = lVar1 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar4) {
    lVar1 = tpidr_el0;
    do {
      plVar8 = *(long **)(param_1 + 0x50);
      uVar2 = *puVar3;
      uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar4 & 1) == 0) {
LAB_01f46f30:
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar2,0xffc,4);
      }
      else {
        if (*(char *)(lVar1 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar1 + 0x38d488) = 1;
          *(undefined8 *)(lVar1 + 0x38d478) = 0;
          *(undefined8 *)(lVar1 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_01f46f30;
        FUN_02bcc824(plVar8,uVar2,0xffc,4);
      }
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      uVar4 = *(long *)(param_1 + 0x10) - (long)puVar3 >> 3;
      *(undefined8 **)(param_1 + 8) = puVar3;
    } while (2 < uVar4);
  }
  if (uVar4 == 1) {
    uVar2 = 0xaa;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    uVar2 = 0x155;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  return;
}


