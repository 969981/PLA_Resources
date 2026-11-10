/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014669ec; name: FUN_014669ec
 */


void FUN_014669ec(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  undefined1 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_38;
  
  lVar3 = FUN_01467f18(*(undefined8 *)(param_1 + 0x4c8),"ItemChangeView");
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x750) == 0) {
      FUN_00d7331c(lVar3,1);
      FUN_00d7331c(lVar3,5);
      *(undefined4 *)(lVar3 + 0x750) = 2;
    }
    lVar3 = FUN_0146819c();
    if (lVar3 != 0) {
      FUN_00d42690(lVar3,0,1);
    }
    lVar3 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
    if (lVar3 != 0) {
      FUN_0148cc94(lVar3,3);
      if (*(char *)(lVar3 + 0x1200) == '\0') {
        *(char *)(lVar3 + 0x1200) = '\x01';
      }
      *(undefined2 *)(param_1 + 0x6a0) = 0;
      bVar2 = FUN_0195323c(1);
      *(byte *)(param_1 + 0x6a3) = bVar2 & 1;
      lVar3 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
      if (lVar3 != 0) {
        if ((*(long *)(lVar3 + 0x3f30) != 0) &&
           (*(char *)(*(long *)(lVar3 + 0x3f30) + 0xd0) != '\0')) {
          FUN_0145f0f8();
        }
        local_60 = (undefined1 *)0x7f7e4efd5cc9936b;
        pcStack_58 = "FabhView";
        local_50 = 8;
        local_48 = (long *)0x0;
        lVar3 = FUN_0146fe3c(*(undefined8 *)(param_1 + 0x4c8),&local_60);
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
        if (lVar3 != 0) {
          FUN_014745fc(lVar3);
          local_60 = (undefined1 *)0x6bcce3c5c48c59a;
          pcStack_58 = "NotifyView_0";
          local_50 = 0xc;
          local_48 = (long *)0x0;
          lVar3 = FUN_014703a4(*(undefined8 *)(param_1 + 0x4c8),&local_60);
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 0x20))();
          }
          if (lVar3 != 0) {
            if (*(long *)(lVar3 + 0x668) != 0) {
              FUN_0147b82c(lVar3);
            }
            local_60 = (undefined1 *)0x5e6b838ab8d8ec70;
            pcStack_58 = "QIconView";
            local_50 = 9;
            local_48 = (long *)0x0;
            lVar3 = FUN_01470560(*(undefined8 *)(param_1 + 0x4c8),&local_60);
            if (lVar3 != 0) {
              FUN_01483110();
              lVar3 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
              if (lVar3 != 0) {
                FUN_0148fa5c();
                FUN_01491734(lVar3 + 0x2810);
                FUN_0148cc94(lVar3,0);
                FUN_0148cc94(lVar3,1);
                FUN_0148cc94(lVar3,2);
                if (*(char *)(lVar3 + 0x7b0) == '\0') {
                  *(undefined1 *)(lVar3 + 0x7b0) = 1;
                }
                if (*(char *)(lVar3 + 0xb20) == '\0') {
                  *(undefined1 *)(lVar3 + 0xb20) = 1;
                }
                if (*(char *)(lVar3 + 0xe90) == '\0') {
                  *(undefined1 *)(lVar3 + 0xe90) = 1;
                }
                FUN_01466f64(param_1);
                local_60 = (undefined1 *)0x9104efa44142b95e;
                pcStack_58 = "GuideView";
                local_50 = 9;
                local_48 = (long *)0x0;
                lVar3 = FUN_0147071c(*(undefined8 *)(param_1 + 0x4c8),&local_60);
                if (local_48 != (long *)0x0) {
                  (**(code **)(*local_48 + 0x20))();
                }
                if (lVar3 != 0) {
                  FUN_014757a4(lVar3);
                  lVar3 = FUN_01468650(*(undefined8 *)(param_1 + 0x4c8),"PlaceNameView");
                  if (lVar3 != 0) {
                    FUN_0147f9a0(lVar3,1);
                    *(undefined1 *)(param_1 + 0x6a2) = 0;
                    *(undefined8 *)(param_1 + 0x6a8) = 0;
                    *(undefined8 *)(param_1 + 0x6b0) = 0;
                    *(undefined8 *)(param_1 + 0x6b8) = 0;
                    *(undefined8 *)(param_1 + 0x6c0) = 0;
                    *(undefined4 *)(param_1 + 0x6c8) = 0;
                    local_60 = &DAT_964f333908097d38;
                    pcStack_58 = "LocationNameView";
                    local_50 = 0x10;
                    local_48 = (long *)0x0;
                    lVar3 = FUN_014708d8(*(undefined8 *)(param_1 + 0x4c8),&local_60);
                    if (local_48 != (long *)0x0) {
                      (**(code **)(*local_48 + 0x20))();
                    }
                    if (lVar3 != 0) {
                      uVar4 = *(ulong *)(lVar3 + 0x5b0);
                      if ((uVar4 & 1) != 0) {
                        if ((((uVar4 & 0xf) != 0) && (lVar5 = *(long *)(lVar3 + 0x2c8), lVar5 != 0))
                           && (*(long *)(lVar5 + 0x1a8) != 0)) {
                          lVar6 = *(long *)(lVar5 + 0x1a8) * 0x30;
                          puVar7 = (uint *)(*(long *)(lVar5 + 0x1a0) + 0x28);
                          do {
                            uVar1 = *puVar7;
                            if (((uVar1 < *(uint *)(*(long *)(puVar7 + -2) + 0x278)) &&
                                (lVar5 = *(long *)(*(long *)(puVar7 + -2) + 600),
                                *(char *)(lVar5 + (ulong)uVar1 * 0x48 + 8) != '\0')) &&
                               (*(char *)(lVar5 + (ulong)uVar1 * 0x48 + 0xb) != '\0')) {
                              FUN_02c442ac();
                            }
                            lVar6 = lVar6 + -0x30;
                            puVar7 = puVar7 + 0xc;
                          } while (lVar6 != 0);
                          uVar4 = *(ulong *)(lVar3 + 0x5b0);
                        }
                        *(ulong *)(lVar3 + 0x5b0) = uVar4 & 0xfffffffffffffff0;
                        FUN_00d42690(lVar3,0,1);
                      }
                      local_60 = (undefined1 *)0xf672161083533659;
                      pcStack_58 = "LevelUpView";
                      local_50 = 0xb;
                      local_48 = (long *)0x0;
                      lVar3 = FUN_01470a94(*(undefined8 *)(param_1 + 0x4c8),&local_60);
                      if (lVar3 != 0) {
                        *(undefined1 *)(lVar3 + 0x5ac) = 1;
                        FUN_00d7331c(lVar3,1);
                        local_38 = 0;
                        local_60 = (undefined1 *)0x75e8a7ee10d4a80;
                        pcStack_58 = "PokedexView";
                        local_50 = 0xb;
                        local_48 = (long *)0x0;
                        lVar3 = FUN_01470c50(*(undefined8 *)(param_1 + 0x4c8),&local_60);
                        if (local_48 != (long *)0x0) {
                          (**(code **)(*local_48 + 0x20))();
                        }
                        if (lVar3 != 0) {
                          FUN_01480448(lVar3,&local_38);
                          FUN_01467230();
                          FUN_014673e0();
                          lVar3 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
                          if (lVar3 != 0) {
                            if (*(char *)(lVar3 + 0x26a0) == '\0') {
                              *(char *)(lVar3 + 0x26a0) = '\x01';
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


