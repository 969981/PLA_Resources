/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ab680; name: FUN_004ab680
 */


void FUN_004ab680(undefined8 *param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_28;
  
  memcpy(param_1,&DAT_03a1d2b0,0x1048);
  if (0x47 < param_2) {
    param_2 = 0x48;
  }
  puVar1 = param_3 + param_2;
  uVar5 = 0x243f6a88;
  lVar8 = 0;
  puVar6 = param_3;
  while( true ) {
    puVar2 = puVar6 + 1;
    if (puVar1 <= puVar6 + 1) {
      puVar2 = param_3;
    }
    puVar3 = puVar2 + 1;
    if (puVar1 <= puVar2 + 1) {
      puVar3 = param_3;
    }
    puVar4 = puVar3 + 1;
    if (puVar1 <= puVar3 + 1) {
      puVar4 = param_3;
    }
    *(uint *)((long)param_1 + lVar8) =
         CONCAT31(CONCAT21(CONCAT11(*puVar6,*puVar2),*puVar3),*puVar4) ^ uVar5;
    if (lVar8 == 0x44) break;
    uVar5 = *(uint *)((long)param_1 + lVar8 + 4);
    puVar6 = puVar4 + 1;
    if (puVar1 <= puVar4 + 1) {
      puVar6 = param_3;
    }
    lVar8 = lVar8 + 4;
  }
  local_28 = 0;
  FUN_004aa7f0(&local_28,param_1);
  *param_1 = local_28;
  FUN_004aa7f0(&local_28,param_1);
  param_1[1] = local_28;
  FUN_004aa7f0(&local_28,param_1);
  param_1[2] = local_28;
  FUN_004aa7f0(&local_28,param_1);
  param_1[3] = local_28;
  FUN_004aa7f0(&local_28,param_1);
  param_1[4] = local_28;
  FUN_004aa7f0(&local_28,param_1);
  param_1[5] = local_28;
  FUN_004aa7f0(&local_28,param_1);
  param_1[6] = local_28;
  FUN_004aa7f0(&local_28,param_1);
  param_1[7] = local_28;
  FUN_004aa7f0(&local_28,param_1);
  uVar7 = 0;
  lVar8 = 0x48;
  param_1[8] = local_28;
  do {
    FUN_004aa7f0(&local_28,param_1);
    uVar7 = uVar7 + 2;
    *(undefined8 *)((long)param_1 + lVar8) = local_28;
    lVar8 = lVar8 + 8;
  } while (uVar7 < 0x400);
  return;
}


