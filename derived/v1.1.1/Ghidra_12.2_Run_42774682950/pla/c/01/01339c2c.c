/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01339c2c; name: FUN_01339c2c
 */


void FUN_01339c2c(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_910;
  char *pcStack_908;
  undefined8 local_900;
  long *local_8f8;
  undefined8 local_510;
  code *local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined *local_488;
  undefined8 local_480;
  long *local_478;
  undefined8 *local_470;
  char *local_468;
  undefined8 local_460;
  code *local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined1 auStack_440 [992];
  
  lVar10 = *(long *)(param_1 + 0x448);
  *(undefined1 *)(param_1 + 0x5bc) = 0;
  lVar9 = 0;
  *(undefined8 *)(param_1 + 0x5c0) = param_2;
  do {
    local_478 = (long *)0x0;
    local_910 = 0x65986400b2ff0748;
    pcStack_908 = "work_map_app_icon_00";
    local_900 = 0x14;
    local_8f8 = (long *)0x0;
    local_490 = (&DAT_04205e40)[lVar9 * 3];
    local_488 = (&PTR_s_pane_L_icon_puinfo_00_P_icon_00_04205e48)[lVar9 * 3];
    local_480 = (&DAT_04205e50)[lVar9 * 3];
    FUN_00d62910(&local_470,*(undefined8 *)(param_1 + 0x2c8),&local_910,&local_490);
    if (local_478 != (long *)0x0) {
      (**(code **)(*local_478 + 0x20))();
    }
    if (local_8f8 != (long *)0x0) {
      (**(code **)(*local_8f8 + 0x20))();
    }
    local_498 = 0;
    local_4a0 = 0;
    local_4a8 = 0;
    local_4b0 = 0;
    local_4b8 = 0;
    local_4c0 = 0;
    local_4c8 = 0;
    local_4d0 = 0;
    local_4d8 = 0;
    local_4e0 = 0;
    local_4e8 = 0;
    local_4f0 = 0;
    local_4f8 = 0;
    local_500 = 0;
    local_508 = (code *)0x0;
    local_510 = 0;
    FUN_0284d5a8(lVar10 + lVar9 * 0xd0,*(undefined8 *)(param_1 + 8),&local_470,0,&local_510);
    pcVar4 = local_508;
    if (local_508 == (code *)0x0) {
      local_508 = (code *)0x0;
      pcVar4 = local_458;
    }
    else {
      local_4f8 = 0;
      local_500 = 0;
      local_508 = (code *)0x0;
      local_510 = 0;
      (*pcVar4)(&local_4f0);
      pcVar4 = local_458;
    }
    local_458 = pcVar4;
    if (pcVar4 != (code *)0x0) {
      local_450 = 0;
      uStack_448 = 0;
      local_460 = 0;
      local_458 = (code *)0x0;
      (*pcVar4)(auStack_440);
    }
    puVar5 = local_470;
    if (local_470 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_470 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_470[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_910 = *puVar5;
        FUN_02a44274(lVar8 + 0xd8,&local_910);
      }
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x15);
  lVar9 = param_1 + 0x180;
  memset(&local_910,0,0x400);
  uVar7 = FUN_01306260(lVar9,"pane_N_icon_spmap_00");
  *(undefined8 *)(param_1 + 0x5d0) = uVar7;
  uVar7 = FUN_01306260(lVar9,"pane_N_icon_area_spmap_00");
  *(undefined8 *)(param_1 + 0x5d8) = uVar7;
  uVar7 = FUN_01306260(lVar9,"pane_N_icon_puinfo_00");
  *(undefined8 *)(param_1 + 0x5e0) = uVar7;
  uVar7 = FUN_01306260(lVar9,"pane_N_icon_area_puinfo_00");
  lVar10 = 0;
  *(undefined8 *)(param_1 + 0x5e8) = uVar7;
  do {
    snprintf((char *)&local_910,0x400,"pane_N_icon_npuinfo_%02d",(int)lVar10);
    uVar7 = FUN_01306260(lVar9,&local_910);
    lVar8 = param_1 + lVar10 * 8;
    *(undefined8 *)(lVar8 + 0x5f0) = uVar7;
    snprintf((char *)&local_910,0x400,"pane_N_icon_area_npuinfo_%02d",(int)lVar10);
    uVar7 = FUN_01306260(lVar9,&local_910);
    lVar10 = lVar10 + 1;
    *(undefined8 *)(lVar8 + 0x690) = uVar7;
  } while (lVar10 != 0x14);
  snprintf((char *)&local_910,0x400,"pane_L_icon_blost_%02d",0);
  uVar7 = FUN_01306260(lVar9,&local_910);
  *(undefined8 *)(param_1 + 0x730) = uVar7;
  snprintf((char *)&local_910,0x400,"pane_L_icon_blost_%02d",1);
  uVar7 = FUN_01306260(lVar9,&local_910);
  *(undefined8 *)(param_1 + 0x738) = uVar7;
  snprintf((char *)&local_910,0x400,"pane_L_icon_blost_%02d",2);
  uVar7 = FUN_01306260(lVar9,&local_910);
  *(undefined8 *)(param_1 + 0x740) = uVar7;
  snprintf((char *)&local_910,0x400,"pane_L_icon_blost_%02d",3);
  uVar7 = FUN_01306260(lVar9,&local_910);
  *(undefined8 *)(param_1 + 0x748) = uVar7;
  snprintf((char *)&local_910,0x400,"pane_L_icon_blost_%02d",4);
  uVar7 = FUN_01306260(lVar9,&local_910);
  *(undefined8 *)(param_1 + 0x750) = uVar7;
  uVar7 = FUN_01306260(lVar9,"pane_N_cursor_00");
  *(undefined8 *)(param_1 + 0x5c8) = uVar7;
  *(byte *)(*(long *)(param_1 + 0x5d0) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5d0) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x5d8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5d8) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x5e0) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5e0) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x5e8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5e8) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x5f0) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5f0) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x690) + 0x58) = *(byte *)(*(long *)(param_1 + 0x690) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x5f8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5f8) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x698) + 0x58) = *(byte *)(*(long *)(param_1 + 0x698) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x600) + 0x58) = *(byte *)(*(long *)(param_1 + 0x600) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x6a0) + 0x58) = *(byte *)(*(long *)(param_1 + 0x6a0) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x608) + 0x58) = *(byte *)(*(long *)(param_1 + 0x608) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x6a8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x6a8) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x610) + 0x58) = *(byte *)(*(long *)(param_1 + 0x610) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x6b0) + 0x58) = *(byte *)(*(long *)(param_1 + 0x6b0) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x618) + 0x58) = *(byte *)(*(long *)(param_1 + 0x618) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x6b8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x6b8) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x620) + 0x58) = *(byte *)(*(long *)(param_1 + 0x620) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x6c0) + 0x58) = *(byte *)(*(long *)(param_1 + 0x6c0) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x628) + 0x58) = *(byte *)(*(long *)(param_1 + 0x628) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x6c8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x6c8) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x630) + 0x58) = *(byte *)(*(long *)(param_1 + 0x630) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x6d0) + 0x58) = *(byte *)(*(long *)(param_1 + 0x6d0) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x638) + 0x58) = *(byte *)(*(long *)(param_1 + 0x638) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x6d8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x6d8) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x640) + 0x58) = *(byte *)(*(long *)(param_1 + 0x640) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x6e0) + 0x58) = *(byte *)(*(long *)(param_1 + 0x6e0) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x648) + 0x58) = *(byte *)(*(long *)(param_1 + 0x648) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x6e8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x6e8) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x650) + 0x58) = *(byte *)(*(long *)(param_1 + 0x650) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x6f0) + 0x58) = *(byte *)(*(long *)(param_1 + 0x6f0) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x658) + 0x58) = *(byte *)(*(long *)(param_1 + 0x658) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x6f8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x6f8) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x660) + 0x58) = *(byte *)(*(long *)(param_1 + 0x660) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x700) + 0x58) = *(byte *)(*(long *)(param_1 + 0x700) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x668) + 0x58) = *(byte *)(*(long *)(param_1 + 0x668) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x708) + 0x58) = *(byte *)(*(long *)(param_1 + 0x708) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x670) + 0x58) = *(byte *)(*(long *)(param_1 + 0x670) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x710) + 0x58) = *(byte *)(*(long *)(param_1 + 0x710) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x678) + 0x58) = *(byte *)(*(long *)(param_1 + 0x678) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x718) + 0x58) = *(byte *)(*(long *)(param_1 + 0x718) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x680) + 0x58) = *(byte *)(*(long *)(param_1 + 0x680) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x720) + 0x58) = *(byte *)(*(long *)(param_1 + 0x720) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x688) + 0x58) = *(byte *)(*(long *)(param_1 + 0x688) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x728) + 0x58) = *(byte *)(*(long *)(param_1 + 0x728) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x730) + 0x58) = *(byte *)(*(long *)(param_1 + 0x730) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x738) + 0x58) = *(byte *)(*(long *)(param_1 + 0x738) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x740) + 0x58) = *(byte *)(*(long *)(param_1 + 0x740) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x748) + 0x58) = *(byte *)(*(long *)(param_1 + 0x748) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x750) + 0x58) = *(byte *)(*(long *)(param_1 + 0x750) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x5c8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5c8) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x5c8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5c8) + 0x58) | 1;
  lVar10 = FUN_01306260(lVar9,"pane_L_cursor_00");
  *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
  *(undefined8 *)(lVar10 + 0x30) = 0;
  *(undefined4 *)(lVar10 + 0x38) = 0;
  local_468 = "anime_L_cursor_00_keep";
  local_458 = (code *)0x0;
  local_470 = (undefined8 *)0xbb0f72b98efaaaec;
  local_460 = 0x16;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_470);
  }
  memset(&local_470,0,0x400);
  iVar6 = 0;
  do {
    snprintf((char *)&local_470,0x400,"pane_L_icon_location_name_%02d",iVar6);
    lVar10 = FUN_01306260(lVar9,&local_470);
    iVar6 = iVar6 + 1;
    *(undefined8 *)(lVar10 + 0x30) = 0;
    *(undefined4 *)(lVar10 + 0x38) = 0;
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe | 0x10;
  } while (iVar6 != 0x14);
  return;
}


