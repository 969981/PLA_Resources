/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0299b19c; name: FUN_0299b19c
 */


void FUN_0299b19c(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 auStack_78 [24];
  
  puVar5 = PTR_DAT_04379528;
  puVar4 = PTR_DAT_04379520;
  lVar3 = tpidr_el0;
  lVar13 = 0;
  do {
    puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x20,8);
    if (puVar7 == (undefined8 *)0x0) {
      plVar11 = (long *)0x0;
      uVar12 = 0;
      uVar10 = 0;
    }
    else {
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        FUN_008a62a4(puVar5);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar4);
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *puVar7 = &PTR_LAB_04276f08;
      *(undefined2 *)(puVar7 + 1) = 0;
      *(undefined1 *)((long)puVar7 + 10) = 0;
      *(undefined8 *)((long)puVar7 + 0xc) = 0;
      *(undefined8 *)((long)puVar7 + 0x14) = 0;
      *(undefined4 *)((long)puVar7 + 0x1c) = 0;
      uVar12 = 0x20;
      uVar10 = 8;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      plVar11 = param_2;
    }
    lVar8 = param_1 + lVar13;
    puVar14 = *(undefined8 **)(lVar8 + 8);
    *(undefined8 **)(lVar8 + 8) = puVar7;
    if (puVar14 != (undefined8 *)0x0) {
      FUN_02bcbe58(auStack_78,0);
      (**(code **)*puVar14)(puVar14);
      plVar1 = *(long **)(lVar8 + 0x10);
      uVar2 = *(undefined8 *)(lVar8 + 0x18);
      uVar15 = *(undefined8 *)(lVar8 + 0x20);
      uVar9 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      if ((uVar9 & 1) == 0) {
LAB_0299b360:
        (**(code **)(*plVar1 + 0x18))(plVar1,puVar14,uVar2,uVar15);
      }
      else {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_0299b360;
        FUN_02bcc824(plVar1,puVar14,uVar2,uVar15);
      }
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar6 = *(int *)(lVar3 + 0x38d480) + -1;
      *(int *)(lVar3 + 0x38d480) = iVar6;
      if (iVar6 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar3 + 0x38d484) = 0;
      }
    }
    lVar13 = lVar13 + 0x20;
    *(undefined8 *)(lVar8 + 0x20) = uVar10;
    *(long **)(lVar8 + 0x10) = plVar11;
    *(undefined8 *)(lVar8 + 0x18) = uVar12;
    if (lVar13 == 0xc00) {
      return;
    }
  } while( true );
}


