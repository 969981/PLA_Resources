/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00618db4; name: FUN_00618db4
 */


undefined1  [16] FUN_00618db4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  __tree_node_base *p_Var6;
  long lVar7;
  __tree_node_base *p_Var8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined8 local_40;
  __tree_node_base *local_38;
  undefined8 *local_30;
  char local_28;
  
  FUN_00618f74(&local_38);
                    /* try { // try from 00618dd4 to 00618ddf has its CatchHandler @ 00618ed8 */
  puVar4 = (undefined8 *)FUN_006171d8(param_1,&local_40,local_38 + 0x20);
  p_Var6 = local_38;
  p_Var8 = (__tree_node_base *)*puVar4;
  if (p_Var8 == (__tree_node_base *)0x0) {
    *(undefined8 *)(local_38 + 0x10) = local_40;
    *(undefined8 *)local_38 = 0;
    *(undefined8 *)(local_38 + 8) = 0;
    *puVar4 = local_38;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      p_Var6 = (__tree_node_base *)*puVar4;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var6);
    param_1[3] = param_1[3] + 1;
    uVar5 = 1;
  }
  else {
    local_38 = (__tree_node_base *)0x0;
    if (p_Var6 != (__tree_node_base *)0x0) {
      if (local_28 != '\0') {
        plVar9 = *(long **)(p_Var6 + 0x48);
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 1;
          do {
            lVar7 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (((byte)p_Var6[0x20] & 1) != 0) {
          (**(code **)(**(long **)(p_Var6 + 0x38) + 0x18))
                    (*(long **)(p_Var6 + 0x38),*(undefined8 *)(p_Var6 + 0x30),
                     *(ulong *)(p_Var6 + 0x20) & 0xfffffffffffffffe,1);
        }
      }
      (**(code **)(*(long *)*local_30 + 0x18))((long *)*local_30,p_Var6,0x50,8);
    }
    uVar5 = 0;
    local_38 = p_Var8;
  }
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = local_38;
  return auVar10;
}


