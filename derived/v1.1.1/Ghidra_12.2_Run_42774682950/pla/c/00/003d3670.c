/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d3670; name: FUN_003d3670
 */


void FUN_003d3670(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  puVar4 = PTR_DAT_04374048;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 4) {
    plVar8 = (long *)param_1[2];
    plVar1 = param_1 + 3;
    if (plVar8 != plVar1) {
      if (iVar2 == 0) {
        cVar3 = PTR_DAT_04374048[0x10];
        while( true ) {
          if (cVar3 != '\0') {
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc"
                         ,0x69,1,"ConnectivityStateTracker %s[%p]: notifying watcher %p: %s -> %s",
                         *param_1,param_1,plVar8[4],&DAT_039ba391,"SHUTDOWN");
          }
                    /* try { // try from 003d37e8 to 003d385f has its CatchHandler @ 003d3998 */
          (**(code **)(*(long *)plVar8[5] + 0x18))((long *)plVar8[5],4);
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
      else if (iVar2 == 1) {
        cVar3 = PTR_DAT_04374048[0x10];
        while( true ) {
          if (cVar3 != '\0') {
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc"
                         ,0x69,1,"ConnectivityStateTracker %s[%p]: notifying watcher %p: %s -> %s",
                         *param_1,param_1,plVar8[4],"CONNECTING","SHUTDOWN");
          }
                    /* try { // try from 003d3714 to 003d378b has its CatchHandler @ 003d399c */
          (**(code **)(*(long *)plVar8[5] + 0x18))((long *)plVar8[5],4);
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
        cVar3 = PTR_DAT_04374048[0x10];
        while( true ) {
          if (cVar3 != '\0') {
            if (2 < iVar2 - 2U) {
                    /* try { // try from 003d3970 to 003d398f has its CatchHandler @ 003d3990 */
              FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc"
                           ,0x31,2,"Should never reach here.");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc"
                         ,0x69,1,"ConnectivityStateTracker %s[%p]: notifying watcher %p: %s -> %s",
                         *param_1,param_1,plVar8[4],(&PTR_s_READY_04156c48)[(int)(iVar2 - 2U)],
                         "SHUTDOWN");
          }
                    /* try { // try from 003d38c4 to 003d3943 has its CatchHandler @ 003d3994 */
          (**(code **)(*(long *)plVar8[5] + 0x18))((long *)plVar8[5],4);
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
  }
  FUN_003d40a0(param_1 + 2,param_1[3]);
  return;
}


