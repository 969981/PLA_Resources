/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02daacd0; name: FUN_02daacd0
 */


void FUN_02daacd0(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_58 [24];
  
  lVar3 = DAT_04408e40;
  DAT_04408e40 = 0;
  if (lVar3 == 0) {
    DAT_04408e40 = 0;
    DAT_04408e60 = 0;
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  uVar6 = DAT_04408e58;
  uVar5 = DAT_04408e50;
  plVar4 = DAT_04408e48;
  uVar7 = (**(code **)(*DAT_04408e48 + 0xc0))(DAT_04408e48);
  lVar2 = tpidr_el0;
  if ((uVar7 & 1) != 0) {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar4,lVar3,uVar5,uVar6);
      goto LAB_02daad88;
    }
  }
  (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,uVar5,uVar6);
LAB_02daad88:
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
  DAT_04408e60 = 0;
  return;
}


