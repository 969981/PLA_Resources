/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00234298; name: FUN_00234298
 */


void FUN_00234298(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long *param_6)

{
  void *pvVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  void *__s;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  size_t __n;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  
  puVar13 = (undefined8 *)(param_1 + 0x18);
  *puVar13 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_1 + 0x58) = 0;
  lVar10 = param_6[4];
  if (*(long *)(param_3 + 0x58) == 0) {
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    if (lVar10 == 0) goto LAB_002343ec;
  }
  else {
    if (lVar10 == 0) {
      __s = (void *)param_6[5];
      iVar4 = *(int *)PTR_DAT_04372bd8;
      *(int *)((long)param_6 + 0xc) = iVar4;
      __n = (long)iVar4 * 8;
      *param_6 = (long)__s;
      pvVar1 = (void *)((long)__s + __n);
      memset(__s,0,__n);
      lVar10 = (long)pvVar1 + 0x10;
      *(void **)pvVar1 = pvVar1;
      *(void **)((long)pvVar1 + 8) = pvVar1;
      param_6[2] = (long)pvVar1;
      FUN_0023599c(lVar10,(long)pvVar1 + 0x40);
      param_6[4] = lVar10;
    }
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  }
  plVar8 = (long *)(*(long *)(lVar10 + 0x20) + (long)*(int *)(lVar10 + 0x28) * 0x68);
  *(int *)(lVar10 + 0x28) = *(int *)(lVar10 + 0x28) + 1;
  *(int *)(param_6 + 3) = (int)param_6[3] + 1;
  lVar10 = param_6[4];
  plVar8[5] = 0;
  plVar8[6] = lVar10;
  *(undefined4 *)(plVar8 + 9) = 0;
  *(undefined4 *)(plVar8 + 0xc) = 0;
  plVar8[2] = param_1;
  plVar9 = (long *)param_6[2];
  lVar10 = *plVar8;
  *plVar8 = *plVar9;
  *(long **)(lVar10 + 8) = plVar9;
  *(long **)(*plVar9 + 8) = plVar8;
  *plVar9 = lVar10;
  *(long **)(*param_6 + (long)(int)param_6[1] * 8 + -8) = plVar8;
LAB_002343ec:
  plVar8 = param_6 + 1;
  lVar10 = 0;
  if (*(long *)(*(long *)(param_3 + 0x18) + 0x18) != 0) {
    lVar10 = param_1;
  }
  uVar5 = FUN_002515d0(*(long *)(param_3 + 0x18),lVar10,param_2,param_1,param_6);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  if (param_5 != 0) {
    FUN_00242038(uVar5,param_5);
  }
  puVar3 = PTR_DAT_04372bb8;
  puVar2 = PTR_DAT_04372ba8;
  lVar10 = (**(code **)PTR_DAT_04372ba8)(0x10,4,*(undefined8 *)PTR_DAT_04372bb8);
  if (lVar10 != 0) {
    *(long *)lVar10 = lVar10;
    *(long *)(lVar10 + 8) = lVar10;
  }
  *(long *)(param_1 + 0x20) = lVar10;
  lVar12 = *(long *)(param_3 + 0x20);
  lVar11 = *(long *)(lVar12 + 8);
  if (lVar11 != lVar12) {
    while( true ) {
      uVar5 = *puVar13;
      lVar6 = (**(code **)puVar2)(0x38,4,*(undefined8 *)puVar3);
      if (lVar6 != 0) {
        FUN_00230294(lVar6,lVar11 + -8,uVar5);
      }
      FUN_00230538(lVar10,lVar6);
      lVar11 = *(long *)(lVar11 + 8);
      if (lVar11 == lVar12) break;
      lVar10 = *(long *)(param_1 + 0x20);
    }
  }
  if (param_4 != 0) {
    plVar9 = (long *)*puVar13;
    if (((*PTR_DAT_043729d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_043729d8), puVar2 = PTR_DAT_043729f0, iVar4 != 0)) {
      if (((*PTR_DAT_043729e8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar4 != 0)) {
        *(undefined8 *)puVar2 = 0;
        __cxa_guard_release(PTR_DAT_043729e8);
      }
      *(undefined **)PTR_DAT_043729e0 = puVar2;
      __cxa_guard_release(PTR_DAT_043729d8);
    }
    if (plVar9 != (long *)0x0) {
      for (plVar7 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9); plVar7 != (long *)0x0;
          plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)PTR_DAT_043729e0) {
          plVar9 = plVar9 + 0x1b;
          lVar10 = *plVar9;
          plVar7 = (long *)(param_4 + 0x48);
          *plVar9 = *plVar7;
          *(long **)(lVar10 + 8) = plVar7;
          *(long **)(*plVar7 + 8) = plVar9;
          *plVar7 = lVar10;
          break;
        }
      }
    }
  }
  if (param_6[4] != 0) {
    iVar4 = (int)*plVar8;
    uVar5 = 0;
    if ((0 < iVar4) && (iVar4 <= *(int *)PTR_DAT_04372bd8)) {
      uVar5 = *(undefined8 *)(*param_6 + (long)(iVar4 + -1) * 8);
    }
    FUN_00233ea8(param_1,uVar5);
  }
  iVar4 = 0;
  if (0 < (int)*plVar8) {
    iVar4 = (int)*plVar8 + -1;
  }
  *(int *)plVar8 = iVar4;
  return;
}


