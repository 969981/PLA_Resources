/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005367ec; name: FUN_005367ec
 */


void FUN_005367ec(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  __tree_node_base *p_Var5;
  long lVar6;
  __tree_node_base *p_Var7;
  __tree_node_base *p_Var8;
  undefined8 local_38;
  
  p_Var5 = (__tree_node_base *)(param_1 + 1);
  p_Var8 = *(__tree_node_base **)p_Var5;
  if (p_Var8 != (__tree_node_base *)0x0) {
    p_Var7 = p_Var5;
    do {
      iVar2 = strcmp(*(char **)(p_Var8 + 0x20),param_2);
      if (iVar2 >= 0) {
        p_Var7 = p_Var8;
      }
      p_Var8 = *(__tree_node_base **)(p_Var8 + (ulong)(iVar2 < 0) * 8);
    } while (p_Var8 != (__tree_node_base *)0x0);
    if ((p_Var7 != p_Var5) && (iVar2 = strcmp(param_2,*(char **)(p_Var7 + 0x20)), -1 < iVar2)) {
      local_38 = param_3;
      FUN_00539c40(*(long *)(p_Var7 + 0x28) + 0x48,&local_38);
      if (*(long *)(*(long *)(p_Var7 + 0x28) + 0x58) == 0) {
        plVar1 = *(long **)(p_Var7 + 8);
        if (*(long **)(p_Var7 + 8) == (long *)0x0) {
          p_Var5 = p_Var7 + 0x10;
          plVar4 = *(long **)p_Var5;
          if ((__tree_node_base *)*plVar4 != p_Var7) {
            do {
              lVar6 = *(long *)p_Var5;
              p_Var5 = (__tree_node_base *)(lVar6 + 0x10);
              plVar4 = *(long **)p_Var5;
            } while (*plVar4 != lVar6);
          }
        }
        else {
          do {
            plVar4 = plVar1;
            plVar1 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
        if ((__tree_node_base *)*param_1 == p_Var7) {
          *param_1 = plVar4;
        }
        param_1[2] = param_1[2] + -1;
        std::__tree_remove<std::__tree_node_base<void*>*>((__tree_node_base *)param_1[1],p_Var7);
        puVar3 = *(undefined8 **)(p_Var7 + 0x28);
        *(undefined8 *)(p_Var7 + 0x28) = 0;
        if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 005368ec to 005368ef has its CatchHandler @ 0053693c */
          (**(code **)*puVar3)();
        }
        FUN_002e2ea0(PTR_LAB_04373088,p_Var7);
      }
      return;
    }
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
               0x21f,2,"assertion failed: %s","it != map_.end()");
                    /* WARNING: Subroutine does not return */
  abort();
}


