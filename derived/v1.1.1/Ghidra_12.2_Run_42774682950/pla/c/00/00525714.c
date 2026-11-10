/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00525714; name: FUN_00525714
 */


undefined1  [16]
FUN_00525714(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  __tree_node_base *p_Var5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  __tree_node_base *p_Var11;
  long *plVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  
  plVar12 = param_1 + 1;
  plVar13 = (long *)*plVar12;
  if (plVar13 != (long *)0x0) {
    plVar12 = param_1 + 1;
    iVar4 = FUN_0051f1a8(*param_2,plVar13[4]);
    do {
      if (iVar4 < 0) {
        plVar8 = (long *)*plVar13;
        plVar12 = plVar13;
        if (plVar8 == (long *)0x0) {
          p_Var11 = (__tree_node_base *)*plVar13;
          goto joined_r0x005257a8;
        }
      }
      else {
        iVar4 = FUN_0051f1a8(plVar13[4],*param_2);
        if (-1 < iVar4) goto LAB_00525790;
        plVar12 = plVar13 + 1;
        plVar8 = (long *)*plVar12;
        if (plVar8 == (long *)0x0) goto LAB_00525790;
      }
      iVar4 = FUN_0051f1a8(*param_2,plVar8[4]);
      plVar13 = plVar8;
    } while( true );
  }
  plVar13 = plVar12;
LAB_00525790:
  p_Var11 = (__tree_node_base *)*plVar12;
joined_r0x005257a8:
  if (p_Var11 == (__tree_node_base *)0x0) {
    p_Var11 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x60);
    plVar8 = (long *)*param_4;
    *(undefined8 *)(p_Var11 + 0x20) = 0;
    lVar9 = *plVar8;
    if (lVar9 != 0) {
      plVar1 = (long *)(lVar9 + 0x10);
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar10 = *(long *)(lVar9 + 8);
      if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
                    /* try { // try from 00525800 to 0052581b has its CatchHandler @ 00525894 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar10 + 8),(long *)(lVar9 + 8),lVar7,
                     lVar7 + 1);
      }
    }
    lVar9 = *plVar8;
    *(undefined8 *)(p_Var11 + 0x58) = 0;
    *(undefined8 *)(p_Var11 + 0x50) = 0;
    *(undefined8 *)(p_Var11 + 0x48) = 0;
    *(long **)(p_Var11 + 0x10) = plVar13;
    *(long *)(p_Var11 + 0x20) = lVar9;
    *(__tree_node_base **)(p_Var11 + 0x48) = p_Var11 + 0x50;
    *(undefined8 *)(p_Var11 + 0x30) = 0;
    *(undefined8 *)(p_Var11 + 0x28) = 0;
    *(undefined8 *)p_Var11 = 0;
    *(undefined8 *)(p_Var11 + 8) = 0;
    *(undefined8 *)(p_Var11 + 0x40) = 0;
    *(undefined8 *)(p_Var11 + 0x38) = 0;
    *plVar12 = (long)p_Var11;
    if (*(long *)*param_1 == 0) {
      p_Var5 = p_Var11;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var5 = (__tree_node_base *)*plVar12;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var5);
    uVar6 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar6 = 0;
  }
  auVar14._8_8_ = uVar6;
  auVar14._0_8_ = p_Var11;
  return auVar14;
}


