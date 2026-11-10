/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018383d4; name: FUN_018383d4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_018383d4(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  
  puVar8 = PTR_DAT_04379e80;
  puVar7 = PTR_DAT_04379e78;
  if (*(char *)(param_1 + 0x27d) == '\0') {
    lVar12 = *(long *)(param_1 + 0x268);
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar11 = *(int *)(lVar12 + 0xc);
      do {
        plVar13 = *(long **)(lVar12 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          uVar10 = FUN_0095a420();
          *(undefined8 *)puVar8 = uVar10;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_01838414;
          if (plVar13 == (long *)puVar8) break;
          plVar13 = (long *)*plVar13;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01838444;
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 != 0) {
            plVar13 = (long *)(lVar12 + -0x50);
            iVar11 = (int)DAT_042284a0;
            uVar3 = *(uint *)(lVar12 + 0x1c4);
            uVar2 = uVar3 & 0xffffefff;
            bVar6 = (uVar3 != 0) == ((uVar3 & 0xffffefff) != 0);
            if ((((uVar2 == uVar3) || (uVar2 != 0)) || (*(int *)(lVar12 + 0x1cc) == 0)) ||
               (*(int *)(lVar12 + 0x1d4) == iVar11)) {
              if (bVar6) goto LAB_018384e4;
LAB_01838564:
              if (iVar11 < 1) {
                *(undefined8 *)(lVar12 + 0x1cc) = 0;
                uVar4 = *(undefined4 *)(lVar12 + 0x1dc);
                *(undefined4 *)(lVar12 + 0x1d4) = 0;
                *(undefined4 *)(lVar12 + 0x1d8) = uVar4;
                if (uVar2 == 0) {
                  *(undefined4 *)(lVar12 + 0x1d8) = uVar4;
                  FUN_01bdb280(uVar4,plVar13);
                  if (*(int *)(lVar12 + 0x1c0) != 0) {
                    *(undefined4 *)(lVar12 + 0x1c0) = 0;
                    goto LAB_018385cc;
                  }
                }
                else {
                  *(undefined4 *)(lVar12 + 0x1d8) = 0;
                  FUN_01bdb280(0,plVar13);
                  if (*(uint *)(lVar12 + 0x1c0) != uVar2) {
                    *(uint *)(lVar12 + 0x1c0) = uVar2;
LAB_018385cc:
                    FUN_01bdb4e8(plVar13);
                  }
                }
              }
              else {
                if (uVar2 == 0) {
                  FUN_01bdbe38(plVar13,0);
                  uVar10 = 1;
                }
                else {
                  uVar10 = 2;
                }
                FUN_01bdbe50(plVar13,uVar10,iVar11);
              }
              *(uint *)(lVar12 + 0x1c4) = uVar2;
            }
            else {
              if (!bVar6 || *(int *)(lVar12 + 0x1cc) == 1) goto LAB_01838564;
LAB_018384e4:
              *(uint *)(lVar12 + 0x1c4) = uVar2;
              if ((*(uint *)(lVar12 + 0x1c0) != uVar2) && (*(int *)(lVar12 + 0x1cc) == 0)) {
                *(uint *)(lVar12 + 0x1c0) = uVar2;
              }
            }
            lVar12 = *(long *)(lVar12 + 8);
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar11 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*plVar13 + 0x20))(plVar13);
            }
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01838444:
        iVar11 = iVar9;
      } while (iVar9 != 0);
    }
LAB_01838414:
    *(undefined1 *)(param_1 + 0x27d) = 1;
  }
  return;
}


