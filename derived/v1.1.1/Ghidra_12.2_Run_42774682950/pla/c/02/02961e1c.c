/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02961e1c; name: FUN_02961e1c
 */


void FUN_02961e1c(long param_1,long *param_2)

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
  undefined4 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long local_98;
  undefined1 auStack_78 [24];
  
  puVar4 = PTR_DAT_04379520;
  local_98 = 0;
  lVar3 = tpidr_el0;
  puVar14 = (undefined8 *)(param_1 + 0x20);
  puVar12 = (undefined4 *)PTR_DAT_04379528;
  do {
    lVar13 = 0;
    puVar15 = puVar14;
    do {
      puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x18,8);
      if (puVar6 == (undefined8 *)0x0) {
        plVar10 = (long *)0x0;
        uVar9 = 0;
        uVar11 = 0;
      }
      else {
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
          FUN_008a62a4(puVar12);
          FUN_00100250(PTR_LAB_04379530,puVar12,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar4);
        }
        lVar7 = nn::os::GetTlsValue(*puVar12);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        *puVar6 = &PTR_LAB_042769f8;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *(int *)((long)puVar6 + 0xc) = (int)lVar13;
        *(char *)(puVar6 + 1) = (char)local_98;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        uVar9 = 0x18;
        uVar11 = 8;
        plVar10 = param_2;
      }
      puVar16 = (undefined8 *)puVar15[-3];
      puVar15[-3] = puVar6;
      if (puVar16 != (undefined8 *)0x0) {
        FUN_02bcbe58(auStack_78,0);
        (**(code **)*puVar16)(puVar16);
        plVar1 = (long *)puVar15[-2];
        uVar2 = puVar15[-1];
        uVar17 = *puVar15;
        uVar8 = (**(code **)(*plVar1 + 0xc0))(plVar1);
        if ((uVar8 & 1) == 0) {
LAB_02961ff8:
          (**(code **)(*plVar1 + 0x18))(plVar1,puVar16,uVar2,uVar17);
        }
        else {
          if (*(char *)(lVar3 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar3 + 0x38d488) = 1;
            *(undefined8 *)(lVar3 + 0x38d478) = 0;
            *(undefined8 *)(lVar3 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
          }
          puVar12 = (undefined4 *)PTR_DAT_04379528;
          if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02961ff8;
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
      lVar13 = lVar13 + 1;
      puVar15[-2] = plVar10;
      puVar15[-1] = uVar9;
      *puVar15 = uVar11;
      puVar15 = puVar15 + 4;
    } while (lVar13 != 5);
    local_98 = local_98 + 1;
    puVar14 = puVar14 + 0x14;
    if (local_98 == 6) {
      return;
    }
  } while( true );
}


