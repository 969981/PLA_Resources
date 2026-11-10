/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c00fc; name: FUN_011c00fc
 */


void FUN_011c00fc(undefined8 *param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 auStack_50 [4];
  undefined8 local_30 [4];
  
  uVar7 = (ulong)*(byte *)(param_1 + 4);
  uVar6 = *param_1;
  bVar5 = *(int *)((long)param_1 + 0x4c) == 0;
  ppuVar1 = &PTR_s_anime_L_waza_btn_00_mode_03_041f6948 + uVar7 * 0x2a;
  puVar3 = (undefined8 *)(&DAT_041f6940 + uVar7 * 0x150);
  puVar4 = auStack_50;
  if (bVar5) {
    ppuVar1 = &PTR_s_anime_L_waza_btn_00_mode_00_041f6900 + uVar7 * 0x2a;
    puVar3 = (undefined8 *)(&DAT_041f68f8 + uVar7 * 0x150);
    puVar4 = local_30;
  }
  puVar8 = *ppuVar1;
  puVar2 = (undefined8 *)(&DAT_041f6950 + uVar7 * 0x150);
  if (bVar5) {
    puVar2 = (undefined8 *)(&DAT_041f6908 + uVar7 * 0x150);
  }
  *puVar4 = *puVar3;
  puVar4[1] = puVar8;
  puVar4[2] = *puVar2;
  puVar4[3] = 0;
  FUN_0283b1e8(uVar6);
  return;
}


