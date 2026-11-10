/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab0f5c; name: FUN_00ab0f5c
 */


void FUN_00ab0f5c(undefined8 *param_1)

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
  long lVar12;
  long lVar13;
  long *plVar14;
  long *local_78;
  undefined8 *local_70 [2];
  long *local_60;
  undefined8 local_58;
  
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar13 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar13;
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar13 = *(long *)(lVar13 + 0xd8);
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar10 = *(int *)(lVar13 + 0xc);
    do {
      plVar14 = *(long **)(lVar13 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar11;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_00ab0fa8;
        if (plVar14 == (long *)puVar8) break;
        plVar14 = (long *)*plVar14;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 != 0) {
            plVar14 = (long *)(lVar13 + -0x50);
            FUN_0199c138(&local_78,plVar14);
            FUN_01aeda18(local_70,local_78);
            if (local_70[0] == (undefined8 *)0x0) {
              local_60 = (long *)0x0;
              goto LAB_00ab10c4;
            }
            FUN_00959eac(&local_60);
            if (local_70[0] == (undefined8 *)0x0) goto LAB_00ab10c4;
            piVar1 = (int *)(local_70[0] + 1);
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
              local_70[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_58 = *local_70[0];
              FUN_02a44274(lVar12 + 0xd8,&local_58);
              if (local_78 == (long *)0x0) goto LAB_00ab10e8;
LAB_00ab10cc:
              lVar12 = local_78[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 + -1 != 0) goto LAB_00ab10e8;
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*local_78 + 0x20))();
              if (local_60 != (long *)0x0) goto LAB_00ab10f0;
LAB_00ab1188:
              bVar4 = false;
            }
            else {
LAB_00ab10c4:
              if (local_78 != (long *)0x0) goto LAB_00ab10cc;
LAB_00ab10e8:
              if (local_60 == (long *)0x0) goto LAB_00ab1188;
LAB_00ab10f0:
              FUN_00956dac(param_1,local_60 + 0x35);
              if (local_60 != (long *)0x0) {
                lVar12 = local_60[0xb];
                piVar1 = (int *)(lVar12 + 0xc);
                do {
                  iVar10 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 == 1) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*local_60 + 0x20))();
                }
              }
              bVar4 = true;
            }
            lVar13 = *(long *)(lVar13 + 8);
            piVar1 = (int *)(lVar13 + 0xc);
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
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar14 + 0x20))(plVar14);
            }
            if (bVar4) {
              return;
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
LAB_00ab0fa8:
  *param_1 = 0;
  return;
}


