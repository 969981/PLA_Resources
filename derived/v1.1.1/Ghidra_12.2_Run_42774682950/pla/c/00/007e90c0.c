/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e90c0; name: FUN_007e90c0
 */


void FUN_007e90c0(undefined2 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined2 uVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  undefined1 uVar7;
  undefined4 local_2c;
  undefined8 local_28;
  
  memset(param_1,0xff,0x448);
  *param_1 = 0x1e;
  *(undefined1 *)((long)param_1 + 3) = 1;
  uVar3 = FUN_007eb290();
  *(undefined4 *)(param_1 + 4) = 0xa1bc140b;
  *(undefined4 *)(param_1 + 0xe) = 0x1c00ff;
  param_1[2] = uVar3;
  param_1[0x12] = 0x301;
  *(undefined8 *)(param_1 + 8) = 0xb040000061002ff;
  *(undefined1 *)(param_1 + 0x13) = 4;
  local_28 = nn::oe::GetDesiredLanguage();
  local_2c = 0;
  uVar4 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
  uVar7 = 0;
  if ((uVar4 & 1) == 0) {
    local_2c = 1;
    uVar4 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
    uVar7 = 1;
    if ((uVar4 & 1) == 0) {
      uVar7 = 2;
      local_2c = 2;
      uVar4 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
      if ((uVar4 & 1) == 0) {
        uVar7 = 3;
        local_2c = 3;
        uVar4 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
        if ((uVar4 & 1) == 0) {
          uVar7 = 4;
          local_2c = 4;
          uVar4 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
          if ((uVar4 & 1) == 0) {
            uVar7 = 5;
            local_2c = 5;
            uVar4 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
            if ((uVar4 & 1) == 0) {
              uVar7 = 6;
              local_2c = 6;
              uVar4 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
              if ((uVar4 & 1) == 0) {
                uVar7 = 7;
                local_2c = 7;
                uVar4 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
                if ((uVar4 & 1) == 0) {
                  uVar7 = 8;
                  local_2c = 8;
                  uVar4 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
                  if ((uVar4 & 1) == 0) {
                    uVar7 = 9;
                    local_2c = 9;
                    uVar4 = nn::settings::operator==
                                      ((Language *)&local_2c,(LanguageCode *)&local_28);
                    if ((uVar4 & 1) == 0) {
                      uVar7 = 10;
                      local_2c = 10;
                      uVar4 = nn::settings::operator==
                                        ((Language *)&local_2c,(LanguageCode *)&local_28);
                      if ((uVar4 & 1) == 0) {
                        uVar7 = 0xb;
                        local_2c = 0xb;
                        uVar4 = nn::settings::operator==
                                          ((Language *)&local_2c,(LanguageCode *)&local_28);
                        if ((uVar4 & 1) == 0) {
                          uVar7 = 0xc;
                          local_2c = 0xc;
                          uVar4 = nn::settings::operator==
                                            ((Language *)&local_2c,(LanguageCode *)&local_28);
                          if ((uVar4 & 1) == 0) {
                            uVar7 = 0xd;
                            local_2c = 0xd;
                            uVar4 = nn::settings::operator==
                                              ((Language *)&local_2c,(LanguageCode *)&local_28);
                            if ((uVar4 & 1) == 0) {
                              uVar7 = 0xe;
                              local_2c = 0xe;
                              uVar4 = nn::settings::operator==
                                                ((Language *)&local_2c,(LanguageCode *)&local_28);
                              if ((uVar4 & 1) == 0) {
                                local_2c = 0xf;
                                uVar4 = nn::settings::operator==
                                                  ((Language *)&local_2c,(LanguageCode *)&local_28);
                                uVar7 = 0xf;
                                if ((uVar4 & 1) == 0) {
                                  uVar7 = 0;
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
    }
  }
  *(undefined1 *)((long)param_1 + 0x9b) = uVar7;
  puVar1 = PTR_DAT_043774d0;
  cVar5 = *PTR_DAT_043774d0;
  if (cVar5 != '\0') {
    lVar2 = 0;
    do {
      lVar6 = lVar2;
      *(char *)((long)param_1 + lVar6 + 0x27) = cVar5;
      if (lVar6 == 0x12) break;
      cVar5 = puVar1[lVar6 + 1];
      lVar2 = lVar6 + 1;
    } while (cVar5 != '\0');
    *(undefined1 *)((long)param_1 + lVar6 + 0x28) = 0;
  }
  return;
}


