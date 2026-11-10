/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01251828; name: FUN_01251828
 */


void FUN_01251828(long param_1,undefined4 param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 local_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined4 local_90 [2];
  long *local_88;
  undefined1 local_80;
  long *local_78;
  long *local_70;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar3 = (undefined4 *)
           FUN_01236d4c(param_1 + 0x5c0,
                        *(undefined4 *)
                         (*(long *)(param_1 + 0x1270) + (ulong)*(byte *)(param_1 + 0x12a8) * 4),
                        param_2);
  local_90[0] = *puVar3;
  local_88 = *(long **)(puVar3 + 2);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x18))();
  }
  local_80 = *(undefined1 *)(puVar3 + 4);
  local_78 = *(long **)(puVar3 + 6);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
  }
  local_70 = *(long **)(puVar3 + 8);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))();
  }
  local_68 = *(undefined8 *)(puVar3 + 10);
  local_60 = *(long **)(puVar3 + 0xc);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x18))();
  }
  local_58 = *(undefined8 *)(puVar3 + 0xe);
  local_50 = *(undefined8 *)(puVar3 + 0x10);
  uStack_48 = *(undefined8 *)(puVar3 + 0x12);
  uVar1 = (ulong)param_3;
  lVar2 = uVar1 * 0x90;
  local_120 = *(undefined8 *)(&DAT_041fe828 + lVar2);
  puStack_118 = (&PTR_s_pane_L_btn_list_00_T_name_item_0_041fe830)[uVar1 * 0x12];
  local_110 = *(undefined8 *)(&DAT_041fe838 + lVar2);
  uStack_108 = *(undefined8 *)(&DAT_041fe840 + lVar2);
  local_100 = (&PTR_s_pane_L_btn_list_00_T_name_color__041fe848)[uVar1 * 0x12];
  uStack_f8 = *(undefined8 *)(&DAT_041fe850 + lVar2);
  local_f0 = *(undefined8 *)(&DAT_041fe858 + lVar2);
  puStack_e8 = (&PTR_s_pane_L_btn_list_00_P_icon_equipm_041fe860)[uVar1 * 0x12];
  local_e0 = *(undefined8 *)(&DAT_041fe868 + lVar2);
  uStack_d8 = *(undefined8 *)(&DAT_041fe870 + lVar2);
  local_d0 = (&PTR_s_pane_L_btn_list_00_P_icon_fittin_041fe878)[uVar1 * 0x12];
  uStack_c8 = *(undefined8 *)(&DAT_041fe880 + lVar2);
  local_c0 = *(undefined8 *)(&DAT_041fe888 + lVar2);
  puStack_b8 = (&PTR_s_pane_L_btn_list_00_P_icon_defaul_041fe890)[uVar1 * 0x12];
  local_b0 = *(undefined8 *)(&DAT_041fe898 + lVar2);
  uStack_a8 = *(undefined8 *)(&DAT_041fe8a0 + lVar2);
  local_a0 = (&PTR_s_pane_L_btn_list_00_P_icon_dyed_0_041fe8a8)[uVar1 * 0x12];
  uStack_98 = *(undefined8 *)(&DAT_041fe8b0 + lVar2);
  FUN_012519dc(param_1,&local_120,local_90);
  FUN_01251b68(param_1,&local_120,param_2);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  return;
}


