/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ce0f8; name: FUN_013ce0f8
 */


void FUN_013ce0f8(long param_1,uint param_2)

{
  if ((~param_2 & 1) == 1) {
    FUN_00d2ded4(param_1 + 0x180,"anime_L_icon_offline_00_swtich_off");
    return;
  }
  if ((~param_2 & 1) == 0) {
    FUN_00d2ded4(param_1 + 0x180,"anime_L_icon_offline_00_swtich_on");
    return;
  }
  return;
}


