/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ecb440; name: FUN_01ecb440
 */


void FUN_01ecb440(undefined8 *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 local_58;
  
  puVar9 = PTR_DAT_043794a8;
  puVar8 = PTR_DAT_043794a0;
  puVar7 = PTR_DAT_04379498;
  if (*(char *)(param_1 + 1) == '\0') {
    if (param_2 == 0) {
      return;
    }
    goto LAB_01ecb48c;
  }
  plVar16 = *(long **)(param_2 + 0x30);
  if (plVar16 == (long *)0x0) {
    plVar16 = *(long **)(param_2 + 0x28);
  }
  else {
    plVar13 = plVar16;
    if (*(long **)(param_2 + 0x38) != plVar16) {
      plVar13 = *(long **)(param_2 + 0x38) + -6;
      puVar15 = (undefined8 *)*plVar13;
      puVar6 = PTR_LAB_04379590;
      puVar10 = PTR_LAB_04379590;
      if (puVar15 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar15 + 1);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar6 = PTR_LAB_04379590;
        puVar10 = PTR_LAB_04379590;
        if (iVar11 + -1 == 0) {
          puVar15[2] = 0;
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)puVar8;
          *(long *)puVar9 = lVar14;
          local_58 = *puVar15;
          FUN_02a44274(lVar14 + 0xd8,&local_58);
          puVar6 = PTR_LAB_04379590;
          puVar10 = PTR_LAB_04379590;
        }
      }
      while (PTR_LAB_04379590 = puVar10, puVar10 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar6,
            plVar13 != plVar16) {
        plVar13 = plVar13 + -6;
        puVar15 = (undefined8 *)*plVar13;
        if (puVar15 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar15 + 1);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          puVar6 = PTR_LAB_04379590;
          if (iVar11 + -1 == 0) {
            puVar15[2] = 0;
            if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
              FUN_00100250(puVar10,puVar8,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar7);
            }
            lVar14 = *(long *)puVar8;
            *(long *)puVar9 = lVar14;
            local_58 = *puVar15;
            FUN_02a44274(lVar14 + 0xd8,&local_58);
            puVar6 = PTR_LAB_04379590;
          }
        }
      }
      plVar13 = *(long **)(param_2 + 0x30);
    }
    plVar2 = *(long **)(param_2 + 0x48);
    *(long **)(param_2 + 0x38) = plVar16;
    lVar14 = *(long *)(param_2 + 0x40) - (long)plVar13;
    uVar12 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar12 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar2,plVar13,lVar14,8);
        plVar16 = *(long **)(param_2 + 0x28);
        goto joined_r0x01ecb5b8;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,plVar13,lVar14,8);
    plVar16 = *(long **)(param_2 + 0x28);
  }
joined_r0x01ecb5b8:
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x20))();
  }
LAB_01ecb48c:
  plVar16 = *(long **)*param_1;
  uVar12 = (**(code **)(*plVar16 + 0xc0))(plVar16);
  if ((uVar12 & 1) != 0) {
    lVar14 = tpidr_el0;
    if (*(char *)(lVar14 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar14 + 0x38d488) = 1;
      *(undefined8 *)(lVar14 + 0x38d478) = 0;
      *(undefined8 *)(lVar14 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar14 + 0x38d480)) {
      FUN_02bcc824(plVar16,param_2,0x68,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01ecb520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar16 + 0x18))(plVar16,param_2,0x68,8);
  return;
}


