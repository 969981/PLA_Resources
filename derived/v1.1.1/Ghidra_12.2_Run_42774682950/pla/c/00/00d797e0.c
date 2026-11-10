/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d797e0; name: FUN_00d797e0
 */


void FUN_00d797e0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  size_t __n;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  char *__s1;
  long *local_38;
  
  if (*param_2 == 0) {
    puVar3 = (undefined8 *)PTR_PTR_04379d00;
  }
  else {
    puVar3 = (undefined8 *)(*param_2 + 0x60);
  }
  __s1 = (char *)*puVar3;
  __n = strlen(s_data___0427f778);
  iVar2 = strncmp(__s1,s_data___0427f778,__n);
  if (iVar2 == 0) {
    FUN_00938654(&local_38,param_2);
  }
  else {
    FUN_009386d0(&local_38,s_data___0427f778,param_2);
  }
  plVar1 = local_38;
  local_38 = (long *)0x0;
  *param_1 = plVar1;
  if (plVar1 == (long *)0x0) {
    lVar4 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar4 = plVar1[0xb];
    if (plVar1 != (long *)0x0) {
      lVar5 = plVar1[0xc];
      goto joined_r0x00d79860;
    }
  }
  lVar5 = *(long *)PTR_PTR_04379d00;
joined_r0x00d79860:
  if (plVar1 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = plVar1[0xd];
  }
  param_1[1] = lVar4;
  param_1[2] = lVar5;
  param_1[3] = lVar7;
  param_1[4] = 0;
  plVar6 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    plVar6 = plVar1;
  }
  param_1[4] = plVar6;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_02a8eb50(param_1);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


