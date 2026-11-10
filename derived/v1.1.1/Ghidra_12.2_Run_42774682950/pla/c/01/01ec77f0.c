/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec77f0; name: FUN_01ec77f0
 */


void FUN_01ec77f0(undefined1 param_1 [16],long param_2,undefined8 *param_3,int param_4,
                 undefined8 param_5,uint param_6)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  int iVar17;
  long *local_58;
  
  if (((*PTR_DAT_0437a708 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar7 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar7;
  pcVar8 = (char *)FUN_010aace4(uVar7,*param_3,0);
  if (*pcVar8 == '\0') {
    piVar11 = *(int **)(pcVar8 + 0x10);
    if (piVar11 == (int *)0x0) {
      piVar11 = *(int **)(pcVar8 + 8);
    }
    if (0x50 < *(ushort *)((long)piVar11 - (long)*piVar11)) {
      uVar1 = ((ushort *)((long)piVar11 - (long)*piVar11))[0x28];
      goto joined_r0x01ec7900;
    }
  }
  else {
    piVar11 = *(int **)(pcVar8 + 0x18);
    if (0x4c < *(ushort *)((long)piVar11 - (long)*piVar11)) {
      uVar1 = ((ushort *)((long)piVar11 - (long)*piVar11))[0x26];
joined_r0x01ec7900:
      if ((ulong)uVar1 != 0) {
        iVar6 = *(int *)((long)piVar11 + (ulong)uVar1);
        goto LAB_01ec7880;
      }
    }
  }
  iVar6 = 0;
LAB_01ec7880:
  plVar9 = (long *)FUN_01ec7b38(param_2 + 0x2c0,param_3);
  plVar15 = (long *)*plVar9;
  plVar9 = (long *)plVar9[1];
  if (plVar15 != plVar9) {
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    if ((param_6 & 1) == 0) {
      iVar16 = 0;
      do {
        lVar14 = *plVar15;
        if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
          piVar11 = (int *)(lVar14 + 0xc);
          iVar17 = *(int *)(lVar14 + 0xc);
          do {
            uVar10 = FUN_01ecab44(*(undefined8 *)(lVar14 + 0x10));
            if ((uVar10 & 1) == 0) break;
            iVar2 = *piVar11;
            if (iVar2 == iVar17) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar5) {
                *piVar11 = iVar17 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar14 = *(long *)(lVar14 + 0x18);
                plVar13 = (long *)(lVar14 + -0x50);
                if (lVar14 != 0) {
                  uVar10 = FUN_01ea5fcc(plVar13);
                  if ((uVar10 & 1) == 0) {
                    FUN_01e9c604(plVar13);
                    iVar16 = iVar16 + 1;
                    bVar5 = iVar6 * param_4 <= iVar16;
                  }
                  else {
                    bVar5 = false;
                  }
                  lVar14 = *(long *)(lVar14 + 8);
                  piVar11 = (int *)(lVar14 + 0xc);
                  do {
                    iVar17 = *piVar11;
                    cVar4 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                    if (bVar3) {
                      *piVar11 = iVar17 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar17 + -1 == 0) {
                    *(undefined8 *)(lVar14 + 0x18) = 0;
                    (**(code **)(*plVar13 + 0x20))(plVar13);
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
            iVar17 = iVar2;
          } while (iVar2 != 0);
        }
        plVar15 = plVar15 + 6;
      } while (plVar15 != plVar9);
    }
    else {
      iVar16 = 0;
      do {
        lVar14 = *plVar15;
        if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
          piVar11 = (int *)(lVar14 + 0xc);
          iVar17 = *(int *)(lVar14 + 0xc);
          do {
            uVar10 = FUN_01ecab44(*(undefined8 *)(lVar14 + 0x10));
            if ((uVar10 & 1) == 0) break;
            iVar2 = *piVar11;
            if (iVar2 == iVar17) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar5) {
                *piVar11 = iVar17 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar14 = *(long *)(lVar14 + 0x18);
                plVar13 = (long *)(lVar14 + -0x50);
                if (lVar14 != 0) {
                  uVar10 = FUN_01ea5fcc(plVar13);
                  if ((uVar10 & 1) == 0) {
                    FUN_01e9c604(plVar13);
                    FUN_009c69bc(&local_58,plVar13);
                    *(undefined1 *)(local_58 + 0x1c) = 1;
                    local_58[0x1b] = param_1._8_8_;
                    local_58[0x1a] = param_1._0_8_;
                    if (local_58 != (long *)0x0) {
                      lVar12 = local_58[0xb];
                      piVar11 = (int *)(lVar12 + 0xc);
                      do {
                        iVar17 = *piVar11;
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                        if (bVar5) {
                          *piVar11 = iVar17 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (iVar17 + -1 == 0) {
                        *(undefined8 *)(lVar12 + 0x18) = 0;
                        (**(code **)(*local_58 + 0x20))();
                      }
                    }
                    iVar16 = iVar16 + 1;
                    bVar5 = iVar6 * param_4 <= iVar16;
                  }
                  else {
                    bVar5 = false;
                  }
                  lVar14 = *(long *)(lVar14 + 8);
                  piVar11 = (int *)(lVar14 + 0xc);
                  do {
                    iVar17 = *piVar11;
                    cVar4 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                    if (bVar3) {
                      *piVar11 = iVar17 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar17 + -1 == 0) {
                    *(undefined8 *)(lVar14 + 0x18) = 0;
                    (**(code **)(*plVar13 + 0x20))(plVar13);
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
            iVar17 = iVar2;
          } while (iVar2 != 0);
        }
        plVar15 = plVar15 + 6;
      } while (plVar15 != plVar9);
    }
  }
  return;
}


