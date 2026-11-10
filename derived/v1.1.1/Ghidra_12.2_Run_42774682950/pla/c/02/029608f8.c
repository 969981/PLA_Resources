/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029608f8; name: FUN_029608f8
 */


void FUN_029608f8(undefined8 *param_1,long *param_2)

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
  byte *pbVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined1 auStack_78 [24];
  
  lVar3 = tpidr_el0;
  lVar12 = 0;
  pbVar10 = PTR_DAT_04379520;
  puVar13 = param_1;
  do {
    puVar15 = puVar13 + 4;
    puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x20,8);
    if (puVar6 == (undefined8 *)0x0) {
      plVar11 = (long *)0x0;
      uVar9 = 0;
      uVar14 = 0;
    }
    else {
      if (((*pbVar10 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(pbVar10), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(pbVar10);
      }
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_02960fd4;
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      *puVar6 = &PTR_LAB_04276b60;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(int *)(puVar6 + 1) = (int)lVar12;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      uVar9 = 0x20;
      uVar14 = 8;
      plVar11 = param_2;
    }
    puVar16 = (undefined8 *)puVar13[1];
    puVar13[1] = puVar6;
    if (puVar16 != (undefined8 *)0x0) {
      FUN_02bcbe58(auStack_78,0);
      (**(code **)*puVar16)(puVar16);
      plVar1 = (long *)puVar13[2];
      uVar2 = puVar13[3];
      uVar17 = *puVar15;
      uVar8 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      if ((uVar8 & 1) == 0) {
LAB_02960a98:
        (**(code **)(*plVar1 + 0x18))(plVar1,puVar16,uVar2,uVar17);
      }
      else {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        pbVar10 = PTR_DAT_04379520;
        if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02960a98;
        FUN_02bcc824(plVar1,puVar16,uVar2,uVar17);
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
    lVar12 = lVar12 + 1;
    puVar13[2] = plVar11;
    puVar13[3] = uVar9;
    *puVar15 = uVar14;
    puVar13 = puVar15;
  } while (lVar12 != 0x13);
  lVar12 = 0;
  puVar13 = param_1 + 0x50;
  do {
    puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x20,8);
    if (puVar6 == (undefined8 *)0x0) {
      plVar11 = (long *)0x0;
      uVar9 = 0;
      uVar14 = 0;
    }
    else {
      if (((*pbVar10 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(pbVar10), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(pbVar10);
      }
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_02960fd4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      *puVar6 = &PTR_LAB_04276b60;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(int *)(puVar6 + 1) = (int)lVar12;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      uVar9 = 0x20;
      uVar14 = 8;
      plVar11 = param_2;
    }
    puVar15 = (undefined8 *)puVar13[-3];
    puVar13[-3] = puVar6;
    if (puVar15 != (undefined8 *)0x0) {
      FUN_02bcbe58(auStack_78,0);
      (**(code **)*puVar15)(puVar15);
      plVar1 = (long *)puVar13[-2];
      uVar2 = puVar13[-1];
      uVar17 = *puVar13;
      uVar8 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      if ((uVar8 & 1) == 0) {
LAB_02960ddc:
        (**(code **)(*plVar1 + 0x18))(plVar1,puVar15,uVar2,uVar17);
      }
      else {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        pbVar10 = PTR_DAT_04379520;
        if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02960ddc;
        FUN_02bcc824(plVar1,puVar15,uVar2,uVar17);
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
    lVar12 = lVar12 + 1;
    puVar13[-2] = plVar11;
    puVar13[-1] = uVar9;
    *puVar13 = uVar14;
    puVar13 = puVar13 + 4;
    if (lVar12 == 0x13) {
      return;
    }
  } while( true );
}


