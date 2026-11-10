/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026189d8; name: FUN_026189d8
 */


void FUN_026189d8(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  
  FUN_01a4e8cc();
  uVar7 = (**(code **)(*param_1 + 0xf0))(param_1);
  if ((uVar7 & 1) != 0) {
    (**(code **)(*param_1 + 0x3f8))(param_1);
    if ((char)param_1[0x17d] != '\0') {
      iVar11 = (int)param_1[0x17c];
      lVar10 = param_1[0x16a];
      if (*(int *)((long)param_1 + 0xbe4) < iVar11) {
        iVar11 = *(int *)((long)param_1 + 0xbe4) + 1;
      }
      *(int *)((long)param_1 + 0xbe4) = iVar11;
      puVar5 = PTR_DAT_0437a6e0;
      puVar4 = PTR_DAT_0437a6d8;
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
        piVar1 = (int *)(lVar10 + 0xc);
        iVar11 = *(int *)(lVar10 + 0xc);
        do {
          plVar12 = *(long **)(lVar10 + 0x10);
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            uVar9 = FUN_00ad3750();
            *(undefined8 *)puVar5 = uVar9;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_02618a24;
            if (plVar12 == (long *)puVar5) break;
            plVar12 = (long *)*plVar12;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar11) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar10 = *(long *)(lVar10 + 0x18);
              if (lVar10 != 0) {
                plVar12 = (long *)(lVar10 + -0x50);
                lVar8 = FUN_02c90d14(plVar12);
                if (lVar8 != 0) {
                  FUN_002667c0((*(float *)(param_1 + 0x17b) * (float)*(int *)((long)param_1 + 0xbe4)
                               ) / (float)(int)param_1[0x17c]);
                  FUN_002667e0(*(undefined4 *)((long)param_1 + 0xbdc),lVar8);
                }
                lVar10 = *(long *)(lVar10 + 8);
                piVar1 = (int *)(lVar10 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar11 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar10 + 0x18) = 0;
                  (**(code **)(*plVar12 + 0x20))(plVar12);
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar6;
        } while (iVar6 != 0);
      }
    }
LAB_02618a24:
    iVar11 = (int)param_1[0x185] + -1;
    if ((0 < (int)param_1[0x185]) && (*(int *)(param_1 + 0x185) = iVar11, iVar11 == 0)) {
      FUN_01a5bd74(param_1,&DAT_03a7dad8,0);
      return;
    }
  }
  return;
}


