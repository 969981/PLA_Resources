/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031983c; name: FUN_0031983c
 */


long FUN_0031983c(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar8;
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined ***local_28;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  if ((*(char *)(param_1 + 0x43) != '\0') &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 0x20) + 0x48) != '\0')) {
    puVar3 = *(ulong **)(param_1 + 0x30);
    if ((puVar3 != (ulong *)0x0) &&
       (puStack_48 = PTR_LAB_04373a98, local_50 = param_1, *puVar3 != 0xffffffffffffffff)) {
      local_40 = &puStack_48;
      local_28 = &local_40;
      puStack_38 = (undefined1 *)&local_50;
      std::__call_once(puVar3,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    if ((*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_1 + 0x38) * 4) == 10) &&
       (*(int *)(param_1 + 0x3c) != 3)) {
      (**(code **)(*param_2 + 0x98))(param_2);
      lVar8 = *(long *)PTR_DAT_04373ac0;
      uVar2 = *(uint *)(param_1 + 0x44);
      plVar5 = (long *)FUN_0038c150(extraout_x1_00,param_2,param_1,0);
      lVar6 = (**(code **)(*plVar5 + 0x48))();
      return lVar6 + lVar8 + (ulong)(((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
             (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    }
  }
  if (*(int *)(param_1 + 0x3c) == 3) {
    puVar3 = *(ulong **)(param_1 + 0x30);
    if ((puVar3 != (ulong *)0x0) &&
       (puStack_48 = PTR_LAB_04373a98, local_50 = param_1, *puVar3 != 0xffffffffffffffff)) {
      local_40 = &puStack_48;
      local_28 = &local_40;
      puStack_38 = (undefined1 *)&local_50;
      std::__call_once(puVar3,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    if ((*(int *)(param_1 + 0x38) == 0xb) && (uVar4 = FUN_00344344(param_1), (uVar4 & 1) != 0)) {
      plVar5 = (long *)FUN_0038e920(extraout_x1,param_2,param_1);
      uVar4 = FUN_00395ca8();
      if ((uVar4 & 1) != 0) {
        uVar4 = (**(code **)(*plVar5 + 0x50))(plVar5);
        uVar4 = uVar4 & 0xffffffff;
        goto LAB_003199c8;
      }
    }
    uVar4 = FUN_00386cec(extraout_x1,param_2,param_1);
    uVar4 = uVar4 & 0xffffffff;
  }
  else if (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 0x20) + 0x4b) == '\0') {
    uVar4 = FUN_00386684(extraout_x1,param_2,param_1);
    uVar4 = uVar4 & 1;
  }
  else {
    uVar4 = 1;
  }
LAB_003199c8:
  lVar6 = FUN_00318848(param_1,param_2);
  uVar7 = FUN_0034c24c(param_1);
  if ((uVar7 & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    puVar3 = *(ulong **)(param_1 + 0x30);
    if ((puVar3 != (ulong *)0x0) && (puStack_48 = PTR_LAB_04373a98, *puVar3 != 0xffffffffffffffff))
    {
      local_40 = &puStack_48;
      local_28 = &local_40;
      local_50 = param_1;
      puStack_38 = (undefined1 *)&local_50;
      std::__call_once(puVar3,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    lVar6 = lVar6 + uVar4 * ((((uint)LZCOUNT(iVar1 << 3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) <<
                            (*(int *)(param_1 + 0x38) == 10));
  }
  else if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar6 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
            (ulong)(((uint)LZCOUNT(*(int *)(param_1 + 0x44) << 3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
  }
  return lVar6;
}


