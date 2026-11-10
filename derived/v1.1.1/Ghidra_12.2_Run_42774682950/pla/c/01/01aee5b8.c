/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aee5b8; name: FUN_01aee5b8
 */


uint FUN_01aee5b8(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_70 [2];
  long *local_60;
  undefined8 local_58;
  
  puVar8 = PTR_DAT_04379fd0;
  puVar7 = PTR_DAT_04379fc8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar14 = *(long *)(param_1 + 0x698);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar11 = *(int *)(lVar14 + 0xc);
    do {
      plVar15 = *(long **)(lVar14 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          uVar12 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar12;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01aee5dc;
        if (plVar15 == (long *)puVar8) break;
        plVar15 = (long *)*plVar15;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01aee634;
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 != 0) {
          plVar15 = (long *)(lVar14 + -0x50);
          FUN_018f8f5c(local_70,plVar15);
          if (local_70[0] == (undefined8 *)0x0) {
            local_60 = (long *)0x0;
            local_70[0] = (undefined8 *)puVar5;
            goto LAB_01aee690;
          }
          FUN_009b8630(&local_60);
          if (local_70[0] == (undefined8 *)0x0) goto LAB_01aee690;
          piVar1 = (int *)(local_70[0] + 1);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            local_70[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_58 = *local_70[0];
            FUN_02a44274(lVar13 + 0xd8,&local_58);
            if (local_60 == (long *)0x0) goto LAB_01aee7c4;
LAB_01aee698:
            uVar9 = FUN_01a36330();
            if (local_60 != (long *)0x0) {
              lVar13 = local_60[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 == 1) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*local_60 + 0x20))();
              }
            }
            bVar4 = true;
          }
          else {
LAB_01aee690:
            if (local_60 != (long *)0x0) goto LAB_01aee698;
LAB_01aee7c4:
            uVar9 = (uint)local_70[0];
            bVar4 = false;
          }
          lVar14 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar15 + 0x20))(plVar15);
          }
          if (bVar4) goto LAB_01aee5e0;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01aee634:
      iVar11 = iVar10;
    } while (iVar10 != 0);
  }
LAB_01aee5dc:
  uVar9 = 0;
LAB_01aee5e0:
  return uVar9 & 1;
}


