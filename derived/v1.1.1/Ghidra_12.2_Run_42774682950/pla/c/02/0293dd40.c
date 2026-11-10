/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293dd40; name: FUN_0293dd40
 */


void FUN_0293dd40(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_58 [24];
  
  lVar7 = DAT_043ecdc0;
  DAT_043ecdc0 = 0;
  lVar2 = tpidr_el0;
  if (lVar7 != 0) {
    FUN_02bcbe58(auStack_58,0);
    uVar6 = DAT_043ecdd8;
    uVar5 = DAT_043ecdd0;
    plVar4 = DAT_043ecdc8;
    uVar8 = (**(code **)(*DAT_043ecdc8 + 0xc0))(DAT_043ecdc8);
    if ((uVar8 & 1) == 0) {
LAB_0293dddc:
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar7,uVar5,uVar6);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0293dddc;
      FUN_02bcc824(plVar4,lVar7,uVar5,uVar6);
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
    *(int *)(lVar2 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar2 + 0x38d484) = 0;
    }
  }
  puVar3 = DAT_043ecda0;
  DAT_043ecda0 = (undefined8 *)0x0;
  if (puVar3 == (undefined8 *)0x0) {
    DAT_043ecda0 = (undefined8 *)0x0;
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  (**(code **)*puVar3)(puVar3);
  uVar6 = DAT_043ecdb8;
  uVar5 = DAT_043ecdb0;
  plVar4 = DAT_043ecda8;
  uVar8 = (**(code **)(*DAT_043ecda8 + 0xc0))(DAT_043ecda8);
  if ((uVar8 & 1) != 0) {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar4,puVar3,uVar5,uVar6);
      goto LAB_0293df24;
    }
  }
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar3,uVar5,uVar6);
LAB_0293df24:
  if (*(char *)(lVar2 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar2 + 0x38d488) = 1;
    *(undefined8 *)(lVar2 + 0x38d478) = 0;
    *(undefined8 *)(lVar2 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
  *(int *)(lVar2 + 0x38d480) = iVar1;
  if (iVar1 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar2 + 0x38d484) = 0;
  }
  return;
}


