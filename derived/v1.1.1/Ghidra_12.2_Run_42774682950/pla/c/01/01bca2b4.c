/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bca2b4; name: FUN_01bca2b4
 */


void FUN_01bca2b4(long param_1)

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
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  puVar7 = PTR_DAT_0437a6d8;
  puVar6 = PTR_LAB_04379590;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  lVar14 = *(long *)(param_1 + 0x240);
  lVar12 = *(long *)(param_1 + 0x238);
  if (lVar14 != lVar12 && lVar12 != lVar14) {
    do {
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      FUN_00aeb228(&local_70,lVar12);
      puVar8 = local_70;
      if (local_70 != (undefined8 *)0x0) {
        if (*(int *)((long)local_70 + 0xc) != 0) {
          piVar1 = (int *)((long)local_70 + 0xc);
          iVar10 = *(int *)((long)local_70 + 0xc);
          do {
            plVar15 = (long *)puVar8[2];
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
              uVar11 = FUN_00ad3750();
              *(undefined8 *)PTR_DAT_0437a6e0 = uVar11;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar15 == (long *)0x0) goto LAB_01bca3fc;
              if (plVar15 == (long *)PTR_DAT_0437a6e0) break;
              plVar15 = (long *)*plVar15;
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
                lVar13 = puVar8[3];
                if (lVar13 != 0) {
                  plVar15 = (long *)(lVar13 + -0x50);
                  FUN_02c90b50(plVar15,1);
                  lVar13 = *(long *)(lVar13 + 8);
                  piVar1 = (int *)(lVar13 + 0xc);
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
                    *(undefined8 *)(lVar13 + 0x18) = 0;
                    (**(code **)(*plVar15 + 0x20))(plVar15);
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
LAB_01bca3fc:
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
            lVar13 = *(long *)puVar5;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_58 = *puVar8;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
      }
      lVar12 = lVar12 + 0x10;
    } while (lVar12 != lVar14);
  }
  return;
}


