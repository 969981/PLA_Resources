/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034e494; name: FUN_0034e494
 */


void FUN_0034e494(long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  __tree_node_base *p_Var5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong local_68;
  undefined *local_60;
  ulong *puStack_58;
  undefined **local_48;
  
  if (param_2 != 0) {
    plVar9 = (long *)(param_1 + 0x68);
    plVar10 = (long *)*plVar9;
    if (plVar10 == (long *)0x0) {
      plVar10 = plVar9;
LAB_0034e518:
      lVar8 = *plVar9;
    }
    else {
      plVar9 = (long *)(param_1 + 0x68);
      bVar4 = param_2 <= (ulong)plVar10[4];
      if (!bVar4 || plVar10[4] == param_2) goto LAB_0034e4f0;
      while( true ) {
        plVar9 = plVar10;
        plVar10 = (long *)*plVar9;
        if (plVar10 == (long *)0x0) break;
        bVar4 = param_2 <= (ulong)plVar10[4];
        if ((ulong)plVar10[4] <= param_2) {
LAB_0034e4f0:
          do {
            if (bVar4) goto LAB_0034e518;
            plVar9 = plVar10 + 1;
            plVar7 = (long *)*plVar9;
            if (plVar7 == (long *)0x0) goto LAB_0034e518;
            bVar4 = param_2 <= (ulong)plVar7[4];
            plVar10 = plVar7;
          } while (!bVar4 || plVar7[4] == param_2);
        }
      }
      lVar8 = *plVar9;
      plVar10 = plVar9;
    }
    if (lVar8 == 0) {
      p_Var5 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x28);
      *(ulong *)(p_Var5 + 0x20) = param_2;
      *(long **)(p_Var5 + 0x10) = plVar10;
      *(undefined8 *)p_Var5 = 0;
      *(undefined8 *)(p_Var5 + 8) = 0;
      *plVar9 = (long)p_Var5;
      if (**(long **)(param_1 + 0x60) != 0) {
        *(long *)(param_1 + 0x60) = **(long **)(param_1 + 0x60);
        p_Var5 = (__tree_node_base *)*plVar9;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                (*(__tree_node_base **)(param_1 + 0x68),p_Var5);
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
      puVar3 = PTR_LAB_04373ba8;
      puVar2 = PTR_LAB_04373ba0;
      if (0 < *(int *)(param_2 + 0x24)) {
        lVar8 = 0;
        iVar1 = **(int **)(param_2 + 0x58);
        puVar6 = *(ulong **)(param_2 + 0x18);
        while( true ) {
          if ((puVar6 != (ulong *)0x0) && (local_68 = param_2, *puVar6 != 0xffffffffffffffff)) {
            local_60 = puVar2;
            puStack_58 = &local_68;
            local_48 = &local_60;
            std::__call_once(puVar6,&local_48,(_func_void_void_ptr *)puVar3);
          }
          FUN_0034e494(param_1,*(undefined8 *)(*(long *)(param_2 + 0x48) + (long)iVar1 * 8));
          lVar8 = lVar8 + 1;
          if (*(int *)(param_2 + 0x24) <= lVar8) break;
          iVar1 = *(int *)(*(long *)(param_2 + 0x58) + lVar8 * 4);
          puVar6 = *(ulong **)(param_2 + 0x18);
        }
      }
    }
  }
  return;
}


