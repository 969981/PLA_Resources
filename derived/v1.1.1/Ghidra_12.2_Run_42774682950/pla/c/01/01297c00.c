/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01297c00; name: FUN_01297c00
 */


void FUN_01297c00(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *local_28;
  
  if (((DAT_043c02d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043c02d8), iVar4 != 0)) {
    DAT_043c0250 = 0;
    DAT_043c0278 = 0;
    DAT_043c02a0 = 0;
    DAT_043c0030 = 0x5f077d2009038f29;
    DAT_043c0038 = "pane_L_btn_keyset_l_00_T_heading_01";
    DAT_043c02c8 = 0;
    DAT_043c0050 = 0xf77e2ad1506f8767;
    DAT_043c0058 = 0xd506f8d8c83be87c;
    DAT_043c0080 = 0x64eb5d5f560c1fc7;
    DAT_043c0088 = "pane_L_btn_keyset_l_02_T_heading_01";
    DAT_043c00a0 = 0xf7812fd15071c5bd;
    DAT_043c00a8 = 0x4bf54534b4dd328a;
    DAT_043c0248 = 0x23;
    DAT_043c0270 = 0x23;
    DAT_043c00b0 = "pane_L_btn_keyset_l_03_T_heading_01";
    DAT_043c00b8 = 0x23;
    DAT_043c00c0 = 0;
    DAT_043c00c8 = 0xf78123d15071b159;
    DAT_043c0298 = 0x23;
    DAT_043c00d0 = 0xcaeff35afc498e6d;
    DAT_043c00d8 = "pane_L_btn_keyset_l_04_T_heading_01";
    DAT_043c02c0 = 0x23;
    DAT_043c00f0 = 0xf7812ed15071c40a;
    DAT_043c00f8 = 0x1ad158cf186502b0;
    DAT_043c0100 = "pane_L_btn_keyset_l_05_T_heading_01";
    DAT_043c0108 = 0x23;
    DAT_043c0110 = 0;
    DAT_043c0118 = 0xf7812dd15071c257;
    DAT_043c0120 = 0x1874177e9a0254cb;
    DAT_043c0128 = "pane_L_btn_keyset_l_06_T_heading_01";
    DAT_043c0040 = 0x23;
    DAT_043c0048 = 0;
    DAT_043c0140 = 0xf77e2bd1506f891a;
    DAT_043c0148 = 0x856458a36824c95e;
    DAT_043c0150 = "pane_L_btn_keyset_l_07_T_heading_01";
    DAT_043c0158 = 0x23;
    DAT_043c0160 = 0;
    DAT_043c0168 = 0xf7812cd15071c0a4;
    DAT_043c0170 = 0x1d0633bf24a65431;
    DAT_043c0178 = "pane_L_btn_keyset_l_08_T_heading_01";
    DAT_043c0190 = 0xf77e2bd1506f891a;
    DAT_043c0198 = 0xb7f374159147b587;
    DAT_043c01a0 = "pane_L_btn_keyset_r_00_T_heading_01";
    DAT_043c01a8 = 0x23;
    DAT_043c01b0 = 0;
    DAT_043c01b8 = 0xf77e29d1506f85b4;
    DAT_043c0060 = "pane_L_btn_keyset_l_01_T_heading_01";
    DAT_043c0068 = 0x23;
    DAT_043c01c0 = 0x288b54f8c69c064a;
    DAT_043c01c8 = "pane_L_btn_keyset_r_01_T_heading_01";
    DAT_043c0070 = 0;
    DAT_043c0078 = 0xf77e2cd1506f8acd;
    DAT_043c01e0 = 0xf77e2cd1506f8acd;
    DAT_043c01e8 = 0x3635626bb356aae9;
    DAT_043c0200 = 0;
    DAT_043c0208 = 0xf78128d15071b9d8;
    DAT_043c0210 = 0xe6c4ff59f7fcf83c;
    DAT_043c0218 = "pane_L_btn_keyset_r_03_T_heading_01";
    DAT_043c0230 = 0xf7881cd15077c422;
    DAT_043c0090 = 0x23;
    DAT_043c0098 = 0;
    DAT_043c0238 = 0x372f12ce56bc9b8b;
    DAT_043c0258 = 0xf7812ad15071bd3e;
    DAT_043c00e0 = 0x23;
    DAT_043c00e8 = 0;
    DAT_043c0260 = 0xbf3df8d47607a1e;
    DAT_043c0280 = 0xf78129d15071bb8b;
    DAT_043c0130 = 0x23;
    DAT_043c0138 = 0;
    DAT_043c0288 = 0xa55fce196751d12d;
    DAT_043c0240 = "pane_L_btn_keyset_r_04_T_heading_01";
    DAT_043c0180 = 0x23;
    DAT_043c0188 = 0;
    DAT_043c0268 = "pane_L_btn_keyset_r_05_T_heading_01";
    DAT_043c01d0 = 0x23;
    DAT_043c01d8 = 0;
    DAT_043c01f0 = "pane_L_btn_keyset_r_02_T_heading_01";
    DAT_043c01f8 = 0x23;
    DAT_043c0220 = 0x23;
    DAT_043c0228 = 0;
    DAT_043c02a8 = 0xf7812bd15071bef1;
    DAT_043c0290 = "pane_L_btn_keyset_r_06_T_heading_01";
    DAT_043c02b0 = 0x6c49b4c6a0133770;
    DAT_043c02b8 = "pane_L_btn_keyset_r_07_T_heading_01";
    DAT_043c02d0 = 0xf78122d15071afa6;
    FUN_00100250(&LAB_012985f0,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c02d8);
  }
  FUN_012989c0(param_1,DAT_043c0050,&DAT_043c0030);
  FUN_012989c0(param_1,DAT_043c0078,&DAT_043c0058);
  FUN_012989c0(param_1,DAT_043c00a0,&DAT_043c0080);
  FUN_012989c0(param_1,DAT_043c00c8,&DAT_043c00a8);
  FUN_012989c0(param_1,DAT_043c00f0,&DAT_043c00d0);
  FUN_012989c0(param_1,DAT_043c0118,&DAT_043c00f8);
  FUN_012989c0(param_1,DAT_043c0140,&DAT_043c0120);
  FUN_012989c0(param_1,DAT_043c0168,&DAT_043c0148);
  FUN_012989c0(param_1,DAT_043c0190,&DAT_043c0170);
  FUN_012989c0(param_1,DAT_043c01b8,&DAT_043c0198);
  FUN_012989c0(param_1,DAT_043c01e0,&DAT_043c01c0);
  FUN_012989c0(param_1,DAT_043c0208,&DAT_043c01e8);
  FUN_012989c0(param_1,DAT_043c0230,&DAT_043c0210);
  FUN_012989c0(param_1,DAT_043c0258,&DAT_043c0238);
  FUN_012989c0(param_1,DAT_043c0280,&DAT_043c0260);
  FUN_012989c0(param_1,DAT_043c02a8,&DAT_043c0288);
  FUN_012989c0(param_1,DAT_043c02d0,&DAT_043c02b0);
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114886c(&local_28);
  uVar5 = FUN_010eb534(local_28);
  if (local_28 == (long *)0x0) {
LAB_01297d9c:
    if ((uVar5 & 1) != 0) goto LAB_01297da0;
LAB_01297e40:
    puVar8 = &DAT_043c0310;
    puVar9 = &DAT_043c0330;
    if (((DAT_043c0338 & 1) != 0) || (iVar4 = __cxa_guard_acquire(&DAT_043c0338), iVar4 == 0))
    goto LAB_01297e5c;
    DAT_043c0310 = 0xe438dccebcc198af;
    DAT_043c0318 = "pane_L_btn_keyset_r_08_T_heading_01";
    DAT_043c0320 = 0x23;
    DAT_043c0328 = 0;
    puVar9 = &DAT_043c0330;
    DAT_043c0330 = 0xf7702ed1506350d7;
    FUN_00100250(&LAB_012989a8,&DAT_043c0310,&PTR_LOOP_0411a000);
    puVar6 = &DAT_043c0338;
  }
  else {
    lVar7 = local_28[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_01297d9c;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*local_28 + 0x20))();
    if ((uVar5 & 1) == 0) goto LAB_01297e40;
LAB_01297da0:
    puVar8 = &DAT_043c02e0;
    puVar9 = &DAT_043c0300;
    if (((DAT_043c0308 & 1) != 0) || (iVar4 = __cxa_guard_acquire(&DAT_043c0308), iVar4 == 0))
    goto LAB_01297e5c;
    DAT_043c02e0 = 0xe438dccebcc198af;
    DAT_043c02e8 = "pane_L_btn_keyset_r_08_T_heading_01";
    DAT_043c02f0 = 0x23;
    DAT_043c02f8 = 0;
    puVar9 = &DAT_043c0300;
    DAT_043c0300 = 0xf77e1ed1506f7303;
    FUN_00100250(&LAB_012989a8,&DAT_043c02e0,&PTR_LOOP_0411a000);
    puVar6 = &DAT_043c0308;
  }
  __cxa_guard_release(puVar6);
LAB_01297e5c:
  FUN_012989c0(param_1,*puVar9,puVar8);
  return;
}


