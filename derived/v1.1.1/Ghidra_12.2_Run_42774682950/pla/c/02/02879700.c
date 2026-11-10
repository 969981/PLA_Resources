/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02879700; name: FUN_02879700
 */


void FUN_02879700(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [24];
  
  puVar5 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  FUN_02bcbe58(auStack_48,0);
  (**(code **)*puVar5)(puVar5);
  plVar1 = (long *)param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar4 & 1) != 0) {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar1,puVar5,uVar2,uVar6);
      goto LAB_028797d0;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar5,uVar2,uVar6);
LAB_028797d0:
  FUN_02bcc1dc(auStack_48);
  return;
}


