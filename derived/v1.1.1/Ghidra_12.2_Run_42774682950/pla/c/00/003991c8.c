/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003991c8; name: FUN_003991c8
 */


void FUN_003991c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  __tree_node_base *p_Var11;
  __tree_node_base *p_Var12;
  ulong uVar13;
  undefined1 auStack_90 [48];
  undefined1 auStack_58 [8];
  
  uVar4 = 0;
  if (param_1[1] == 0) {
LAB_00399424:
    *param_1 = 0;
    param_1[3] = uVar4;
    return;
  }
  uVar10 = 0;
  plVar2 = (long *)param_1[4];
  plVar9 = (long *)*plVar2;
  do {
    if (plVar9 == (long *)0x0) {
      uVar4 = param_1[1];
      uVar10 = uVar10 + 1;
      if (uVar4 <= uVar10) goto LAB_00399424;
    }
    else {
      if (plVar9 == (long *)plVar2[uVar10 ^ 1]) {
        uVar13 = uVar10 + 1;
        if (((uVar10 & 1) != 0) || (plVar9 != (long *)plVar2[uVar13])) {
          FUN_0030f640(auStack_90,3,
                       "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map.h"
                       ,0x240);
                    /* try { // try from 003992c0 to 003992cf has its CatchHandler @ 00399450 */
          uVar1 = FUN_0030f3ac(auStack_90,
                               "CHECK failed: table_[b] == table_[b + 1] && (b & 1) == 0: ");
                    /* try { // try from 003992d0 to 003992d7 has its CatchHandler @ 0039944c */
          FUN_0030f41c(auStack_58,uVar1);
          FUN_0030f658(auStack_90);
          plVar2 = (long *)param_1[4];
        }
        plVar2[uVar13] = 0;
        *(undefined8 *)(param_1[4] + uVar10 * 8) = 0;
        p_Var11 = (__tree_node_base *)*plVar9;
        lVar3 = *(long *)(p_Var11 + 0x20);
        p_Var6 = *(__tree_node_base **)(p_Var11 + 8);
        if (*(__tree_node_base **)(p_Var11 + 8) != (__tree_node_base *)0x0) goto LAB_00399320;
        do {
          p_Var6 = p_Var11 + 0x10;
          p_Var12 = p_Var11;
          p_Var5 = *(__tree_node_base **)p_Var6;
          if (*(__tree_node_base **)*(__tree_node_base **)p_Var6 != p_Var11) {
            do {
              lVar8 = *(long *)p_Var6;
              p_Var6 = (__tree_node_base *)(lVar8 + 0x10);
              p_Var5 = *(__tree_node_base **)p_Var6;
            } while (*(long *)*(__tree_node_base **)p_Var6 != lVar8);
          }
          while( true ) {
            p_Var11 = p_Var5;
            plVar2 = *(long **)(p_Var12 + 8);
            if (*(long **)(p_Var12 + 8) == (long *)0x0) {
              p_Var6 = p_Var12 + 0x10;
              plVar7 = *(long **)p_Var6;
              if ((__tree_node_base *)*plVar7 != p_Var12) {
                do {
                  lVar8 = *(long *)p_Var6;
                  p_Var6 = (__tree_node_base *)(lVar8 + 0x10);
                  plVar7 = *(long **)p_Var6;
                } while (*plVar7 != lVar8);
              }
            }
            else {
              do {
                plVar7 = plVar2;
                plVar2 = (long *)*plVar7;
              } while ((long *)*plVar7 != (long *)0x0);
            }
            if ((__tree_node_base *)*plVar9 == p_Var12) {
              *plVar9 = (long)plVar7;
            }
            plVar9[3] = plVar9[3] + -1;
            std::__tree_remove<std::__tree_node_base<void*>*>((__tree_node_base *)plVar9[1],p_Var12)
            ;
            if (plVar9[2] == 0) {
              FUN_002ee710(p_Var12);
              lVar8 = param_1[5];
            }
            else {
              lVar8 = param_1[5];
            }
            if (lVar8 == 0) {
              FUN_002ee710(lVar3);
            }
            if (p_Var11 == (__tree_node_base *)(plVar9 + 1)) {
              lVar3 = param_1[5];
              FUN_00399464(plVar9,plVar9[1]);
              if (lVar3 != 0) goto LAB_0039921c;
              FUN_002ee710(plVar9);
              uVar4 = param_1[1];
              uVar10 = uVar10 + 2;
              if (uVar10 < uVar4) goto LAB_0039922c;
              goto LAB_00399424;
            }
            lVar3 = *(long *)(p_Var11 + 0x20);
            p_Var6 = *(__tree_node_base **)(p_Var11 + 8);
            if (*(__tree_node_base **)(p_Var11 + 8) == (__tree_node_base *)0x0) break;
LAB_00399320:
            do {
              p_Var5 = p_Var6;
              p_Var6 = *(__tree_node_base **)p_Var5;
              p_Var12 = p_Var11;
            } while (p_Var6 != (__tree_node_base *)0x0);
          }
        } while( true );
      }
      plVar2[uVar10] = 0;
      lVar3 = param_1[5];
      plVar2 = (long *)plVar9[2];
      while( true ) {
        plVar7 = plVar2;
        if (lVar3 == 0) {
          FUN_002ee710(plVar9);
        }
        if (plVar7 == (long *)0x0) break;
        lVar3 = param_1[5];
        plVar2 = (long *)plVar7[2];
        plVar9 = plVar7;
      }
      uVar13 = uVar10;
LAB_0039921c:
      uVar4 = param_1[1];
      uVar10 = uVar13 + 1;
      if (uVar4 <= uVar10) goto LAB_00399424;
    }
LAB_0039922c:
    plVar2 = (long *)param_1[4];
    plVar9 = (long *)plVar2[uVar10];
  } while( true );
}


