/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00356204; name: FUN_00356204
 */


void FUN_00356204(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  int *piVar15;
  long lVar16;
  undefined **local_b8 [2];
  undefined8 local_a8;
  undefined *local_a0;
  undefined **ppuStack_98;
  undefined8 local_90;
  undefined *local_80;
  undefined **local_78;
  undefined *local_70;
  undefined **ppuStack_68;
  
  if (0 < *(int *)(param_2 + 0x2c)) {
    lVar12 = 0;
    uVar10 = 0;
    do {
      lVar8 = *(long *)(param_2 + 0x68);
      uVar3 = FUN_00365e80(param_3 + 0x30,uVar10 & 0xffffffff);
      FUN_0035dd98(param_1,lVar8 + lVar12,uVar3);
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x90;
    } while ((long)uVar10 < (long)*(int *)(param_2 + 0x2c));
  }
  if (0 < *(int *)(param_2 + 0x30)) {
    lVar12 = 0;
    uVar10 = 0;
    do {
      lVar8 = *(long *)(param_2 + 0x70);
      uVar3 = FUN_00365f68(param_3 + 0x48,uVar10 & 0xffffffff);
      FUN_0035e0b0(param_1,lVar8 + lVar12,uVar3);
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x50;
    } while ((long)uVar10 < (long)*(int *)(param_2 + 0x30));
  }
  if (0 < *(int *)(param_2 + 0x34)) {
    uVar10 = 0;
    do {
      lVar8 = *(long *)(param_2 + 0x78);
      lVar12 = FUN_00366050(param_3 + 0x60,uVar10 & 0xffffffff);
      plVar14 = (long *)(lVar8 + uVar10 * 0x30 + 0x10);
      lVar16 = *plVar14;
      if ((((lVar16 != 0) &&
           (lVar9 = *(long *)(lVar16 + 0x88), lVar4 = FUN_003b3f30(), lVar9 != lVar4)) &&
          (*(int *)(*(long *)(lVar16 + 0x88) + 0xa0) == 3)) &&
         ((lVar16 = *(long *)(*plVar14 + 0x88), *(char *)(lVar16 + 0x9b) != '\0' ||
          (*(char *)(lVar16 + 0x9c) != '\0')))) {
        FUN_0034dc2c(param_1,*(undefined8 *)(lVar8 + uVar10 * 0x30 + 8),lVar12,0,
                     "Files with optimize_for = LITE_RUNTIME cannot define services unless you set both options cc_generic_services and java_generic_services to false."
                    );
      }
      piVar15 = (int *)(lVar8 + uVar10 * 0x30 + 0x28);
      if (0 < *piVar15) {
        iVar13 = 0;
        do {
          FUN_003666a8(lVar12 + 0x18,iVar13);
          iVar13 = iVar13 + 1;
        } while (iVar13 < *piVar15);
      }
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)*(int *)(param_2 + 0x34));
  }
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar12 = 0;
    uVar10 = 0;
    do {
      lVar8 = *(long *)(param_2 + 0x80);
      uVar3 = FUN_00366138(param_3 + 0x78,uVar10 & 0xffffffff);
      FUN_0035e5d0(param_1,lVar8 + lVar12,uVar3);
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x98;
    } while ((long)uVar10 < (long)*(int *)(param_2 + 0x38));
  }
  lVar8 = *(long *)(param_2 + 0x88);
  lVar12 = FUN_003b3f30();
  puVar2 = PTR_LAB_04373ba8;
  puVar1 = PTR_LAB_04373ba0;
  if (((lVar8 == lVar12) || (*(int *)(*(long *)(param_2 + 0x88) + 0xa0) != 3)) &&
     (0 < *(int *)(param_2 + 0x20))) {
    lVar12 = 0;
    puVar5 = *(ulong **)(param_2 + 0x18);
    while( true ) {
      if ((puVar5 != (ulong *)0x0) && (local_70 = param_2, *puVar5 != 0xffffffffffffffff)) {
        local_a0 = puVar1;
        local_b8[0] = &local_a0;
        ppuStack_98 = &local_70;
        std::__call_once(puVar5,local_b8,(_func_void_void_ptr *)puVar2);
      }
      lVar8 = *(long *)(*(long *)(param_2 + 0x48) + lVar12 * 8);
      if (((lVar8 != 0) &&
          (lVar4 = *(long *)(lVar8 + 0x88), lVar16 = FUN_003b3f30(), lVar4 != lVar16)) &&
         (*(int *)(*(long *)(lVar8 + 0x88) + 0xa0) == 3)) break;
      lVar12 = lVar12 + 1;
      if (*(int *)(param_2 + 0x20) <= lVar12) goto LAB_003565cc;
      puVar5 = *(ulong **)(param_2 + 0x18);
    }
    puVar6 = *(ulong **)(param_2 + 0x18);
    puVar5 = (ulong *)0x0;
    if (puVar6 != (ulong *)0x0) {
      local_70 = param_2;
      if (*puVar6 != 0xffffffffffffffff) {
        ppuStack_98 = &local_70;
        local_a0 = puVar1;
        local_b8[0] = &local_a0;
        std::__call_once(puVar6,local_b8,(_func_void_void_ptr *)PTR_LAB_04373ba8);
      }
      puVar5 = *(ulong **)(param_2 + 0x18);
    }
    uVar11 = **(undefined8 **)(*(long *)(param_2 + 0x48) + lVar12 * 8);
    uVar3 = uVar11;
    if (puVar5 != (ulong *)0x0) {
      local_80 = param_2;
      if (*puVar5 != 0xffffffffffffffff) {
        ppuStack_68 = &local_80;
        local_70 = puVar1;
        local_78 = &local_70;
        std::__call_once(puVar5,&local_78,(_func_void_void_ptr *)PTR_LAB_04373ba8);
      }
      uVar3 = **(undefined8 **)(*(long *)(param_2 + 0x48) + lVar12 * 8);
    }
    FUN_0034b2f0(local_b8,
                 "Files that do not use optimize_for = LITE_RUNTIME cannot import files which do use this option.  This file is not lite, but it imports \""
                 ,uVar3);
                    /* try { // try from 00356558 to 0035656b has its CatchHandler @ 00356640 */
    puVar7 = (undefined8 *)FUN_002e4094(local_b8,"\" which is.",0xb);
    ppuStack_98 = (undefined **)puVar7[1];
    local_a0 = (undefined *)*puVar7;
    local_90 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
                    /* try { // try from 00356584 to 0035659b has its CatchHandler @ 00356608 */
    FUN_0034db00(param_1,uVar11,param_3,9,&local_a0);
    if (((ulong)local_a0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_90);
    }
    if (((ulong)local_b8[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_a8);
    }
  }
LAB_003565cc:
  if (*(int *)(param_2 + 0x3c) == 3) {
    FUN_0035ea34(param_1,param_2,param_3);
  }
  return;
}


