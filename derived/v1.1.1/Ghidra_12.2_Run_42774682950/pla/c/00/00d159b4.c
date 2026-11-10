/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d159b4; name: FUN_00d159b4
 */


void FUN_00d159b4(undefined8 *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  Language *pLVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38 [2];
  undefined8 local_28;
  
  pLVar3 = (Language *)&local_70;
  FUN_00d15b94();
  *param_1 = &PTR_LAB_041ea040;
  param_1[9] = &PTR_LAB_041ea070;
  local_48 = DAT_03a78198;
  uStack_40 = DAT_03a781a0;
  local_38[0] = DAT_03a781a8;
  local_50 = DAT_03a78190;
  local_70 = DAT_03a78170;
  uStack_68 = DAT_03a78178;
  local_60 = DAT_03a78180;
  uStack_58 = DAT_03a78188;
  local_28 = nn::oe::GetDesiredLanguage();
  uVar2 = nn::settings::operator==((LanguageCode *)&local_28,(Language *)&local_70);
  if ((uVar2 & 1) == 0) {
    pLVar3 = (Language *)((ulong)&local_70 | 4);
    uVar2 = nn::settings::operator==((LanguageCode *)&local_28,pLVar3);
    if ((uVar2 & 1) == 0) {
      pLVar3 = (Language *)&uStack_68;
      uVar2 = nn::settings::operator==((LanguageCode *)&local_28,pLVar3);
      if ((uVar2 & 1) == 0) {
        pLVar3 = (Language *)((long)&uStack_68 + 4);
        uVar2 = nn::settings::operator==((LanguageCode *)&local_28,pLVar3);
        if ((uVar2 & 1) == 0) {
          pLVar3 = (Language *)&local_60;
          uVar2 = nn::settings::operator==((LanguageCode *)&local_28,pLVar3);
          if ((uVar2 & 1) == 0) {
            pLVar3 = (Language *)((long)&local_60 + 4);
            uVar2 = nn::settings::operator==((LanguageCode *)&local_28,pLVar3);
            if ((uVar2 & 1) == 0) {
              pLVar3 = (Language *)&uStack_58;
              uVar2 = nn::settings::operator==((LanguageCode *)&local_28,pLVar3);
              if ((uVar2 & 1) == 0) {
                pLVar3 = (Language *)((long)&uStack_58 + 4);
                uVar2 = nn::settings::operator==((LanguageCode *)&local_28,pLVar3);
                if ((uVar2 & 1) == 0) {
                  pLVar3 = (Language *)&local_50;
                  uVar2 = nn::settings::operator==((LanguageCode *)&local_28,pLVar3);
                  if ((uVar2 & 1) == 0) {
                    pLVar3 = (Language *)((long)&local_50 + 4);
                    uVar2 = nn::settings::operator==((LanguageCode *)&local_28,pLVar3);
                    if ((uVar2 & 1) == 0) {
                      pLVar3 = (Language *)&local_48;
                      uVar2 = nn::settings::operator==((LanguageCode *)&local_28,pLVar3);
                      if ((uVar2 & 1) == 0) {
                        pLVar3 = (Language *)((long)&local_48 + 4);
                        uVar2 = nn::settings::operator==((LanguageCode *)&local_28,pLVar3);
                        if ((uVar2 & 1) == 0) {
                          pLVar3 = (Language *)&uStack_40;
                          uVar2 = nn::settings::operator==((LanguageCode *)&local_28,pLVar3);
                          if ((uVar2 & 1) == 0) {
                            pLVar3 = (Language *)((long)&uStack_40 + 4);
                            uVar2 = nn::settings::operator==((LanguageCode *)&local_28,pLVar3);
                            if ((uVar2 & 1) == 0) {
                              pLVar3 = (Language *)local_38;
                              uVar2 = nn::settings::operator==((LanguageCode *)&local_28,pLVar3);
                              if ((uVar2 & 1) == 0) {
                                uVar1 = 0;
                                goto LAB_00d15a34;
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
  uVar1 = *(undefined4 *)pLVar3;
LAB_00d15a34:
  uVar1 = FUN_00d15cc8(uVar1);
  FUN_00d156e0(param_1,uVar1);
  return;
}


