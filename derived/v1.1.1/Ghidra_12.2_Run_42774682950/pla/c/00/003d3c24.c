/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d3c24; name: FUN_003d3c24
 */


void FUN_003d3c24(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  puVar4 = PTR_DAT_04374048;
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != param_2) {
    if (PTR_DAT_04374048[0x10] != '\0') {
      if ((4 < uVar2) || (4 < param_2)) {
LAB_003d3ed4:
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc",
                     0x31,2,"Should never reach here.");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc",0x98
                   ,1,"ConnectivityStateTracker %s[%p]: %s -> %s (%s)",*param_1,param_1,
                   (&PTR_DAT_04156c80)[(int)uVar2],(&PTR_DAT_04156c80)[(int)param_2],param_3);
    }
    *(uint *)(param_1 + 1) = param_2;
    plVar8 = (long *)param_1[2];
    plVar1 = param_1 + 3;
    if (plVar8 != plVar1) {
      if (uVar2 == 0) {
        cVar3 = puVar4[0x10];
        while( true ) {
          if (cVar3 != '\0') {
            if (4 < param_2) goto LAB_003d3ed4;
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc"
                         ,0x9f,1,"ConnectivityStateTracker %s[%p]: notifying watcher %p: %s -> %s",
                         *param_1,param_1,plVar8[4],&DAT_039ba391,(&PTR_DAT_04156c80)[(int)param_2])
            ;
          }
          (**(code **)(*(long *)plVar8[5] + 0x18))((long *)plVar8[5],param_2);
          plVar5 = (long *)plVar8[1];
          if ((long *)plVar8[1] == (long *)0x0) {
            plVar5 = plVar8 + 2;
            plVar6 = (long *)*plVar5;
            if ((long *)*plVar6 != plVar8) {
              do {
                lVar7 = *plVar5;
                plVar5 = (long *)(lVar7 + 0x10);
                plVar6 = (long *)*plVar5;
              } while (*plVar6 != lVar7);
            }
          }
          else {
            do {
              plVar6 = plVar5;
              plVar5 = (long *)*plVar6;
            } while ((long *)*plVar6 != (long *)0x0);
          }
          if (plVar6 == plVar1) break;
          cVar3 = puVar4[0x10];
          plVar8 = plVar6;
        }
      }
      else {
        cVar3 = puVar4[0x10];
        while( true ) {
          if (cVar3 != '\0') {
            if ((3 < uVar2 - 1) || (4 < param_2)) goto LAB_003d3ed4;
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc"
                         ,0x9f,1,"ConnectivityStateTracker %s[%p]: notifying watcher %p: %s -> %s",
                         *param_1,param_1,plVar8[4],(&PTR_s_CONNECTING_04156c60)[(int)(uVar2 - 1)],
                         (&PTR_DAT_04156c80)[(int)param_2]);
          }
          (**(code **)(*(long *)plVar8[5] + 0x18))((long *)plVar8[5],param_2);
          plVar5 = (long *)plVar8[1];
          if ((long *)plVar8[1] == (long *)0x0) {
            plVar5 = plVar8 + 2;
            plVar6 = (long *)*plVar5;
            if ((long *)*plVar6 != plVar8) {
              do {
                lVar7 = *plVar5;
                plVar5 = (long *)(lVar7 + 0x10);
                plVar6 = (long *)*plVar5;
              } while (*plVar6 != lVar7);
            }
          }
          else {
            do {
              plVar6 = plVar5;
              plVar5 = (long *)*plVar6;
            } while ((long *)*plVar6 != (long *)0x0);
          }
          if (plVar6 == plVar1) break;
          cVar3 = puVar4[0x10];
          plVar8 = plVar6;
        }
      }
    }
    if (param_2 == 4) {
      FUN_003d40a0(param_1 + 2,param_1[3]);
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[2] = plVar1;
    }
  }
  return;
}


