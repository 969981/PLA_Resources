/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183b638; name: FUN_0183b638
 */


undefined8 FUN_0183b638(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  bool bVar19;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  
  puVar9 = PTR_LAB_04379590;
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  lVar16 = *(long *)(param_1 + 0x400);
  lVar17 = *(long *)(param_1 + 0x408);
  if (lVar16 != lVar17) {
    bVar19 = false;
    do {
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_0095aa3c(&local_80,lVar16);
      local_70 = *(undefined8 *)(lVar16 + 0x10);
      FUN_0183af10(&local_68,&local_80);
      plVar14 = local_68;
      if (local_68 != (long *)0x0) {
        if (*(char *)((long)local_68 + 0xc) == '\0') {
          bVar11 = (**(code **)(*local_68 + 0x48))(local_68);
          *(byte *)((long)plVar14 + 0xc) = bVar11 & 1;
          lVar15 = plVar14[1];
          *(int *)(plVar14 + 1) = (int)lVar15 + 1;
          if (((bVar11 & 1) == 0) && ((int)lVar15 < 0x3ff)) {
            bVar19 = true;
          }
        }
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
      puVar10 = local_80;
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
          if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
            FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar15 = *(long *)puVar7;
          *(long *)puVar8 = lVar15;
          local_68 = (long *)*puVar10;
          FUN_02a44274(lVar15 + 0xd8,&local_68);
        }
      }
      lVar16 = lVar16 + 0x18;
    } while (lVar16 != lVar17);
    if (bVar19) {
      return 0;
    }
  }
  puVar9 = PTR_LAB_04379590;
  lVar16 = *(long *)(param_1 + 0x2f8);
  lVar17 = *(long *)(param_1 + 0x300);
  do {
    if (lVar16 == lVar17) {
      return 1;
    }
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_01841e68(&local_80,lVar16);
    puVar10 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      if (*(int *)((long)local_80 + 0xc) != 0) {
        piVar1 = (int *)((long)local_80 + 0xc);
        iVar13 = *(int *)((long)local_80 + 0xc);
        do {
          plVar18 = (long *)puVar10[2];
          plVar14 = (long *)FUN_018415dc();
          uVar12 = 0;
          puVar5 = local_80;
          if (plVar18 == (long *)0x0) goto joined_r0x0183b8d0;
          while (plVar18 != plVar14) {
            plVar18 = (long *)*plVar18;
            if (plVar18 == (long *)0x0) {
              uVar12 = 0;
              goto joined_r0x0183b8d0;
            }
          }
          iVar2 = *piVar1;
          if (iVar2 == iVar13) {
            cVar3 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = iVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar15 = puVar10[3];
              if (lVar15 == 0) {
                uVar12 = 0;
              }
              else {
                plVar14 = (long *)(lVar15 + -0x50);
                uVar12 = FUN_01beb4e0(plVar14);
                uVar12 = ~uVar12 & 1;
                lVar15 = *(long *)(lVar15 + 8);
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  iVar13 = *piVar1;
                  cVar3 = '\x01';
                  bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar19) {
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
              goto joined_r0x0183b8d0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar13 = iVar2;
        } while (iVar2 != 0);
      }
      uVar12 = 0;
      puVar5 = local_80;
joined_r0x0183b8d0:
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        do {
          iVar13 = *piVar1;
          cVar3 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 + -1 == 0) {
          puVar5[2] = 0;
          local_80 = puVar5;
          if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
            FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar15 = *(long *)puVar7;
          *(long *)puVar8 = lVar15;
          local_68 = (long *)*puVar5;
          FUN_02a44274(lVar15 + 0xd8,&local_68);
        }
      }
      if (uVar12 != 0) {
        return 0;
      }
    }
    lVar16 = lVar16 + 0x10;
  } while( true );
}


