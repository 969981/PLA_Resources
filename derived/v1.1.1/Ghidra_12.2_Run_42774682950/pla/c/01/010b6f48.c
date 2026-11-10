/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b6f48; name: FUN_010b6f48
 */


undefined8
FUN_010b6f48(long param_1,ushort *param_2,undefined8 param_3,long param_4,int param_5,int param_6,
            undefined4 param_7)

{
  long *plVar1;
  ushort *puVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ushort *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  
  plVar7 = (long *)FUN_0024eda0(param_3);
  if ((plVar7 == (long *)0x0) || (iVar6 = (**(code **)(*plVar7 + 0x48))(), iVar6 == 2)) {
    if (param_5 - 2U < 8) {
      lVar13 = *(long *)(&DAT_03a78ae0 + (long)(int)(param_5 - 2U) * 8);
    }
    else {
      lVar13 = 0;
    }
    if (((*PTR_DAT_0437b228 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b228);
    }
    lVar9 = *(long *)PTR_DAT_0437b230;
    *(long *)PTR_DAT_0437b238 = lVar9;
    plVar7 = *(long **)(lVar9 + lVar13 * 0x28 + (long)param_6 * 8 + 0xd8);
    if (plVar7 != (long *)0x0) {
      plVar14 = plVar7 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar16 = 0;
    plVar14 = plVar7;
    if ((0 < param_4) && (uVar8 = (uint)*param_2, *param_2 != 0)) {
      puVar2 = param_2 + param_4;
      uVar16 = 0;
      do {
        if (uVar8 == 0x10) {
          if ((char)(param_2[2] >> 8) == -1 && (param_2[2] & 0xff) == 1) {
            uVar3 = param_2[1];
            if (uVar3 != 0) {
              if (uVar3 - 1 < 2) {
                uVar12 = 0;
                if (1 < uVar3) goto LAB_010b728c;
LAB_010b7238:
                uVar10 = 0;
                iVar6 = (int)uVar12;
              }
              else {
                uVar12 = (ulong)param_2[4];
                if (uVar3 < 2) goto LAB_010b7238;
LAB_010b728c:
                uVar10 = (ulong)param_2[3];
                iVar6 = (int)uVar12;
              }
              if (iVar6 != 0) {
                uVar3 = param_2[uVar10 + 5];
                if (uVar3 != 0) {
                  *(undefined1 *)(plVar14[0xc] + 0x19210) = 1;
                  FUN_00221ad8(plVar14[0xf],uVar3,(int)plVar14[0x10],
                               *(undefined2 *)((long)plVar14 + 0x9a),0xffffffff,(char)plVar14[0x13])
                  ;
                }
                iVar6 = (int)uVar12;
                *(undefined1 *)(param_1 + 0x3f9) = 1;
                if (iVar6 != 1) {
                  uVar3 = param_2[uVar10 + 6];
                  if (uVar3 != 0) {
                    *(undefined1 *)(plVar14[0xc] + 0x19210) = 1;
                    FUN_00221ad8(plVar14[0xf],uVar3,(int)plVar14[0x10],
                                 *(undefined2 *)((long)plVar14 + 0x9a),0xffffffff,
                                 (char)plVar14[0x13]);
                  }
                  *(undefined1 *)(param_1 + 0x3f9) = 1;
                  if (iVar6 != 2) {
                    uVar3 = param_2[uVar10 + 7];
                    if (uVar3 != 0) {
                      *(undefined1 *)(plVar14[0xc] + 0x19210) = 1;
                      FUN_00221ad8(plVar14[0xf],uVar3,(int)plVar14[0x10],
                                   *(undefined2 *)((long)plVar14 + 0x9a),0xffffffff,
                                   (char)plVar14[0x13]);
                    }
                    *(undefined1 *)(param_1 + 0x3f9) = 1;
                    if (iVar6 != 3) {
                      lVar13 = uVar12 - 3;
                      puVar11 = param_2 + uVar10 + 8;
                      do {
                        uVar3 = *puVar11;
                        if (uVar3 != 0) {
                          *(undefined1 *)(plVar14[0xc] + 0x19210) = 1;
                          FUN_00221ad8(plVar14[0xf],uVar3,(int)plVar14[0x10],
                                       *(undefined2 *)((long)plVar14 + 0x9a),0xffffffff,
                                       (char)plVar14[0x13]);
                        }
                        lVar13 = lVar13 + -1;
                        puVar11 = puVar11 + 1;
                        *(undefined1 *)(param_1 + 0x3f9) = 1;
                      } while (lVar13 != 0);
                    }
                  }
                }
                uVar8 = (uint)*param_2;
                goto LAB_010b7068;
              }
            }
          }
LAB_010b7078:
          puVar11 = param_2 + (ulong)param_2[1] + 2;
          uVar8 = 0x10;
        }
        else {
LAB_010b7068:
          puVar11 = param_2;
          if (uVar8 == 0x10) goto LAB_010b7078;
        }
        if (param_2 == puVar11) {
          if (uVar8 == 0x1b) {
            if (plVar7 != (long *)0x0) {
              plVar15 = plVar7 + 10;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar5) {
                  *(int *)plVar15 = (int)*plVar15 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            if (plVar14 != (long *)0x0) {
              plVar15 = plVar14 + 10;
              do {
                iVar6 = (int)*plVar15 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar5) {
                  *(int *)plVar15 = iVar6;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar6 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
                plVar14 = plVar7;
                goto LAB_010b70d8;
              }
            }
            plVar14 = plVar7;
          }
          else if (uVar8 - 0x11 < 10) {
            if ((uVar8 - 0x13 & 0xffff) < 8) {
              lVar13 = *(long *)(&DAT_03a78ae0 + (long)(short)(uVar8 - 0x13) * 8);
            }
            else {
              lVar13 = 0;
            }
            if (((*PTR_DAT_0437b228 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar6 != 0)) {
              FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437b228);
            }
            lVar9 = *(long *)PTR_DAT_0437b230;
            *(long *)PTR_DAT_0437b238 = lVar9;
            plVar15 = *(long **)(lVar9 + lVar13 * 0x28 + (long)param_6 * 8 + 0xd8);
            if (plVar15 != (long *)0x0) {
              plVar1 = plVar15 + 10;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *(int *)plVar1 = (int)*plVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            if (plVar14 != (long *)0x0) {
              plVar1 = plVar14 + 10;
              do {
                iVar6 = (int)*plVar1 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *(int *)plVar1 = iVar6;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar6 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
            plVar14 = plVar15;
          }
          else {
            if (uVar8 != 0) {
              *(undefined1 *)(plVar14[0xc] + 0x19210) = 1;
              FUN_00221ad8(plVar14[0xf],uVar8,(int)plVar14[0x10],
                           *(undefined2 *)((long)plVar14 + 0x9a),param_7,(char)plVar14[0x13]);
            }
            uVar16 = 1;
            *(undefined1 *)(param_1 + 0x3f9) = 1;
          }
LAB_010b70d8:
          puVar11 = param_2 + 1;
        }
        param_2 = puVar11;
      } while ((param_2 < puVar2) && (uVar8 = (uint)*param_2, uVar8 != 0));
    }
    if (plVar7 != (long *)0x0) {
      plVar15 = plVar7 + 10;
      do {
        iVar6 = (int)*plVar15 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *(int *)plVar15 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    if (plVar14 != (long *)0x0) {
      plVar7 = plVar14 + 10;
      do {
        iVar6 = (int)*plVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  else {
    uVar16 = 0;
  }
  return uVar16;
}


