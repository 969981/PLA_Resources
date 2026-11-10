/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c1df8; name: FUN_014c1df8
 */


void FUN_014c1df8(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  
  if (((DAT_043c4548 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043c4548), iVar2 != 0)) {
    DAT_043c44a8 = 0xca71cd5ea7d87053;
    DAT_043c44b0 = "anime_L_scr_01_basic_visible";
    DAT_043c44b8 = 0x1c;
    DAT_043c44c0 = 0;
    DAT_043c44c8 = 0x7469e3835c410b53;
    DAT_043c44d0 = "anime_L_scr_01_basic_L_pt_bg_basic_00_visible";
    DAT_043c44e8 = 0x267bf095ff7822a2;
    DAT_043c44f0 = "anime_L_pt_slide_L_sel_icon_01_active_passive";
    DAT_043c4508 = 0x4c384f07b0b40c7d;
    DAT_043c4510 = "anime_L_pt_slide_L_sel_icon_02_active_passive";
    DAT_043c44d8 = 0x2d;
    DAT_043c44e0 = 0;
    DAT_043c44f8 = 0x2d;
    DAT_043c4500 = 0;
    DAT_043c4518 = 0x2d;
    DAT_043c4520 = 0;
    DAT_043c4528 = 0xfde1c08847d679d1;
    DAT_043c4530 = "anime_L_pt_poke_name_00_switch";
    DAT_043c4538 = 0x1e;
    DAT_043c4540 = 0;
    FUN_00100250(&LAB_014c0390,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c4548);
  }
  plVar1 = (long *)(param_1 + 0x2c8);
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043c44a8);
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&DAT_043c44c8);
      if (*plVar1 != 0) {
        FUN_0283b1e8(*plVar1,&DAT_043c44e8);
        if (*plVar1 != 0) {
          FUN_0283b1e8(*plVar1,&DAT_043c4508);
          if (*plVar1 != 0) {
            FUN_0283b1e8(*plVar1,&DAT_043c4528);
          }
        }
      }
    }
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x5c8) + 0x10))();
  uVar4 = FUN_02c62900(uVar3,2);
  lVar5 = *(long *)(param_1 + 0x2c8);
  if ((uVar4 & 1) == 0) {
    if (lVar5 != 0) {
      uVar4 = FUN_0283b5c4(lVar5,&DAT_043c44a8);
      if ((uVar4 & 1) != 0) {
        if (*plVar1 == 0) {
          return;
        }
        FUN_0283b1e8(*plVar1,&DAT_043c44a8);
      }
      FUN_0283b748(0,*plVar1,&DAT_043c44a8);
      if (*plVar1 != 0) {
        uVar4 = FUN_0283b5c4(*plVar1,&DAT_043c44c8);
        if ((uVar4 & 1) != 0) {
          if (*plVar1 == 0) {
            return;
          }
          FUN_0283b1e8(*plVar1,&DAT_043c44c8);
        }
        FUN_0283b748(0,*plVar1,&DAT_043c44c8);
        if (*plVar1 != 0) {
          uVar4 = FUN_0283b5c4(*plVar1,&DAT_043c44e8);
          if ((uVar4 & 1) != 0) {
            if (*plVar1 == 0) {
              return;
            }
            FUN_0283b1e8(*plVar1,&DAT_043c44e8);
          }
          FUN_0283b748(0,*plVar1,&DAT_043c44e8);
          if (*plVar1 != 0) {
            uVar4 = FUN_0283b5c4(*plVar1,&DAT_043c4508);
            if ((uVar4 & 1) != 0) {
              if (*plVar1 == 0) {
                return;
              }
              FUN_0283b1e8(*plVar1,&DAT_043c4508);
            }
            FUN_0283b748(0,*plVar1,&DAT_043c4508);
            if (*plVar1 != 0) {
              uVar4 = FUN_0283b5c4(*plVar1,&DAT_043c4528);
              if ((uVar4 & 1) != 0) {
                if (*plVar1 == 0) {
                  return;
                }
                FUN_0283b1e8(*plVar1,&DAT_043c4528);
              }
              lVar5 = *plVar1;
              uVar6 = 0;
LAB_014c1f78:
              FUN_0283b748(uVar6,lVar5,&DAT_043c4528);
              return;
            }
          }
        }
      }
    }
  }
  else if (lVar5 != 0) {
    uVar4 = FUN_0283b5c4(lVar5,&DAT_043c44a8);
    if ((uVar4 & 1) != 0) {
      if (*plVar1 == 0) {
        return;
      }
      FUN_0283b1e8(*plVar1,&DAT_043c44a8);
    }
    FUN_0283b748(0x3f800000,*plVar1,&DAT_043c44a8);
    if (*plVar1 != 0) {
      uVar4 = FUN_0283b5c4(*plVar1,&DAT_043c44c8);
      if ((uVar4 & 1) != 0) {
        if (*plVar1 == 0) {
          return;
        }
        FUN_0283b1e8(*plVar1,&DAT_043c44c8);
      }
      FUN_0283b748(0x3f800000,*plVar1,&DAT_043c44c8);
      if (*plVar1 != 0) {
        uVar4 = FUN_0283b5c4(*plVar1,&DAT_043c44e8);
        if ((uVar4 & 1) != 0) {
          if (*plVar1 == 0) {
            return;
          }
          FUN_0283b1e8(*plVar1,&DAT_043c44e8);
        }
        FUN_0283b748(0x3f800000,*plVar1,&DAT_043c44e8);
        if (*plVar1 != 0) {
          uVar4 = FUN_0283b5c4(*plVar1,&DAT_043c4508);
          if ((uVar4 & 1) != 0) {
            if (*plVar1 == 0) {
              return;
            }
            FUN_0283b1e8(*plVar1,&DAT_043c4508);
          }
          FUN_0283b748(0x3f800000,*plVar1,&DAT_043c4508);
          if (*plVar1 != 0) {
            uVar4 = FUN_0283b5c4(*plVar1,&DAT_043c4528);
            if ((uVar4 & 1) != 0) {
              if (*plVar1 == 0) {
                return;
              }
              FUN_0283b1e8(*plVar1,&DAT_043c4528);
            }
            lVar5 = *plVar1;
            uVar6 = 0x3f800000;
            goto LAB_014c1f78;
          }
        }
      }
    }
  }
  return;
}


