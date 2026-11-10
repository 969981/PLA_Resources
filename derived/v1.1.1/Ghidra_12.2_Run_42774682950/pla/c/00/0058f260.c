/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058f260; name: FUN_0058f260
 */


undefined4 FUN_0058f260(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    if (param_3 != (undefined8 *)0x0) {
      pcVar3 = (char *)FUN_002ebd50(0x1c);
      *param_3 = pcVar3;
      uVar1 = s_crypter_counter_is_nullptr__038bfc79._0_8_;
      *(ulong *)(pcVar3 + 8) =
           CONCAT44(s_crypter_counter_is_nullptr__038bfc79._12_4_,
                    s_crypter_counter_is_nullptr__038bfc79._8_4_);
      *(undefined8 *)pcVar3 = uVar1;
      uVar1 = CONCAT44(s_crypter_counter_is_nullptr__038bfc79._16_4_,
                       s_crypter_counter_is_nullptr__038bfc79._12_4_);
      *(undefined8 *)(pcVar3 + 0x14) = s_crypter_counter_is_nullptr__038bfc79._20_8_;
      *(undefined8 *)(pcVar3 + 0xc) = uVar1;
      return 3;
    }
  }
  else {
    if (param_2 != 0) {
      if (*(long *)(param_1 + 8) == 0) {
        uVar7 = 0;
        uVar4 = 0;
      }
      else {
        lVar6 = *(long *)(param_1 + 0x10);
        uVar4 = 0;
        do {
          *(char *)(lVar6 + uVar4) = *(char *)(lVar6 + uVar4) + '\x01';
          lVar6 = *(long *)(param_1 + 0x10);
          if (*(char *)(lVar6 + uVar4) != '\0') {
            uVar7 = *(ulong *)(param_1 + 8);
            break;
          }
          uVar7 = *(ulong *)(param_1 + 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar7);
      }
      uVar5 = 9;
      if (uVar4 != uVar7) {
        uVar5 = 0;
      }
      *(bool *)param_2 = uVar4 == uVar7;
      return uVar5;
    }
    if (param_3 != (undefined8 *)0x0) {
      pcVar3 = (char *)FUN_002ebd50(0x18);
      uVar2 = s_is_overflow_is_nullptr__03926807._8_8_;
      uVar1 = s_is_overflow_is_nullptr__03926807._0_8_;
      *param_3 = pcVar3;
      *(undefined8 *)(pcVar3 + 8) = uVar2;
      *(undefined8 *)pcVar3 = uVar1;
      *(undefined8 *)(pcVar3 + 0x10) = s_is_overflow_is_nullptr__03926807._16_8_;
      return 3;
    }
  }
  return 3;
}


