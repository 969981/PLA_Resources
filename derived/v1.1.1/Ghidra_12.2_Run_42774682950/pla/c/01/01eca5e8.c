/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01eca5e8; name: FUN_01eca5e8
 */


void FUN_01eca5e8(undefined8 *param_1,long param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  
  plVar10 = *(long **)(param_2 + 0x250);
  plVar12 = *(long **)(param_2 + 600);
  do {
    if (plVar10 == plVar12) {
      *param_1 = 0;
      return;
    }
    lVar9 = *plVar10;
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
      piVar1 = (int *)(lVar9 + 0xc);
      iVar6 = *(int *)(lVar9 + 0xc);
      do {
        uVar7 = FUN_01ecab44(*(undefined8 *)(lVar9 + 0x10));
        if ((uVar7 & 1) == 0) break;
        iVar2 = *piVar1;
        if (iVar2 == iVar6) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar9 = *(long *)(lVar9 + 0x18);
            if (lVar9 != 0) {
              if (*(int *)(lVar9 + 0x5a8) == param_3) {
                if (((*PTR_DAT_0437a708 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar6 != 0)) {
                  FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_0437a708);
                }
                uVar11 = *(undefined8 *)PTR_DAT_0437a710;
                *(undefined8 *)PTR_DAT_0437a718 = uVar11;
                uVar13 = *(undefined8 *)(lVar9 + 0x5c0);
                plVar14 = *(long **)(lVar9 + 0x5d8);
                if (plVar14 == (long *)0x0) {
                  uVar11 = FUN_010aace4(uVar11,uVar13,*(undefined1 *)(param_2 + 0x398));
                  *param_1 = uVar11;
                }
                else {
                  (**(code **)(*plVar14 + 0x18))(plVar14);
                  uVar11 = FUN_010aace4(uVar11,uVar13,*(undefined1 *)(param_2 + 0x398));
                  *param_1 = uVar11;
                  (**(code **)(*plVar14 + 0x20))(plVar14);
                }
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              lVar8 = *(long *)(lVar9 + 8);
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                iVar6 = *piVar1;
                cVar4 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar6 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar6 + -1 == 0) {
                *(undefined8 *)(lVar8 + 0x18) = 0;
                (**(code **)(*(long *)(lVar9 + -0x50) + 0x20))((long *)(lVar9 + -0x50));
              }
              if (bVar5) {
                return;
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = iVar2;
      } while (iVar2 != 0);
    }
    plVar10 = plVar10 + 6;
  } while( true );
}


