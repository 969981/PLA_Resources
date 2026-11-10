/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0146785c; name: FUN_0146785c
 */


void FUN_0146785c(long param_1)

{
  long lVar1;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  lVar1 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
  if (lVar1 != 0) {
    FUN_0148cc94(lVar1,3);
    if (*(char *)(lVar1 + 0x1200) == '\0') {
      *(char *)(lVar1 + 0x1200) = '\x01';
    }
    local_50 = 0x5e6b838ab8d8ec70;
    pcStack_48 = "QIconView";
    local_40 = 9;
    local_38 = (long *)0x0;
    lVar1 = FUN_01470560(*(undefined8 *)(param_1 + 0x4c8),&local_50);
    if (lVar1 != 0) {
      FUN_01483110();
      local_50 = 0x9104efa44142b95e;
      pcStack_48 = "GuideView";
      local_40 = 9;
      local_38 = (long *)0x0;
      lVar1 = FUN_0147071c(*(undefined8 *)(param_1 + 0x4c8),&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      if (lVar1 != 0) {
        FUN_014757a4(lVar1);
        lVar1 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
        if (lVar1 != 0) {
          lVar1 = *(long *)(lVar1 + 0x3f50);
          if (*(char *)(lVar1 + 0x40) != '\0') {
            *(undefined1 *)(lVar1 + 0x40) = 0;
            local_50 = DAT_042116c8;
            pcStack_48 = PTR_s_anime_L_ns_time_00_wake_042116d0;
            local_40 = DAT_042116d8;
            local_38 = (long *)0x0;
            FUN_0146119c(lVar1,&local_50);
            if (local_38 != (long *)0x0) {
              (**(code **)(*local_38 + 0x20))();
            }
            local_50 = DAT_042116b0;
            pcStack_48 = PTR_s_anime_L_ns_time_00_close_042116b8;
            local_40 = DAT_042116c0;
            local_38 = (long *)0x0;
            lVar1 = *(long *)(*(long *)(lVar1 + 0x10) + 0x148);
            if (lVar1 != 0) {
              FUN_0283b1e8(lVar1,&local_50);
            }
          }
          FUN_014673e0();
          lVar1 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
          if (lVar1 != 0) {
            if ((*(long *)(lVar1 + 0x3f30) != 0) &&
               (*(char *)(*(long *)(lVar1 + 0x3f30) + 0xd0) != '\0')) {
              FUN_0145f0f8();
            }
            lVar1 = FUN_01467f18(*(undefined8 *)(param_1 + 0x4c8),"ItemChangeView");
            if (lVar1 != 0) {
              if (*(int *)(lVar1 + 0x750) == 0) {
                FUN_00d7331c(lVar1,1);
                FUN_00d7331c(lVar1,5);
                *(undefined4 *)(lVar1 + 0x750) = 1;
              }
              local_50 = 0xf672161083533659;
              pcStack_48 = "LevelUpView";
              local_40 = 0xb;
              local_38 = (long *)0x0;
              lVar1 = FUN_01470a94(*(undefined8 *)(param_1 + 0x4c8),&local_50);
              if (lVar1 != 0) {
                *(undefined1 *)(lVar1 + 0x5ac) = 1;
                FUN_00d7331c(lVar1,1);
                local_50 = 0x7f7e4efd5cc9936b;
                pcStack_48 = "FabhView";
                local_40 = 8;
                local_38 = (long *)0x0;
                lVar1 = FUN_0146fe3c(*(undefined8 *)(param_1 + 0x4c8),&local_50);
                if (local_38 != (long *)0x0) {
                  (**(code **)(*local_38 + 0x20))();
                }
                if (lVar1 != 0) {
                  FUN_014745fc(lVar1);
                  lVar1 = FUN_0146819c();
                  if (lVar1 != 0) {
                    FUN_00d42690(lVar1,0,1);
                  }
                  lVar1 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
                  if (lVar1 != 0) {
                    if (*(char *)(lVar1 + 0x26a0) == '\0') {
                      *(char *)(lVar1 + 0x26a0) = '\x01';
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


