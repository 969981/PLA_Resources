/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029645bc; name: FUN_029645bc
 */


void FUN_029645bc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined1 auStack_78 [24];
  
  puVar4 = PTR_DAT_04379520;
  lVar3 = tpidr_el0;
  lVar14 = 0;
  puVar13 = (undefined4 *)PTR_DAT_04379528;
  do {
    puVar12 = param_1 + 4;
    puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x60,8);
    if (puVar6 == (undefined8 *)0x0) {
      plVar10 = (long *)0x0;
      uVar9 = 0;
      uVar11 = 0;
    }
    else {
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        FUN_008a62a4(puVar13);
        FUN_00100250(PTR_LAB_04379530,puVar13,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar4);
      }
      lVar7 = nn::os::GetTlsValue(*puVar13);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      *puVar6 = &PTR_LAB_04276d88;
      *(short *)(puVar6 + 1) = (short)lVar14;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      uVar11 = 8;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      uVar9 = 0x60;
      plVar10 = param_2;
    }
    puVar15 = (undefined8 *)param_1[1];
    param_1[1] = puVar6;
    if (puVar15 != (undefined8 *)0x0) {
      FUN_02bcbe58(auStack_78,0);
      (**(code **)*puVar15)(puVar15);
      plVar1 = (long *)param_1[2];
      uVar2 = param_1[3];
      uVar16 = *puVar12;
      uVar8 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      if ((uVar8 & 1) == 0) {
LAB_0296477c:
        (**(code **)(*plVar1 + 0x18))(plVar1,puVar15,uVar2,uVar16);
      }
      else {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        puVar13 = (undefined4 *)PTR_DAT_04379528;
        if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_0296477c;
        FUN_02bcc824(plVar1,puVar15,uVar2,uVar16);
      }
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar5 = *(int *)(lVar3 + 0x38d480) + -1;
      *(int *)(lVar3 + 0x38d480) = iVar5;
      if (iVar5 == 0) {
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
    lVar14 = lVar14 + 1;
    param_1[2] = plVar10;
    param_1[3] = uVar9;
    *puVar12 = uVar11;
    param_1 = puVar12;
    if (lVar14 == 0xa6) {
      return;
    }
  } while( true );
}


