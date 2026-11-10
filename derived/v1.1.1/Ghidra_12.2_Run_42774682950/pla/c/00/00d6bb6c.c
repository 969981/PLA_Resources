/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6bb6c; name: FUN_00d6bb6c
 */


void FUN_00d6bb6c(long param_1,int param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  uint *puVar5;
  long lVar6;
  
  if ((*(int *)(param_1 + 0x5ac) == 0xf) || (*(int *)(param_1 + 0x5b0) != param_2)) {
    if ((*(int *)(param_1 + 0x5b8) == 0xf) || (*(int *)(param_1 + 0x5bc) != param_2)) {
      if ((*(int *)(param_1 + 0x5c4) == 0xf) || (*(int *)(param_1 + 0x5c8) != param_2)) {
        if ((*(int *)(param_1 + 0x5d0) == 0xf) || (*(int *)(param_1 + 0x5d4) != param_2)) {
          if ((*(int *)(param_1 + 0x5dc) == 0xf) || (*(int *)(param_1 + 0x5e0) != param_2)) {
            if ((*(int *)(param_1 + 0x5e8) == 0xf) || (*(int *)(param_1 + 0x5ec) != param_2)) {
              if ((*(int *)(param_1 + 0x5f4) == 0xf) || (*(int *)(param_1 + 0x5f8) != param_2)) {
                if ((*(int *)(param_1 + 0x600) == 0xf) || (*(int *)(param_1 + 0x604) != param_2)) {
                  if ((*(int *)(param_1 + 0x60c) == 0xf) || (*(int *)(param_1 + 0x610) != param_2))
                  {
                    if ((*(int *)(param_1 + 0x618) == 0xf) || (*(int *)(param_1 + 0x61c) != param_2)
                       ) {
                      if ((*(int *)(param_1 + 0x624) == 0xf) ||
                         (*(int *)(param_1 + 0x628) != param_2)) {
                        if ((*(int *)(param_1 + 0x630) == 0xf) ||
                           (*(int *)(param_1 + 0x634) != param_2)) {
                          if ((*(int *)(param_1 + 0x63c) == 0xf) ||
                             (*(int *)(param_1 + 0x640) != param_2)) {
                            if ((*(int *)(param_1 + 0x648) == 0xf) ||
                               (*(int *)(param_1 + 0x64c) != param_2)) {
                              if (*(int *)(param_1 + 0x654) == 0xf) {
                                return;
                              }
                              if (*(int *)(param_1 + 0x658) != param_2) {
                                return;
                              }
                              puVar5 = (uint *)(param_1 + 0x654);
                              lVar6 = 0xe;
                            }
                            else {
                              puVar5 = (uint *)(param_1 + 0x648);
                              lVar6 = 0xd;
                            }
                          }
                          else {
                            puVar5 = (uint *)(param_1 + 0x63c);
                            lVar6 = 0xc;
                          }
                        }
                        else {
                          puVar5 = (uint *)(param_1 + 0x630);
                          lVar6 = 0xb;
                        }
                      }
                      else {
                        puVar5 = (uint *)(param_1 + 0x624);
                        lVar6 = 10;
                      }
                    }
                    else {
                      puVar5 = (uint *)(param_1 + 0x618);
                      lVar6 = 9;
                    }
                  }
                  else {
                    puVar5 = (uint *)(param_1 + 0x60c);
                    lVar6 = 8;
                  }
                }
                else {
                  puVar5 = (uint *)(param_1 + 0x600);
                  lVar6 = 7;
                }
              }
              else {
                puVar5 = (uint *)(param_1 + 0x5f4);
                lVar6 = 6;
              }
            }
            else {
              puVar5 = (uint *)(param_1 + 0x5e8);
              lVar6 = 5;
            }
          }
          else {
            puVar5 = (uint *)(param_1 + 0x5dc);
            lVar6 = 4;
          }
        }
        else {
          puVar5 = (uint *)(param_1 + 0x5d0);
          lVar6 = 3;
        }
      }
      else {
        puVar5 = (uint *)(param_1 + 0x5c4);
        lVar6 = 2;
      }
    }
    else {
      puVar5 = (uint *)(param_1 + 0x5b8);
      lVar6 = 1;
    }
  }
  else {
    lVar6 = 0;
    puVar5 = (uint *)(param_1 + 0x5ac);
  }
  if (((DAT_043acb78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043acb78), iVar2 != 0)) {
    DAT_043ac9d0 = 0;
    DAT_043ac9f0 = 0;
    DAT_043aca10 = 0;
    DAT_043aca30 = 0;
    DAT_043ac7b8 = 0x2ef6f0ce077cb65b;
    DAT_043ac7c0 = "anime_L_optionguide_l_00_active";
    DAT_043aca50 = 0;
    DAT_043ac7d8 = 0x9cacb85e94c8de4a;
    DAT_043ac7e0 = "anime_L_optionguide_l_00_passive";
    DAT_043aca70 = 0;
    DAT_043ac7f8 = 0x7a7e4ffe77a4b1fa;
    DAT_043ac800 = "anime_L_optionguide_l_01_active";
    DAT_043aca90 = 0;
    DAT_043ac818 = 0x51ddd77c4e5eda05;
    DAT_043ac820 = "anime_L_optionguide_l_01_passive";
    DAT_043acab0 = 0;
    DAT_043ac838 = 0x5f4b41591bec3899;
    DAT_043ac840 = "anime_L_optionguide_l_02_active";
    DAT_043acad0 = 0;
    DAT_043ac858 = 0x41e1fbee74d36568;
    DAT_043ac860 = "anime_L_optionguide_l_02_passive";
    DAT_043acaf0 = 0;
    DAT_043ac878 = 0x3800b183ab360ad8;
    DAT_043ac880 = "anime_L_optionguide_l_03_active";
    DAT_043acb10 = 0;
    DAT_043ac898 = 0x415a55b9ea9a80cb;
    DAT_043ac8a0 = "anime_L_optionguide_l_03_passive";
    DAT_043acb30 = 0;
    DAT_043ac8b8 = 0x6a7623c7debaf717;
    DAT_043ac8c0 = "anime_L_optionguide_l_04_active";
    DAT_043acb50 = 0;
    DAT_043ac8d8 = 0x67e4d8c554f340f6;
    DAT_043ac8e0 = "anime_L_optionguide_l_04_passive";
    DAT_043acb70 = 0;
    DAT_043ac8f8 = 0xee02564443aaf08d;
    DAT_043ac900 = "anime_L_optionguide_r_00_active";
    DAT_043ac918 = 0x56184b5a70c471bc;
    DAT_043ac920 = "anime_L_optionguide_r_00_passive";
    DAT_043ac9c8 = 0x1f;
    DAT_043ac938 = 0x305a45194daf752c;
    DAT_043ac940 = "anime_L_optionguide_r_01_active";
    DAT_043aca08 = 0x1f;
    DAT_043ac958 = 0xa6680df6621e248f;
    DAT_043ac960 = "anime_L_optionguide_r_01_passive";
    DAT_043aca48 = 0x1f;
    DAT_043ac978 = 0x9b2ba43757443d3f;
    DAT_043ac980 = "anime_L_optionguide_r_02_active";
    DAT_043aca88 = 0x1f;
    DAT_043ac998 = 0x92f5a185e7c7a16e;
    DAT_043ac9a0 = "anime_L_optionguide_r_02_passive";
    DAT_043ac9b8 = 0x48547df50c4387de;
    DAT_043ac9c0 = "anime_L_optionguide_r_03_active";
    DAT_043ac9d8 = 0xb649eaa35f007349;
    DAT_043ac9e0 = "anime_L_optionguide_r_03_passive";
    DAT_043acac8 = 0x1f;
    DAT_043ac9f8 = 0x14d65da9802d8761;
    DAT_043aca00 = "anime_L_optionguide_r_04_active";
    DAT_043acb08 = 0x1f;
    DAT_043aca18 = 0x21a310bb1d11d3e0;
    DAT_043aca20 = "anime_L_optionguide_r_04_passive";
    DAT_043acb48 = 0x1f;
    DAT_043aca38 = 0xd3f9255feea98cba;
    DAT_043aca40 = "anime_L_optionguide_c_00_active";
    DAT_043aca58 = 0xdedd696d824eec5;
    DAT_043aca60 = "anime_L_optionguide_c_00_passive";
    DAT_043ac7c8 = 0x1f;
    DAT_043ac7d0 = 0;
    DAT_043aca78 = 0xda1d4438c869f21b;
    DAT_043aca80 = "anime_L_optionguide_c_01_active";
    DAT_043aca98 = 0x59883ebf7dd770a;
    DAT_043acaa0 = "anime_L_optionguide_c_01_passive";
    DAT_043ac808 = 0x1f;
    DAT_043ac810 = 0;
    DAT_043acab8 = 0x27deb9d313ff6b98;
    DAT_043acac0 = "anime_L_optionguide_c_02_active";
    DAT_043acad8 = 0x3767e796ea90f98b;
    DAT_043acae0 = "anime_L_optionguide_c_02_passive";
    DAT_043ac848 = 0x1f;
    DAT_043ac850 = 0;
    DAT_043acaf8 = 0xa629bf5b98e31c59;
    DAT_043acb00 = "anime_L_optionguide_c_03_active";
    DAT_043acb18 = 0xa6c351d293b7d128;
    DAT_043ac888 = 0x1f;
    DAT_043ac890 = 0;
    DAT_043ac8c8 = 0x1f;
    DAT_043ac8d0 = 0;
    DAT_043ac908 = 0x1f;
    DAT_043ac910 = 0;
    DAT_043ac948 = 0x1f;
    DAT_043ac950 = 0;
    DAT_043acb20 = "anime_L_optionguide_c_03_passive";
    DAT_043acb38 = 0xbabf92d712419336;
    DAT_043ac9e8 = 0x20;
    DAT_043aca28 = 0x20;
    DAT_043aca68 = 0x20;
    DAT_043acaa8 = 0x20;
    DAT_043acae8 = 0x20;
    DAT_043acb28 = 0x20;
    DAT_043acb40 = "anime_L_optionguide_c_04_active";
    DAT_043acb68 = 0x20;
    DAT_043ac988 = 0x1f;
    DAT_043ac990 = 0;
    DAT_043acb58 = 0xcd56825dad7ac571;
    DAT_043acb60 = "anime_L_optionguide_c_04_passive";
    DAT_043ac7e8 = 0x20;
    DAT_043ac7f0 = 0;
    DAT_043ac828 = 0x20;
    DAT_043ac830 = 0;
    DAT_043ac868 = 0x20;
    DAT_043ac870 = 0;
    DAT_043ac8a8 = 0x20;
    DAT_043ac8b0 = 0;
    DAT_043ac8e8 = 0x20;
    DAT_043ac8f0 = 0;
    DAT_043ac928 = 0x20;
    DAT_043ac930 = 0;
    DAT_043ac968 = 0x20;
    DAT_043ac970 = 0;
    DAT_043ac9a8 = 0x20;
    DAT_043ac9b0 = 0;
    FUN_00100250(0xd6de40,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043acb78);
  }
  uVar1 = *puVar5;
  if (0xe < uVar1) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x2c8);
  if ((param_3 & 1) == 0) {
    if (lVar3 == 0) goto LAB_00d6bbf8;
    FUN_0283b430(lVar3,&DAT_043ac7b8 + (ulong)uVar1 * 8);
    lVar3 = *(long *)(param_1 + 0x2c8);
    if (lVar3 == 0) goto LAB_00d6bbf8;
    puVar4 = &DAT_043ac7d8 + (ulong)*puVar5 * 8;
  }
  else {
    if (lVar3 == 0) goto LAB_00d6bbf8;
    FUN_0283b430(lVar3,&DAT_043ac7d8 + (ulong)uVar1 * 8);
    lVar3 = *(long *)(param_1 + 0x2c8);
    if (lVar3 == 0) goto LAB_00d6bbf8;
    puVar4 = &DAT_043ac7b8 + (ulong)*puVar5 * 8;
  }
  FUN_0283b1e8(lVar3,puVar4);
LAB_00d6bbf8:
  *(byte *)(param_1 + lVar6 * 0xc + 0x5b4) = param_3 & 1;
  return;
}


