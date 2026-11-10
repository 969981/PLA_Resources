/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130ad28; name: FUN_0130ad28
 */


void FUN_0130ad28(undefined8 *param_1,char *param_2)

{
  long *plVar1;
  int iVar2;
  size_t __n;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *local_28;
  
  __n = strlen(s_data___0427f778);
  iVar2 = strncmp(param_2,s_data___0427f778,__n);
  if (iVar2 == 0) {
    FUN_0130e8e0(&local_28,param_2);
  }
  else {
    FUN_0130e93c(&local_28,s_data___0427f778,param_2);
  }
  plVar1 = local_28;
  local_28 = (long *)0x0;
  *param_1 = plVar1;
  if (plVar1 == (long *)0x0) {
    lVar3 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar3 = plVar1[0xb];
    if (plVar1 != (long *)0x0) {
      lVar4 = plVar1[0xc];
      goto joined_r0x0130ad9c;
    }
  }
  lVar4 = *(long *)PTR_PTR_04379d00;
joined_r0x0130ad9c:
  if (plVar1 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = plVar1[0xd];
  }
  param_1[1] = lVar3;
  param_1[2] = lVar4;
  param_1[3] = lVar6;
  param_1[4] = 0;
  plVar5 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    plVar5 = plVar1;
  }
  param_1[4] = plVar5;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_02a8eb50(param_1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


