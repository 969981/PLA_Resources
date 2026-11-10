/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01916028; name: FUN_01916028
 */


void FUN_01916028(long *param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  puVar6 = PTR_DAT_043794c8;
  puVar5 = PTR_DAT_043794b8;
  puVar4 = PTR_DAT_043794b0;
  lVar13 = *param_1;
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar11 = *(int *)(lVar13 + 0xc);
    do {
      plVar15 = *(long **)(lVar13 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar10 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar8 = uVar12;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar6 = puVar8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar5 = puVar6;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) {
          return;
        }
        if (plVar15 == (long *)puVar5) break;
        plVar15 = (long *)*plVar15;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = *(long *)(lVar13 + 0x18);
          plVar15 = (long *)(lVar13 + -0x50);
          if (lVar13 == 0) {
            return;
          }
          (**(code **)(*plVar15 + 0x10))(local_78,plVar15);
          local_88 = (undefined8 *)0x0;
          uStack_80 = 0;
          FUN_0087f944(&local_88,local_78);
          puVar9 = local_78[0];
          if (local_78[0] != (undefined8 *)0x0) {
            piVar1 = (int *)(local_78[0] + 1);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              local_78[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar14;
              local_68 = *puVar9;
              FUN_02a44274(lVar14 + 0xd8,&local_68);
            }
          }
          FUN_0191632c(&local_88,param_2 & 1,1);
          puVar9 = local_88;
          if (local_88 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_88 + 1);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              local_88[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar14;
              local_78[0] = (undefined8 *)*puVar9;
              FUN_02a44274(lVar14 + 0xd8,local_78);
            }
          }
          lVar13 = *(long *)(lVar13 + 8);
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar15 + 0x20))(plVar15);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar10;
    } while (iVar10 != 0);
  }
  return;
}


