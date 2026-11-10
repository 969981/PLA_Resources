/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce1928; name: FUN_00ce1928
 */


undefined1  [16] FUN_00ce1928(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar14;
  undefined1 auVar13 [16];
  undefined1 in_q3 [16];
  undefined8 uVar15;
  
  plVar9 = *(long **)(param_1 + 0x1f0);
  plVar2 = *(long **)(param_1 + 0x1f8);
  uVar12 = 0;
  uVar14 = 0;
  if (plVar9 != plVar2) {
    pbVar7 = PTR_DAT_043794b0;
    uVar6 = in_q3._0_8_;
    uVar15 = in_q3._8_8_;
    do {
      uVar14 = uVar15;
      uVar12 = uVar6;
      uVar6 = uVar12;
      uVar15 = uVar14;
      if (*param_2 == plVar9[2]) {
        lVar8 = *plVar9;
        if (lVar8 != 0) {
          if (*(int *)(lVar8 + 0xc) != 0) {
            piVar1 = (int *)(lVar8 + 0xc);
            iVar10 = *(int *)(lVar8 + 0xc);
            do {
              puVar11 = *(undefined8 **)(lVar8 + 0x10);
              if (((*pbVar7 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(0,PTR_DAT_043794b0), iVar5 != 0)) {
                if (((*PTR_DAT_043794c0 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar5 != 0)) {
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar5 != 0)) {
                    uVar6 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar6;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_043794c0);
                }
                *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
                __cxa_guard_release(PTR_DAT_043794b0);
              }
              while( true ) {
                pbVar7 = PTR_DAT_043794b0;
                uVar6 = uVar12;
                uVar15 = uVar14;
                if (puVar11 == (undefined8 *)0x0) goto LAB_00ce195c;
                if (puVar11 == (undefined8 *)PTR_DAT_043794b8) break;
                puVar11 = (undefined8 *)*puVar11;
              }
              iVar5 = *piVar1;
              if (iVar5 == iVar10) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar10 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar8 = *(long *)(lVar8 + 0x18);
                  pbVar7 = PTR_DAT_043794b0;
                  if (lVar8 != 0) {
                    plVar9 = (long *)(lVar8 + -0x50);
                    (**(code **)(*plVar9 + 0x40))(plVar9);
                    lVar8 = *(long *)(lVar8 + 8);
                    piVar1 = (int *)(lVar8 + 0xc);
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
                      *(undefined8 *)(lVar8 + 0x18) = 0;
                      (**(code **)(*plVar9 + 0x20))(plVar9);
                    }
                    goto LAB_00ce1a64;
                  }
                  break;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              pbVar7 = PTR_DAT_043794b0;
              iVar10 = iVar5;
            } while (iVar5 != 0);
          }
        }
      }
LAB_00ce195c:
      uVar14 = 0;
      uVar12 = 0;
      plVar9 = plVar9 + 4;
    } while (plVar9 != plVar2);
  }
LAB_00ce1a64:
  auVar13._8_8_ = uVar14;
  auVar13._0_8_ = uVar12;
  return auVar13;
}


