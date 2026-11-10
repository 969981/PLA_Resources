/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c15f8; name: FUN_014c15f8
 */


void FUN_014c15f8(long param_1,int param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  uVar3 = param_3;
  if ((DAT_043c45d0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_043c45d0);
    uVar3 = param_3 & 0xffffffff;
    if (iVar1 != 0) {
      DAT_043c4550 = 0x6ae407d3323bd33b;
      DAT_043c4558 = "anime_L_pt_slide_L_sel_icon_00_select";
      DAT_043c4570 = 0x2113f7406d28694a;
      DAT_043c4578 = "anime_L_pt_slide_L_sel_icon_01_select";
      DAT_043c4590 = 0x7684603c5099fa85;
      DAT_043c4598 = "anime_L_pt_slide_L_sel_icon_02_select";
      DAT_043c4560 = 0x25;
      DAT_043c4568 = 0;
      DAT_043c4580 = 0x25;
      DAT_043c4588 = 0;
      DAT_043c45a0 = 0x25;
      DAT_043c45a8 = 0;
      DAT_043c45b0 = 0xb125cb701038fa9c;
      DAT_043c45b8 = "anime_L_pt_slide_L_sel_icon_03_select";
      DAT_043c45c0 = 0x25;
      DAT_043c45c8 = 0;
      FUN_00100250(0x14c0420,0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c45d0);
      uVar3 = param_3 & 0xffffffff;
    }
  }
  uVar4 = uVar3;
  if ((DAT_043c4658 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_043c4658);
    uVar4 = uVar3 & 0xffffffff;
    if (iVar1 != 0) {
      DAT_043c45d8 = 0x1f2e698cc93f4ed4;
      DAT_043c45e0 = "anime_L_pt_slide_L_sel_icon_00_unselect";
      DAT_043c45f8 = 0x97fd6845f63d2da9;
      DAT_043c4600 = "anime_L_pt_slide_L_sel_icon_01_unselect";
      DAT_043c4618 = 0xbacceedbd8dc956a;
      DAT_043c4620 = "anime_L_pt_slide_L_sel_icon_02_unselect";
      DAT_043c45e8 = 0x27;
      DAT_043c45f0 = 0;
      DAT_043c4608 = 0x27;
      DAT_043c4610 = 0;
      DAT_043c4628 = 0x27;
      DAT_043c4630 = 0;
      DAT_043c4638 = 0xba3e3744afa248b7;
      DAT_043c4640 = "anime_L_pt_slide_L_sel_icon_03_unselect";
      DAT_043c4648 = 0x27;
      DAT_043c4650 = 0;
      FUN_00100250(&LAB_014c04a0,0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c4658);
      uVar4 = uVar3 & 0xffffffff;
    }
  }
  lVar6 = (long)param_2;
  if ((uVar4 & 1) == 0) {
    FUN_00d2e2d0(param_1 + 0x180,&DAT_043c4550 + lVar6 * 4);
    lVar2 = *(long *)(param_1 + 0x2c8);
    if (lVar2 == 0) {
      return;
    }
    puVar5 = &DAT_043c45d8;
  }
  else {
    FUN_00d2e2d0(param_1 + 0x180,&DAT_043c45d8 + lVar6 * 4);
    lVar2 = *(long *)(param_1 + 0x2c8);
    if (lVar2 == 0) {
      return;
    }
    puVar5 = &DAT_043c4550;
  }
  FUN_0283b1e8(lVar2,puVar5 + lVar6 * 4);
  return;
}


