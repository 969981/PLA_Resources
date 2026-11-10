/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00527ed8; name: FUN_00527ed8
 */


void FUN_00527ed8(long param_1,ulong param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  __tree_node_base *p_Var4;
  long lVar5;
  long *plVar6;
  __tree_node_base *p_Var7;
  long *plVar8;
  long lVar9;
  __tree_node_base *p_Var10;
  char *local_70;
  undefined4 local_68;
  undefined **local_60;
  long *local_58;
  undefined ***local_40;
  
                    /* try { // try from 00527ef8 to 00527eff has its CatchHandler @ 00528244 */
  FUN_002ef750(param_1 + 0x1a0);
  p_Var4 = *(__tree_node_base **)(param_1 + 0x1c8);
  if (p_Var4 != (__tree_node_base *)0x0) {
    p_Var7 = p_Var4;
    p_Var10 = (__tree_node_base *)(param_1 + 0x1c8);
    do {
      if (*(ulong *)(p_Var7 + 0x20) >= param_2) {
        p_Var10 = p_Var7;
      }
      p_Var7 = *(__tree_node_base **)(p_Var7 + (ulong)(*(ulong *)(p_Var7 + 0x20) < param_2) * 8);
    } while (p_Var7 != (__tree_node_base *)0x0);
    if ((p_Var10 != (__tree_node_base *)(param_1 + 0x1c8)) &&
       (*(ulong *)(p_Var10 + 0x20) <= param_2)) {
      plVar8 = *(long **)(p_Var10 + 0x28);
      *(undefined8 *)(p_Var10 + 0x28) = 0;
      plVar3 = *(long **)(p_Var10 + 8);
      if (*(long **)(p_Var10 + 8) == (long *)0x0) {
        p_Var7 = p_Var10 + 0x10;
        plVar6 = *(long **)p_Var7;
        if ((__tree_node_base *)*plVar6 != p_Var10) {
          do {
            lVar5 = *(long *)p_Var7;
            p_Var7 = (__tree_node_base *)(lVar5 + 0x10);
            plVar6 = *(long **)p_Var7;
          } while (*plVar6 != lVar5);
        }
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if (*(__tree_node_base **)(param_1 + 0x1c0) == p_Var10) {
        *(long **)(param_1 + 0x1c0) = plVar6;
      }
      *(long *)(param_1 + 0x1d0) = *(long *)(param_1 + 0x1d0) + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(p_Var4,p_Var10);
      FUN_00532bb8(*(undefined8 *)(p_Var10 + 0x28));
      FUN_002e2ea0(PTR_LAB_04373088,p_Var10);
      goto LAB_00527f44;
    }
  }
  plVar8 = (long *)0x0;
LAB_00527f44:
                    /* try { // try from 00527f44 to 00527f4b has its CatchHandler @ 00528240 */
  FUN_002ef790(param_1 + 0x1a0);
  if ((plVar8 != (long *)0x0) && ((param_3 & 1) != 0)) {
    plVar3 = plVar8 + 10;
    do {
      if ((char)*plVar3 != '\0') {
        ClearExclusiveLocal();
        goto joined_r0x00527ff0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *(char *)plVar3 = '\x01';
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    local_60 = (undefined **)0x38f060f;
    local_58 = (long *)CONCAT44(local_58._4_4_,0x4d9);
                    /* try { // try from 00527f84 to 00527f93 has its CatchHandler @ 0052818c */
    FUN_002f019c(&local_60,plVar8[8],4);
    local_60 = &PTR_LAB_04185bc8;
    local_70 = "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
    ;
    local_68 = 0x4dc;
                    /* try { // try from 00527fb8 to 00527fc3 has its CatchHandler @ 00528154 */
    local_58 = plVar8;
    local_40 = &local_60;
    FUN_003d4d40(*(undefined8 *)(plVar8[3] + 0xb0),&local_60,&local_70);
    if (&local_60 == local_40) {
      (*(code *)(*local_40)[4])();
    }
    else if (local_40 != (undefined ***)0x0) {
      (*(code *)(*local_40)[5])();
    }
  }
joined_r0x00527ff0:
  if (plVar8 != (long *)0x0) {
    lVar5 = plVar8[1];
    plVar3 = plVar8 + 2;
    do {
      lVar9 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 00528054 to 00528073 has its CatchHandler @ 00528150 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar8 + 1,lVar9);
    }
    if (lVar9 < 1) {
                    /* try { // try from 00528128 to 0052814f has its CatchHandler @ 00528150 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar9 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8);
      FUN_002e2ea0(PTR_LAB_04373088,plVar8);
    }
  }
  return;
}


