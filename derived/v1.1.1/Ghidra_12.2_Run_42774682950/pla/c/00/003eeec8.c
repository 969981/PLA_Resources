/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003eeec8; name: FUN_003eeec8
 */


void FUN_003eeec8(long param_1,long param_2)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  long *plVar4;
  __tree_node_base *p_Var5;
  long lVar6;
  __tree_node_base *p_Var7;
  
  if (param_2 < 1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channelz_registry.cc",0x41,2,
                 "assertion failed: %s","uuid >= 1");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_002ef750();
  if (*(long *)(param_1 + 0x38) < param_2) {
                    /* try { // try from 003eefe4 to 003ef00b has its CatchHandler @ 003ef00c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channelz_registry.cc",0x43,2,
                 "assertion failed: %s","uuid <= uuid_generator_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  p_Var3 = (__tree_node_base *)(param_1 + 0x28);
  p_Var2 = *(__tree_node_base **)p_Var3;
  if (p_Var2 != (__tree_node_base *)0x0) {
    p_Var5 = p_Var2;
    p_Var7 = p_Var3;
    do {
      if (param_2 <= *(long *)(p_Var5 + 0x20)) {
        p_Var7 = p_Var5;
      }
      p_Var5 = *(__tree_node_base **)(p_Var5 + (ulong)(*(long *)(p_Var5 + 0x20) < param_2) * 8);
    } while (p_Var5 != (__tree_node_base *)0x0);
    if ((p_Var7 != p_Var3) && (*(long *)(p_Var7 + 0x20) <= param_2)) {
      plVar1 = *(long **)(p_Var7 + 8);
      if (*(long **)(p_Var7 + 8) == (long *)0x0) {
        p_Var3 = p_Var7 + 0x10;
        plVar4 = *(long **)p_Var3;
        if ((__tree_node_base *)*plVar4 != p_Var7) {
          do {
            lVar6 = *(long *)p_Var3;
            p_Var3 = (__tree_node_base *)(lVar6 + 0x10);
            plVar4 = *(long **)p_Var3;
          } while (*plVar4 != lVar6);
        }
      }
      else {
        do {
          plVar4 = plVar1;
          plVar1 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if (*(__tree_node_base **)(param_1 + 0x20) == p_Var7) {
        *(long **)(param_1 + 0x20) = plVar4;
      }
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(p_Var2,p_Var7);
      FUN_002e2ea0(PTR_LAB_04373088,p_Var7);
    }
  }
                    /* try { // try from 003eefa8 to 003eefaf has its CatchHandler @ 003ef024 */
  FUN_002ef790(param_1);
  return;
}


