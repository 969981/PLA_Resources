/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025eb488; name: FUN_025eb488
 */


void FUN_025eb488(long param_1,ulong param_2)

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
  undefined8 *local_70 [2];
  long *local_60;
  undefined8 local_58;
  
  *(undefined1 *)(param_1 + 0x220) = 0;
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if ((param_2 & 1) == 0) {
    lVar12 = *(long *)(param_1 + 0x248);
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar10 = *(int *)(lVar12 + 0xc);
      do {
        plVar14 = *(long **)(lVar12 + 0x10);
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
          if (plVar14 == (long *)0x0) goto LAB_025eb4b4;
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
          if (cVar3 != '\0') goto LAB_025eb540;
          lVar12 = *(long *)(lVar12 + 0x18);
          plVar14 = (long *)(lVar12 + -0x50);
          if (lVar12 != 0) {
            FUN_0199f17c(local_70,plVar14);
            if (local_70[0] == (undefined8 *)0x0) {
              local_60 = (long *)0x0;
              goto LAB_025eb5ac;
            }
            FUN_01964348(&local_60);
            if (local_70[0] == (undefined8 *)0x0) goto LAB_025eb5ac;
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
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_58 = *local_70[0];
              FUN_02a44274(lVar13 + 0xd8,&local_58);
              if (local_60 != (long *)0x0) goto LAB_025eb64c;
LAB_025eb5b4:
              bVar4 = false;
            }
            else {
LAB_025eb5ac:
              if (local_60 == (long *)0x0) goto LAB_025eb5b4;
LAB_025eb64c:
              bVar4 = true;
              FUN_01f41bdc(local_60,1);
              if (local_60 != (long *)0x0) {
                lVar13 = local_60[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
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
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*local_60 + 0x20))();
                }
                bVar4 = true;
              }
            }
            lVar12 = *(long *)(lVar12 + 8);
            piVar1 = (int *)(lVar12 + 0xc);
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
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*plVar14 + 0x20))(plVar14);
            }
            if (bVar4) {
              return;
            }
          }
          break;
        }
        ClearExclusiveLocal();
LAB_025eb540:
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_025eb4b4:
    local_70[0] = (undefined8 *)0x57ba8020944ad222;
    FUN_0165b1f8(local_70,&DAT_cbf29ce484222645,&DAT_cbf29ce484222645,&DAT_cbf29ce484222645,
                 &DAT_cbf29ce484222645,&DAT_cbf29ce484222645);
  }
  return;
}


