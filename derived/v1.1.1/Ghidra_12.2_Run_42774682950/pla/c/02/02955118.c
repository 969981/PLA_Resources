/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02955118; name: FUN_02955118
 */


void FUN_02955118(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  param_1[-9] = &PTR_FUN_04276a78;
  *param_1 = &PTR_FUN_04276ab0;
  puVar5 = (undefined8 *)param_1[6];
  puVar4 = (undefined8 *)param_1[7];
  puVar7 = puVar5;
  if (puVar4 != puVar5) {
    lVar6 = (long)puVar5 - (long)puVar4;
    do {
      puVar4 = puVar4 + -0x4e5;
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 0x2728;
    } while (lVar6 != 0);
    puVar7 = (undefined8 *)param_1[6];
  }
  param_1[7] = puVar5;
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  if (puVar5 == puVar7) {
    puVar5 = puVar7;
  }
  else {
    lVar6 = (long)puVar7 - (long)puVar5;
    do {
      puVar5 = puVar5 + -0x4e5;
      (**(code **)*puVar5)(puVar5);
      lVar6 = lVar6 + 0x2728;
    } while (lVar6 != 0);
    puVar5 = (undefined8 *)param_1[6];
  }
  param_1[7] = puVar7;
  lVar6 = param_1[8];
  plVar1 = (long *)param_1[9];
  uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar3 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar1,puVar5,lVar6 - (long)puVar5,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0295526c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar5,lVar6 - (long)puVar5,8);
  return;
}


