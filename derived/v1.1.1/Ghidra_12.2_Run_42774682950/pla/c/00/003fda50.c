/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fda50; name: FUN_003fda50
 */


long FUN_003fda50(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    FUN_003fda50(*(undefined8 *)(param_1 + 0x18));
    FUN_003fda50(*(undefined8 *)(param_1 + 0x20));
    lVar1 = FUN_003fe130(param_1);
    if (lVar1 != *(long *)(param_1 + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("calculate_height(n) == n->height",
                    "external/com_google_grpc_base/src/core/lib/avl/avl.cc",0x4a,"assert_invariants"
                   );
    }
    lVar1 = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x28);
    }
    lVar2 = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
    }
    lVar1 = lVar1 - lVar2;
    lVar2 = -lVar1;
    if (-1 < lVar1) {
      lVar2 = lVar1;
    }
    if (1 < lVar2) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("labs(node_height(n->left) - node_height(n->right)) <= 1",
                    "external/com_google_grpc_base/src/core/lib/avl/avl.cc",0x4b,"assert_invariants"
                   );
    }
  }
  return param_1;
}


