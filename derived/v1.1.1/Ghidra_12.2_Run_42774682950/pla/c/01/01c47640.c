/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c47640; name: FUN_01c47640
 */


void FUN_01c47640(long param_1,int param_2)

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
  long lVar10;
  int iVar11;
  long *plVar12;
  
  puVar7 = PTR_DAT_04379e80;
  puVar6 = PTR_DAT_04379e78;
  lVar10 = *(long *)(param_1 + 0x200);
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar11 = *(int *)(lVar10 + 0xc);
    do {
      plVar12 = *(long **)(lVar10 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        uVar9 = FUN_0095a420();
        *(undefined8 *)puVar7 = uVar9;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) {
          return;
        }
        if (plVar12 == (long *)puVar7) break;
        plVar12 = (long *)*plVar12;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x18);
          if (lVar10 == 0) {
            return;
          }
          plVar12 = (long *)(lVar10 + -0x50);
          uVar2 = *(uint *)(lVar10 + 0x1c4);
          uVar3 = uVar2 | 0x400;
          if (((uVar3 == uVar2) || (*(int *)(lVar10 + 0x1cc) == 0)) ||
             (*(int *)(lVar10 + 0x1d4) == param_2)) {
            if (uVar2 == 0) goto LAB_01c477a0;
          }
          else if ((uVar2 == 0) || (*(int *)(lVar10 + 0x1cc) == 2)) {
LAB_01c477a0:
            if (param_2 < 1) {
              FUN_01bdbf3c(plVar12,uVar3);
            }
            else {
              FUN_01bdbe50(plVar12,2,param_2);
            }
            *(uint *)(lVar10 + 0x1c4) = uVar3;
            goto LAB_01c47720;
          }
          *(uint *)(lVar10 + 0x1c4) = uVar3;
          if ((*(uint *)(lVar10 + 0x1c0) != uVar3) && (*(int *)(lVar10 + 0x1cc) == 0)) {
            *(uint *)(lVar10 + 0x1c0) = uVar3;
          }
LAB_01c47720:
          *(undefined4 *)(param_1 + 0x210) = 1;
          lVar10 = *(long *)(lVar10 + 8);
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01c47768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar12 + 0x20))(plVar12);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar8;
    } while (iVar8 != 0);
  }
  return;
}


