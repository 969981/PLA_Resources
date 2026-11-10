/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b9bbf0; name: FUN_02b9bbf0
 */


void FUN_02b9bbf0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_58 [24];
  
  FUN_02b9b730(*param_2);
  plVar8 = (long *)*param_1;
  lVar6 = *plVar8;
  *plVar8 = param_3;
  if (lVar6 == 0) goto LAB_02b9bd30;
  FUN_02bcbe58(auStack_58,0);
  plVar1 = (long *)plVar8[1];
  lVar2 = plVar8[2];
  lVar7 = plVar8[3];
  uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar4 = tpidr_el0;
  if ((uVar5 & 1) == 0) {
LAB_02b9bc94:
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,lVar2,lVar7);
  }
  else {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02b9bc94;
    FUN_02bcc824(plVar1,lVar6,lVar2,lVar7);
  }
  if (*(char *)(lVar4 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar4 + 0x38d488) = 1;
    *(undefined8 *)(lVar4 + 0x38d478) = 0;
    *(undefined8 *)(lVar4 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
  *(int *)(lVar4 + 0x38d480) = iVar3;
  if (iVar3 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar4 + 0x38d484) = 0;
  }
LAB_02b9bd30:
  *(undefined1 *)((long)plVar8 + 0x6c) = 0;
  return;
}


