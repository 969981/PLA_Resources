/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019e088c; name: FUN_019e088c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_019e088c(long param_1,byte param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  
  puVar7 = PTR_DAT_04379e80;
  puVar6 = PTR_DAT_04379e78;
  lVar11 = *(long *)(param_1 + 0x270);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar12 = *(int *)(lVar11 + 0xc);
    do {
      plVar13 = *(long **)(lVar11 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
        uVar10 = FUN_0095a420();
        *(undefined8 *)puVar7 = uVar10;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) {
          return;
        }
        if (plVar13 == (long *)puVar7) break;
        plVar13 = (long *)*plVar13;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          if (lVar11 == 0) {
            return;
          }
          plVar13 = (long *)(lVar11 + -0x50);
          uVar3 = *(uint *)(lVar11 + 0x1c4);
          uVar2 = uVar3 & 0xfffff7ff;
          if ((param_2 & 1) == 0) {
            uVar2 = uVar3 | 0x800;
          }
          bVar5 = (uVar3 != 0) == (uVar2 != 0);
          if ((((uVar2 == uVar3) || (((uVar2 != 0 ^ param_2) & 1) == 0)) ||
              (iVar12 = *(int *)(lVar11 + 0x1cc), iVar12 == 0)) ||
             (*(int *)(lVar11 + 0x1d4) == param_3)) {
            if (bVar5) goto LAB_019e0988;
          }
          else {
            if ((param_2 & 1) == 0) {
              uVar8 = iVar12 != 2;
            }
            else {
              uVar8 = (iVar12 == 1 & param_2) == 0;
            }
            if (bVar5 && (bool)uVar8) {
LAB_019e0988:
              *(uint *)(lVar11 + 0x1c4) = uVar2;
              if ((*(uint *)(lVar11 + 0x1c0) != uVar2) && (*(int *)(lVar11 + 0x1cc) == 0)) {
                *(uint *)(lVar11 + 0x1c0) = uVar2;
              }
              goto LAB_019e0998;
            }
          }
          if (param_3 < 1) {
            FUN_01bdbf3c(plVar13,uVar2);
          }
          else {
            if (uVar2 == 0) {
              FUN_01bdbe38(plVar13,0);
              uVar10 = 1;
            }
            else {
              uVar10 = 2;
            }
            FUN_01bdbe50(plVar13,uVar10,param_3);
          }
          *(uint *)(lVar11 + 0x1c4) = uVar2;
LAB_019e0998:
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
                    /* WARNING: Could not recover jumptable at 0x019e09d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar13 + 0x20))(plVar13);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar9;
    } while (iVar9 != 0);
  }
  return;
}


