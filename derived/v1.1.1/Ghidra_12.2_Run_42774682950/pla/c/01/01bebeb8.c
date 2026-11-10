/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bebeb8; name: FUN_01bebeb8
 */


void FUN_01bebeb8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined8 *local_b0;
  
  local_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  FUN_00af7e30(&local_100);
  FUN_01bae64c(param_1,&local_100,param_3);
  puVar8 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_100 + 1);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_d0 = (undefined1 *)*puVar8;
      FUN_02a44274(lVar10 + 0xd8,&local_d0);
    }
  }
  *param_1 = &PTR_LAB_04247468;
  param_1[9] = &PTR_LAB_04247860;
  param_1[10] = &PTR_LAB_04247940;
  param_1[0x182] = *(undefined8 *)(param_3 + 0x520);
  param_1[0x183] = *(undefined8 *)(param_3 + 0x528);
  param_1[0x184] = *(undefined8 *)(param_3 + 0x530);
  param_1[0x185] = *(undefined8 *)(param_3 + 0x538);
  param_1[0x186] = *(undefined8 *)(param_3 + 0x568);
  param_1[0x187] = *(undefined8 *)(param_3 + 0x570);
  param_1[0x188] = *(undefined8 *)(param_3 + 0x578);
  param_1[0x189] = *(undefined8 *)(param_3 + 0x580);
  param_1[0x18a] = *(undefined8 *)(param_3 + 0x588);
  param_1[0x18b] = *(undefined8 *)(param_3 + 0x590);
  uVar11 = *(undefined8 *)(param_3 + 0x598);
  uVar12 = *(undefined8 *)(param_3 + 0x5a0);
  param_1[0x18e] = *(undefined8 *)(param_3 + 0x5a8);
  param_1[0x18d] = uVar12;
  param_1[0x18c] = uVar11;
  param_1[399] = *(undefined8 *)(param_3 + 0x5b0);
  param_1[400] = *(undefined8 *)(param_3 + 0x5b8);
  param_1[0x191] = *(undefined8 *)(param_3 + 0x5c0);
  uVar11 = *(undefined8 *)(param_3 + 0x5c8);
  *(undefined4 *)(param_1 + 0x193) = *(undefined4 *)(param_3 + 0x5d0);
  param_1[0x192] = uVar11;
  param_1[0x194] = *(undefined8 *)(param_3 + 0x540);
  param_1[0x195] = *(undefined8 *)(param_3 + 0x548);
  param_1[0x196] = *(undefined8 *)(param_3 + 0x550);
  uVar11 = *(undefined8 *)(param_3 + 0x558);
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_3 + 0x560);
  param_1[0x197] = uVar11;
  param_1[0x199] = *(undefined8 *)(param_3 + 0x5d8);
  param_1[0x19a] = *(undefined8 *)(param_3 + 0x5e0);
  param_1[0x19b] = *(undefined8 *)(param_3 + 0x5e8);
  param_1[0x19c] = *(undefined8 *)(param_3 + 0x5f0);
  param_1[0x19d] = *(undefined8 *)(param_3 + 0x5f8);
  param_1[0x19e] = *(undefined8 *)(param_3 + 0x600);
  uVar11 = *(undefined8 *)(param_3 + 0x608);
  param_1[0x1a0] = *(undefined8 *)(param_3 + 0x610);
  param_1[0x19f] = uVar11;
  param_1[0x1a1] = *(undefined8 *)(param_3 + 0x618);
  param_1[0x1a2] = *(undefined8 *)(param_3 + 0x620);
  param_1[0x1a3] = *(undefined8 *)(param_3 + 0x628);
  param_1[0x1a4] = *(undefined8 *)(param_3 + 0x630);
  param_1[0x1a5] = *(undefined8 *)(param_3 + 0x638);
  param_1[0x1a6] = *(undefined8 *)(param_3 + 0x640);
  uVar11 = *(undefined8 *)(param_3 + 0x648);
  uVar12 = *(undefined8 *)(param_3 + 0x650);
  param_1[0x1a9] = 0xc3cae0886d818461;
  param_1[0x1ac] = 0x4c11a2e6098d711a;
  param_1[0x1aa] = "turn_trigger";
  param_1[0x1ad] = &DAT_03973c41;
  param_1[0x1af] = 0xc334000000000000;
  param_1[0x1ab] = 0xc;
  param_1[0x1a7] = uVar11;
  param_1[0x1ae] = 4;
  *(undefined4 *)(param_1 + 0x1b0) = 0x43340000;
  param_1[0x1a8] = uVar12;
  param_1[0x1b1] = *(undefined8 *)(param_3 + 0x698);
  param_1[0x1b2] = *(undefined8 *)(param_3 + 0x6a0);
  param_1[0x1b3] = *(undefined8 *)(param_3 + 0x6a8);
  param_1[0x1b4] = *(undefined8 *)(param_3 + 0x6b0);
  param_1[0x1b5] = *(undefined8 *)(param_3 + 0x6b8);
  param_1[0x1b6] = *(undefined8 *)(param_3 + 0x6c0);
  param_1[0x1b7] = *(undefined8 *)(param_3 + 0x6c8);
  param_1[0x1b8] = *(undefined8 *)(param_3 + 0x6d0);
  param_1[0x1b9] = *(undefined8 *)(param_3 + 0x6d8);
  param_1[0x1ba] = *(undefined8 *)(param_3 + 0x6e0);
  param_1[0x1bb] = *(undefined8 *)(param_3 + 0x6e8);
  param_1[0x1bc] = *(undefined8 *)(param_3 + 0x6f0);
  param_1[0x1bd] = *(undefined8 *)(param_3 + 0x6f8);
  param_1[0x1be] = *(undefined8 *)(param_3 + 0x700);
  param_1[0x1bf] = *(undefined8 *)(param_3 + 0x708);
  param_1[0x1c0] = *(undefined8 *)(param_3 + 0x710);
  param_1[0x1c1] = *(undefined8 *)(param_3 + 0x718);
  param_1[0x1c2] = *(undefined8 *)(param_3 + 0x720);
  param_1[0x1c3] = *(undefined8 *)(param_3 + 0x728);
  param_1[0x1c4] = *(undefined8 *)(param_3 + 0x730);
  param_1[0x1c5] = *(undefined8 *)(param_3 + 0x738);
  param_1[0x1c6] = *(undefined8 *)(param_3 + 0x740);
  param_1[0x1c7] = *(undefined8 *)(param_3 + 0x748);
  param_1[0x1c8] = *(undefined8 *)(param_3 + 0x750);
  param_1[0x1c9] = *(undefined8 *)(param_3 + 0x758);
  param_1[0x1ca] = *(undefined8 *)(param_3 + 0x760);
  param_1[0x1cb] = *(undefined8 *)(param_3 + 0x768);
  uVar11 = *(undefined8 *)(param_3 + 0x770);
  param_1[0x1cd] = 0x5295cc35c99b54bd;
  param_1[0x1ce] = "upperbody_one_action_int";
  param_1[0x1cf] = 0x18;
  param_1[0x1d0] = 0x625dc67ccdff8da8;
  param_1[0x1d1] = "upperbody_one_action_trigger";
  param_1[0x1d3] = 0;
  param_1[0x1d2] = 0x1c;
  param_1[0x1cc] = uVar11;
  param_1[0x1d4] = *(undefined8 *)(param_3 + 0x778);
  param_1[0x1d5] = *(undefined8 *)(param_3 + 0x780);
  param_1[0x1d6] = *(undefined8 *)(param_3 + 0x788);
  param_1[0x1d7] = *(undefined8 *)(param_3 + 0x790);
  param_1[0x1d8] = *(undefined8 *)(param_3 + 0x798);
  param_1[0x1d9] = *(undefined8 *)(param_3 + 0x7a0);
  param_1[0x1da] = *(undefined8 *)(param_3 + 0x7a8);
  param_1[0x1db] = *(undefined8 *)(param_3 + 0x7b0);
  param_1[0x1dc] = *(undefined8 *)(param_3 + 0x7b8);
  param_1[0x1dd] = *(undefined8 *)(param_3 + 0x7c0);
  param_1[0x1de] = *(undefined8 *)(param_3 + 0x7c8);
  param_1[0x1df] = *(undefined8 *)(param_3 + 2000);
  param_1[0x1e0] = *(undefined8 *)(param_3 + 0x7d8);
  param_1[0x1e1] = *(undefined8 *)(param_3 + 0x7e0);
  puVar7 = PTR_DAT_04382830;
  puVar6 = PTR_DAT_04382438;
  param_1[0x1e2] = *(undefined8 *)(param_3 + 0x7e8);
  uVar3 = *(undefined1 *)(param_3 + 0x7f0);
  param_1[0x1e4] = puVar7 + 0x10;
  *(undefined1 *)(param_1 + 0x1e3) = uVar3;
  uVar11 = *(undefined8 *)(param_3 + 0x800);
  uVar12 = *(undefined8 *)(param_3 + 0x808);
  param_1[0x1e4] = puVar6 + 0x10;
  param_1[0x1e6] = uVar12;
  param_1[0x1e5] = uVar11;
  uVar11 = *(undefined8 *)(param_3 + 0x810);
  uVar12 = *(undefined8 *)(param_3 + 0x818);
  uVar2 = *(undefined4 *)(param_3 + 0x820);
  param_1[0x1ea] = puVar7 + 0x10;
  *(undefined4 *)(param_1 + 0x1e9) = uVar2;
  param_1[0x1e8] = uVar12;
  param_1[0x1e7] = uVar11;
  uVar11 = *(undefined8 *)(param_3 + 0x830);
  uVar12 = *(undefined8 *)(param_3 + 0x838);
  param_1[0x1ea] = puVar6 + 0x10;
  param_1[0x1ec] = uVar12;
  param_1[0x1eb] = uVar11;
  uVar11 = *(undefined8 *)(param_3 + 0x840);
  uVar12 = *(undefined8 *)(param_3 + 0x848);
  uVar2 = *(undefined4 *)(param_3 + 0x850);
  param_1[0x1f1] = "swim_bool";
  param_1[0x1f0] = 0xd54c9f4af610ed7a;
  param_1[0x1f2] = 9;
  param_1[499] = 0x2864f3224295a1ca;
  param_1[500] = "swim_action_int";
  param_1[0x1f5] = 0xf;
  *(undefined4 *)(param_1 + 0x1ef) = uVar2;
  param_1[0x1ee] = uVar12;
  param_1[0x1ed] = uVar11;
  param_1[0x1f6] = *(undefined8 *)(param_3 + 0x888);
  param_1[0x1f7] = *(undefined8 *)(param_3 + 0x890);
  uVar11 = *(undefined8 *)(param_3 + 0x898);
  param_1[0x1f9] = 0xe2c4fee66e1fc96;
  param_1[0x1fa] = "exit_trigger";
  param_1[0x1fb] = 0xc;
  param_1[0x1f8] = uVar11;
  param_1[0x1fc] = *(undefined8 *)(param_3 + 0x8b8);
  param_1[0x1fd] = *(undefined8 *)(param_3 + 0x8c0);
  param_1[0x1fe] = *(undefined8 *)(param_3 + 0x8c8);
  param_1[0x1ff] = *(undefined8 *)(param_3 + 0x8d0);
  param_1[0x200] = *(undefined8 *)(param_3 + 0x8d8);
  param_1[0x201] = *(undefined8 *)(param_3 + 0x8e0);
  param_1[0x202] = *(undefined8 *)(param_3 + 0x8e8);
  param_1[0x203] = *(undefined8 *)(param_3 + 0x8f0);
  param_1[0x204] = *(undefined8 *)(param_3 + 0x8f8);
  param_1[0x205] = *(undefined8 *)(param_3 + 0x900);
  param_1[0x206] = *(undefined8 *)(param_3 + 0x908);
  param_1[0x207] = *(undefined8 *)(param_3 + 0x910);
  param_1[0x208] = *(undefined8 *)(param_3 + 0x918);
  param_1[0x209] = *(undefined8 *)(param_3 + 0x920);
  param_1[0x20a] = *(undefined8 *)(param_3 + 0x928);
  param_1[0x20b] = *(undefined8 *)(param_3 + 0x930);
  param_1[0x20c] = *(undefined8 *)(param_3 + 0x938);
  param_1[0x20d] = *(undefined8 *)(param_3 + 0x940);
  param_1[0x20e] = *(undefined8 *)(param_3 + 0x948);
  param_1[0x20f] = *(undefined8 *)(param_3 + 0x950);
  param_1[0x210] = *(undefined8 *)(param_3 + 0x958);
  param_1[0x211] = *(undefined8 *)(param_3 + 0x960);
  param_1[0x212] = *(undefined8 *)(param_3 + 0x968);
  param_1[0x213] = *(undefined8 *)(param_3 + 0x970);
  uVar11 = *(undefined8 *)(param_3 + 0x978);
  *(undefined4 *)(param_1 + 0x215) = *(undefined4 *)(param_3 + 0x980);
  param_1[0x214] = uVar11;
  param_1[0x216] = *(undefined8 *)(param_3 + 0x988);
  param_1[0x217] = *(undefined8 *)(param_3 + 0x990);
  param_1[0x218] = *(undefined8 *)(param_3 + 0x998);
  param_1[0x219] = *(undefined8 *)(param_3 + 0x9a0);
  param_1[0x21a] = *(undefined8 *)(param_3 + 0x9a8);
  param_1[0x21b] = *(undefined8 *)(param_3 + 0x9b0);
  param_1[0x21c] = *(undefined8 *)(param_3 + 0x9b8);
  param_1[0x21d] = *(undefined8 *)(param_3 + 0x9c0);
  param_1[0x21e] = *(undefined8 *)(param_3 + 0x9c8);
  param_1[0x21f] = *(undefined8 *)(param_3 + 0x9d0);
  param_1[0x220] = *(undefined8 *)(param_3 + 0x9d8);
  param_1[0x221] = *(undefined8 *)(param_3 + 0x9e0);
  param_1[0x222] = *(undefined8 *)(param_3 + 0x9e8);
  param_1[0x223] = *(undefined8 *)(param_3 + 0x9f0);
  param_1[0x224] = *(undefined8 *)(param_3 + 0x9f8);
  param_1[0x225] = *(undefined8 *)(param_3 + 0xa00);
  param_1[0x226] = *(undefined8 *)(param_3 + 0xa08);
  param_1[0x227] = *(undefined8 *)(param_3 + 0xa10);
  param_1[0x228] = *(undefined8 *)(param_3 + 0xa18);
  param_1[0x229] = *(undefined8 *)(param_3 + 0xa20);
  param_1[0x22a] = *(undefined8 *)(param_3 + 0xa28);
  param_1[0x22b] = *(undefined8 *)(param_3 + 0xa30);
  param_1[0x22c] = *(undefined8 *)(param_3 + 0xa38);
  param_1[0x22d] = *(undefined8 *)(param_3 + 0xa40);
  param_1[0x22e] = *(undefined8 *)(param_3 + 0xa48);
  param_1[0x22f] = *(undefined8 *)(param_3 + 0xa50);
  param_1[0x230] = *(undefined8 *)(param_3 + 0xa58);
  param_1[0x231] = *(undefined8 *)(param_3 + 0xa60);
  param_1[0x232] = *(undefined8 *)(param_3 + 0xa68);
  param_1[0x233] = *(undefined8 *)(param_3 + 0xa70);
  param_1[0x234] = *(undefined8 *)(param_3 + 0xa78);
  param_1[0x235] = *(undefined8 *)(param_3 + 0xa80);
  param_1[0x236] = *(undefined8 *)(param_3 + 0xa88);
  param_1[0x237] = *(undefined8 *)(param_3 + 0xa90);
  param_1[0x238] = *(undefined8 *)(param_3 + 0xa98);
  param_1[0x239] = *(undefined8 *)(param_3 + 0xaa0);
  param_1[0x23a] = *(undefined8 *)(param_3 + 0xaa8);
  param_1[0x23b] = *(undefined8 *)(param_3 + 0xab0);
  param_1[0x23c] = *(undefined8 *)(param_3 + 0xab8);
  param_1[0x23d] = *(undefined8 *)(param_3 + 0xac0);
  param_1[0x23e] = *(undefined8 *)(param_3 + 0xac8);
  param_1[0x23f] = *(undefined8 *)(param_3 + 0xad0);
  param_1[0x240] = *(undefined8 *)(param_3 + 0xad8);
  param_1[0x241] = *(undefined8 *)(param_3 + 0xae0);
  param_1[0x242] = *(undefined8 *)(param_3 + 0xae8);
  param_1[0x243] = *(undefined8 *)(param_3 + 0xaf0);
  param_1[0x244] = *(undefined8 *)(param_3 + 0xaf8);
  param_1[0x245] = *(undefined8 *)(param_3 + 0xb00);
  *(undefined1 *)(param_1 + 0x246) = 0;
  param_1[0x24a] = 0;
  param_1[0x249] = 0;
  param_1[0x248] = 0;
  param_1[0x247] = 0;
  param_1[0x24b] = 0xc09df7ac762a1c5d;
  param_1[0x24c] = "pg_reset_upperbody_state";
  param_1[0x24d] = 0x18;
  *(undefined1 *)(param_1 + 0x24e) = 0;
  *(undefined1 *)(param_1 + 0x24f) = 0;
  param_1[0x251] = 0;
  param_1[0x250] = 0;
  plVar13 = (long *)param_1[1];
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar13;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  lVar10 = (**(code **)(*plVar13 + 0x10))(plVar13,0xf0,0x10);
  if (lVar10 == 0) {
    (**(code **)(*plVar13 + 0xb8))(plVar13);
  }
  local_d0 = &LAB_01bfb4a0;
  puStack_c8 = &LAB_01bfb4ac;
  local_c0 = &LAB_01bfb4b0;
  puStack_b8 = &LAB_01bfb4bc;
  local_b0 = param_1;
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8(&local_d0,lVar10);
}


