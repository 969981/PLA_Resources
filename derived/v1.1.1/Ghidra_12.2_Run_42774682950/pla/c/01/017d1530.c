/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d1530; name: FUN_017d1530
 */


void FUN_017d1530(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_68;
  
  puVar5 = PTR_DAT_0437a7d0;
  puVar4 = PTR_DAT_0437a7c0;
  lVar11 = 0;
  lVar3 = tpidr_el0;
  do {
    lVar1 = param_1 + lVar11;
    if (*(long *)(lVar1 + 0x20) != 0) {
      (**(code **)**(undefined8 **)(lVar1 + 0x10))();
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        local_68 = FUN_00938550();
        FUN_00b0fde8(puVar5,&local_68);
        FUN_00100250(PTR_LAB_0437a8d8,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar4);
        plVar9 = *(long **)puVar5;
      }
      else {
        plVar9 = *(long **)puVar5;
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      plVar7 = *(long **)(lVar1 + 8);
      *(long **)(lVar1 + 8) = plVar9;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      plVar9 = *(long **)(lVar1 + 0x18);
      uVar2 = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      uVar10 = *(undefined8 *)(lVar1 + 0x28);
      uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar8 & 1) == 0) {
LAB_017d1610:
        (**(code **)(*plVar9 + 0x18))(plVar9,uVar2,uVar10,8);
      }
      else {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_017d1610;
        FUN_02bcc824(plVar9,uVar2,uVar10,8);
      }
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    lVar11 = lVar11 + 0x28;
    if (lVar11 == 0x488) {
      return;
    }
  } while( true );
}


