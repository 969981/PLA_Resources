/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00516d78; name: FUN_00516d78
 */


void FUN_00516d78(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar8 = *(long **)(param_1 + 0xa0);
  if (plVar8 != (long *)0x0) {
    uVar2 = param_2;
    if (4 < param_2) {
      uVar2 = FUN_002f03c0(param_2,
                           "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                           ,0x958);
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,uVar2);
  }
  plVar10 = *(long **)(param_1 + 0x110);
  plVar8 = (long *)(param_1 + 0x118);
  if (plVar10 != plVar8) {
    if (param_2 < 5) {
      do {
        plVar4 = (long *)plVar10[7];
        while (plVar4 != plVar10 + 8) {
          (**(code **)(*(long *)plVar4[4] + 0x18))((long *)plVar4[4],param_2);
          plVar7 = (long *)plVar4[1];
          if ((long *)plVar4[1] == (long *)0x0) {
            plVar7 = plVar4 + 2;
            bVar1 = *(long **)*plVar7 != plVar4;
            plVar4 = (long *)*plVar7;
            if (bVar1) {
              do {
                lVar6 = *plVar7;
                plVar7 = (long *)(lVar6 + 0x10);
                plVar4 = (long *)*plVar7;
              } while (*(long *)*plVar7 != lVar6);
            }
          }
          else {
            do {
              plVar4 = plVar7;
              plVar7 = (long *)*plVar4;
            } while (plVar7 != (long *)0x0);
          }
        }
        plVar4 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) {
          plVar4 = plVar10 + 2;
          plVar7 = (long *)*plVar4;
          if ((long *)*plVar7 != plVar10) {
            do {
              lVar6 = *plVar4;
              plVar4 = (long *)(lVar6 + 0x10);
              plVar7 = (long *)*plVar4;
            } while (*plVar7 != lVar6);
          }
        }
        else {
          do {
            plVar7 = plVar4;
            plVar4 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        plVar10 = plVar7;
      } while (plVar7 != plVar8);
    }
    else {
      plVar4 = plVar10 + 8;
      plVar7 = (long *)plVar10[7];
      if ((long *)plVar10[7] != plVar4) goto LAB_00516f14;
      while( true ) {
        plVar4 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) {
          plVar4 = plVar10 + 2;
          plVar9 = (long *)*plVar4;
          if ((long *)*plVar9 != plVar10) {
            do {
              lVar6 = *plVar4;
              plVar4 = (long *)(lVar6 + 0x10);
              plVar9 = (long *)*plVar4;
            } while (*plVar9 != lVar6);
          }
        }
        else {
          do {
            plVar9 = plVar4;
            plVar4 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
        if (plVar9 == plVar8) break;
        plVar4 = plVar9 + 8;
        plVar10 = plVar9;
        plVar7 = (long *)plVar9[7];
        if ((long *)plVar9[7] != plVar4) {
LAB_00516f14:
          do {
            plVar9 = (long *)plVar7[4];
            uVar3 = FUN_002f03c0(param_2,
                                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                                 ,0x95d);
            (**(code **)(*plVar9 + 0x18))(plVar9,uVar3);
            plVar9 = (long *)plVar7[1];
            if ((long *)plVar7[1] == (long *)0x0) {
              plVar9 = plVar7 + 2;
              plVar5 = (long *)*plVar9;
              if ((long *)*plVar5 != plVar7) {
                do {
                  lVar6 = *plVar9;
                  plVar9 = (long *)(lVar6 + 0x10);
                  plVar5 = (long *)*plVar9;
                } while (*plVar5 != lVar6);
              }
            }
            else {
              do {
                plVar5 = plVar9;
                plVar9 = (long *)*plVar5;
              } while ((long *)*plVar5 != (long *)0x0);
            }
            plVar7 = plVar5;
          } while (plVar5 != plVar4);
        }
      }
    }
  }
  plVar10 = *(long **)(param_1 + 0x128);
  plVar8 = (long *)(param_1 + 0x130);
  if (plVar10 != plVar8) {
    if (param_2 < 5) {
      do {
        plVar4 = (long *)plVar10[7];
        while (plVar4 != plVar10 + 8) {
          (**(code **)(*(long *)plVar4[4] + 0x18))((long *)plVar4[4],param_2);
          plVar7 = (long *)plVar4[1];
          if ((long *)plVar4[1] == (long *)0x0) {
            plVar7 = plVar4 + 2;
            bVar1 = *(long **)*plVar7 != plVar4;
            plVar4 = (long *)*plVar7;
            if (bVar1) {
              do {
                lVar6 = *plVar7;
                plVar7 = (long *)(lVar6 + 0x10);
                plVar4 = (long *)*plVar7;
              } while (*(long *)*plVar7 != lVar6);
            }
          }
          else {
            do {
              plVar4 = plVar7;
              plVar7 = (long *)*plVar4;
            } while (plVar7 != (long *)0x0);
          }
        }
        plVar4 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) {
          plVar4 = plVar10 + 2;
          plVar7 = (long *)*plVar4;
          if ((long *)*plVar7 != plVar10) {
            do {
              lVar6 = *plVar4;
              plVar4 = (long *)(lVar6 + 0x10);
              plVar7 = (long *)*plVar4;
            } while (*plVar7 != lVar6);
          }
        }
        else {
          do {
            plVar7 = plVar4;
            plVar4 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        plVar10 = plVar7;
      } while (plVar7 != plVar8);
    }
    else {
      plVar4 = plVar10 + 8;
      plVar7 = (long *)plVar10[7];
      if ((long *)plVar10[7] != plVar4) goto LAB_005170f8;
      while( true ) {
        plVar4 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) {
          plVar4 = plVar10 + 2;
          plVar9 = (long *)*plVar4;
          if ((long *)*plVar9 != plVar10) {
            do {
              lVar6 = *plVar4;
              plVar4 = (long *)(lVar6 + 0x10);
              plVar9 = (long *)*plVar4;
            } while (*plVar9 != lVar6);
          }
        }
        else {
          do {
            plVar9 = plVar4;
            plVar4 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
        if (plVar9 == plVar8) break;
        plVar4 = plVar9 + 8;
        plVar10 = plVar9;
        plVar7 = (long *)plVar9[7];
        if ((long *)plVar9[7] != plVar4) {
LAB_005170f8:
          do {
            plVar9 = (long *)plVar7[4];
            uVar3 = FUN_002f03c0(param_2,
                                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                                 ,0x963);
            (**(code **)(*plVar9 + 0x18))(plVar9,uVar3);
            plVar9 = (long *)plVar7[1];
            if ((long *)plVar7[1] == (long *)0x0) {
              plVar9 = plVar7 + 2;
              plVar5 = (long *)*plVar9;
              if ((long *)*plVar5 != plVar7) {
                do {
                  lVar6 = *plVar9;
                  plVar9 = (long *)(lVar6 + 0x10);
                  plVar5 = (long *)*plVar9;
                } while (*plVar5 != lVar6);
              }
            }
            else {
              do {
                plVar5 = plVar9;
                plVar9 = (long *)*plVar5;
              } while ((long *)*plVar5 != (long *)0x0);
            }
            plVar7 = plVar5;
          } while (plVar5 != plVar4);
        }
      }
    }
  }
  if (param_2 < 5) {
    return;
  }
  FUN_002f0430(param_2,
               "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
               ,0x966);
  return;
}


