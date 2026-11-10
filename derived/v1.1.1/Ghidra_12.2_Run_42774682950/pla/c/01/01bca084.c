/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bca084; name: FUN_01bca084
 */


void FUN_01bca084(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  puVar7 = PTR_DAT_0437a6d8;
  puVar6 = PTR_LAB_04379590;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  lVar15 = *(long *)(param_1 + 0x240);
  lVar13 = *(long *)(param_1 + 0x238);
  if (lVar15 != lVar13 && lVar13 != lVar15) {
    do {
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      FUN_00aeb228(&local_70,lVar13);
      puVar8 = local_70;
      if (local_70 != (undefined8 *)0x0) {
        if (*(int *)((long)local_70 + 0xc) != 0) {
          piVar1 = (int *)((long)local_70 + 0xc);
          iVar10 = *(int *)((long)local_70 + 0xc);
          do {
            plVar16 = (long *)puVar8[2];
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
              uVar12 = FUN_00ad3750();
              *(undefined8 *)PTR_DAT_0437a6e0 = uVar12;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar16 == (long *)0x0) goto LAB_01bca1e8;
              if (plVar16 == (long *)PTR_DAT_0437a6e0) break;
              plVar16 = (long *)*plVar16;
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar10) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar14 = puVar8[3];
                if (lVar14 != 0) {
                  plVar16 = (long *)(lVar14 + -0x50);
                  lVar11 = FUN_02c90d14(plVar16);
                  if (((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x17c))) &&
                     (*(char *)(lVar11 + 0xc) != '\0')) {
                    FUN_02c91f14(plVar16);
                  }
                  lVar14 = *(long *)(lVar14 + 8);
                  piVar1 = (int *)(lVar14 + 0xc);
                  do {
                    iVar10 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar10 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar10 + -1 == 0) {
                    *(undefined8 *)(lVar14 + 0x18) = 0;
                    (**(code **)(*plVar16 + 0x20))(plVar16);
                  }
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar9;
          } while (iVar9 != 0);
        }
LAB_01bca1e8:
        puVar8 = local_70;
        if (local_70 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_70 + 1);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            local_70[2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
              FUN_00100250(puVar6,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar4);
            }
            lVar14 = *(long *)puVar5;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_58 = *puVar8;
            FUN_02a44274(lVar14 + 0xd8,&local_58);
          }
        }
      }
      lVar13 = lVar13 + 0x10;
    } while (lVar13 != lVar15);
  }
  return;
}


