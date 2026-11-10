/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01353250; name: FUN_01353250
 */


void FUN_01353250(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *local_28;
  
  uVar2 = FUN_0135db24();
  if ((uVar2 & 1) == 0) {
    FUN_0135dbc4(&local_28,s_data___0427f778,param_2);
  }
  else {
    FUN_0135db68(&local_28,param_2);
  }
  plVar1 = local_28;
  local_28 = (long *)0x0;
  *param_1 = plVar1;
  if (plVar1 == (long *)0x0) {
    lVar4 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar4 = plVar1[0xb];
    if (plVar1 != (long *)0x0) {
      lVar5 = plVar1[0xc];
      goto joined_r0x013532a8;
    }
  }
  lVar5 = *(long *)PTR_PTR_04379d00;
joined_r0x013532a8:
  if (plVar1 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = plVar1[0xd];
  }
  param_1[1] = lVar4;
  param_1[2] = lVar5;
  param_1[3] = lVar6;
  param_1[4] = 0;
  if (plVar1 == (long *)0x0) {
    param_1[4] = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    plVar3 = (long *)param_1[4];
    param_1[4] = plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_02a8eb50(param_1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


