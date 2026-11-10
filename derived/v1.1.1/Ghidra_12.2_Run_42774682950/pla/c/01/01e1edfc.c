/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e1edfc; name: FUN_01e1edfc
 */


void FUN_01e1edfc(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  puVar7 = PTR_DAT_043794c8;
  puVar6 = PTR_DAT_043794c0;
  puVar5 = PTR_DAT_043794b8;
  puVar4 = PTR_DAT_043794b0;
  lVar16 = *(long *)(param_2 + 0x10);
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar12 = *(int *)(lVar16 + 0xc);
    do {
      plVar17 = *(long **)(lVar16 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar4), iVar11 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
          if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)puVar9 = uVar14;
            __cxa_guard_release(puVar8);
          }
          *(undefined **)puVar7 = puVar9;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar5 = puVar7;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) goto LAB_01e1ee24;
        if (plVar17 == (long *)puVar5) break;
        plVar17 = (long *)*plVar17;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar12) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar16 = *(long *)(lVar16 + 0x18);
          plVar17 = (long *)(lVar16 + -0x50);
          if (lVar16 != 0) {
            (**(code **)(*plVar17 + 0x10))(local_78,plVar17);
            local_88 = (undefined8 *)0x0;
            uStack_80 = 0;
            FUN_0087f944(&local_88,local_78);
            puVar10 = local_78[0];
            if (local_78[0] != (undefined8 *)0x0) {
              piVar1 = (int *)(local_78[0] + 1);
              do {
                iVar12 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar12 + -1 == 0) {
                local_78[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_68 = *puVar10;
                FUN_02a44274(lVar15 + 0xd8,&local_68);
              }
            }
            if (local_88 == (undefined8 *)0x0) {
              *param_1 = 0;
            }
            else {
              FUN_01e20458(param_1);
              puVar10 = local_88;
              if (local_88 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_88 + 1);
                do {
                  iVar12 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar12 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar12 + -1 == 0) {
                  local_88[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_78[0] = (undefined8 *)*puVar10;
                  FUN_02a44274(lVar15 + 0xd8,local_78);
                }
              }
            }
            uVar13 = FUN_02a43a5c(*(undefined8 *)(lVar16 + 8));
            if ((uVar13 & 1) == 0) {
              return;
            }
            (**(code **)(*plVar17 + 0x20))(plVar17);
            return;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01e1ee24:
  *param_1 = 0;
  return;
}


