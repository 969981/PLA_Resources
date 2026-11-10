/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014587f8; name: FUN_014587f8
 */


void FUN_014587f8(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined1 *local_e0;
  code *local_d8;
  code *local_d0;
  long *local_c8;
  long alStack_c0 [12];
  
  local_e0 = (undefined1 *)0xe66ab1543520e98c;
  local_d8 = (code *)0x3913f0e;
  local_d0 = (code *)0x17;
  local_c8 = (long *)0x0;
  FUN_0145923c(param_1,0xc997520ce812a7cc,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  local_e0 = (undefined1 *)0x4dfe8a2cc5f545c3;
  local_d8 = (code *)0x38ea3b6;
  local_d0 = (code *)0x17;
  local_c8 = (long *)0x0;
  FUN_0145923c(param_1,0x775b50d9c87941f4,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  local_e0 = (undefined1 *)0x5f67bc663c1dd746;
  local_d8 = (code *)0x3957a70;
  local_d0 = (code *)0x1f;
  local_c8 = (long *)0x0;
  FUN_0145923c(param_1,0xc997520ce812a7cc,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  local_e0 = (undefined1 *)0x6f72262882ffdb1d;
  local_d8 = (code *)0x393af12;
  local_d0 = (code *)0x1f;
  local_c8 = (long *)0x0;
  FUN_0145923c(param_1,0x775b50d9c87941f4,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  local_e0 = &LAB_0145af34;
  local_d8 = FUN_0145af44;
  local_d0 = FUN_0145af48;
  local_c8 = (long *)&LAB_0145af54;
  lVar1 = param_1 + 0x180;
  local_100 = 0x3b0cf44c775f253f;
  local_f8 = "report_normal";
  local_f0 = 0xd;
  local_e8 = (long *)0x0;
  alStack_c0[0] = param_1;
  lVar2 = thunk_FUN_00d2e944(lVar1,&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x260) = 0x200000000;
    pcVar6 = *(code **)(lVar2 + 0x2c8);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar2 + 0x2d0) = 0;
      *(undefined8 *)(lVar2 + 0x2d8) = 0;
      *(undefined8 *)(lVar2 + 0x2c0) = 0;
      *(undefined8 *)(lVar2 + 0x2c8) = 0;
      (*pcVar6)(lVar2 + 0x2e0);
    }
    if (local_d0 != (code *)0x0) {
      (*local_d0)(alStack_c0,lVar2 + 0x2e0);
      *(code **)(lVar2 + 0x2c8) = local_d8;
      *(long **)(lVar2 + 0x2d8) = local_c8;
      *(code **)(lVar2 + 0x2d0) = local_d0;
      *(undefined8 *)(lVar2 + 0x2c0) = local_e0;
    }
    plVar3 = *(long **)(lVar2 + 0x280);
    *(undefined8 *)(lVar2 + 0x268) = 0x435d79ee7ba9513b;
    *(char **)(lVar2 + 0x270) = "PLAY_UI_COMMON_REPORT_PRE";
    *(undefined8 *)(lVar2 + 0x278) = 0x19;
    *(undefined8 *)(lVar2 + 0x280) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    FUN_028077c0(lVar2,0);
    local_100 = 0xeb3b05ae26b5ada2;
    local_f8 = "report_backup";
    local_f0 = 0xd;
    local_e8 = (long *)0x0;
    lVar2 = thunk_FUN_00d2e944(lVar1,&local_100);
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x260) = 0x200000000;
      pcVar6 = *(code **)(lVar2 + 0x2c8);
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(lVar2 + 0x2d0) = 0;
        *(undefined8 *)(lVar2 + 0x2d8) = 0;
        *(undefined8 *)(lVar2 + 0x2c0) = 0;
        *(undefined8 *)(lVar2 + 0x2c8) = 0;
        (*pcVar6)(lVar2 + 0x2e0);
      }
      if (local_d0 != (code *)0x0) {
        (*local_d0)(alStack_c0,lVar2 + 0x2e0);
        *(code **)(lVar2 + 0x2c8) = local_d8;
        *(long **)(lVar2 + 0x2d8) = local_c8;
        *(code **)(lVar2 + 0x2d0) = local_d0;
        *(undefined8 *)(lVar2 + 0x2c0) = local_e0;
      }
      plVar3 = *(long **)(lVar2 + 0x280);
      *(undefined8 *)(lVar2 + 0x268) = 0x435d79ee7ba9513b;
      *(char **)(lVar2 + 0x270) = "PLAY_UI_COMMON_REPORT_PRE";
      *(undefined8 *)(lVar2 + 0x278) = 0x19;
      *(undefined8 *)(lVar2 + 0x280) = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      FUN_028077c0(lVar2,0);
      local_100 = 0xd5745e6ad4390d42;
      local_f8 = "report_no_card";
      local_f0 = 0xe;
      local_e8 = (long *)0x0;
      lVar2 = thunk_FUN_00d2e944(lVar1,&local_100);
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x20))();
      }
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x260) = 0x200000000;
        pcVar6 = *(code **)(lVar2 + 0x2c8);
        if (pcVar6 != (code *)0x0) {
          *(undefined8 *)(lVar2 + 0x2d0) = 0;
          *(undefined8 *)(lVar2 + 0x2d8) = 0;
          *(undefined8 *)(lVar2 + 0x2c0) = 0;
          *(undefined8 *)(lVar2 + 0x2c8) = 0;
          (*pcVar6)(lVar2 + 0x2e0);
        }
        if (local_d0 != (code *)0x0) {
          (*local_d0)(alStack_c0,lVar2 + 0x2e0);
          *(code **)(lVar2 + 0x2c8) = local_d8;
          *(long **)(lVar2 + 0x2d8) = local_c8;
          *(code **)(lVar2 + 0x2d0) = local_d0;
          *(undefined8 *)(lVar2 + 0x2c0) = local_e0;
        }
        plVar3 = *(long **)(lVar2 + 0x280);
        *(undefined8 *)(lVar2 + 0x268) = 0x435d79ee7ba9513b;
        *(char **)(lVar2 + 0x270) = "PLAY_UI_COMMON_REPORT_PRE";
        *(undefined8 *)(lVar2 + 0x278) = 0x19;
        *(undefined8 *)(lVar2 + 0x280) = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x20))();
        }
        FUN_028077c0(lVar2,0);
        local_100 = 0x26020f6a52ed69d;
        local_f8 = "report_no_card_backup";
        local_f0 = 0x15;
        local_e8 = (long *)0x0;
        lVar2 = thunk_FUN_00d2e944(lVar1,&local_100);
        if (local_e8 != (long *)0x0) {
          (**(code **)(*local_e8 + 0x20))();
        }
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x260) = 0x200000000;
          pcVar6 = *(code **)(lVar2 + 0x2c8);
          if (pcVar6 != (code *)0x0) {
            *(undefined8 *)(lVar2 + 0x2d0) = 0;
            *(undefined8 *)(lVar2 + 0x2d8) = 0;
            *(undefined8 *)(lVar2 + 0x2c0) = 0;
            *(undefined8 *)(lVar2 + 0x2c8) = 0;
            (*pcVar6)(lVar2 + 0x2e0);
          }
          if (local_d0 != (code *)0x0) {
            (*local_d0)(alStack_c0,lVar2 + 0x2e0);
            *(code **)(lVar2 + 0x2c8) = local_d8;
            *(long **)(lVar2 + 0x2d8) = local_c8;
            *(code **)(lVar2 + 0x2d0) = local_d0;
            *(undefined8 *)(lVar2 + 0x2c0) = local_e0;
          }
          plVar3 = *(long **)(lVar2 + 0x280);
          *(undefined8 *)(lVar2 + 0x268) = 0x435d79ee7ba9513b;
          *(char **)(lVar2 + 0x270) = "PLAY_UI_COMMON_REPORT_PRE";
          *(undefined8 *)(lVar2 + 0x278) = 0x19;
          *(undefined8 *)(lVar2 + 0x280) = 0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x20))();
          }
          FUN_028077c0(lVar2,0);
          uVar4 = FUN_01459510();
          if ((uVar4 & 1) == 0) {
            if (*(char *)(param_1 + 0x5ad) == '\0') {
              local_100 = 0xd5745e6ad4390d42;
              local_f8 = "report_no_card";
              local_f0 = 0xe;
              local_e8 = (long *)0x0;
              uVar5 = thunk_FUN_00d2e944(lVar1,&local_100);
              FUN_028077c0(uVar5,1);
              if (local_e8 != (long *)0x0) {
                (**(code **)(*local_e8 + 0x20))();
              }
              local_100 = 0xd5745e6ad4390d42;
              local_f8 = "report_no_card";
              local_f0 = 0xe;
            }
            else {
              local_100 = 0x26020f6a52ed69d;
              local_f8 = "report_no_card_backup";
              local_f0 = 0x15;
              local_e8 = (long *)0x0;
              uVar5 = thunk_FUN_00d2e944(lVar1,&local_100);
              FUN_028077c0(uVar5,1);
              if (local_e8 != (long *)0x0) {
                (**(code **)(*local_e8 + 0x20))();
              }
              local_f0 = 0x15;
              local_100 = 0x26020f6a52ed69d;
              local_f8 = "report_no_card_backup";
            }
          }
          else {
            if (*(char *)(param_1 + 0x5ad) == '\0') {
              uVar7 = 0x3b0cf44c775f253f;
              local_100 = 0x3b0cf44c775f253f;
              local_f8 = "report_normal";
              local_f0 = 0xd;
              local_e8 = (long *)0x0;
              uVar5 = thunk_FUN_00d2e944(lVar1,&local_100);
              FUN_028077c0(uVar5,1);
              if (local_e8 != (long *)0x0) {
                (**(code **)(*local_e8 + 0x20))();
              }
              local_f8 = "report_normal";
            }
            else {
              uVar7 = 0xeb3b05ae26b5ada2;
              local_100 = 0xeb3b05ae26b5ada2;
              local_f8 = "report_backup";
              local_f0 = 0xd;
              local_e8 = (long *)0x0;
              uVar5 = thunk_FUN_00d2e944(lVar1,&local_100);
              FUN_028077c0(uVar5,1);
              if (local_e8 != (long *)0x0) {
                (**(code **)(*local_e8 + 0x20))();
              }
              local_f8 = "report_backup";
            }
            local_f0 = 0xd;
            local_100 = uVar7;
          }
          local_e8 = (long *)0x0;
          uVar5 = thunk_FUN_00d2e944(lVar1,&local_100);
          FUN_0280779c(uVar5,1);
          if (local_e8 != (long *)0x0) {
            (**(code **)(*local_e8 + 0x20))();
          }
        }
      }
    }
  }
  pcVar6 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (long *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar6)(alStack_c0);
  }
  return;
}


