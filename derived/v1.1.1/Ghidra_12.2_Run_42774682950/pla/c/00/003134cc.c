/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003134cc; name: FUN_003134cc
 */


undefined8 FUN_003134cc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  size_t __n;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *local_78;
  long *local_70;
  long *local_68;
  
  lVar3 = (**(code **)(*param_1 + 0x98))();
  (**(code **)(*param_1 + 0x98))(param_1);
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_78 = (long *)0x0;
  if (*(char *)(*(long *)(lVar3 + 0x20) + 0x4b) == '\0') {
    FUN_00387324(extraout_x1,param_1,&local_78);
    plVar11 = local_78;
    plVar8 = local_70;
    if (local_78 != local_70) {
LAB_00313654:
      do {
                    /* try { // try from 00313658 to 00313667 has its CatchHandler @ 00313754 */
        param_2 = FUN_00313778(*plVar11,param_1,param_2,param_3);
        plVar11 = plVar11 + 1;
      } while (plVar8 != plVar11);
    }
  }
  else if (0 < *(int *)(lVar3 + 0x68)) {
    lVar12 = 0;
    plVar8 = (long *)0x0;
    lVar13 = 1;
    lVar7 = *(long *)(lVar3 + 0x28);
    do {
      lVar9 = (long)plVar8 - (long)local_78 >> 3;
      uVar10 = lVar9 + 1;
      if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 0031372c to 00313733 has its CatchHandler @ 00313734 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
        uVar6 = (long)local_68 - (long)local_78 >> 2;
        if (uVar10 <= uVar6) {
          uVar10 = uVar6;
        }
        if (uVar10 != 0) goto LAB_003135c0;
        lVar4 = 0;
      }
      else {
        uVar10 = 0x1fffffffffffffff;
LAB_003135c0:
        lVar4 = FUN_002e2e80(PTR_FUN_04373078,uVar10 << 3);
      }
      plVar2 = local_78;
      plVar11 = (long *)(lVar4 + lVar9 * 8);
      plVar1 = (long *)(lVar4 + uVar10 * 8);
      plVar8 = plVar11 + 1;
      *plVar11 = lVar7;
      __n = (long)local_70 - (long)local_78;
      plVar11 = (long *)((long)plVar11 - __n);
      if (0 < (long)__n) {
        memcpy(plVar11,local_78,__n);
      }
      local_78 = plVar11;
      local_70 = plVar8;
      local_68 = plVar1;
      if (plVar2 != (long *)0x0) {
        FUN_002e2ea0(PTR_LAB_04373088,plVar2);
      }
      if (*(int *)(lVar3 + 0x68) <= lVar13) {
LAB_00313648:
        plVar11 = local_78;
        if (local_78 != plVar8) goto LAB_00313654;
        break;
      }
      while( true ) {
        lVar12 = lVar12 + 0x98;
        lVar13 = lVar13 + 1;
        lVar7 = *(long *)(lVar3 + 0x28) + lVar12;
        if (local_68 <= plVar8) break;
        *plVar8 = lVar7;
        plVar8 = local_70 + 1;
        local_70 = plVar8;
        if (*(int *)(lVar3 + 0x68) <= lVar13) goto LAB_00313648;
      }
    } while( true );
  }
  if (*(char *)(*(long *)(lVar3 + 0x20) + 0x48) == '\0') {
    uVar5 = FUN_00380d50(extraout_x1,param_1);
    uVar5 = FUN_00311a94(uVar5,param_2,param_3);
  }
  else {
                    /* try { // try from 00313684 to 00313713 has its CatchHandler @ 00313744 */
    uVar5 = FUN_00380d50(extraout_x1,param_1);
    uVar5 = FUN_00311f94(uVar5,param_2,param_3);
  }
  if (local_78 != (long *)0x0) {
    local_70 = local_78;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return uVar5;
}


