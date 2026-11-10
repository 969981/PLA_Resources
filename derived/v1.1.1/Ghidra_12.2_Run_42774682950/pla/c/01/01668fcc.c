/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01668fcc; name: FUN_01668fcc
 */


void FUN_01668fcc(long *param_1,long param_2,ulong param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  long local_60;
  long lStack_58;
  long local_50;
  long *local_48;
  
  param_3 = param_3 & 0xffffffff;
  if (((ulong)(*(long *)(param_2 + 0x80) - *(long *)(param_2 + 0x78) >> 3) <= param_3) ||
     (lVar4 = *(long *)(param_2 + 0x68), lVar4 == 0)) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar2 = PTR_DAT_0437a0d8;
    lVar4 = *(long *)(PTR_DAT_0437a0d8 + 8);
    *param_1 = *(long *)PTR_DAT_0437a0d8;
    param_1[1] = lVar4;
    plVar8 = *(long **)(puVar2 + 0x18);
    param_1[2] = *(long *)(puVar2 + 0x10);
    param_1[3] = (long)plVar8;
    if (plVar8 == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x016690ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x18))();
    return;
  }
  plVar7 = *(long **)(*(long *)(param_2 + 0x78) + param_3 * 8);
  plVar8 = (long *)PTR_PTR_04379d00;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 0xc;
  }
  pcVar9 = (char *)*plVar8;
  if (plVar7 == (long *)0x0) {
    plVar8 = (long *)0x0;
    if (*pcVar9 == '[') {
      plVar8 = (long *)0x0;
      goto LAB_0166917c;
    }
  }
  else {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    cVar1 = *pcVar9;
    (**(code **)(*plVar7 + 0x20))(plVar7);
    if (cVar1 == '[') {
      lVar4 = *(long *)(param_2 + 0x68);
      plVar8 = *(long **)(*(long *)(param_2 + 0x78) + param_3 * 8);
      if (plVar8 != (long *)0x0) {
        local_60 = plVar8[0xb];
        goto joined_r0x01669188;
      }
LAB_0166917c:
      local_60 = *(long *)PTR_DAT_04379c88;
joined_r0x01669188:
      if (plVar8 == (long *)0x0) {
        lStack_58 = *(long *)PTR_PTR_04379d00;
        local_50 = 0;
      }
      else {
        lStack_58 = plVar8[0xc];
        local_50 = plVar8[0xd];
      }
      local_48 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      local_48 = plVar8;
      FUN_01660c60(param_1,lVar4,&local_60,param_2 + 0x70);
      if (local_48 == (long *)0x0) {
        return;
      }
      (**(code **)(*local_48 + 0x20))();
      return;
    }
    plVar8 = *(long **)(*(long *)(param_2 + 0x78) + param_3 * 8);
  }
  if (plVar8 == (long *)0x0) {
    lVar4 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar4 = plVar8[0xb];
    if (plVar8 != (long *)0x0) {
      lVar5 = plVar8[0xc];
      goto joined_r0x01669218;
    }
  }
  lVar5 = *(long *)PTR_PTR_04379d00;
joined_r0x01669218:
  if (plVar8 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = plVar8[0xd];
  }
  *param_1 = lVar4;
  param_1[1] = lVar5;
  param_1[2] = lVar6;
  param_1[3] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  param_1[3] = (long)plVar8;
  return;
}


