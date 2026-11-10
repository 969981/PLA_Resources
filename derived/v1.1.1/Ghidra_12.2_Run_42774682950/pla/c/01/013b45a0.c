/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b45a0; name: FUN_013b45a0
 */


void FUN_013b45a0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,undefined8 param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long local_80;
  undefined8 *puStack_78;
  long local_70;
  undefined8 local_68;
  
  local_70 = 0;
  puVar16 = (undefined8 *)param_1[4];
  lVar11 = param_2;
  local_80 = param_2;
  puStack_78 = param_1;
  if (puVar16 != (undefined8 *)0x0) {
    if (puVar16 != param_4) {
      puVar15 = puVar16;
      do {
        FUN_013b4060(param_1,lVar11,puVar15);
        puVar15 = puVar15 + 0x12;
        lVar11 = lVar11 + 0x90;
      } while (param_4 != puVar15);
    }
    local_70 = (lVar11 - param_2 >> 4) * -0x71c71c71c71c71c7;
  }
  lVar13 = local_70;
  FUN_013b4060(param_1,lVar11,param_6);
  lVar11 = lVar11 + param_5 * 0x90;
  local_70 = lVar13 + (param_5 * 0x90 >> 4) * -0x71c71c71c71c71c7;
  if (puVar16 != (undefined8 *)0x0) {
    lVar13 = param_1[5];
    if (puVar16 + lVar13 * 0x12 != param_4) {
      do {
        FUN_013b4060(param_1,lVar11,param_4);
        param_4 = param_4 + 0x12;
        lVar11 = lVar11 + 0x90;
      } while (puVar16 + lVar13 * 0x12 != param_4);
      lVar13 = param_1[5];
    }
    puVar6 = PTR_DAT_043794a8;
    puVar5 = PTR_DAT_043794a0;
    puVar4 = PTR_DAT_04379498;
    if (lVar13 != 0) {
      puVar15 = (undefined8 *)puVar16[0x10];
      while( true ) {
        if (puVar15 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar15 + 1);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            puVar15[2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar4);
            }
            lVar9 = *(long *)puVar5;
            *(long *)puVar6 = lVar9;
            local_68 = *puVar15;
            FUN_02a44274(lVar9 + 0xd8,&local_68);
          }
        }
        pcVar10 = (code *)puVar16[1];
        lVar13 = lVar13 + -1;
        if (pcVar10 != (code *)0x0) {
          puVar16[2] = 0;
          puVar16[3] = 0;
          *puVar16 = 0;
          puVar16[1] = 0;
          (*pcVar10)(puVar16 + 4);
        }
        if (lVar13 == 0) break;
        puVar15 = (undefined8 *)puVar16[0x22];
        puVar16 = puVar16 + 0x12;
      }
    }
    lVar13 = param_1[6];
    plVar14 = (long *)*param_1;
    uVar12 = param_1[4];
    uVar8 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar8 & 1) != 0) {
      lVar9 = tpidr_el0;
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar9 + 0x38d480)) {
        FUN_02bcc824(plVar14,uVar12,lVar13 * 0x90,0x10);
        goto LAB_013b47ec;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,uVar12,lVar13 * 0x90,0x10);
  }
LAB_013b47ec:
  param_1[6] = param_3;
  param_1[4] = param_2;
  param_1[5] = (lVar11 - param_2 >> 4) * -0x71c71c71c71c71c7;
  local_80 = 0;
  FUN_013b48c8(&local_80);
  return;
}


