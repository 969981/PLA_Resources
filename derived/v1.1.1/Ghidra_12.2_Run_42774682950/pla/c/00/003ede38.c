/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ede38; name: FUN_003ede38
 */


void FUN_003ede38(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  byte *local_130;
  byte *pbStack_128;
  byte *local_120 [2];
  byte local_110;
  undefined4 uStack_10f;
  undefined2 uStack_10b;
  char cStack_109;
  char cStack_108;
  undefined7 uStack_107;
  char cStack_100;
  undefined2 uStack_ff;
  undefined5 uStack_fd;
  undefined4 local_f8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  long local_a0;
  long local_98;
  byte local_90;
  undefined7 uStack_8f;
  byte bStack_88;
  undefined7 uStack_87;
  byte *local_80;
  byte *local_78;
  byte **ppbStack_70;
  undefined1 auStack_68 [8];
  
  if (*(long *)(param_2 + 0x30) == 0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[4] = param_1 + 5;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
                    /* try { // try from 003ede6c to 003ede73 has its CatchHandler @ 003ee410 */
    FUN_002ec330(&local_90,*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50));
    local_e0 = local_80;
    local_110 = 0x22;
    uStack_fd = 0;
    uStack_ff = 0x70;
    local_f8 = 4;
    local_80 = (byte *)0x0;
    uStack_107 = s_creationTimestamp_0398e005._8_7_;
    cStack_100 = s_creationTimestamp_0398e005[0xf];
    uStack_10f = s_creationTimestamp_0398e005._0_4_;
    uStack_10b = s_creationTimestamp_0398e005._4_2_;
    cStack_109 = s_creationTimestamp_0398e005[6];
    cStack_108 = s_creationTimestamp_0398e005[7];
    local_d8 = &local_d0;
    local_90 = 0;
    uStack_8f._0_1_ = '\0';
    uStack_8f._1_1_ = '\0';
    uStack_8f._2_1_ = '\0';
    uStack_8f._3_1_ = '\0';
    uStack_8f._4_1_ = '\0';
    uStack_8f._5_1_ = '\0';
    uStack_8f._6_1_ = '\0';
    bStack_88 = 0;
    uStack_87._0_1_ = '\0';
    uStack_87._1_1_ = '\0';
    uStack_87._2_1_ = '\0';
    uStack_87._3_1_ = '\0';
    uStack_87._4_1_ = '\0';
    uStack_87._5_1_ = '\0';
    uStack_87._6_1_ = '\0';
    local_c8 = 0;
    uStack_c0 = 0;
    local_d0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
                    /* try { // try from 003eded0 to 003ededf has its CatchHandler @ 003ee3e4 */
    FUN_003edc3c(&local_a8,&local_110,1);
    FUN_003edd2c(&local_110);
    if ((local_90 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_80);
    }
    if (*(long *)(param_2 + 0x20) != 0) {
                    /* try { // try from 003edf0c to 003edf13 has its CatchHandler @ 003ee3dc */
      FUN_003ee500(&local_110);
      local_90 = 0x1e;
      uStack_87._0_1_ = s_numEventsLogged_038e54b4[8];
      uStack_87._1_1_ = s_numEventsLogged_038e54b4[9];
      uStack_87._2_1_ = s_numEventsLogged_038e54b4[10];
      uStack_87._3_1_ = s_numEventsLogged_038e54b4[0xb];
      uStack_87._4_1_ = s_numEventsLogged_038e54b4[0xc];
      uStack_87._5_1_ = s_numEventsLogged_038e54b4[0xd];
      uStack_87._6_1_ = s_numEventsLogged_038e54b4[0xe];
      local_80 = (byte *)0x0;
      local_130 = &local_90;
      uStack_8f._0_1_ = s_numEventsLogged_038e54b4[0];
      uStack_8f._1_1_ = s_numEventsLogged_038e54b4[1];
      uStack_8f._2_1_ = s_numEventsLogged_038e54b4[2];
      uStack_8f._3_1_ = s_numEventsLogged_038e54b4[3];
      uStack_8f._4_1_ = s_numEventsLogged_038e54b4[4];
      uStack_8f._5_1_ = s_numEventsLogged_038e54b4[5];
      uStack_8f._6_1_ = s_numEventsLogged_038e54b4[6];
      bStack_88 = s_numEventsLogged_038e54b4[7];
                    /* try { // try from 003edf40 to 003edf5b has its CatchHandler @ 003ee3b0 */
      lVar2 = FUN_003eeaa8(&local_a8,&local_90,&DAT_039fea26,&local_130,auStack_68);
      *(undefined4 *)(lVar2 + 0x38) = 4;
      pbVar7 = (byte *)(lVar2 + 0x40);
      if ((*pbVar7 & 1) == 0) {
        pbVar7[0] = 0;
        pbVar7[1] = 0;
      }
      else {
        **(undefined1 **)(lVar2 + 0x50) = 0;
        *(undefined8 *)(lVar2 + 0x48) = 0;
        if ((*(byte *)(lVar2 + 0x40) & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar2 + 0x50));
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
      }
      *(ulong *)(lVar2 + 0x50) = CONCAT53(uStack_fd,CONCAT21(uStack_ff,cStack_100));
      *(ulong *)(lVar2 + 0x48) = CONCAT71(uStack_107,cStack_108);
      *(ulong *)pbVar7 = CONCAT17(cStack_109,CONCAT25(uStack_10b,CONCAT41(uStack_10f,local_110)));
      cStack_108 = '\0';
      uStack_107 = 0;
      cStack_100 = '\0';
      uStack_ff = 0;
      uStack_fd = 0;
      local_110 = 0;
      uStack_10f = 0;
      uStack_10b = 0;
      cStack_109 = '\0';
      if (((local_90 & 1) != 0) && (FUN_002e2ea0(PTR_LAB_04373088,local_80), (local_110 & 1) != 0))
      {
        FUN_002e2ea0(PTR_LAB_04373088,CONCAT53(uStack_fd,CONCAT21(uStack_ff,cStack_100)));
      }
    }
    puVar1 = PTR_FUN_04373078;
    lVar2 = *(long *)(param_2 + 0x38);
    if (lVar2 != 0) {
      pbStack_128 = (byte *)0x0;
      local_120[0] = (byte *)0x0;
      local_130 = (byte *)0x0;
      do {
                    /* try { // try from 003ee088 to 003ee093 has its CatchHandler @ 003ee420 */
        while (FUN_003ed69c(&local_110,lVar2), pbStack_128 < local_120[0]) {
                    /* try { // try from 003ee0a0 to 003ee0a7 has its CatchHandler @ 003ee418 */
          FUN_003ee80c(pbStack_128,&local_110);
          pbStack_128 = pbStack_128 + 0x50;
          FUN_003ee5f8(&local_110);
          lVar2 = *(long *)(lVar2 + 0x38);
          if (lVar2 == 0) goto LAB_003ee194;
        }
        lVar10 = (long)pbStack_128 - (long)local_130 >> 4;
        uVar11 = lVar10 * -0x3333333333333333 + 1;
        if (0x333333333333333 < uVar11) {
                    /* try { // try from 003ee37c to 003ee383 has its CatchHandler @ 003ee384 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar5 = (long)local_120[0] - (long)local_130 >> 4;
        ppbStack_70 = local_120;
        if ((ulong)(lVar5 * -0x3333333333333333) < 0x199999999999999) {
          uVar3 = lVar5 * -0x6666666666666666;
          if (uVar11 <= uVar3) {
            uVar11 = uVar3;
          }
          if (uVar11 != 0) goto LAB_003ee11c;
          lVar5 = 0;
        }
        else {
          uVar11 = 0x333333333333333;
LAB_003ee11c:
          local_78 = (byte *)0x0;
          lVar5 = FUN_002e2e80(puVar1,uVar11 * 0x50);
        }
        local_80 = (byte *)(lVar5 + lVar10 * 0x10);
        local_90 = (byte)lVar5;
        uStack_8f = (undefined7)((ulong)lVar5 >> 8);
        bStack_88 = (byte)local_80;
        uStack_87 = (undefined7)((ulong)local_80 >> 8);
        local_78 = (byte *)(lVar5 + uVar11 * 0x50);
                    /* try { // try from 003ee13c to 003ee147 has its CatchHandler @ 003ee414 */
        FUN_003ee80c(local_80,&local_110);
        pbVar7 = local_130;
        local_80 = (byte *)((long)local_80 + 0x50);
        if (pbStack_128 == local_130) {
          pbVar4 = (byte *)CONCAT71(uStack_87,bStack_88);
          pbStack_128 = local_130;
        }
        else {
          pbVar4 = (byte *)CONCAT71(uStack_87,bStack_88);
          pbVar8 = pbStack_128;
          do {
            pbVar8 = pbVar8 + -0x50;
                    /* try { // try from 003ee16c to 003ee173 has its CatchHandler @ 003ee430 */
            FUN_003eaa30(pbVar4 + -0x50,pbVar8);
            pbVar4 = (byte *)(CONCAT71(uStack_87,bStack_88) - 0x50);
            bStack_88 = (byte)pbVar4;
            uStack_87 = (undefined7)((ulong)pbVar4 >> 8);
          } while (pbVar7 != pbVar8);
        }
        pbVar7 = local_78;
        bStack_88 = (byte)local_130;
        uStack_87 = (undefined7)((ulong)local_130 >> 8);
        local_78 = local_120[0];
        local_120[0] = pbVar7;
        local_130 = pbVar4;
        pbVar7 = pbStack_128;
        pbStack_128 = local_80;
        local_90 = bStack_88;
        uStack_8f = uStack_87;
        local_80 = pbVar7;
        FUN_003eeba8(&local_90);
        FUN_003ee5f8(&local_110);
        lVar2 = *(long *)(lVar2 + 0x38);
      } while (lVar2 != 0);
LAB_003ee194:
      local_110 = 0xc;
      uStack_10f = 0x6e657665;
      cStack_108 = '\0';
      uStack_107 = 0;
      cStack_100 = '\0';
      uStack_ff = 0;
      uStack_fd = 0;
      uStack_10b = 0x7374;
      cStack_109 = '\0';
      local_90 = (byte)&local_110;
      uStack_8f = (undefined7)((ulong)&local_110 >> 8);
                    /* try { // try from 003ee1c0 to 003ee1db has its CatchHandler @ 003ee388 */
      lVar2 = FUN_003eeaa8(&local_a8,&local_110,&DAT_039fea26,&local_90,auStack_68);
      *(undefined4 *)(lVar2 + 0x38) = 6;
      plVar9 = (long *)(lVar2 + 0x70);
      lVar10 = *plVar9;
      if (lVar10 != 0) {
        lVar5 = *(long *)(lVar2 + 0x78);
        if (lVar5 == lVar10) {
          lVar5 = lVar10;
        }
        else {
          do {
            lVar5 = lVar5 + -0x50;
            FUN_003ee5f8(lVar5);
          } while (lVar10 != lVar5);
          lVar5 = *plVar9;
        }
        *(long *)(lVar2 + 0x78) = lVar10;
        FUN_002e2ea0(PTR_LAB_04373088,lVar5);
        *plVar9 = 0;
        *(undefined8 *)(lVar2 + 0x78) = 0;
        *(undefined8 *)(lVar2 + 0x80) = 0;
      }
      *(byte **)(lVar2 + 0x78) = pbStack_128;
      *(byte **)(lVar2 + 0x70) = local_130;
      *(byte **)(lVar2 + 0x80) = local_120[0];
      pbStack_128 = (byte *)0x0;
      local_120[0] = (byte *)0x0;
      local_130 = (byte *)0x0;
      if ((local_110 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,CONCAT53(uStack_fd,CONCAT21(uStack_ff,cStack_100)));
        pbVar7 = local_130;
        puVar1 = PTR_LAB_04373088;
        if (local_130 != (byte *)0x0) {
          if (pbStack_128 != local_130) {
            pbVar4 = pbStack_128 + -0x18;
            lVar2 = *(long *)pbVar4;
            pbVar8 = pbStack_128;
            while( true ) {
              if (lVar2 != 0) {
                FUN_003eea08(pbVar4);
                FUN_002e2ea0(puVar1,*(undefined8 *)(pbVar8 + -0x18));
              }
              pbVar6 = pbVar4 + -0x38;
              FUN_003e9f80(pbVar8 + -0x30,*(undefined8 *)(pbVar8 + -0x28));
              if ((pbVar8[-0x48] & 1) != 0) {
                FUN_002e2ea0(puVar1,*(undefined8 *)(pbVar8 + -0x38));
              }
              if (pbVar7 == pbVar6) break;
              pbVar4 = pbVar4 + -0x50;
              lVar2 = *(long *)pbVar4;
              pbVar8 = pbVar6;
            }
          }
          pbStack_128 = pbVar7;
          FUN_002e2ea0(PTR_LAB_04373088,local_130);
        }
      }
    }
    *(undefined4 *)param_1 = 5;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = local_a8;
    plVar9 = param_1 + 5;
    *plVar9 = local_a0;
    param_1[6] = local_98;
    if (local_98 == 0) {
      param_1[4] = plVar9;
    }
    else {
      *(long **)(local_a0 + 0x10) = plVar9;
      local_a8 = &local_a0;
      local_a0 = 0;
      local_98 = 0;
    }
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    FUN_003e9f80(&local_a8,local_a0);
  }
  return;
}


