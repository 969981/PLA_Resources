/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aea040; name: FUN_00aea040
 */


void FUN_00aea040(long param_1,byte param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  byte *pbVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  undefined8 *puVar14;
  
  puVar4 = PTR_DAT_0437a6e0;
  plVar8 = *(long **)(param_1 + 0x268);
  plVar10 = *(long **)(param_1 + 0x270);
  if (plVar8 != plVar10) {
    pbVar9 = PTR_DAT_0437a6d8;
    do {
      lVar11 = *plVar8;
      if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
        piVar1 = (int *)(lVar11 + 0xc);
        iVar13 = *(int *)(lVar11 + 0xc);
        do {
          puVar14 = *(undefined8 **)(lVar11 + 0x10);
          if (((*pbVar9 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a6d8), iVar5 != 0)) {
            uVar7 = FUN_00ad3750();
            *(undefined8 *)puVar4 = uVar7;
            __cxa_guard_release(PTR_DAT_0437a6d8);
          }
          while( true ) {
            pbVar9 = PTR_DAT_0437a6d8;
            if (puVar14 == (undefined8 *)0x0) goto LAB_00aea084;
            if (puVar14 == (undefined8 *)puVar4) break;
            puVar14 = (undefined8 *)*puVar14;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar13) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar11 = *(long *)(lVar11 + 0x18);
              pbVar9 = PTR_DAT_0437a6d8;
              if (lVar11 != 0) {
                plVar12 = (long *)(lVar11 + -0x50);
                lVar6 = FUN_02c90d14(plVar12);
                if (lVar6 != 0) {
                  *(byte *)(lVar6 + 0xb) = param_2 & 1;
                }
                lVar11 = *(long *)(lVar11 + 8);
                piVar1 = (int *)(lVar11 + 0xc);
                do {
                  iVar13 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar13 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                pbVar9 = PTR_DAT_0437a6d8;
                if (iVar13 + -1 == 0) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*plVar12 + 0x20))(plVar12);
                  pbVar9 = PTR_DAT_0437a6d8;
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          pbVar9 = PTR_DAT_0437a6d8;
          iVar13 = iVar5;
        } while (iVar5 != 0);
      }
LAB_00aea084:
      plVar8 = plVar8 + 7;
    } while (plVar8 != plVar10);
  }
  return;
}


