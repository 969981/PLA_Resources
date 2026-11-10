/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01211e38; name: FUN_01211e38
 */


void FUN_01211e38(long param_1,uint param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  char *local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long *local_88;
  char acStack_80 [64];
  long *local_38;
  
  snprintf(acStack_80,0x40,"anime_L_btn_search_sub_%02d_marking_ptn",param_3);
  local_a8 = acStack_80;
  FUN_009313e8(&local_38,&local_a8);
  plVar1 = local_38;
  if (local_38 == (long *)0x0) {
    local_a0 = *(long *)PTR_DAT_04379c88;
LAB_0121200c:
    lStack_98 = *(long *)PTR_PTR_04379d00;
    if (local_38 != (long *)0x0) goto LAB_01211ea8;
LAB_0121201c:
    local_90 = 0;
  }
  else {
    local_a0 = local_38[0xb];
    if (local_38 == (long *)0x0) goto LAB_0121200c;
    lStack_98 = local_38[0xc];
    if (local_38 == (long *)0x0) goto LAB_0121201c;
LAB_01211ea8:
    local_90 = local_38[0xd];
  }
  local_88 = (long *)0x0;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))(local_38);
  }
  local_88 = plVar1;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_a0);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_a8 = acStack_80;
  FUN_009313e8(&local_38,&local_a8);
  plVar1 = local_38;
  if (local_38 == (long *)0x0) {
    local_a0 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_a0 = local_38[0xb];
    if (local_38 != (long *)0x0) {
      plVar2 = local_38 + 0xc;
      goto LAB_01211f20;
    }
  }
  plVar2 = (long *)PTR_PTR_04379d00;
LAB_01211f20:
  lStack_98 = *plVar2;
  if (local_38 == (long *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = local_38[0xd];
  }
  local_88 = (long *)0x0;
  if (local_38 == (long *)0x0) {
    local_88 = local_38;
  }
  else {
    (**(code **)(*local_38 + 0x18))(local_38);
    plVar2 = local_88;
    local_88 = plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
  }
  FUN_00d2e4b8((float)param_2,param_1 + 0x180,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_01212824(param_1,1,param_3,
               *(ushort *)(*(long *)(param_1 + 0x5b0) + 0x14) >> (ulong)((param_2 & 0xf) << 1) & 3);
  return;
}


