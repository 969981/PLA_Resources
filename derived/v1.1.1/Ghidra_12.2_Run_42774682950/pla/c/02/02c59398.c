/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c59398; name: FUN_02c59398
 */


void FUN_02c59398(long param_1,long *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long **pplVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *local_a0;
  long *local_98;
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  
  pplVar12 = &local_a0;
  local_a0 = (long *)&local_a0;
  local_98 = (long *)&local_a0;
  plVar17 = (long *)(param_1 + 0x90);
  local_90 = 0;
  local_88 = *(long **)(param_1 + 0xa8);
  local_70 = 0;
  local_80 = *(undefined8 *)(param_1 + 0xb0);
  uStack_78 = 0;
  plVar13 = *(long **)(param_1 + 0x98);
  if (plVar17 != plVar13) {
    if (&local_a0 == (long **)plVar17) {
      pplVar12 = &local_a0;
      do {
        plVar15 = (long *)plVar13[1];
        if (plVar13[2] == *param_2) {
          for (; plVar17 != plVar15; plVar15 = (long *)plVar15[1]) {
            if (plVar15[2] != plVar13[2]) {
              bVar4 = true;
              plVar14 = plVar15;
              goto joined_r0x02c59564;
            }
          }
          bVar4 = false;
          plVar14 = plVar17;
joined_r0x02c59564:
          if (plVar13 != plVar14) {
            pplVar12 = (long **)*plVar15;
            *(long **)(*plVar13 + 8) = pplVar12[1];
            *pplVar12[1] = *plVar13;
            local_a0[1] = (long)plVar13;
            *plVar13 = (long)local_a0;
            local_a0 = (long *)pplVar12;
            pplVar12[1] = (long *)&local_a0;
          }
          if (bVar4) {
            plVar15 = (long *)plVar14[1];
          }
        }
        plVar13 = plVar15;
      } while (plVar17 != plVar13);
    }
    else {
      pplVar12 = &local_a0;
      do {
        plVar15 = (long *)plVar13[1];
        lVar16 = plVar13[2];
        if (lVar16 == *param_2) {
          plVar14 = plVar15;
          if (plVar17 == plVar15) {
LAB_02c59480:
            bVar4 = false;
            plVar5 = plVar17;
          }
          else if (plVar15[2] == lVar16) {
            do {
              plVar14 = (long *)plVar14[1];
              if (plVar17 == plVar14) goto LAB_02c59480;
            } while (plVar14[2] == lVar16);
            bVar4 = true;
            plVar5 = plVar14;
          }
          else {
            bVar4 = true;
            plVar5 = plVar15;
          }
          if (plVar13 != plVar5) {
            pplVar12 = (long **)*plVar14;
            if (pplVar12 == (long **)plVar13) {
              lVar16 = 1;
            }
            else {
              if (pplVar12 == (long **)plVar15) {
                lVar16 = 0;
              }
              else {
                lVar16 = 0;
                do {
                  plVar15 = (long *)plVar15[1];
                  lVar16 = lVar16 + 1;
                } while ((long **)plVar15 != pplVar12);
              }
              lVar16 = lVar16 + 2;
            }
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) - lVar16;
            local_90 = local_90 + lVar16;
            *(long **)(*plVar13 + 8) = pplVar12[1];
            *pplVar12[1] = *plVar13;
            local_a0[1] = (long)plVar13;
            *plVar13 = (long)local_a0;
            local_a0 = (long *)pplVar12;
            pplVar12[1] = (long *)&local_a0;
          }
          if (bVar4) {
            plVar15 = (long *)plVar5[1];
          }
          else {
            plVar15 = plVar14;
          }
        }
        plVar13 = plVar15;
      } while (plVar17 != plVar13);
    }
  }
  if (local_90 != 0) {
    *(long **)(*local_98 + 8) = pplVar12[1];
    *pplVar12[1] = *local_98;
    puVar8 = PTR_DAT_043794a8;
    puVar7 = PTR_DAT_043794a0;
    puVar6 = PTR_DAT_04379498;
    local_90 = 0;
    if ((long **)local_98 != &local_a0) {
      lVar16 = tpidr_el0;
      plVar17 = local_98;
      do {
        plVar13 = (long *)plVar17[1];
        puVar2 = (undefined8 *)plVar17[2];
        if (puVar2 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar2 + 1);
          do {
            iVar9 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            puVar2[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar11 = *(long *)puVar7;
            *(long *)puVar8 = lVar11;
            local_68 = *puVar2;
            FUN_02a44274(lVar11 + 0xd8,&local_68);
          }
        }
        plVar15 = local_88;
        uVar10 = (**(code **)(*local_88 + 0xc0))(local_88);
        if ((uVar10 & 1) == 0) {
LAB_02c596b0:
          (**(code **)(*plVar15 + 0x18))(plVar15,plVar17,0x20,8);
        }
        else {
          if (*(char *)(lVar16 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar16 + 0x38d488) = 1;
            *(undefined8 *)(lVar16 + 0x38d478) = 0;
            *(undefined8 *)(lVar16 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar16 + 0x38d480) < 1) goto LAB_02c596b0;
          FUN_02bcc824(plVar15,plVar17,0x20,8);
        }
        plVar17 = plVar13;
      } while ((long **)plVar13 != &local_a0);
    }
  }
  return;
}


