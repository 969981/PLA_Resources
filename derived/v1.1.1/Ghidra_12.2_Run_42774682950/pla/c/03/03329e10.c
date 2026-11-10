/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03329e10; name: FUN_03329e10
 */


void FUN_03329e10(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  SemaphoreType *pSVar7;
  long lVar8;
  undefined1 auStack_d8 [8];
  long *local_d0;
  long *local_88;
  ulong local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x28);
  uVar3 = FUN_032cf5b0(0x48);
  FUN_0332b950(uVar3,*(undefined4 *)(param_2 + 4));
  pSVar7 = *(SemaphoreType **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  if (pSVar7 != (SemaphoreType *)0x0) {
    *(undefined4 *)(pSVar7 + 0x38) = 0;
    if ((-1 < (int)*(uint *)(pSVar7 + 0x3c)) && (*(long *)(pSVar7 + 0x30) != 0)) {
      FUN_032cf244(PTR_PTR_0434a080,*(long *)(pSVar7 + 0x30),4,*(uint *)(pSVar7 + 0x3c) & 0x3fffffff
                  );
    }
    *(undefined8 *)(pSVar7 + 0x30) = 0;
    *(undefined4 *)(pSVar7 + 0x3c) = 0x80000000;
    nn::os::FinalizeSemaphore(pSVar7);
    lVar8 = tpidr_el0;
    lVar6 = *(long *)(lVar8 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar6;
    }
    plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,pSVar7,0x48);
  }
  FUN_0333d158(&local_80);
  local_80 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffe;
  local_78 = *(undefined8 *)(param_2 + 0x18);
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(lVar8 + 0x20) = 0x100000001;
    *(undefined1 *)(lVar8 + 0x48) = 0;
    *(undefined8 *)(lVar8 + 0x78) = 0;
    if (*(char *)(lVar8 + 0x1d) != '\x01') {
      local_70 = 2;
    }
    FUN_0333de70(auStack_d8,0,8,&LAB_0332b8d0,&LAB_0332b8e0);
    *local_d0 = lVar8;
    FUN_032ba248(&local_88,&local_80,auStack_d8);
    plVar4 = local_88;
    local_88 = (long *)0x0;
    plVar5 = *(long **)(lVar8 + 0x10);
    *(long **)(lVar8 + 0x10) = plVar4;
    if ((plVar5 != (long *)0x0) && ((**(code **)(*plVar5 + 8))(), local_88 != (long *)0x0)) {
      (**(code **)(*local_88 + 8))();
    }
    FUN_0333ddd4(auStack_d8);
    if (*(char *)(lVar8 + 0x1c) == '\x02') {
      FUN_032ba218();
    }
    else {
      FUN_032ba1b0(*(undefined8 *)(lVar8 + 0x10),(long)*(int *)(lVar8 + 0x18));
    }
    if (iVar2 != 1) {
      lVar6 = 0;
      do {
        lVar1 = lVar8 + lVar6;
        *(undefined8 *)(lVar1 + 0xa0) = 0x100000001;
        *(undefined1 *)(lVar1 + 200) = 0;
        *(undefined8 *)(lVar1 + 0xf8) = 0;
        if (*(char *)(lVar1 + 0x9d) != '\x01') {
          local_70 = 2;
        }
        FUN_0333de70(auStack_d8,0,8,&LAB_0332b8d0,&LAB_0332b8e0);
        *local_d0 = lVar1 + 0x80;
        FUN_032ba248(&local_88,&local_80,auStack_d8);
        plVar4 = local_88;
        local_88 = (long *)0x0;
        plVar5 = *(long **)(lVar1 + 0x90);
        *(long **)(lVar1 + 0x90) = plVar4;
        if ((plVar5 != (long *)0x0) && ((**(code **)(*plVar5 + 8))(), local_88 != (long *)0x0)) {
          (**(code **)(*local_88 + 8))();
        }
        FUN_0333ddd4(auStack_d8);
        if (*(char *)(lVar1 + 0x9c) == '\x02') {
          FUN_032ba218();
        }
        else {
          FUN_032ba1b0(*(undefined8 *)(lVar1 + 0x90),(long)*(int *)(lVar1 + 0x98));
        }
        lVar6 = lVar6 + 0x80;
      } while ((long)iVar2 * 0x80 + -0x80 != lVar6);
    }
  }
  FUN_0332a110(param_1);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}


