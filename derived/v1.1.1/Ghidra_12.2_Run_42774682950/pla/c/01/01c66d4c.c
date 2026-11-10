/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c66d4c; name: FUN_01c66d4c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01c66d4c(long param_1)

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
  long *local_48;
  
  puVar7 = PTR_DAT_04379e80;
  puVar6 = PTR_DAT_04379e78;
  lVar11 = *(long *)(param_1 + 0x10);
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
        if (plVar13 == (long *)0x0) goto LAB_01c66d6c;
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
            bVar5 = (uVar3 != 0) != ((uVar3 & 0xfffffffb) != 0);
            if ((((uVar2 == uVar3) || (uVar2 != 0)) || (*(int *)(lVar11 + 0x1cc) == 0)) ||
               (*(int *)(lVar11 + 0x1d4) == 0)) {
              if (bVar5) goto LAB_01c66f2c;
LAB_01c66eb0:
              *(uint *)(lVar11 + 0x1c4) = uVar2;
              if ((*(uint *)(lVar11 + 0x1c0) != uVar2) && (*(int *)(lVar11 + 0x1cc) == 0)) {
                *(uint *)(lVar11 + 0x1c0) = uVar2;
              }
            }
            else {
              if (!bVar5 && *(int *)(lVar11 + 0x1cc) != 1) goto LAB_01c66eb0;
LAB_01c66f2c:
              FUN_01bdbf3c(plVar13,uVar2);
              *(uint *)(lVar11 + 0x1c4) = uVar2;
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
LAB_01c66d6c:
  FUN_016c24d0(&local_48,param_1);
  plVar13 = local_48;
  if (local_48 != (long *)0x0) {
    plVar10 = (long *)local_48[0x58];
    if (plVar10 != (long *)0x0) {
      do {
        *(uint *)(plVar10 + 3) = *(uint *)(plVar10 + 3) & 0xfffffffb;
        FUN_01839500(plVar13);
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
      if (local_48 == (long *)0x0) {
        return;
      }
    }
    lVar11 = local_48[0xb];
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
      (**(code **)(*local_48 + 0x20))(local_48);
    }
  }
  return;
}


