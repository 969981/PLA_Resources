/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083f704; name: FUN_0083f704
 */


undefined8 FUN_0083f704(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_a8 [16];
  undefined4 local_98 [4];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  puVar1 = PTR_DAT_04377550;
  if (*(uint *)(*(long *)PTR_DAT_04377550 + 0x118) < 5 &&
      *(uint *)(*(long *)PTR_DAT_04377550 + 0x118) != 2) {
    uVar2 = FUN_0082a280();
    if ((uVar2 & 1) != 0) {
      return 5;
    }
    (**(code **)(**(long **)(*(long *)puVar1 + 0x18) + 0xf8))(local_38);
    if (local_38[0] == 0) {
      FUN_00854f28(local_48,*(undefined8 *)PTR_DAT_043773c0);
      lVar6 = *(long *)puVar1;
      if (local_48[0] == 0) {
        iVar4 = *(int *)(*(long *)(lVar6 + 0x10) + 0x784);
        if (iVar4 == 0) {
          return 5;
        }
        if (iVar4 == 4) {
          local_98[0] = 0x8c6e;
          local_28[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_98 | 4),(Result *)local_28);
          FUN_007ee578(auStack_88,local_98);
          puVar3 = auStack_88;
          iVar4 = 4;
        }
        else {
          local_98[0] = 0x8c52;
          local_28[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_98 | 4),(Result *)local_28);
          FUN_007ee578(auStack_a8,local_98);
          puVar3 = auStack_a8;
        }
        FUN_0082a7d4(lVar6,puVar3,iVar4);
        FUN_0082a278(*(undefined8 *)puVar1,2);
      }
      else {
        FUN_0082a278(lVar6,3);
        uVar5 = *(undefined8 *)puVar1;
        FUN_007ee578(auStack_78,local_48);
        FUN_0082a7d4(uVar5,auStack_78,5);
      }
    }
    else {
      local_48[0] = 0xc406;
      local_98[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_98);
      if (local_38[0] != local_48[0]) {
        local_48[0] = 0xa469;
        local_98[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_98);
        if (local_38[0] != local_48[0]) {
          local_48[0] = 0xc47f;
          local_98[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_98);
          if (local_38[0] != local_48[0]) {
            local_48[0] = 0xc480;
            local_98[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_98);
            if (local_38[0] != local_48[0]) {
              local_48[0] = 0xc482;
              local_98[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_98);
              if (local_38[0] != local_48[0]) {
                local_48[0] = 0xc481;
                local_98[0] = 0;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_98);
                if (local_38[0] != local_48[0]) {
                  local_48[0] = 0xc420;
                  local_98[0] = 0;
                  nn::err::ErrorResultVariant::ErrorResultVariant
                            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_98);
                  if (local_38[0] != local_48[0]) {
                    local_48[0] = 0xc421;
                    local_98[0] = 0;
                    nn::err::ErrorResultVariant::ErrorResultVariant
                              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_98);
                    if (local_38[0] != local_48[0]) {
                      local_48[0] = 0xec73;
                      local_98[0] = 0;
                      nn::err::ErrorResultVariant::ErrorResultVariant
                                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_98);
                      if (local_38[0] != local_48[0]) {
                        local_48[0] = 0xa484;
                        local_98[0] = 0;
                        nn::err::ErrorResultVariant::ErrorResultVariant
                                  ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_98);
                        if (local_38[0] != local_48[0]) {
                          local_48[0] = 0xac56;
                          local_98[0] = 0;
                          nn::err::ErrorResultVariant::ErrorResultVariant
                                    ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_98)
                          ;
                          if (local_38[0] != local_48[0]) {
                            local_48[0] = 0x6488;
                            local_98[0] = 0;
                            nn::err::ErrorResultVariant::ErrorResultVariant
                                      ((ErrorResultVariant *)((ulong)local_48 | 4),
                                       (Result *)local_98);
                            if (local_38[0] != local_48[0]) {
                              local_48[0] = 0xa466;
                              local_98[0] = 0;
                              nn::err::ErrorResultVariant::ErrorResultVariant
                                        ((ErrorResultVariant *)((ulong)local_48 | 4),
                                         (Result *)local_98);
                              if (local_38[0] != local_48[0]) {
                                local_48[0] = 0x8c6e;
                                local_98[0] = 0;
                                nn::err::ErrorResultVariant::ErrorResultVariant
                                          ((ErrorResultVariant *)((ulong)local_48 | 4),
                                           (Result *)local_98);
                                if (local_38[0] == local_48[0]) {
                                  FUN_0082a278(*(undefined8 *)puVar1,2);
                                  uVar5 = *(undefined8 *)puVar1;
                                  local_48[0] = 0x8c6e;
                                  local_98[0] = 0;
                                  nn::err::ErrorResultVariant::ErrorResultVariant
                                            ((ErrorResultVariant *)((ulong)local_48 | 4),
                                             (Result *)local_98);
                                  FUN_007ee578(auStack_58,local_48);
                                  FUN_0082a7d4(uVar5,auStack_58,4);
                                  return 1;
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
      }
      FUN_0082a278(*(undefined8 *)puVar1,3);
      uVar5 = *(undefined8 *)puVar1;
      FUN_007ee578(auStack_68,local_38);
      FUN_0082a7d4(uVar5,auStack_68,5);
    }
  }
  return 1;
}


