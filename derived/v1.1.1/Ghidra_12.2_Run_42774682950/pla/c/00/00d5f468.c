/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5f468; name: FUN_00d5f468
 */


void FUN_00d5f468(undefined8 *param_1,undefined8 param_2,int param_3,int param_4,ulong param_5,
                 ulong param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar6 = param_5;
  uVar7 = param_6;
  if ((DAT_043abe40 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(&DAT_043abe40);
    uVar7 = param_6 & 0xffffffff;
    uVar6 = param_5 & 0xffffffff;
    if (iVar5 != 0) {
      DAT_043abc40 = 0xac19b73e9a8d7188;
      DAT_043abc48 = "anime_L_inventory_parts_00_shift_main_l_out";
      DAT_043abc60 = 0x3914dfc7a5c000bb;
      DAT_043abc68 = "anime_L_inventory_parts_00_shift_main_l_in";
      DAT_043abc80 = 0x5c2d829c077a5f1a;
      DAT_043abc88 = "anime_L_inventory_parts_00_shift_main_r_out";
      DAT_043abc50 = 0x2b;
      DAT_043abc58 = 0;
      DAT_043abc90 = 0x2b;
      DAT_043abc98 = 0;
      DAT_043abca0 = 0x5f8cc0c1fa325199;
      DAT_043abca8 = "anime_L_inventory_parts_00_shift_main_r_in";
      DAT_043abcc0 = 0x8fe09ffcc7edf897;
      DAT_043abcc8 = "anime_L_inventory_parts_00_shift_list_name_main_l_out";
      DAT_043abce0 = 0xe1ae8abeab269656;
      DAT_043abce8 = "anime_L_inventory_parts_00_shift_list_name_main_l_in";
      DAT_043abd00 = 0xa8ed460a89f00ba1;
      DAT_043abd08 = "anime_L_inventory_parts_00_shift_list_name_main_r_out";
      DAT_043abcd0 = 0x35;
      DAT_043abcd8 = 0;
      DAT_043abd10 = 0x35;
      DAT_043abd18 = 0;
      DAT_043abd20 = 0x8d1caae38e2d1b4;
      DAT_043abd28 = "anime_L_inventory_parts_00_shift_list_name_main_r_in";
      DAT_043abd40 = 0x9159003204e06a55;
      DAT_043abd48 = "anime_L_inventory_parts_00_shift_sub_l_out";
      DAT_043abc70 = 0x2a;
      DAT_043abc78 = 0;
      DAT_043abd60 = 0x818c19183e5e9b70;
      DAT_043abd68 = "anime_L_inventory_parts_00_shift_sub_l_in";
      DAT_043abcb0 = 0x2a;
      DAT_043abcb8 = 0;
      DAT_043abd50 = 0x2a;
      DAT_043abd58 = 0;
      DAT_043abd90 = 0x2a;
      DAT_043abd98 = 0;
      DAT_043abd80 = 0x3d3b4ea9e9bf9923;
      DAT_043abd88 = "anime_L_inventory_parts_00_shift_sub_r_out";
      DAT_043abda0 = 0xe2be3860e7c136ea;
      DAT_043abda8 = "anime_L_inventory_parts_00_shift_sub_r_in";
      DAT_043abd70 = 0x29;
      DAT_043abd78 = 0;
      DAT_043abdb0 = 0x29;
      DAT_043abdb8 = 0;
      DAT_043abdc0 = 0x90308155c47350a8;
      DAT_043abdc8 = "anime_L_inventory_parts_00_shift_list_name_sub_l_out";
      DAT_043abde0 = 0xab26ae96dacfd55b;
      DAT_043abde8 = "anime_L_inventory_parts_00_shift_list_name_sub_l_in";
      DAT_043abe00 = 0x40444cb331603e3a;
      DAT_043abe08 = "anime_L_inventory_parts_00_shift_list_name_sub_r_out";
      DAT_043abcf0 = 0x34;
      DAT_043abcf8 = 0;
      DAT_043abd30 = 0x34;
      DAT_043abd38 = 0;
      DAT_043abdd0 = 0x34;
      DAT_043abdd8 = 0;
      DAT_043abe10 = 0x34;
      DAT_043abe18 = 0;
      DAT_043abdf0 = 0x33;
      DAT_043abdf8 = 0;
      DAT_043abe20 = 0xd19f8f912f43d939;
      DAT_043abe28 = "anime_L_inventory_parts_00_shift_list_name_sub_r_in";
      DAT_043abe30 = 0x33;
      DAT_043abe38 = 0;
      FUN_00100250(0xd48ea0,0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043abe40);
      uVar7 = param_6 & 0xffffffff;
      uVar6 = param_5 & 0xffffffff;
    }
  }
  iVar5 = 0;
  if (param_3 != 2) {
    iVar5 = param_3;
  }
  lVar8 = (long)iVar5;
  puVar1 = &DAT_043abc40 + lVar8 * 0x20;
  puVar2 = &DAT_043abcc0 + lVar8 * 0x20;
  if (param_4 == 1) {
    puVar1 = &DAT_043abc80 + lVar8 * 0x20;
    puVar2 = &DAT_043abd00 + lVar8 * 0x20;
  }
  if ((uVar7 & 1) == 0) {
    puVar2 = puVar1;
  }
  if ((uVar6 & 1) == 0) {
    uVar3 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar3;
    plVar4 = (long *)puVar2[3];
    param_1[2] = puVar2[2];
    param_1[3] = plVar4;
  }
  else {
    uVar3 = puVar2[5];
    *param_1 = puVar2[4];
    param_1[1] = uVar3;
    plVar4 = (long *)puVar2[7];
    param_1[2] = puVar2[6];
    param_1[3] = plVar4;
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d5f508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))();
  return;
}


