/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183911c; name: FUN_0183911c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0183911c(long param_1,byte param_2,int param_3,int param_4)

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
  lVar12 = *(long *)(param_1 + 0x268);
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
          uVar3 = *(uint *)(lVar12 + 0x1c4);
          uVar2 = uVar3 & 0xfffffffe;
          if ((param_2 & 1) == 0) {
            uVar2 = uVar3 | 1;
          }
          bVar6 = (uVar3 != 0) != (uVar2 != 0);
          if ((((uVar2 == uVar3) || (((uVar2 != 0 ^ param_2) & 1) == 0)) ||
              (iVar13 = *(int *)(lVar12 + 0x1cc), iVar13 == 0)) ||
             (*(int *)(lVar12 + 0x1d4) == param_4)) {
            if (bVar6) goto LAB_018392cc;
LAB_0183922c:
            *(uint *)(lVar12 + 0x1c4) = uVar2;
            if ((*(uint *)(lVar12 + 0x1c0) != uVar2) && (*(int *)(lVar12 + 0x1cc) == 0)) {
              *(uint *)(lVar12 + 0x1c0) = uVar2;
            }
          }
          else {
            if ((param_2 & 1) != 0) {
              if (bVar6 || (iVar13 == 1 & param_2) != 0) goto LAB_018392cc;
              goto LAB_0183922c;
            }
            if (!bVar6 && iVar13 != 2) goto LAB_0183922c;
LAB_018392cc:
            if (param_4 < 1) {
              *(undefined8 *)(lVar12 + 0x1cc) = 0;
              uVar4 = *(undefined4 *)(lVar12 + 0x1dc);
              *(undefined4 *)(lVar12 + 0x1d4) = 0;
              *(undefined4 *)(lVar12 + 0x1d8) = uVar4;
              if (uVar2 == 0) {
                *(undefined4 *)(lVar12 + 0x1d8) = uVar4;
                FUN_01bdb280(uVar4,plVar14);
                if (*(int *)(lVar12 + 0x1c0) != 0) {
                  *(undefined4 *)(lVar12 + 0x1c0) = 0;
                  goto LAB_01839390;
                }
                goto LAB_018392f4;
              }
              *(undefined4 *)(lVar12 + 0x1d8) = 0;
              FUN_01bdb280(0,plVar14);
              if (*(uint *)(lVar12 + 0x1c0) == uVar2) goto LAB_018392f4;
              *(uint *)(lVar12 + 0x1c0) = uVar2;
LAB_01839390:
              FUN_01bdb4e8(plVar14);
              *(uint *)(lVar12 + 0x1c4) = uVar2;
            }
            else {
              if (uVar2 == 0) {
                FUN_01bdbe38(plVar14,0);
                uVar11 = 1;
              }
              else {
                uVar11 = 2;
              }
              FUN_01bdbe50(plVar14,uVar11,param_4);
LAB_018392f4:
              *(uint *)(lVar12 + 0x1c4) = uVar2;
            }
          }
          if (param_3 == 0) goto LAB_01839240;
          uVar3 = uVar2 & 0xfffffffd;
          if (param_3 == 1) {
            uVar3 = uVar2 | 2;
          }
          bVar6 = (uVar2 != 0) != (uVar3 != 0);
          if (((uVar3 == uVar2) || ((param_3 != 1) == (uVar3 != 0))) ||
             ((iVar13 = *(int *)(lVar12 + 0x1cc), iVar13 == 0 ||
              (*(int *)(lVar12 + 0x1d4) == param_4)))) {
            if (bVar6) goto LAB_018393e4;
          }
          else {
            bVar9 = iVar13 == 1;
            if (param_3 == 1) {
              bVar9 = iVar13 == 2;
            }
            if (bVar6 || bVar9) {
LAB_018393e4:
              if (param_4 < 1) {
                *(undefined8 *)(lVar12 + 0x1cc) = 0;
                uVar4 = *(undefined4 *)(lVar12 + 0x1dc);
                *(undefined4 *)(lVar12 + 0x1d4) = 0;
                *(undefined4 *)(lVar12 + 0x1d8) = uVar4;
                if (uVar3 == 0) {
                  *(undefined4 *)(lVar12 + 0x1d8) = uVar4;
                  FUN_01bdb280(uVar4,plVar14);
                  if (*(int *)(lVar12 + 0x1c0) != 0) {
                    *(undefined4 *)(lVar12 + 0x1c0) = 0;
                    goto LAB_0183946c;
                  }
                }
                else {
                  *(undefined4 *)(lVar12 + 0x1d8) = 0;
                  FUN_01bdb280(0,plVar14);
                  if (*(uint *)(lVar12 + 0x1c0) != uVar3) {
                    *(uint *)(lVar12 + 0x1c0) = uVar3;
LAB_0183946c:
                    FUN_01bdb4e8(plVar14);
                  }
                }
              }
              else {
                if (uVar3 == 0) {
                  FUN_01bdbe38(plVar14,0);
                  uVar11 = 1;
                }
                else {
                  uVar11 = 2;
                }
                FUN_01bdbe50(plVar14,uVar11,param_4);
              }
              *(uint *)(lVar12 + 0x1c4) = uVar3;
              goto LAB_01839240;
            }
          }
          *(uint *)(lVar12 + 0x1c4) = uVar3;
          if ((*(uint *)(lVar12 + 0x1c0) != uVar3) && (*(int *)(lVar12 + 0x1cc) == 0)) {
            *(uint *)(lVar12 + 0x1c0) = uVar3;
          }
LAB_01839240:
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
                    /* WARNING: Could not recover jumptable at 0x01839284. Too many branches */
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


