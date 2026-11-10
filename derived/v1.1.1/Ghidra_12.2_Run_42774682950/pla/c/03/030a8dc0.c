/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030a8dc0; name: FUN_030a8dc0
 */


void FUN_030a8dc0(ushort *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *local_410 [64];
  ushort *local_210 [64];
  
  if (param_2 < 2) {
    return;
  }
  local_410[0] = param_1 + (param_2 + -1);
  lVar3 = 0;
  local_210[0] = param_1;
LAB_030a8dec:
  lVar3 = (long)(int)lVar3;
LAB_030a8e00:
  do {
    puVar6 = local_410[0];
    do {
      local_410[0] = puVar6;
      uVar2 = param_1[(long)local_410[0] - (long)param_1 >> 2];
      puVar4 = param_1;
      puVar6 = local_410[0];
      do {
        while( true ) {
          do {
            puVar5 = puVar4;
            puVar4 = puVar5 + 1;
          } while (*puVar5 < uVar2);
          puVar7 = puVar6 + 1;
          do {
            puVar6 = puVar7;
            puVar7 = puVar6 + -1;
            uVar1 = *puVar7;
          } while (uVar2 < uVar1);
          if (puVar5 <= puVar7) break;
          puVar4 = puVar5;
          puVar6 = puVar7;
LAB_030a8e24:
          if (puVar6 < puVar4) goto LAB_030a8e74;
        }
        puVar6 = puVar6 + -2;
        if (puVar5 == puVar7) goto LAB_030a8e24;
        *puVar7 = *puVar5;
        *puVar5 = uVar1;
      } while (puVar4 <= puVar6);
LAB_030a8e74:
      if (puVar6 <= param_1) {
        param_1 = puVar4;
        if (puVar4 < local_410[0]) goto LAB_030a8e00;
        if ((int)lVar3 < 1) {
          return;
        }
        lVar3 = (long)(int)lVar3 + -1;
        param_1 = local_210[lVar3];
        local_410[0] = local_410[lVar3];
        goto LAB_030a8dec;
      }
    } while (local_410[0] <= puVar4);
    puVar5 = puVar6;
    puVar7 = param_1;
    if ((long)local_410[0] - (long)puVar4 <= (long)puVar6 - (long)param_1) {
      puVar5 = local_410[0];
      puVar7 = puVar4;
      local_410[0] = puVar6;
      puVar4 = param_1;
    }
    local_210[lVar3] = puVar4;
    local_410[lVar3] = local_410[0];
    param_1 = puVar7;
    local_410[0] = puVar5;
    lVar3 = lVar3 + 1;
  } while( true );
}


