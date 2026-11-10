/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f477b8; name: FUN_01f477b8
 */


void FUN_01f477b8(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 local_68;
  
  puVar7 = PTR_LAB_04379590;
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_04379498;
  puVar15 = *(undefined8 **)(param_1 + 8);
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  if (puVar11 != puVar15) {
    uVar13 = *(ulong *)(param_1 + 0x40);
    plVar16 = (long *)((long)puVar15 + (uVar13 >> 4 & 0xffffffffffffff8));
    uVar12 = *(long *)(param_1 + 0x48) + uVar13;
    puVar17 = (undefined8 *)(*plVar16 + (uVar13 & 0x7f) * 0x20);
    puVar2 = (undefined8 *)
             (*(long *)((long)puVar15 + (uVar12 >> 4 & 0xffffffffffffff8)) + (uVar12 & 0x7f) * 0x20)
    ;
    if (puVar2 != puVar17) {
      plVar14 = (long *)PTR_DAT_043794a0;
      do {
        puVar15 = (undefined8 *)*puVar17;
        if (puVar15 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar15 + 1);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar15[2] = 0;
            if ((*puVar5 & 1) == 0) {
              iVar8 = __cxa_guard_acquire(puVar5);
              plVar14 = (long *)PTR_DAT_043794a0;
              if (iVar8 != 0) {
                FUN_00100250(puVar7,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar5);
                plVar14 = (long *)PTR_DAT_043794a0;
              }
            }
            lVar10 = *plVar14;
            *(long *)puVar6 = lVar10;
            local_68 = *puVar15;
            FUN_02a44274(lVar10 + 0xd8,&local_68);
          }
        }
        puVar17 = puVar17 + 4;
        if ((long)puVar17 - *plVar16 == 0x1000) {
          plVar16 = plVar16 + 1;
          puVar17 = (undefined8 *)*plVar16;
        }
      } while (puVar2 != puVar17);
      puVar15 = *(undefined8 **)(param_1 + 8);
      puVar11 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  uVar12 = (long)puVar11 - (long)puVar15 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar12) {
    lVar10 = tpidr_el0;
    do {
      plVar16 = *(long **)(param_1 + 0x50);
      uVar9 = *puVar15;
      uVar12 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar12 & 1) == 0) {
LAB_01f479ac:
        (**(code **)(*plVar16 + 0x18))(plVar16,uVar9,0x1000,8);
      }
      else {
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_01f479ac;
        FUN_02bcc824(plVar16,uVar9,0x1000,8);
      }
      puVar15 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      uVar12 = *(long *)(param_1 + 0x10) - (long)puVar15 >> 3;
      *(undefined8 **)(param_1 + 8) = puVar15;
    } while (2 < uVar12);
  }
  if (uVar12 == 1) {
    uVar9 = 0x40;
  }
  else {
    if (uVar12 != 2) {
      return;
    }
    uVar9 = 0x80;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  return;
}


