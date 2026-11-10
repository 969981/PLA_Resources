/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183d134; name: FUN_0183d134
 */


void FUN_0183d134(float param_1,long param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  
  puVar8 = PTR_DAT_04379e80;
  puVar7 = PTR_DAT_04379e78;
  lVar12 = *(long *)(param_2 + 0x268);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar13 = *(int *)(lVar12 + 0xc);
    do {
      plVar14 = *(long **)(lVar12 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        uVar11 = FUN_0095a420();
        *(undefined8 *)puVar8 = uVar11;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) {
          return;
        }
        if (plVar14 == (long *)puVar8) break;
        plVar14 = (long *)*plVar14;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar13) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            return;
          }
          plVar14 = (long *)(lVar12 + -0x50);
          FUN_01bdbed8(param_1,plVar14);
          if (param_3 == 0) goto LAB_0183d258;
          uVar3 = *(uint *)(lVar12 + 0x1c4);
          uVar2 = uVar3 & (param_3 ^ 0xffffffff);
          if (param_1 <= 0.0) {
            uVar2 = uVar3 | param_3;
          }
          bVar6 = (uVar3 != 0) != (uVar2 != 0);
          if ((((uVar2 == uVar3) || (0.0 < param_1 == (uVar2 != 0))) ||
              (iVar13 = *(int *)(lVar12 + 0x1cc), iVar13 == 0)) || (*(int *)(lVar12 + 0x1d4) == 0))
          {
            if (bVar6) goto LAB_0183d2e4;
          }
          else {
            if (0.0 < param_1) {
              bVar9 = 0.0 < param_1 && iVar13 == 1;
            }
            else {
              bVar9 = iVar13 == 2;
            }
            if (bVar6 || bVar9) {
LAB_0183d2e4:
              *(undefined8 *)(lVar12 + 0x1cc) = 0;
              uVar4 = *(undefined4 *)(lVar12 + 0x1dc);
              *(undefined4 *)(lVar12 + 0x1d4) = 0;
              *(undefined4 *)(lVar12 + 0x1d8) = uVar4;
              if (uVar2 == 0) {
                *(undefined4 *)(lVar12 + 0x1d8) = uVar4;
                FUN_01bdb280(uVar4,plVar14);
                if (*(int *)(lVar12 + 0x1c0) != 0) {
                  *(undefined4 *)(lVar12 + 0x1c0) = 0;
                  goto LAB_0183d31c;
                }
              }
              else {
                *(undefined4 *)(lVar12 + 0x1d8) = 0;
                FUN_01bdb280(0,plVar14);
                if (*(uint *)(lVar12 + 0x1c0) != uVar2) {
                  *(uint *)(lVar12 + 0x1c0) = uVar2;
LAB_0183d31c:
                  FUN_01bdb4e8(plVar14);
                }
              }
              *(uint *)(lVar12 + 0x1c4) = uVar2;
              goto LAB_0183d258;
            }
          }
          *(uint *)(lVar12 + 0x1c4) = uVar2;
          if ((*(uint *)(lVar12 + 0x1c0) != uVar2) && (*(int *)(lVar12 + 0x1cc) == 0)) {
            *(uint *)(lVar12 + 0x1c0) = uVar2;
          }
LAB_0183d258:
          lVar12 = *(long *)(lVar12 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0183d298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar14 + 0x20))(plVar14);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar10;
    } while (iVar10 != 0);
  }
  return;
}


