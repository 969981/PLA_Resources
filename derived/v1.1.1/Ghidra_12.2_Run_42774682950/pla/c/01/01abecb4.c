/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01abecb4; name: FUN_01abecb4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01abecb4(long param_1,byte param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  long *local_58;
  
  puVar7 = PTR_DAT_04379e80;
  puVar6 = PTR_DAT_04379e78;
  lVar11 = *(long *)(param_1 + 0x218);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar12 = *(int *)(lVar11 + 0xc);
    do {
      plVar13 = *(long **)(lVar11 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        uVar9 = FUN_0095a420();
        *(undefined8 *)puVar7 = uVar9;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_01abecdc;
        if (plVar13 == (long *)puVar7) break;
        plVar13 = (long *)*plVar13;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          if (lVar11 != 0) {
            plVar13 = (long *)(lVar11 + -0x50);
            uVar3 = *(uint *)(lVar11 + 0x1c4);
            uVar2 = uVar3 & 0xfffffffb;
            if ((param_2 & 1) == 0) {
              uVar2 = uVar3 | 4;
            }
            bVar5 = (uVar3 != 0) != (uVar2 != 0);
            if ((((uVar2 == uVar3) || (((uVar2 != 0 ^ param_2) & 1) == 0)) ||
                (iVar12 = *(int *)(lVar11 + 0x1cc), iVar12 == 0)) ||
               (*(int *)(lVar11 + 0x1d4) == param_3)) {
              if (!bVar5) goto LAB_01abee98;
LAB_01abef28:
              if (param_3 < 1) {
                FUN_01bdbf3c(plVar13,uVar2);
              }
              else {
                if (uVar2 == 0) {
                  FUN_01bdbe38(plVar13,0);
                  uVar9 = 1;
                }
                else {
                  uVar9 = 2;
                }
                FUN_01bdbe50(plVar13,uVar9,param_3);
              }
              *(uint *)(lVar11 + 0x1c4) = uVar2;
            }
            else {
              if ((param_2 & 1) != 0) {
                if (!bVar5 && (iVar12 == 1 & param_2) == 0) goto LAB_01abee98;
                goto LAB_01abef28;
              }
              if (bVar5 || iVar12 == 2) goto LAB_01abef28;
LAB_01abee98:
              *(uint *)(lVar11 + 0x1c4) = uVar2;
              if ((*(uint *)(lVar11 + 0x1c0) != uVar2) && (*(int *)(lVar11 + 0x1cc) == 0)) {
                *(uint *)(lVar11 + 0x1c0) = uVar2;
              }
            }
            lVar11 = *(long *)(lVar11 + 8);
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*plVar13 + 0x20))(plVar13);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar8;
    } while (iVar8 != 0);
  }
LAB_01abecdc:
  FUN_016c24d0(&local_58,param_1 + 0x208);
  plVar13 = local_58;
  if (local_58 != (long *)0x0) {
    plVar10 = (long *)local_58[0x58];
    if (plVar10 != (long *)0x0) {
      if ((param_2 & 1) == 0) {
        *(uint *)(plVar10 + 3) = *(uint *)(plVar10 + 3) | 4;
        FUN_01839500(local_58);
        for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          *(uint *)(plVar10 + 3) = *(uint *)(plVar10 + 3) | 4;
          FUN_01839500(plVar13);
        }
      }
      else {
        *(uint *)(plVar10 + 3) = *(uint *)(plVar10 + 3) & 0xfffffffb;
        FUN_01839500(local_58);
        for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          *(uint *)(plVar10 + 3) = *(uint *)(plVar10 + 3) & 0xfffffffb;
          FUN_01839500(plVar13);
        }
      }
    }
    if (local_58 != (long *)0x0) {
      lVar11 = local_58[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  return;
}


