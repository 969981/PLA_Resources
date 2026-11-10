/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae573c; name: FUN_00ae573c
 */


void FUN_00ae573c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [24];
  
  puVar7 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  plVar1 = (long *)puVar7[1];
  uVar3 = puVar7[2];
  uVar2 = puVar7[3];
  uVar4 = puVar7[4];
  FUN_02bcbe58(auStack_58,0);
  (**(code **)*puVar7)(puVar7);
  uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar6 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar1,uVar3,uVar2,uVar4);
      goto LAB_00ae57f8;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,uVar3,uVar2,uVar4);
LAB_00ae57f8:
  FUN_02bcc1dc(auStack_58);
  return;
}


