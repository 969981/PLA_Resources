/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005338c4; name: FUN_005338c4
 */


void FUN_005338c4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  __tree_node_base *p_Var3;
  void *__ptr;
  long lVar4;
  long lVar5;
  long *plVar6;
  __tree_node_base *p_Var7;
  ulong uVar8;
  __tree_node_base *p_Var9;
  
  *param_1 = &PTR_FUN_04185b20;
  if (PTR_DAT_04374b58[0x10] != '\0') {
                    /* try { // try from 00533b00 to 00533b1f has its CatchHandler @ 00533b4c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                 ,0x393,1,"chand=%p: destroying subchannel wrapper %p for subchannel %p",param_1[3],
                 param_1,param_1[4]);
  }
  lVar4 = param_1[3];
  p_Var3 = *(__tree_node_base **)(lVar4 + 0x140);
  if (p_Var3 != (__tree_node_base *)0x0) {
    p_Var7 = p_Var3;
    p_Var9 = (__tree_node_base *)(lVar4 + 0x140);
    do {
      if (*(undefined8 **)(p_Var7 + 0x20) >= param_1) {
        p_Var9 = p_Var7;
      }
      p_Var7 = *(__tree_node_base **)
                (p_Var7 + (ulong)(*(undefined8 **)(p_Var7 + 0x20) < param_1) * 8);
    } while (p_Var7 != (__tree_node_base *)0x0);
    if ((p_Var9 != (__tree_node_base *)(lVar4 + 0x140)) &&
       (*(undefined8 **)(p_Var9 + 0x20) <= param_1)) {
      plVar2 = *(long **)(p_Var9 + 8);
      if (*(long **)(p_Var9 + 8) == (long *)0x0) {
        p_Var7 = p_Var9 + 0x10;
        plVar6 = *(long **)p_Var7;
        if ((__tree_node_base *)*plVar6 != p_Var9) {
          do {
            lVar5 = *(long *)p_Var7;
            p_Var7 = (__tree_node_base *)(lVar5 + 0x10);
            plVar6 = *(long **)p_Var7;
          } while (*plVar6 != lVar5);
        }
      }
      else {
        do {
          plVar6 = plVar2;
          plVar2 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if (*(__tree_node_base **)(lVar4 + 0x138) == p_Var9) {
        *(long **)(lVar4 + 0x138) = plVar6;
      }
      *(long *)(lVar4 + 0x148) = *(long *)(lVar4 + 0x148) + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(p_Var3,p_Var9);
      FUN_002e2ea0(PTR_LAB_04373088,p_Var9);
    }
  }
                    /* try { // try from 005339ac to 005339af has its CatchHandler @ 00533b58 */
  lVar4 = FUN_0053844c(param_1[4]);
  if (lVar4 == 0) {
LAB_00533a94:
                    /* try { // try from 00533a98 to 00533ac3 has its CatchHandler @ 00533b58 */
    FUN_00537ecc(param_1[4],
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                 ,0x3a2,"unref from LB");
    FUN_003c9ce0(*(undefined8 *)(param_1[3] + 0x10),"SubchannelWrapper");
    FUN_0052ea88(param_1 + 10);
    FUN_0052ea88(param_1 + 9);
    FUN_00534014(param_1 + 6,param_1[7]);
    __ptr = (void *)param_1[5];
    param_1[5] = 0;
    if (__ptr != (void *)0x0) {
                    /* try { // try from 00533aec to 00533aef has its CatchHandler @ 00533b54 */
      free(__ptr);
    }
    return;
  }
  lVar5 = param_1[3];
  p_Var3 = *(__tree_node_base **)(lVar5 + 0x128);
  if (p_Var3 != (__tree_node_base *)0x0) {
    uVar8 = param_1[4];
    p_Var9 = (__tree_node_base *)(lVar5 + 0x128);
    do {
      if (*(ulong *)(p_Var3 + 0x20) >= uVar8) {
        p_Var9 = p_Var3;
      }
      p_Var3 = *(__tree_node_base **)(p_Var3 + (ulong)(*(ulong *)(p_Var3 + 0x20) < uVar8) * 8);
    } while (p_Var3 != (__tree_node_base *)0x0);
    if ((p_Var9 != (__tree_node_base *)(lVar5 + 0x128)) && (*(ulong *)(p_Var9 + 0x20) <= uVar8)) {
      iVar1 = *(int *)(p_Var9 + 0x28);
      *(int *)(p_Var9 + 0x28) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
                    /* try { // try from 00533a10 to 00533a17 has its CatchHandler @ 00533b50 */
        FUN_003e75b8(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar4 + 0x20));
        lVar4 = param_1[3];
        plVar2 = *(long **)(p_Var9 + 8);
        if (*(long **)(p_Var9 + 8) == (long *)0x0) {
          p_Var3 = p_Var9 + 0x10;
          plVar6 = *(long **)p_Var3;
          if ((__tree_node_base *)*plVar6 != p_Var9) {
            do {
              lVar5 = *(long *)p_Var3;
              p_Var3 = (__tree_node_base *)(lVar5 + 0x10);
              plVar6 = *(long **)p_Var3;
            } while (*plVar6 != lVar5);
          }
        }
        else {
          do {
            plVar6 = plVar2;
            plVar2 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        if (*(__tree_node_base **)(lVar4 + 0x120) == p_Var9) {
          *(long **)(lVar4 + 0x120) = plVar6;
        }
        *(long *)(lVar4 + 0x130) = *(long *)(lVar4 + 0x130) + -1;
        std::__tree_remove<std::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(lVar4 + 0x128),p_Var9);
        FUN_002e2ea0(PTR_LAB_04373088,p_Var9);
      }
      goto LAB_00533a94;
    }
  }
                    /* try { // try from 00533b24 to 00533b4b has its CatchHandler @ 00533b50 */
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
               ,0x39b,2,"assertion failed: %s","it != chand_->subchannel_refcount_map_.end()");
                    /* WARNING: Subroutine does not return */
  abort();
}


