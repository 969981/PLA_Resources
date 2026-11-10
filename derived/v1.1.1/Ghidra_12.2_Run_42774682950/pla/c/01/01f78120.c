/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f78120; name: FUN_01f78120
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f78120(long param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  code *pcVar7;
  code *local_840 [4];
  long **local_820;
  long lStack_818;
  undefined1 *local_7c0;
  code *local_7b8;
  undefined1 *local_7b0;
  undefined1 *puStack_7a8;
  long **local_7a0;
  long lStack_798;
  undefined1 *local_740;
  code *local_738;
  undefined1 *local_730;
  undefined1 *puStack_728;
  long **local_720;
  long lStack_718;
  undefined1 *local_6c0;
  code *local_6b8;
  undefined1 *local_6b0;
  undefined1 *puStack_6a8;
  long **local_6a0;
  long lStack_698;
  undefined1 *local_640;
  code *local_638;
  undefined1 *local_630;
  undefined1 *local_628;
  long **local_620;
  long local_618;
  undefined1 *local_5c0;
  code *local_5b8;
  undefined1 *local_5b0;
  undefined1 *local_5a8;
  long **local_5a0;
  long local_598;
  undefined1 *local_540;
  code *local_538;
  undefined1 *local_530;
  undefined1 *local_528;
  long **local_520;
  long local_518;
  undefined1 *local_4c0;
  code *local_4b8;
  undefined1 *local_4b0;
  undefined1 *local_4a8;
  long **local_4a0;
  long local_498;
  undefined1 *local_440;
  code *local_438;
  undefined1 *local_430;
  undefined1 *local_428;
  long **local_420;
  long local_418;
  undefined1 *local_3c0;
  code *local_3b8;
  undefined1 *local_3b0;
  undefined1 *local_3a8;
  long **local_3a0;
  long local_398;
  undefined1 *local_340;
  code *local_338;
  undefined1 *local_330;
  undefined1 *local_328;
  long **local_320;
  long local_318;
  undefined1 *local_2c0;
  code *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  long **local_2a0;
  long local_298;
  undefined1 *local_240;
  code *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  long **local_220;
  long local_218;
  undefined1 *local_1c0;
  code *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  long **local_1a0;
  long local_198;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long **local_120;
  long local_118;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long **local_a0;
  long local_98;
  long *local_38;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    return;
  }
  FUN_00ca554c(&local_38);
  if (local_38 == (long *)0x0) {
    return;
  }
  local_620 = &local_38;
  local_618 = param_1;
  local_5a0 = &local_38;
  local_840[0] = (code *)&LAB_01f7da14;
  local_840[1] = FUN_01f7e034;
  local_840[2] = (code *)&LAB_01f7e038;
  local_840[3] = (code *)&LAB_01f7e044;
  local_7c0 = &LAB_01f7e050;
  local_7b8 = FUN_01f7e74c;
  local_7b0 = &LAB_01f7e77c;
  puStack_7a8 = &LAB_01f7e788;
  local_598 = param_1;
  local_740 = &LAB_01f7e794;
  local_738 = FUN_01f7e824;
  local_730 = &LAB_01f7e948;
  puStack_728 = &LAB_01f7e954;
  local_6c0 = &LAB_01f7e960;
  local_6b8 = FUN_01f7eb34;
  local_6b0 = &LAB_01f7eb38;
  puStack_6a8 = &LAB_01f7eb44;
  local_640 = &LAB_01f7eb50;
  local_638 = FUN_01f7ed24;
  local_630 = &LAB_01f7ed28;
  local_628 = &LAB_01f7ed34;
  local_5c0 = &LAB_01f7ed40;
  local_5b8 = FUN_01f7ee58;
  local_5b0 = &LAB_01f8001c;
  local_5a8 = &LAB_01f80028;
  local_540 = &LAB_01f80034;
  local_538 = FUN_01f8014c;
  local_530 = &LAB_01f80150;
  local_528 = &LAB_01f8015c;
  local_4c0 = &LAB_01f80168;
  local_4b8 = FUN_01f8033c;
  local_4b0 = &LAB_01f80340;
  local_4a8 = &LAB_01f8034c;
  local_440 = &LAB_01f80358;
  local_438 = FUN_01f80460;
  local_430 = &LAB_01f80584;
  local_428 = &LAB_01f80590;
  local_3c0 = &LAB_01f8059c;
  local_3b8 = FUN_01f806a4;
  local_3b0 = &LAB_01f807c8;
  local_3a8 = &LAB_01f807d4;
  local_340 = &LAB_01f807e0;
  local_338 = FUN_01f808f8;
  local_330 = &LAB_01f808fc;
  local_328 = &LAB_01f80908;
  local_2c0 = &LAB_01f80914;
  local_2b8 = FUN_01f80a1c;
  local_2b0 = &LAB_01f80b40;
  local_2a8 = &LAB_01f80b4c;
  local_240 = &LAB_01f80b58;
  local_238 = FUN_01f80d38;
  local_230 = &LAB_01f80e5c;
  local_228 = &LAB_01f80e68;
  local_1c0 = &LAB_01f80e74;
  local_1b8 = FUN_01f80f94;
  local_1b0 = &LAB_01f80f98;
  local_1a8 = &LAB_01f80fa4;
  local_140 = &LAB_01f80fb0;
  local_138 = FUN_01f810c8;
  local_130 = &LAB_01f810cc;
  local_128 = &LAB_01f810d8;
  local_c0 = &LAB_01f810e4;
  local_b0 = &LAB_01f81200;
  local_520 = &local_38;
  local_518 = param_1;
  local_4a0 = &local_38;
  local_498 = param_1;
  local_420 = &local_38;
  local_418 = param_1;
  local_3a0 = &local_38;
  local_398 = param_1;
  local_320 = &local_38;
  local_318 = param_1;
  local_2a0 = &local_38;
  local_298 = param_1;
  local_220 = &local_38;
  local_218 = param_1;
  local_1a0 = &local_38;
  local_198 = param_1;
  local_120 = &local_38;
  local_118 = param_1;
  local_a0 = &local_38;
  local_98 = param_1;
  local_b8 = FUN_01f811fc;
  local_a8 = &LAB_01f8120c;
  local_820 = &local_38;
  lStack_818 = param_1;
  local_7a0 = &local_38;
  lStack_798 = param_1;
  local_720 = &local_38;
  lStack_718 = param_1;
  local_6a0 = &local_38;
  lStack_698 = param_1;
  pcVar7 = FUN_01f811fc;
  if (param_2 < 0x10) {
    local_28 = param_3;
    (*local_840[(long)param_2 * 0x10])(local_840 + (long)param_2 * 0x10 + 4,&local_28);
    pcVar7 = local_b8;
    if (local_b8 == (code *)0x0) {
      local_b8 = (code *)0x0;
      pcVar7 = local_138;
      goto joined_r0x01f785c8;
    }
  }
  local_a8 = (undefined1 *)0x0;
  local_b0 = (undefined1 *)0x0;
  local_b8 = (code *)0x0;
  local_c0 = (undefined1 *)0x0;
  (*pcVar7)(&local_a0);
  pcVar7 = local_138;
joined_r0x01f785c8:
  local_138 = (code *)0x0;
  pcVar5 = local_1b8;
  if (pcVar7 != (code *)0x0) {
    local_128 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    local_140 = (undefined1 *)0x0;
    (*pcVar7)(&local_120);
    pcVar5 = local_1b8;
  }
  local_1b8 = (code *)0x0;
  pcVar7 = local_238;
  if (pcVar5 != (code *)0x0) {
    local_1a8 = (undefined1 *)0x0;
    local_1b0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    local_1c0 = (undefined1 *)0x0;
    (*pcVar5)(&local_1a0);
    pcVar7 = local_238;
  }
  local_238 = (code *)0x0;
  pcVar5 = local_2b8;
  if (pcVar7 != (code *)0x0) {
    local_228 = (undefined1 *)0x0;
    local_230 = (undefined1 *)0x0;
    local_238 = (code *)0x0;
    local_240 = (undefined1 *)0x0;
    (*pcVar7)(&local_220);
    pcVar5 = local_2b8;
  }
  local_2b8 = (code *)0x0;
  pcVar7 = local_338;
  if (pcVar5 != (code *)0x0) {
    local_2a8 = (undefined1 *)0x0;
    local_2b0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    local_2c0 = (undefined1 *)0x0;
    (*pcVar5)(&local_2a0);
    pcVar7 = local_338;
  }
  local_338 = (code *)0x0;
  pcVar5 = local_3b8;
  if (pcVar7 != (code *)0x0) {
    local_328 = (undefined1 *)0x0;
    local_330 = (undefined1 *)0x0;
    local_338 = (code *)0x0;
    local_340 = (undefined1 *)0x0;
    (*pcVar7)(&local_320);
    pcVar5 = local_3b8;
  }
  local_3b8 = (code *)0x0;
  pcVar7 = local_438;
  if (pcVar5 != (code *)0x0) {
    local_3a8 = (undefined1 *)0x0;
    local_3b0 = (undefined1 *)0x0;
    local_3b8 = (code *)0x0;
    local_3c0 = (undefined1 *)0x0;
    (*pcVar5)(&local_3a0);
    pcVar7 = local_438;
  }
  local_438 = (code *)0x0;
  pcVar5 = local_4b8;
  if (pcVar7 != (code *)0x0) {
    local_428 = (undefined1 *)0x0;
    local_430 = (undefined1 *)0x0;
    local_438 = (code *)0x0;
    local_440 = (undefined1 *)0x0;
    (*pcVar7)(&local_420);
    pcVar5 = local_4b8;
  }
  local_4b8 = (code *)0x0;
  pcVar7 = local_538;
  if (pcVar5 != (code *)0x0) {
    local_4a8 = (undefined1 *)0x0;
    local_4b0 = (undefined1 *)0x0;
    local_4b8 = (code *)0x0;
    local_4c0 = (undefined1 *)0x0;
    (*pcVar5)(&local_4a0);
    pcVar7 = local_538;
  }
  local_538 = (code *)0x0;
  pcVar5 = local_5b8;
  if (pcVar7 != (code *)0x0) {
    local_528 = (undefined1 *)0x0;
    local_530 = (undefined1 *)0x0;
    local_538 = (code *)0x0;
    local_540 = (undefined1 *)0x0;
    (*pcVar7)(&local_520);
    pcVar5 = local_5b8;
  }
  local_5b8 = (code *)0x0;
  pcVar7 = local_638;
  if (pcVar5 != (code *)0x0) {
    local_5a8 = (undefined1 *)0x0;
    local_5b0 = (undefined1 *)0x0;
    local_5b8 = (code *)0x0;
    local_5c0 = (undefined1 *)0x0;
    (*pcVar5)(&local_5a0);
    pcVar7 = local_638;
  }
  local_638 = (code *)0x0;
  pcVar5 = local_6b8;
  if (pcVar7 != (code *)0x0) {
    local_628 = (undefined1 *)0x0;
    local_630 = (undefined1 *)0x0;
    local_638 = (code *)0x0;
    local_640 = (undefined1 *)0x0;
    (*pcVar7)(&local_620);
    pcVar5 = local_6b8;
  }
  local_6b8 = (code *)0x0;
  pcVar7 = local_738;
  if (pcVar5 != (code *)0x0) {
    local_6b0 = (undefined1 *)0x0;
    puStack_6a8 = (undefined1 *)0x0;
    local_6c0 = (undefined1 *)0x0;
    local_6b8 = (code *)0x0;
    (*pcVar5)(&local_6a0);
    pcVar7 = local_738;
  }
  local_738 = (code *)0x0;
  pcVar5 = local_7b8;
  if (pcVar7 != (code *)0x0) {
    local_730 = (undefined1 *)0x0;
    puStack_728 = (undefined1 *)0x0;
    local_740 = (undefined1 *)0x0;
    local_738 = (code *)0x0;
    (*pcVar7)(&local_720);
    pcVar5 = local_7b8;
  }
  local_7b8 = (code *)0x0;
  pcVar7 = local_840[1];
  if (pcVar5 != (code *)0x0) {
    local_7b0 = (undefined1 *)0x0;
    puStack_7a8 = (undefined1 *)0x0;
    local_7c0 = (undefined1 *)0x0;
    local_7b8 = (code *)0x0;
    (*pcVar5)(&local_7a0);
    pcVar7 = local_840[1];
  }
  local_840[1] = (code *)0x0;
  if (pcVar7 != (code *)0x0) {
    local_840[2] = (code *)0x0;
    local_840[3] = (code *)0x0;
    local_840[0] = (code *)0x0;
    local_840[1] = (code *)0x0;
    (*pcVar7)(local_840 + 4);
  }
  if (local_38 != (long *)0x0) {
    lVar6 = local_38[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


