/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ddaefc; name: FUN_01ddaefc
 */


void FUN_01ddaefc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  uVar5 = *param_2;
  *param_2 = 0;
  plVar6 = (long *)*param_1;
  *param_1 = uVar5;
  if (plVar6 == (long *)0x0) goto LAB_01ddb010;
  FUN_02bcbe58(auStack_68,0);
  (**(code **)(*plVar6 + 0x58))(plVar6);
  plVar1 = (long *)param_1[1];
  uVar5 = param_1[2];
  uVar7 = param_1[3];
  uVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar3 = tpidr_el0;
  if ((uVar4 & 1) == 0) {
LAB_01ddafb0:
    (**(code **)(*plVar1 + 0x18))(plVar1,plVar6,uVar5,uVar7);
  }
  else {
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_01ddafb0;
    FUN_02bcc824(plVar1,plVar6,uVar5,uVar7);
  }
  if (*(char *)(lVar3 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar3 + 0x38d488) = 1;
    *(undefined8 *)(lVar3 + 0x38d478) = 0;
    *(undefined8 *)(lVar3 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar2 = *(int *)(lVar3 + 0x38d480) + -1;
  *(int *)(lVar3 + 0x38d480) = iVar2;
  if (iVar2 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar3 + 0x38d484) = 0;
  }
LAB_01ddb010:
  uVar5 = param_2[2];
  uVar7 = param_2[3];
  param_1[1] = param_2[1];
  param_1[2] = uVar5;
  param_1[3] = uVar7;
  return;
}


