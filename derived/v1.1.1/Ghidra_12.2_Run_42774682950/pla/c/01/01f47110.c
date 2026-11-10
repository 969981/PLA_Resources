/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f47110; name: FUN_01f47110
 */


void FUN_01f47110(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  FUN_01f47260();
  puVar6 = *(undefined8 **)(param_1 + 8);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar6 != puVar1) {
    lVar2 = tpidr_el0;
    do {
      plVar5 = *(long **)(param_1 + 0x50);
      uVar4 = *puVar6;
      uVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar3 & 1) == 0) {
LAB_01f471d8:
        (**(code **)(*plVar5 + 0x18))(plVar5,uVar4,0x1000,4);
      }
      else {
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_01f471d8;
        FUN_02bcc824(plVar5,uVar4,0x1000,4);
      }
      puVar6 = puVar6 + 1;
    } while (puVar1 != puVar6);
  }
  FUN_01f4744c(param_1);
  return;
}


