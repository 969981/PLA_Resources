/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c43a64; name: FUN_02c43a64
 */


undefined8 FUN_02c43a64(long *param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  char *__s;
  long lVar9;
  long *local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  long *local_38;
  
  __s = *(char **)(param_2 + 8);
  if (*__s == '\0') {
    return *(undefined8 *)(param_1[0x11] + 0x18);
  }
  pcVar2 = strchr(__s,0x2f);
  lVar9 = 0;
  if (pcVar2 != (char *)0x0) {
    do {
      local_48 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_60 = 0;
      strncpy((char *)&local_60,__s,(long)pcVar2 - (long)__s);
      if (lVar9 == 0) {
        lVar9 = FUN_02c438f4(param_1,&local_60);
      }
      else {
        lVar9 = FUN_02c43ca4(param_1,lVar9,&local_60);
      }
      sVar3 = strlen((char *)&local_60);
      __s = __s + sVar3 + 1;
      pcVar2 = strchr(__s,0x2f);
    } while (pcVar2 != (char *)0x0);
    if (*__s == '\0') {
      plVar5 = (long *)FUN_00938550();
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      goto joined_r0x02c43b50;
    }
  }
  if (((*PTR_DAT_04379cd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379cd0);
  }
  uVar4 = *(undefined8 *)PTR_DAT_04379cd8;
  *(undefined8 *)PTR_DAT_04379ce0 = uVar4;
  FUN_02a47cd8(&local_38,uVar4,__s);
  plVar5 = local_38;
joined_r0x02c43b50:
  if (lVar9 == 0) {
    lVar6 = *(long *)(param_2 + 8);
    lVar9 = param_1[0x11];
    pcVar8 = (code *)param_1[0xac];
  }
  else {
    if (plVar5 == (long *)0x0) {
      plVar7 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar7 = plVar5 + 0xc;
    }
    lVar6 = *plVar7;
    lVar9 = *(long *)(lVar9 + 0xe8);
    pcVar8 = (code *)param_1[0xac];
  }
  if (pcVar8 == (code *)0x0) {
    uVar4 = (**(code **)(**(long **)(lVar9 + 0x18) + 0x78))(*(long **)(lVar9 + 0x18),lVar6,1);
  }
  else {
    local_60 = lVar6;
    local_38 = param_1;
    (*pcVar8)(&local_68,param_1 + 0xb0,&local_60,&local_38);
    if (local_68 == (long *)0x0) {
      plVar7 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar7 = local_68 + 0xc;
    }
    uVar4 = (**(code **)(**(long **)(lVar9 + 0x18) + 0x78))(*(long **)(lVar9 + 0x18),*plVar7,1);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return uVar4;
}


