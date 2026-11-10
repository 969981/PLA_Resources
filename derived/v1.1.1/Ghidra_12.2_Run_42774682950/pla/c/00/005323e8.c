/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005323e8; name: FUN_005323e8
 */


void FUN_005323e8(ulong param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  __tree_node_base *p_Var4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  __tree_node_base *p_Var9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 local_38;
  
  if (*(long *)(*(long *)(param_1 + 0x18) + 0x168) != 0) {
    return;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x48);
  puVar12 = (undefined8 *)*param_2;
  if (puVar10 == puVar12) {
    return;
  }
  if (puVar10 != (undefined8 *)0x0) {
    lVar5 = puVar10[1];
    plVar1 = puVar10 + 2;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),puVar10 + 1,lVar11);
    }
    if (lVar11 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar11 == 1) {
      (**(code **)*puVar10)(puVar10);
      FUN_002e2ea0(PTR_LAB_04373088,puVar10);
    }
  }
  *(undefined8 **)(param_1 + 0x48) = puVar12;
  plVar1 = (long *)(param_1 + 0x10);
  *param_2 = 0;
  lVar5 = *(long *)(param_1 + 0x18);
  do {
    lVar11 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar11 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar8 = *(long *)(param_1 + 8);
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar8 + 8),(long *)(param_1 + 8),
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                 ,0x470,lVar11,lVar11 + 1,"ConnectedSubchannelUpdate");
  }
  local_38 = 0;
  puVar12 = *(undefined8 **)(lVar5 + 0x158);
  puVar10 = (undefined8 *)(lVar5 + 0x158);
  if (puVar12 == (undefined8 *)0x0) {
    puVar13 = puVar10;
LAB_00532554:
    p_Var9 = (__tree_node_base *)*puVar10;
    puVar12 = puVar10;
  }
  else {
    bVar3 = param_1 <= (ulong)puVar12[4];
    if (!bVar3 || puVar12[4] == param_1) goto LAB_0053252c;
    while (puVar6 = (undefined8 *)*puVar12, puVar6 != (undefined8 *)0x0) {
      uVar7 = puVar6[4];
      puVar10 = puVar12;
      while (puVar12 = puVar6, bVar3 = param_1 <= uVar7, uVar7 <= param_1) {
LAB_0053252c:
        puVar13 = puVar12;
        if (bVar3) goto LAB_00532554;
        puVar10 = puVar12 + 1;
        puVar6 = (undefined8 *)*puVar10;
        if (puVar6 == (undefined8 *)0x0) goto LAB_00532554;
        uVar7 = puVar6[4];
      }
    }
    p_Var9 = (__tree_node_base *)*puVar12;
    puVar13 = puVar12;
  }
  if (p_Var9 == (__tree_node_base *)0x0) {
    p_Var9 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    *(ulong *)(p_Var9 + 0x20) = param_1;
    *(undefined8 *)(p_Var9 + 0x28) = 0;
    *(undefined8 **)(p_Var9 + 0x10) = puVar13;
    *(undefined8 *)p_Var9 = 0;
    *(undefined8 *)(p_Var9 + 8) = 0;
    *puVar12 = p_Var9;
    if (**(long **)(lVar5 + 0x150) == 0) {
      p_Var4 = p_Var9;
    }
    else {
      *(long *)(lVar5 + 0x150) = **(long **)(lVar5 + 0x150);
      p_Var4 = (__tree_node_base *)*puVar12;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(lVar5 + 0x158),p_Var4);
    uVar7 = 0;
    *(long *)(lVar5 + 0x160) = *(long *)(lVar5 + 0x160) + 1;
    lVar5 = *(long *)(param_1 + 0x48);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x48);
    uVar7 = param_1;
  }
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar8 = *(long *)(lVar5 + 8);
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 00532608 to 0053267b has its CatchHandler @ 0053274c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),(long *)(lVar5 + 8),lVar11,
                   lVar11 + 1);
    }
  }
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  puVar10 = *(undefined8 **)(p_Var9 + 0x28);
  if (puVar10 != (undefined8 *)0x0) {
    lVar5 = puVar10[1];
    plVar1 = puVar10 + 2;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),puVar10 + 1,lVar11);
    }
    if (lVar11 < 1) {
                    /* try { // try from 00532724 to 0053274b has its CatchHandler @ 0053274c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar11 == 1) {
      (**(code **)*puVar10)(puVar10);
      FUN_002e2ea0(PTR_LAB_04373088,puVar10);
    }
  }
  *(undefined8 *)(p_Var9 + 0x28) = uVar14;
  FUN_00530020(uVar7);
  FUN_0052f160(&local_38);
  return;
}


