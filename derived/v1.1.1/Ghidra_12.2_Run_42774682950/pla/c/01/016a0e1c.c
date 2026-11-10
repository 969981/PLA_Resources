/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a0e1c; name: FUN_016a0e1c
 */


void FUN_016a0e1c(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  __tree_node_base *p_Var6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  __tree_node_base *p_Var12;
  undefined8 uVar13;
  undefined8 *puVar14;
  
  puVar7 = *(uint **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x250);
  piVar2 = (int *)((long)puVar7 + (ulong)*puVar7);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar9 == 0)) {
    puVar7 = (uint *)0x0;
    uVar3 = uRam0000000000000000;
  }
  else {
    puVar7 = (uint *)((long)piVar2 + uVar9);
    puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
    uVar3 = *puVar7;
  }
  if (uVar3 != 0) {
    uVar9 = 0;
    puVar1 = (undefined8 *)(param_1 + 0x80);
    do {
      piVar2 = (int *)((long)(puVar7 + uVar9 + 1) + (ulong)puVar7[uVar9 + 1]);
      puVar14 = puVar1;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar8 == 0)) {
        iVar11 = 0;
        puVar10 = (undefined8 *)*puVar1;
        if (puVar10 == (undefined8 *)0x0) goto LAB_016a0f00;
LAB_016a0ecc:
        while( true ) {
          while (iVar11 < *(int *)(puVar10 + 4)) {
            puVar14 = puVar10;
            if ((undefined8 *)*puVar10 == (undefined8 *)0x0) {
              p_Var12 = (__tree_node_base *)*puVar10;
              goto joined_r0x016a1038;
            }
            puVar10 = (undefined8 *)*puVar10;
          }
          if (iVar11 <= *(int *)(puVar10 + 4)) break;
          puVar14 = puVar10 + 1;
          if ((undefined8 *)*puVar14 == (undefined8 *)0x0) break;
          puVar10 = (undefined8 *)*puVar14;
        }
      }
      else {
        iVar11 = *(int *)((long)piVar2 + uVar8);
        puVar10 = (undefined8 *)*puVar1;
        if (puVar10 != (undefined8 *)0x0) goto LAB_016a0ecc;
LAB_016a0f00:
        puVar10 = puVar1;
      }
      p_Var12 = (__tree_node_base *)*puVar14;
joined_r0x016a1038:
      if (p_Var12 == (__tree_node_base *)0x0) {
        p_Var12 = (__tree_node_base *)
                  (**(code **)(**(long **)(param_1 + 0x88) + 0x10))
                            (*(long **)(param_1 + 0x88),0x30,8);
        if (p_Var12 == (__tree_node_base *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x88) + 0xb8))();
        }
        uVar13 = *(undefined8 *)(param_1 + 0x88);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), iVar4 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar5 == 0) {
          *(int *)(p_Var12 + 0x20) = iVar11;
          *(undefined8 *)(p_Var12 + 0x28) = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar13;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          *(int *)(p_Var12 + 0x20) = iVar11;
          *(undefined8 *)(p_Var12 + 0x28) = 0;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        *(undefined8 *)p_Var12 = 0;
        *(undefined8 *)(p_Var12 + 8) = 0;
        *(undefined8 **)(p_Var12 + 0x10) = puVar10;
        *puVar14 = p_Var12;
        p_Var6 = p_Var12;
        if (**(long **)(param_1 + 0x78) != 0) {
          *(long *)(param_1 + 0x78) = **(long **)(param_1 + 0x78);
          p_Var6 = (__tree_node_base *)*puVar14;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(param_1 + 0x80),p_Var6);
        *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
      }
      *(int **)(p_Var12 + 0x28) = piVar2;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *puVar7);
  }
  return;
}


