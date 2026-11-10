/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183ac2c; name: FUN_0183ac2c
 */


void FUN_0183ac2c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  
  lVar16 = *(long *)(param_1 + 0x2f8);
  lVar17 = *(long *)(param_1 + 0x300);
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0xbf800000;
  puVar10 = PTR_LAB_04379590;
  puVar9 = PTR_DAT_043794a0;
  puVar8 = PTR_DAT_04379498;
  pbVar6 = PTR_DAT_04379498;
  plVar14 = (long *)PTR_DAT_043794a0;
  plVar18 = (long *)PTR_DAT_043794a8;
  puVar7 = PTR_LAB_04379590;
  do {
    PTR_DAT_04379498 = pbVar6;
    PTR_DAT_043794a0 = (undefined *)plVar14;
    PTR_DAT_043794a8 = (undefined *)plVar18;
    PTR_LAB_04379590 = puVar7;
    if (lVar16 == lVar17) {
      lVar17 = *(long *)(param_1 + 0x408);
      for (lVar16 = *(long *)(param_1 + 0x400); lVar16 != lVar17; lVar16 = lVar16 + 0x18) {
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        FUN_0095aa3c(&local_80,lVar16);
        local_70 = *(undefined8 *)(lVar16 + 0x10);
        FUN_0183af10(&local_68,&local_80);
        plVar12 = local_68;
        if (local_68 != (long *)0x0) {
          *(undefined1 *)((long)local_68 + 0xc) = 0;
          (**(code **)(*local_68 + 0x30))(local_68);
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        puVar11 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_80 + 1);
          do {
            iVar13 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar13 + -1 == 0) {
            local_80[2] = 0;
            if (((*pbVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar6), iVar13 != 0)) {
              FUN_00100250(puVar7,plVar14,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar6);
            }
            lVar15 = *plVar14;
            *plVar18 = lVar15;
            local_68 = (long *)*puVar11;
            FUN_02a44274(lVar15 + 0xd8,&local_68);
          }
        }
      }
      return;
    }
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_01841e68(&local_80,lVar16);
    puVar11 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      puVar5 = local_80;
      if (*(int *)((long)local_80 + 0xc) != 0) {
        piVar1 = (int *)((long)local_80 + 0xc);
        iVar13 = *(int *)((long)local_80 + 0xc);
        do {
          plVar18 = (long *)puVar11[2];
          plVar14 = (long *)FUN_018415dc();
          puVar5 = local_80;
          if (plVar18 == (long *)0x0) break;
          while (plVar18 != plVar14) {
            plVar18 = (long *)*plVar18;
            if (plVar18 == (long *)0x0) goto joined_r0x0183aee0;
          }
          iVar2 = *piVar1;
          if (iVar2 == iVar13) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar15 = puVar11[3];
              if (lVar15 != 0) {
                plVar14 = (long *)(lVar15 + -0x50);
                FUN_01beb4b8(plVar14);
                lVar15 = *(long *)(lVar15 + 8);
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  iVar13 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar13 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                puVar5 = local_80;
                if (iVar13 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*plVar14 + 0x20))(plVar14);
                  puVar5 = local_80;
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar13 = iVar2;
        } while (iVar2 != 0);
      }
joined_r0x0183aee0:
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        do {
          iVar13 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 + -1 == 0) {
          puVar5[2] = 0;
          local_80 = puVar5;
          if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
            FUN_00100250(puVar10,puVar9,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar8);
          }
          lVar15 = *(long *)puVar9;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_68 = (long *)*puVar5;
          FUN_02a44274(lVar15 + 0xd8,&local_68);
        }
      }
    }
    lVar16 = lVar16 + 0x10;
    pbVar6 = PTR_DAT_04379498;
    plVar14 = (long *)PTR_DAT_043794a0;
    plVar18 = (long *)PTR_DAT_043794a8;
    puVar7 = PTR_LAB_04379590;
  } while( true );
}


