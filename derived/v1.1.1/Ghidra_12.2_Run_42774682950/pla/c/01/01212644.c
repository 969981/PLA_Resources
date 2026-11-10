/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01212644; name: FUN_01212644
 */


void FUN_01212644(undefined8 param_1,int param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *local_a0;
  long *local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  byte local_70 [64];
  
  snprintf((char *)local_70,0x40,"pane_L_btn_search_sub_%02d_T_btn_sub_contents_00",param_3);
  local_a0 = local_70;
  FUN_009313e8(&local_98,&local_a0);
  plVar1 = local_98;
  if (local_98 == (long *)0x0) {
    local_90 = *(long *)PTR_DAT_04379c88;
LAB_0121280c:
    lStack_88 = *(long *)PTR_PTR_04379d00;
    if (local_98 != (long *)0x0) goto LAB_012126b0;
LAB_0121281c:
    local_80 = 0;
  }
  else {
    local_90 = local_98[0xb];
    if (local_98 == (long *)0x0) goto LAB_0121280c;
    lStack_88 = local_98[0xc];
    if (local_98 == (long *)0x0) goto LAB_0121281c;
LAB_012126b0:
    local_80 = local_98[0xd];
  }
  local_78 = (long *)0x0;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x18))(local_98);
    plVar2 = local_78;
    local_78 = plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
      goto joined_r0x012127f4;
    }
  }
  local_78 = plVar1;
joined_r0x012127f4:
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (param_2 == 0x2f) {
    puVar4 = (undefined1 *)0x78b6ad00ae91a654;
    uVar3 = 0;
  }
  else if (param_2 == 0) {
    puVar4 = (undefined1 *)0x4d3758727834b4;
    uVar3 = 1;
  }
  else {
    puVar4 = &DAT_cbf29ce484222645;
    snprintf((char *)local_70,0x40,"initial_%02d",param_2 + -1);
    if (local_70[0] != 0) {
      pbVar5 = (byte *)((ulong)local_70 | 1);
      do {
        puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)local_70[0]) * 0x100000001b3);
        local_70[0] = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (local_70[0] != 0);
    }
    uVar3 = 1;
  }
  FUN_01210648(param_1,uVar3,puVar4,&local_90);
  FUN_01212824(param_1,0,param_3,0);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return;
}


