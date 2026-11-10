/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d39b8; name: FUN_003d39b8
 */


void FUN_003d39b8(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_04374048;
  if (PTR_DAT_04374048[0x10] == '\0') {
    uVar1 = *(uint *)(param_1 + 1);
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc",0x76,1
                 ,"ConnectivityStateTracker %s[%p]: add watcher %p",*param_1,param_1,*param_3);
    uVar1 = *(uint *)(param_1 + 1);
  }
  if (uVar1 != param_2) {
    if (puVar2[0x10] != '\0') {
      if ((4 < param_2) || (4 < uVar1)) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc",
                     0x31,2,"Should never reach here.");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc",0x7c
                   ,1,"ConnectivityStateTracker %s[%p]: notifying watcher %p: %s -> %s",*param_1,
                   param_1,*param_3,(&PTR_DAT_04156c80)[(int)param_2],
                   (&PTR_DAT_04156c80)[(int)uVar1]);
    }
    (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,uVar1);
  }
  if (uVar1 != 4) {
    puVar7 = (undefined8 *)*param_3;
    *param_3 = 0;
    plVar8 = param_1 + 3;
    plVar9 = (long *)*plVar8;
    if (plVar9 == (long *)0x0) {
      plVar9 = plVar8;
LAB_003d3a80:
      lVar6 = *plVar8;
    }
    else {
      plVar8 = param_1 + 3;
      bVar3 = puVar7 <= (undefined8 *)plVar9[4];
      if (!bVar3 || (undefined8 *)plVar9[4] == puVar7) goto LAB_003d3a58;
      while( true ) {
        plVar8 = plVar9;
        plVar9 = (long *)*plVar8;
        if (plVar9 == (long *)0x0) break;
        bVar3 = puVar7 <= (undefined8 *)plVar9[4];
        if ((undefined8 *)plVar9[4] <= puVar7) {
LAB_003d3a58:
          do {
            if (bVar3) goto LAB_003d3a80;
            plVar8 = plVar9 + 1;
            plVar5 = (long *)*plVar8;
            if (plVar5 == (long *)0x0) goto LAB_003d3a80;
            bVar3 = puVar7 <= (undefined8 *)plVar5[4];
            plVar9 = plVar5;
          } while (!bVar3 || (undefined8 *)plVar5[4] == puVar7);
        }
      }
      lVar6 = *plVar8;
      plVar9 = plVar8;
    }
    if (lVar6 == 0) {
      p_Var4 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x30);
      *(undefined8 **)(p_Var4 + 0x20) = puVar7;
      *(undefined8 **)(p_Var4 + 0x28) = puVar7;
      *(long **)(p_Var4 + 0x10) = plVar9;
      *(undefined8 *)p_Var4 = 0;
      *(undefined8 *)(p_Var4 + 8) = 0;
      *plVar8 = (long)p_Var4;
      if (*(long *)param_1[2] != 0) {
        param_1[2] = *(long *)param_1[2];
        p_Var4 = (__tree_node_base *)*plVar8;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[3],p_Var4);
      param_1[4] = param_1[4] + 1;
    }
    else if (puVar7 != (undefined8 *)0x0) {
                    /* try { // try from 003d3a94 to 003d3a9b has its CatchHandler @ 003d3bbc */
      (**(code **)*puVar7)(puVar7);
    }
  }
  return;
}


