/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce0d98; name: FUN_00ce0d98
 */


long * FUN_00ce0d98(long *param_1,__tree_node_base *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  __tree_node_base *p_Var7;
  long lVar8;
  long *plVar9;
  
  plVar9 = *(long **)(param_2 + 8);
  if (plVar9 == (long *)0x0) {
    p_Var7 = param_2 + 0x10;
    plVar9 = *(long **)p_Var7;
    if ((__tree_node_base *)*plVar9 != param_2) {
      do {
        lVar8 = *(long *)p_Var7;
        p_Var7 = (__tree_node_base *)(lVar8 + 0x10);
        plVar9 = *(long **)p_Var7;
      } while (*plVar9 != lVar8);
    }
  }
  else {
    for (plVar5 = (long *)*plVar9; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      plVar9 = plVar5;
    }
  }
  if ((__tree_node_base *)*param_1 == param_2) {
    *param_1 = (long)plVar9;
  }
  param_1[6] = param_1[6] + -1;
  std::__tree_remove<std::__tree_node_base<void*>*>((__tree_node_base *)param_1[1],param_2);
  plVar5 = *(long **)(param_2 + 0x30);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  plVar5 = (long *)param_1[2];
  uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar6 & 1) != 0) {
    lVar8 = tpidr_el0;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar5,param_2,0x40,8);
      return plVar9;
    }
  }
  (**(code **)(*plVar5 + 0x18))(plVar5,param_2,0x40,8);
  return plVar9;
}


