/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009326d0; name: FUN_009326d0
 */


void FUN_009326d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int local_7c;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar1 = param_3 + 4;
LAB_00932704:
  puVar7 = param_2 + -1;
  puVar8 = param_1;
LAB_00932710:
  while( true ) {
    param_1 = puVar8;
    lVar6 = (long)param_2 - (long)param_1;
    uVar4 = lVar6 >> 3;
    switch(uVar4) {
    case 0:
    case 1:
      return;
    case 2:
      uStack_68 = *puVar7;
      local_70 = *param_1;
      uVar4 = (*(code *)*param_3)(puVar1,&uStack_68,&local_70);
      if ((uVar4 & 1) == 0) {
        return;
      }
      uVar5 = *param_1;
      *param_1 = *puVar7;
      *puVar7 = uVar5;
      return;
    case 3:
      FUN_00932b70(param_1,param_1 + 1,puVar7,param_3);
      return;
    case 4:
      FUN_00932cc0(param_1,param_1 + 1,param_1 + 2,puVar7,param_3);
      return;
    case 5:
      FUN_00932de0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar7,param_3);
      return;
    }
    if (lVar6 < 0xf8) {
      FUN_00932f40(param_1,param_2,param_3);
      return;
    }
    uVar3 = uVar4;
    if ((long)uVar4 < 0) {
      uVar3 = uVar4 + 1;
    }
    puVar8 = (undefined8 *)((long)param_1 + (uVar3 & 0x3ffffffffffffffe) * 4);
    if (lVar6 < 0x1f39) {
      local_7c = FUN_00932b70(param_1,puVar8,puVar7,param_3);
    }
    else {
      uVar3 = uVar4 + 3;
      if (-1 < (long)uVar4) {
        uVar3 = uVar4;
      }
      lVar6 = (uVar3 & 0x7ffffffffffffffc) * 2;
      local_7c = FUN_00932de0(param_1,(long)param_1 + lVar6,puVar8,(long)puVar8 + lVar6,puVar7,
                              param_3);
    }
    uStack_68 = *param_1;
    local_70 = *puVar8;
    uVar4 = (*(code *)*param_3)(puVar1,&uStack_68,&local_70);
    if ((uVar4 & 1) != 0) break;
    puVar10 = param_2 + -2;
    while (puVar9 = puVar10, param_1 != puVar9) {
      uStack_68 = *puVar9;
      local_70 = *puVar8;
      uVar4 = (*(code *)*param_3)(puVar1,&uStack_68,&local_70);
      puVar10 = puVar9 + -1;
      if ((uVar4 & 1) != 0) goto code_r0x00932958;
    }
    puVar10 = param_1 + 1;
    uStack_68 = *param_1;
    local_70 = *puVar7;
    uVar4 = (*(code *)*param_3)(puVar1,&uStack_68,&local_70);
    if ((uVar4 & 1) == 0) {
      if (puVar10 == puVar7) {
        return;
      }
      puVar10 = param_1 + 2;
      while( true ) {
        uStack_68 = *param_1;
        local_70 = puVar10[-1];
        uVar4 = (*(code *)*param_3)(puVar1,&uStack_68,&local_70);
        if ((uVar4 & 1) != 0) break;
        puVar10 = puVar10 + 1;
        if (param_2 == puVar10) {
          return;
        }
      }
      uVar5 = puVar10[-1];
      puVar10[-1] = *puVar7;
      *puVar7 = uVar5;
    }
    if (puVar10 == puVar7) {
      return;
    }
    puVar9 = puVar7;
    while( true ) {
      puVar8 = puVar10 + -1;
      do {
        puVar10 = puVar8;
        uStack_68 = *param_1;
        puVar8 = puVar10 + 1;
        local_70 = *puVar8;
        uVar4 = (*(code *)*param_3)(puVar1,&uStack_68,&local_70);
      } while ((uVar4 & 1) == 0);
      puVar10 = puVar10 + 2;
      do {
        uStack_68 = *param_1;
        puVar9 = puVar9 + -1;
        local_70 = *puVar9;
        uVar4 = (*(code *)*param_3)(puVar1,&uStack_68,&local_70);
      } while ((uVar4 & 1) != 0);
      if (puVar9 <= puVar8) break;
      uVar5 = *puVar8;
      *puVar8 = *puVar9;
      *puVar9 = uVar5;
    }
  }
  puVar9 = puVar7;
  goto LAB_00932890;
code_r0x00932958:
  uVar5 = *param_1;
  *param_1 = *puVar9;
  *puVar9 = uVar5;
  local_7c = local_7c + 1;
LAB_00932890:
  local_78 = param_1 + 1;
  if (local_78 < puVar9) {
    while( true ) {
      local_78 = local_78 + -1;
      do {
        puVar10 = local_78;
        local_78 = puVar10 + 1;
        uStack_68 = *local_78;
        local_70 = *puVar8;
        uVar4 = (*(code *)*param_3)(puVar1,&uStack_68,&local_70);
      } while ((uVar4 & 1) != 0);
      do {
        puVar9 = puVar9 + -1;
        uStack_68 = *puVar9;
        local_70 = *puVar8;
        uVar4 = (*(code *)*param_3)(puVar1,&uStack_68,&local_70);
      } while ((uVar4 & 1) == 0);
      if (puVar9 < local_78) break;
      uVar5 = *local_78;
      puVar2 = puVar9;
      if (puVar8 != local_78) {
        puVar2 = puVar8;
      }
      *local_78 = *puVar9;
      *puVar9 = uVar5;
      local_7c = local_7c + 1;
      puVar8 = puVar2;
      local_78 = puVar10 + 2;
    }
  }
  if (local_78 != puVar8) {
    uStack_68 = *puVar8;
    local_70 = *local_78;
    uVar4 = (*(code *)*param_3)(puVar1,&uStack_68,&local_70);
    if ((uVar4 & 1) != 0) {
      uVar5 = *local_78;
      *local_78 = *puVar8;
      *puVar8 = uVar5;
      local_7c = local_7c + 1;
    }
  }
  if (local_7c == 0) {
    uVar4 = FUN_00933050(param_1,local_78,param_3);
    uVar3 = FUN_00933050(local_78 + 1,param_2,param_3);
    if ((uVar3 & 1) != 0) goto LAB_00932b58;
    puVar8 = local_78 + 1;
    if ((uVar4 & 1) != 0) goto LAB_00932710;
  }
  if ((long)param_2 - (long)local_78 <= (long)local_78 - (long)param_1) {
    FUN_009326d0(local_78 + 1,param_2,param_3);
    param_2 = local_78;
    goto LAB_00932704;
  }
  FUN_009326d0(param_1,local_78,param_3);
  puVar8 = local_78 + 1;
  goto LAB_00932710;
LAB_00932b58:
  param_2 = local_78;
  if ((uVar4 & 1) != 0) {
    return;
  }
  goto LAB_00932704;
}


