/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c0048; name: FUN_011c0048
 */


void FUN_011c0048(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_30;
  undefined *puStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar3 = (ulong)*(byte *)(param_1 + 4);
  lVar1 = uVar3 * 0x150;
  local_20 = *(undefined8 *)(&DAT_041f6950 + lVar1);
  local_30 = *(undefined8 *)(&DAT_041f6940 + lVar1);
  puStack_28 = (&PTR_s_anime_L_waza_btn_00_mode_03_041f6948)[uVar3 * 0x2a];
  if (*(int *)((long)param_1 + 0x4c) == 0) {
    switch(param_2) {
    case 0:
      local_30 = *(undefined8 *)(&DAT_041f68f8 + lVar1);
      puStack_28 = (&PTR_s_anime_L_waza_btn_00_mode_00_041f6900)[uVar3 * 0x2a];
      uVar2 = *param_1;
      local_20 = *(undefined8 *)(&DAT_041f6908 + lVar1);
      break;
    case 1:
      local_30 = *(undefined8 *)(&DAT_041f6928 + lVar1);
      puStack_28 = (&PTR_s_anime_L_waza_btn_00_mode_02_041f6930)[uVar3 * 0x2a];
      uVar2 = *param_1;
      local_20 = *(undefined8 *)(&DAT_041f6938 + lVar1);
      break;
    case 2:
      local_30 = *(undefined8 *)(&DAT_041f6910 + lVar1);
      puStack_28 = (&PTR_s_anime_L_waza_btn_00_mode_01_041f6918)[uVar3 * 0x2a];
      uVar2 = *param_1;
      local_20 = *(undefined8 *)(&DAT_041f6920 + lVar1);
      break;
    case 3:
      goto switchD_011c0098_caseD_3;
    default:
      goto switchD_011c0098_default;
    }
  }
  else {
switchD_011c0098_caseD_3:
    uVar2 = *param_1;
  }
  uStack_18 = 0;
  FUN_0283b1e8(uVar2,&local_30);
switchD_011c0098_default:
  return;
}


