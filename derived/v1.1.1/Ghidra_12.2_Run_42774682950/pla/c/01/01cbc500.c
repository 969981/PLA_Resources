/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cbc500; name: FUN_01cbc500
 */


undefined8 FUN_01cbc500(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 local_38;
  
  lVar9 = *(long *)(param_1 + 0x70);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    lVar8 = param_1;
    iVar5 = *(int *)(lVar9 + 0xc);
    do {
      plVar12 = *(long **)(lVar9 + 0x10);
      plVar6 = (long *)FUN_00ab38cc(lVar8);
      if (plVar12 == (long *)0x0) {
        return 1;
      }
      while (plVar12 != plVar6) {
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) {
          return 1;
        }
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar5) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x18);
          if (lVar9 == 0) {
            return 1;
          }
          plVar6 = (long *)(lVar9 + -0x50);
          uVar7 = FUN_01c35a88(plVar6);
          if ((uVar7 & 1) == 0) {
            uVar10 = 0;
          }
          else {
            puVar11 = *(undefined8 **)(param_1 + 0x70);
            *(undefined8 *)(param_1 + 0x70) = 0;
            if (puVar11 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar11 + 1);
              do {
                iVar5 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar5 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar5 + -1 == 0) {
                puVar11[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar8 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar8;
                local_38 = *puVar11;
                FUN_02a44274(lVar8 + 0xd8,&local_38);
              }
            }
            uVar10 = 1;
            *(undefined8 *)(param_1 + 0x78) = 0;
          }
          lVar9 = *(long *)(lVar9 + 8);
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar5 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))(plVar6);
          }
          return uVar10;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      lVar8 = 1;
      iVar5 = iVar2;
    } while (iVar2 != 0);
  }
  return 1;
}


