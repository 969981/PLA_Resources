/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309d7f0; name: FUN_0309d7f0
 */


void FUN_0309d7f0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *local_420 [64];
  undefined8 *local_220 [64];
  undefined8 local_20;
  undefined4 local_18;
  
  if (param_2 < 2) {
    return;
  }
  local_420[0] = (undefined8 *)((long)param_1 + (long)(param_2 + -1) * 0xc);
  lVar3 = 0;
  local_220[0] = param_1;
LAB_0309d828:
  lVar3 = (long)(int)lVar3;
LAB_0309d83c:
  do {
    puVar5 = local_420[0];
    do {
      local_420[0] = puVar5;
      uVar2 = *(uint *)((long)param_1 +
                       (((long)local_420[0] - (long)param_1 >> 2) * -0x5555555555555555 >> 1) * 0xc
                       + 8);
      puVar5 = local_420[0];
      puVar6 = param_1;
      do {
        while( true ) {
          puVar1 = (undefined8 *)((long)puVar6 - 0xc);
          do {
            puVar7 = puVar1;
            puVar1 = (undefined8 *)((long)puVar7 + 0xc);
          } while (uVar2 < *(uint *)((long)puVar7 + 0x14));
          puVar6 = puVar7 + 3;
          do {
            puVar4 = puVar5;
            puVar5 = (undefined8 *)((long)puVar4 + -0xc);
          } while (*(uint *)(puVar4 + 1) < uVar2);
          if (puVar1 <= puVar4) break;
          puVar5 = puVar4;
          puVar6 = puVar1;
LAB_0309d86c:
          if (puVar5 < puVar6) goto LAB_0309d8ec;
        }
        if (puVar7 == puVar5) goto LAB_0309d86c;
        local_20 = *puVar4;
        local_18 = *(undefined4 *)(puVar4 + 1);
        uVar8 = *puVar1;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)((long)puVar7 + 0x14);
        *puVar4 = uVar8;
        *(undefined4 *)((long)puVar7 + 0x14) = local_18;
        *puVar1 = local_20;
      } while (puVar6 <= puVar5);
LAB_0309d8ec:
      if (puVar5 <= param_1) {
        param_1 = puVar6;
        if (puVar6 < local_420[0]) goto LAB_0309d83c;
        if ((int)lVar3 < 1) {
          return;
        }
        lVar3 = (long)(int)lVar3 + -1;
        param_1 = local_220[lVar3];
        local_420[0] = local_420[lVar3];
        goto LAB_0309d828;
      }
    } while (local_420[0] <= puVar6);
    puVar1 = puVar5;
    puVar7 = param_1;
    if (((long)local_420[0] - (long)puVar6 >> 2) * -0x5555555555555555 <=
        ((long)puVar5 - (long)param_1 >> 2) * -0x5555555555555555) {
      puVar1 = local_420[0];
      puVar7 = puVar6;
      local_420[0] = puVar5;
      puVar6 = param_1;
    }
    local_220[lVar3] = puVar6;
    local_420[lVar3] = local_420[0];
    param_1 = puVar7;
    local_420[0] = puVar1;
    lVar3 = lVar3 + 1;
  } while( true );
}


