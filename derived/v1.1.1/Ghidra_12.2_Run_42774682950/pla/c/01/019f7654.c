/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019f7654; name: FUN_019f7654
 */


undefined8 FUN_019f7654(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  byte *pbVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *local_80 [2];
  long *local_70;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_0437af78;
  puVar7 = PTR_DAT_043795e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794a8;
  lVar15 = *(long *)(param_1 + 0x250);
  lVar16 = *(long *)(param_1 + 600);
  if (lVar15 != lVar16) {
    pbVar12 = PTR_DAT_0437af70;
    do {
      lVar17 = *(long *)(lVar15 + 0x18);
      if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
        piVar1 = (int *)(lVar17 + 0xc);
        iVar10 = *(int *)(lVar17 + 0xc);
        do {
          puVar18 = *(undefined8 **)(lVar17 + 0x10);
          if (((*pbVar12 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437af70), iVar9 != 0))
          {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                uVar11 = FUN_0087f8f0();
                *(undefined8 *)puVar6 = uVar11;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)puVar7 = puVar6;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar8 = puVar7;
            __cxa_guard_release(PTR_DAT_0437af70);
          }
          while( true ) {
            pbVar12 = PTR_DAT_0437af70;
            if (puVar18 == (undefined8 *)0x0) goto LAB_019f76b4;
            if (puVar18 == (undefined8 *)puVar8) break;
            puVar18 = (undefined8 *)*puVar18;
          }
          iVar9 = *piVar1;
          if (iVar9 == iVar10) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_019f76f8;
            lVar17 = *(long *)(lVar17 + 0x18);
            plVar13 = (long *)(lVar17 + -0x50);
            pbVar12 = PTR_DAT_0437af70;
            if (lVar17 != 0) {
              FUN_02be88ac(local_80,plVar13,0);
              FUN_00ab5ae0(&local_70,local_80);
              puVar18 = local_80[0];
              if (local_80[0] != (undefined8 *)0x0) {
                piVar1 = (int *)(local_80[0] + 1);
                do {
                  iVar10 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 + -1 == 0) {
                  local_80[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar14 = *(long *)PTR_DAT_043794a0;
                  *(long *)puVar5 = lVar14;
                  local_68 = *puVar18;
                  FUN_02a44274(lVar14 + 0xd8,&local_68);
                }
              }
              if (local_70 == (long *)0x0) {
LAB_019f788c:
                bVar4 = true;
              }
              else {
                lVar14 = local_70[0xb];
                piVar1 = (int *)(lVar14 + 0xc);
                iVar10 = *(int *)((long)local_70 + 0x7c);
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
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                  (**(code **)(*local_70 + 0x20))();
                }
                if (iVar10 != 2) goto LAB_019f788c;
                bVar4 = false;
              }
              lVar17 = *(long *)(lVar17 + 8);
              piVar1 = (int *)(lVar17 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar3 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar2) {
                  *piVar1 = iVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*plVar13 + 0x20))(plVar13);
              }
              pbVar12 = PTR_DAT_0437af70;
              if (bVar4) {
                return 0;
              }
            }
            break;
          }
          ClearExclusiveLocal();
LAB_019f76f8:
          pbVar12 = PTR_DAT_0437af70;
          iVar10 = iVar9;
        } while (iVar9 != 0);
      }
LAB_019f76b4:
      lVar15 = lVar15 + 0x60;
    } while (lVar15 != lVar16);
  }
  return 1;
}


