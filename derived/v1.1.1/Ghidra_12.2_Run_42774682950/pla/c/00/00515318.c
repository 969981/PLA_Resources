/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00515318; name: FUN_00515318
 */


void FUN_00515318(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  char *local_30;
  undefined4 local_28;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x38);
  if (((lVar2 != 0) && (param_2 == 0)) && (*(long *)(lVar2 + 0x18) == param_1)) {
    FUN_003c8500(*(undefined8 *)(param_1 + 0x48));
    p_Var5 = *(__tree_node_base **)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if ((__tree_node_base *)(param_1 + 0x178) != p_Var5) {
      FUN_0050f8bc(param_1,p_Var5 + 0x20);
      plVar1 = *(long **)(p_Var5 + 8);
      if (*(long **)(p_Var5 + 8) == (long *)0x0) {
        p_Var4 = p_Var5 + 0x10;
        plVar3 = *(long **)p_Var4;
        if ((__tree_node_base *)*plVar3 != p_Var5) {
          do {
            lVar2 = *(long *)p_Var4;
            p_Var4 = (__tree_node_base *)(lVar2 + 0x10);
            plVar3 = *(long **)p_Var4;
          } while (*plVar3 != lVar2);
        }
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if (*(__tree_node_base **)(param_1 + 0x170) == p_Var5) {
        *(long **)(param_1 + 0x170) = plVar3;
      }
      *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x180) + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>
                (*(__tree_node_base **)(param_1 + 0x178),p_Var5);
      if (((byte)p_Var5[0x20] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var5 + 0x30));
      }
      FUN_002e2ea0(PTR_LAB_04373088,p_Var5);
    }
  }
  local_30 = "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc";
  local_28 = 0x497;
  FUN_00515458(param_1,&local_30,"ADS+OnRequestSentLocked");
  if (4 < param_2) {
    FUN_002f0430(param_2,
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x498);
  }
  return;
}


