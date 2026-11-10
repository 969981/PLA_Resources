/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134d870; name: FUN_0134d870
 */


void FUN_0134d870(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 < 0xdb5db30a2a0c79e) {
    if (lVar1 == -0x35736863c5955a4a) {
      lVar1 = 1;
    }
    else if (lVar1 == -0x357180a555222cbf) {
      lVar1 = 6;
    }
    else {
      if (lVar1 != -0x8d8b3536e19f1e6) goto LAB_0134d990;
      lVar1 = 3;
    }
  }
  else if (lVar1 < 0x69bd05f408d24b53) {
    if (lVar1 == 0xdb5db30a2a0c79e) {
      lVar1 = 2;
    }
    else {
      if (lVar1 != 0x4c7eda11fa5fbc57) goto LAB_0134d990;
      lVar1 = 4;
    }
  }
  else if (lVar1 == 0x69bd05f408d24b53) {
    lVar1 = 5;
  }
  else {
    if (lVar1 != 0x7b58483884908095) goto LAB_0134d990;
    lVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = (&DAT_03a7b32c)[lVar1];
LAB_0134d990:
  FUN_0134d994();
  return;
}


