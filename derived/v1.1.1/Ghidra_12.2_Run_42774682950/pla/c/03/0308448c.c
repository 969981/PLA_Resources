/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0308448c; name: FUN_0308448c
 */


void FUN_0308448c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                 long param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  long local_470;
  uint *local_468 [64];
  uint *local_268 [65];
  
  iVar1 = *(int *)(param_9 + 0x34);
  if (iVar1 != 0) {
    lVar5 = nn::os::GetSystemTick();
    local_470 = -lVar5;
  }
  lVar5 = DAT_0442d3b0;
  param_8[1] = 0xff7fffeeff7fffee;
  *param_8 = 0xff7fffeeff7fffee;
  param_8[3] = 0x7f7fffee7f7fffee;
  param_8[2] = 0x7f7fffee7f7fffee;
  (**(code **)(lVar5 + (ulong)*(byte *)(param_4 + 0x18) * 0x200 + 0xe0))
            (param_4,param_1,param_2,param_3,param_6,param_5,param_7,param_8);
  if (iVar1 != 0) {
    lVar5 = nn::os::GetSystemTick();
    *(long *)(param_9 + 8) = lVar5 + local_470 + *(long *)(param_9 + 8);
    *(int *)(param_9 + 0x10) = *(int *)(param_9 + 0x10) + 1;
  }
  iVar1 = *(int *)(param_7 + 1);
  *(int *)(param_9 + 0x30) = *(int *)(param_9 + 0x30) + iVar1;
  if (iVar1 < 2) {
    return;
  }
  local_268[0] = (uint *)*param_7;
  local_468[0] = local_268[0] + (iVar1 + -1);
  lVar5 = 0;
LAB_03084588:
  puVar4 = local_268[0];
  lVar5 = (long)(int)lVar5;
  do {
    puVar6 = local_468[0];
    puVar7 = puVar4;
    while( true ) {
      uVar2 = puVar7[(long)puVar6 - (long)puVar7 >> 3];
      local_468[0] = puVar6;
      puVar8 = puVar7;
      do {
        puVar4 = puVar8 + 1;
        uVar9 = *puVar8;
        if (uVar9 < uVar2) {
          do {
            puVar8 = puVar4;
            puVar4 = puVar8 + 1;
            uVar9 = *puVar8;
          } while (uVar9 < uVar2);
        }
        puVar10 = local_468[0] + -1;
        uVar3 = *local_468[0];
        if (uVar2 < uVar3) {
          do {
            local_468[0] = puVar10;
            puVar10 = local_468[0] + -1;
            uVar3 = *local_468[0];
          } while (uVar2 < uVar3);
        }
        if (puVar8 <= local_468[0]) {
          if (local_468[0] != puVar8) {
            *local_468[0] = uVar9;
            *puVar8 = uVar3;
          }
          local_468[0] = puVar10;
          puVar8 = puVar4;
        }
      } while (puVar8 <= local_468[0]);
      if (puVar7 < local_468[0]) break;
      puVar7 = puVar8;
      if (puVar6 <= puVar8) {
        if ((int)lVar5 < 1) {
          return;
        }
        lVar5 = (long)(int)lVar5 + -1;
        local_268[0] = local_268[lVar5];
        local_468[0] = local_468[lVar5];
        goto LAB_03084588;
      }
    }
    puVar4 = puVar7;
    if (puVar8 < puVar6) {
      puVar10 = local_468[0];
      if ((long)puVar6 - (long)puVar8 <= (long)local_468[0] - (long)puVar7) {
        puVar4 = puVar8;
        puVar10 = puVar6;
        puVar6 = local_468[0];
        puVar8 = puVar7;
      }
      local_268[lVar5] = puVar8;
      local_468[lVar5] = puVar6;
      lVar5 = lVar5 + 1;
      local_468[0] = puVar10;
    }
  } while( true );
}


