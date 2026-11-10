/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f35e48; name: FUN_01f35e48
 */


void FUN_01f35e48(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  puVar13 = *(undefined8 **)(param_1 + 8);
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  if (puVar10 != puVar13) {
    uVar12 = *(ulong *)(param_1 + 0x40);
    uVar11 = *(long *)(param_1 + 0x48) + uVar12;
    puVar15 = (undefined8 *)(puVar13[uVar12 / 0x66] + (uVar12 % 0x66) * 0x28);
    puVar16 = (undefined8 *)(puVar13[uVar11 / 0x66] + (uVar11 % 0x66) * 0x28);
    if (puVar16 != puVar15) {
      plVar14 = puVar13 + uVar12 / 0x66;
      do {
        while( true ) {
          puVar13 = (undefined8 *)puVar15[2];
          if (puVar13 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar13 + 1);
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
              puVar13[2] = 0;
              if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar4);
              }
              lVar9 = *(long *)puVar5;
              *(long *)puVar6 = lVar9;
              local_68 = *puVar13;
              FUN_02a44274(lVar9 + 0xd8,&local_68);
            }
          }
          puVar13 = (undefined8 *)*puVar15;
          if (puVar13 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar13 + 1);
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
              puVar13[2] = 0;
              if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar4);
              }
              lVar9 = *(long *)puVar5;
              *(long *)puVar6 = lVar9;
              local_68 = *puVar13;
              FUN_02a44274(lVar9 + 0xd8,&local_68);
            }
          }
          puVar15 = puVar15 + 5;
          if ((long)puVar15 - *plVar14 != 0xff0) break;
          plVar14 = plVar14 + 1;
          puVar15 = (undefined8 *)*plVar14;
          if (puVar16 == puVar15) goto LAB_01f35fe8;
        }
      } while (puVar16 != puVar15);
LAB_01f35fe8:
      puVar13 = *(undefined8 **)(param_1 + 8);
      puVar10 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  uVar11 = (long)puVar10 - (long)puVar13 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar11) {
    lVar9 = tpidr_el0;
    do {
      plVar14 = *(long **)(param_1 + 0x50);
      uVar8 = *puVar13;
      uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar11 & 1) == 0) {
LAB_01f3607c:
        (**(code **)(*plVar14 + 0x18))(plVar14,uVar8,0xff0,8);
      }
      else {
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_01f3607c;
        FUN_02bcc824(plVar14,uVar8,0xff0,8);
      }
      puVar13 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      uVar11 = *(long *)(param_1 + 0x10) - (long)puVar13 >> 3;
      *(undefined8 **)(param_1 + 8) = puVar13;
    } while (2 < uVar11);
  }
  if (uVar11 == 1) {
    uVar8 = 0x33;
  }
  else {
    if (uVar11 != 2) {
      return;
    }
    uVar8 = 0x66;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  return;
}


