/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183b370; name: FUN_0183b370
 */


void FUN_0183b370(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  
  puVar11 = PTR_LAB_04379590;
  puVar10 = PTR_DAT_043794a0;
  puVar9 = PTR_DAT_04379498;
  lVar16 = *(long *)(param_1 + 0x2f8);
  lVar17 = *(long *)(param_1 + 0x300);
  puVar5 = PTR_LAB_04379590;
  plVar18 = (long *)PTR_DAT_043794a8;
  plVar6 = (long *)PTR_DAT_043794a0;
  pbVar7 = PTR_DAT_04379498;
  do {
    PTR_DAT_04379498 = pbVar7;
    PTR_DAT_043794a0 = (undefined *)plVar6;
    PTR_DAT_043794a8 = (undefined *)plVar18;
    PTR_LAB_04379590 = puVar5;
    if (lVar16 == lVar17) {
      lVar17 = *(long *)(param_1 + 0x408);
      for (lVar16 = *(long *)(param_1 + 0x400); lVar16 != lVar17; lVar16 = lVar16 + 0x18) {
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        FUN_0095aa3c(&local_80,lVar16);
        local_70 = *(undefined8 *)(lVar16 + 0x10);
        FUN_0183af10(&local_68,&local_80);
        plVar13 = local_68;
        if (local_68 != (long *)0x0) {
          *(undefined1 *)((long)local_68 + 0xc) = 0;
          (**(code **)(*local_68 + 0x38))(local_68);
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
        puVar12 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_80 + 1);
          do {
            iVar14 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar14 + -1 == 0) {
            local_80[2] = 0;
            if (((*pbVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar7), iVar14 != 0)) {
              FUN_00100250(puVar5,plVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar7);
            }
            lVar15 = *plVar6;
            *plVar18 = lVar15;
            local_68 = (long *)*puVar12;
            FUN_02a44274(lVar15 + 0xd8,&local_68);
          }
        }
      }
      return;
    }
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_01841e68(&local_80,lVar16);
    puVar12 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      puVar8 = local_80;
      if (*(int *)((long)local_80 + 0xc) != 0) {
        piVar1 = (int *)((long)local_80 + 0xc);
        iVar14 = *(int *)((long)local_80 + 0xc);
        do {
          plVar18 = (long *)puVar12[2];
          lVar15 = FUN_018415dc();
          while( true ) {
            puVar8 = local_80;
            if (plVar18 == (long *)0x0) goto joined_r0x0183b51c;
            if (plVar18 == (long *)lVar15) break;
            plVar18 = (long *)*plVar18;
          }
          iVar2 = *piVar1;
          if (iVar2 == iVar14) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar15 = puVar12[3];
              if (lVar15 != 0) {
                plVar18 = (long *)(lVar15 + -0x50);
                FUN_01beb4d4(plVar18);
                lVar15 = *(long *)(lVar15 + 8);
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  iVar14 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar14 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                puVar8 = local_80;
                if (iVar14 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*plVar18 + 0x20))(plVar18);
                  puVar8 = local_80;
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar14 = iVar2;
        } while (iVar2 != 0);
      }
joined_r0x0183b51c:
      if (puVar8 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar8 + 1);
        do {
          iVar14 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 + -1 == 0) {
          puVar8[2] = 0;
          local_80 = puVar8;
          if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
            FUN_00100250(puVar11,puVar10,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar9);
          }
          lVar15 = *(long *)puVar10;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_68 = (long *)*puVar8;
          FUN_02a44274(lVar15 + 0xd8,&local_68);
        }
      }
    }
    lVar16 = lVar16 + 0x10;
    puVar5 = PTR_LAB_04379590;
    plVar18 = (long *)PTR_DAT_043794a8;
    plVar6 = (long *)PTR_DAT_043794a0;
    pbVar7 = PTR_DAT_04379498;
  } while( true );
}


