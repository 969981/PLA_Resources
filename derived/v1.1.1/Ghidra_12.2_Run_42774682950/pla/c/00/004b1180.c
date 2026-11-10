/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004b1180; name: FUN_004b1180
 */


void FUN_004b1180(uint *param_1,uint *param_2,ulong param_3,undefined8 param_4,uint *param_5,
                 uint *param_6,uint *param_7,int param_8)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint local_68;
  uint local_64;
  
  uVar1 = *param_6;
  uVar3 = param_6[1];
  uVar9 = *param_7;
  uVar4 = param_7[1];
  uVar13 = *param_5;
  uVar11 = param_5[1];
  uVar7 = param_3 - 8;
  if (param_8 == 0) {
    if (0 < (long)uVar7) {
      puVar8 = param_2;
      uVar14 = uVar7;
      uVar12 = uVar13;
      uVar10 = uVar11;
      do {
        uVar13 = *param_1;
        local_68 = uVar13 ^ uVar9;
        uVar11 = param_1[1];
        param_1 = param_1 + 2;
        local_64 = uVar11 ^ uVar4;
        FUN_0047a3f0(&local_68,param_4,0);
        local_68 = uVar12 ^ uVar1 ^ local_68;
        *(char *)((long)puVar8 + 1) = (char)(local_68 >> 8);
        *(char *)((long)puVar8 + 2) = (char)(local_68 >> 0x10);
        *(char *)puVar8 = (char)local_68;
        *(char *)((long)puVar8 + 3) = (char)(local_68 >> 0x18);
        local_64 = uVar10 ^ uVar3 ^ local_64;
        param_2 = puVar8 + 2;
        *(char *)(puVar8 + 1) = (char)local_64;
        uVar14 = uVar14 - 8;
        *(char *)((long)puVar8 + 5) = (char)(local_64 >> 8);
        *(char *)((long)puVar8 + 6) = (char)(local_64 >> 0x10);
        *(char *)((long)puVar8 + 7) = (char)(local_64 >> 0x18);
        puVar8 = param_2;
        uVar12 = uVar13;
        uVar10 = uVar11;
      } while (0 < (long)uVar14);
      param_3 = uVar7 - (param_3 - 9 & 0xfffffffffffffff8);
    }
    if (param_3 != 0) {
      uVar12 = *param_1;
      local_68 = uVar12 ^ uVar9;
      uVar9 = param_1[1];
      local_64 = uVar9 ^ uVar4;
      FUN_0047a3f0(&local_68,param_4,0);
      if (param_3 - 1 < 8) {
        local_68 = uVar13 ^ uVar1 ^ local_68;
        local_64 = uVar11 ^ uVar3 ^ local_64;
        puVar5 = (undefined1 *)((long)param_2 + param_3);
        switch(param_3) {
        case 8:
          puVar5 = puVar5 + -1;
          *puVar5 = (char)(local_64 >> 0x18);
        case 7:
          puVar5 = puVar5 + -1;
          *puVar5 = (char)(local_64 >> 0x10);
        case 6:
          puVar5 = puVar5 + -1;
          *puVar5 = (char)(local_64 >> 8);
        case 5:
          puVar5 = puVar5 + -1;
          *puVar5 = (char)local_64;
        case 4:
          puVar5 = puVar5 + -1;
          *puVar5 = (char)(local_68 >> 0x18);
        case 3:
          puVar5 = puVar5 + -1;
          *puVar5 = (char)(local_68 >> 0x10);
        case 2:
          puVar5 = puVar5 + -1;
          *puVar5 = (char)(local_68 >> 8);
        case 1:
          puVar5[-1] = (char)local_68;
        }
      }
      goto LAB_004b1488;
    }
  }
  else {
    if (-1 < (long)uVar7) {
      uVar14 = uVar7;
      puVar8 = param_2;
      do {
        puVar2 = param_1 + 1;
        local_68 = uVar13 ^ uVar1 ^ *param_1;
        param_1 = param_1 + 2;
        local_64 = uVar11 ^ uVar3 ^ *puVar2;
        FUN_0047a3f0(&local_68,param_4,1);
        uVar13 = local_68 ^ uVar9;
        *puVar8 = uVar13;
        uVar11 = local_64 ^ uVar4;
        param_2 = puVar8 + 2;
        uVar14 = uVar14 - 8;
        puVar8[1] = uVar11;
        puVar8 = param_2;
      } while (-1 < (long)uVar14);
      param_3 = uVar7 & 7;
    }
    if (param_3 != 0) {
      local_68 = 0;
      if (param_3 - 1 < 7) {
        pbVar6 = (byte *)((long)param_1 + param_3);
        local_64 = 0;
        switch(param_3) {
        case 7:
          pbVar6 = pbVar6 + -1;
          local_68 = (uint)*pbVar6 << 0x10;
        case 6:
          pbVar6 = pbVar6 + -1;
          local_68 = local_68 | (uint)*pbVar6 << 8;
        case 5:
          pbVar6 = pbVar6 + -1;
          local_68 = local_68 | *pbVar6;
        case 4:
          local_64 = local_68;
          pbVar6 = pbVar6 + -1;
          local_68 = (uint)*pbVar6 << 0x18;
        case 3:
          pbVar6 = pbVar6 + -1;
          local_68 = local_68 | (uint)*pbVar6 << 0x10;
        case 2:
          pbVar6 = pbVar6 + -1;
          local_68 = local_68 | (uint)*pbVar6 << 8;
        case 1:
          local_68 = local_68 | pbVar6[-1];
        }
      }
      else {
        local_64 = 0;
      }
      local_68 = uVar13 ^ uVar1 ^ local_68;
      local_64 = uVar11 ^ uVar3 ^ local_64;
      FUN_0047a3f0(&local_68,param_4,1);
      *param_2 = local_68 ^ uVar9;
      param_2[1] = local_64 ^ uVar4;
      uVar12 = local_68 ^ uVar9;
      uVar9 = local_64 ^ uVar4;
      goto LAB_004b1488;
    }
  }
  uVar12 = uVar13;
  uVar9 = uVar11;
LAB_004b1488:
  *(char *)((long)param_5 + 1) = (char)(uVar12 >> 8);
  *(char *)((long)param_5 + 3) = (char)(uVar12 >> 0x18);
  *(char *)((long)param_5 + 5) = (char)(uVar9 >> 8);
  *(char *)((long)param_5 + 2) = (char)(uVar12 >> 0x10);
  *(char *)((long)param_5 + 6) = (char)(uVar9 >> 0x10);
  *(char *)param_5 = (char)uVar12;
  *(char *)(param_5 + 1) = (char)uVar9;
  *(char *)((long)param_5 + 7) = (char)(uVar9 >> 0x18);
  return;
}


