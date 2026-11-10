/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037016c; name: FUN_0037016c
 */


undefined1  [16]
FUN_0037016c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  __tree_node_base *p_Var5;
  int *piVar6;
  int *piVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  __tree_node_base *local_38 [3];
  
  puVar8 = (ulong *)(param_1 + 1);
  puVar9 = (ulong *)*puVar8;
  if (puVar9 == (ulong *)0x0) {
    uVar4 = *puVar8;
    puVar10 = puVar8;
  }
  else {
    piVar1 = (int *)*param_2;
    piVar2 = (int *)param_2[1];
    puVar10 = puVar9;
    if (piVar1 != piVar2) {
      do {
        piVar6 = (int *)puVar10[4];
        piVar3 = piVar1;
        for (piVar7 = piVar6; piVar7 != (int *)puVar10[5]; piVar7 = piVar7 + 1) {
          if (piVar2 == piVar3) {
LAB_00370220:
            puVar9 = (ulong *)*puVar10;
            puVar8 = puVar10;
            if (puVar9 == (ulong *)0x0) goto LAB_003702e0;
            goto LAB_0037022c;
          }
          if (*piVar3 < *piVar7) goto LAB_00370220;
          if (*piVar7 < *piVar3) break;
          piVar3 = piVar3 + 1;
        }
        piVar7 = piVar1;
        while ((int *)puVar10[5] != piVar6) {
          if (*piVar6 < *piVar7) break;
          if (*piVar7 < *piVar6) goto LAB_0037024c;
          piVar7 = piVar7 + 1;
          piVar6 = piVar6 + 1;
          if (piVar2 == piVar7) goto LAB_0037024c;
        }
        puVar8 = puVar10 + 1;
        puVar9 = (ulong *)*puVar8;
        if (puVar9 == (ulong *)0x0) goto LAB_0037024c;
LAB_0037022c:
        puVar10 = puVar9;
      } while( true );
    }
    do {
      puVar10 = puVar9;
      if (puVar10[4] == puVar10[5]) goto LAB_0037024c;
      puVar8 = puVar10;
      puVar9 = (ulong *)*puVar10;
    } while ((ulong *)*puVar10 != (ulong *)0x0);
LAB_003702e0:
    uVar4 = *puVar10;
    puVar8 = puVar10;
  }
joined_r0x003702e8:
  if (uVar4 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar4;
    return auVar11;
  }
  FUN_003702f0(local_38,param_1,param_3,param_4,param_5);
  *(undefined8 *)local_38[0] = 0;
  *(undefined8 *)(local_38[0] + 8) = 0;
  *(ulong **)(local_38[0] + 0x10) = puVar10;
  *puVar8 = (ulong)local_38[0];
  p_Var5 = local_38[0];
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    p_Var5 = (__tree_node_base *)*puVar8;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            ((__tree_node_base *)param_1[1],p_Var5);
  param_1[2] = param_1[2] + 1;
  auVar12._8_8_ = 1;
  auVar12._0_8_ = local_38[0];
  return auVar12;
LAB_0037024c:
  uVar4 = *puVar8;
  goto joined_r0x003702e8;
}


