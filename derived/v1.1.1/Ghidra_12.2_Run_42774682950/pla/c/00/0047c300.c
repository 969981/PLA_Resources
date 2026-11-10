/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0047c300; name: FUN_0047c300
 */


void FUN_0047c300(uint *param_1,uint *param_2,ulong param_3,undefined8 param_4,uint *param_5,
                 int param_6)

{
  uint *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint local_58;
  uint local_54;
  
  uVar7 = *param_5;
  uVar9 = param_5[1];
  uVar10 = param_3 - 8;
  if (param_6 == 0) {
    if (-1 < (long)uVar10) {
      puVar4 = param_2;
      uVar5 = uVar10;
      uVar6 = uVar7;
      uVar8 = uVar9;
      do {
        uVar7 = *param_1;
        uVar9 = param_1[1];
        param_1 = param_1 + 2;
        local_58 = uVar7;
        local_54 = uVar9;
        FUN_0047a3f0(&local_58,param_4,0);
        local_58 = local_58 ^ uVar6;
        *(char *)((long)puVar4 + 1) = (char)(local_58 >> 8);
        *(char *)((long)puVar4 + 2) = (char)(local_58 >> 0x10);
        *(char *)puVar4 = (char)local_58;
        local_54 = local_54 ^ uVar8;
        *(char *)((long)puVar4 + 3) = (char)(local_58 >> 0x18);
        param_2 = puVar4 + 2;
        *(char *)(puVar4 + 1) = (char)local_54;
        *(char *)((long)puVar4 + 5) = (char)(local_54 >> 8);
        uVar5 = uVar5 - 8;
        *(char *)((long)puVar4 + 6) = (char)(local_54 >> 0x10);
        *(char *)((long)puVar4 + 7) = (char)(local_54 >> 0x18);
        puVar4 = param_2;
        uVar6 = uVar7;
        uVar8 = uVar9;
      } while (-1 < (long)uVar5);
      param_3 = uVar10 & 7;
    }
    if (param_3 != 0) {
      uVar6 = *param_1;
      uVar8 = param_1[1];
      local_58 = uVar6;
      local_54 = uVar8;
      FUN_0047a3f0(&local_58,param_4,0);
      if (param_3 - 1 < 7) {
        puVar2 = (undefined1 *)((long)param_2 + param_3);
        local_58 = local_58 ^ uVar7;
        local_54 = local_54 ^ uVar9;
        switch(param_3) {
        case 7:
          puVar2 = puVar2 + -1;
          *puVar2 = (char)(local_54 >> 0x10);
        case 6:
          puVar2 = puVar2 + -1;
          *puVar2 = (char)(local_54 >> 8);
        case 5:
          puVar2 = puVar2 + -1;
          *puVar2 = (char)local_54;
        case 4:
          puVar2 = puVar2 + -1;
          *puVar2 = (char)(local_58 >> 0x18);
        case 3:
          puVar2 = puVar2 + -1;
          *puVar2 = (char)(local_58 >> 0x10);
        case 2:
          puVar2 = puVar2 + -1;
          *puVar2 = (char)(local_58 >> 8);
        case 1:
          puVar2[-1] = (char)local_58;
        }
      }
      goto LAB_0047c54c;
    }
  }
  else {
    local_58 = uVar7;
    local_54 = uVar9;
    if (-1 < (long)uVar10) {
      puVar4 = param_2;
      uVar5 = uVar10;
      do {
        uVar7 = *param_1;
        puVar1 = param_1 + 1;
        param_1 = param_1 + 2;
        local_58 = uVar7 ^ local_58;
        local_54 = *puVar1 ^ local_54;
        FUN_0047a3f0(&local_58,param_4,1);
        *puVar4 = local_58;
        param_2 = puVar4 + 2;
        uVar5 = uVar5 - 8;
        puVar4[1] = local_54;
        puVar4 = param_2;
      } while (-1 < (long)uVar5);
      param_3 = uVar10 & 7;
    }
    uVar7 = local_58;
    uVar9 = local_54;
    if (param_3 != 0) {
      uVar7 = 0;
      if (param_3 - 1 < 7) {
        pbVar3 = (byte *)((long)param_1 + param_3);
        uVar9 = 0;
        switch(param_3) {
        case 7:
          pbVar3 = pbVar3 + -1;
          uVar7 = (uint)*pbVar3 << 0x10;
        case 6:
          pbVar3 = pbVar3 + -1;
          uVar7 = uVar7 | (uint)*pbVar3 << 8;
        case 5:
          pbVar3 = pbVar3 + -1;
          uVar7 = uVar7 | *pbVar3;
        case 4:
          uVar9 = uVar7;
          pbVar3 = pbVar3 + -1;
          uVar7 = (uint)*pbVar3 << 0x18;
        case 3:
          pbVar3 = pbVar3 + -1;
          uVar7 = uVar7 | (uint)*pbVar3 << 0x10;
        case 2:
          pbVar3 = pbVar3 + -1;
          uVar7 = uVar7 | (uint)*pbVar3 << 8;
        case 1:
          uVar7 = uVar7 | pbVar3[-1];
        }
      }
      else {
        uVar9 = 0;
      }
      local_58 = uVar7 ^ local_58;
      local_54 = uVar9 ^ local_54;
      FUN_0047a3f0(&local_58,param_4,1);
      *param_2 = local_58;
      param_2[1] = local_54;
      uVar6 = local_58;
      uVar8 = local_54;
      goto LAB_0047c54c;
    }
  }
  uVar6 = uVar7;
  uVar8 = uVar9;
LAB_0047c54c:
  *(char *)((long)param_5 + 1) = (char)(uVar6 >> 8);
  *(char *)((long)param_5 + 3) = (char)(uVar6 >> 0x18);
  *(char *)((long)param_5 + 5) = (char)(uVar8 >> 8);
  *(char *)((long)param_5 + 2) = (char)(uVar6 >> 0x10);
  *(char *)((long)param_5 + 6) = (char)(uVar8 >> 0x10);
  *(char *)param_5 = (char)uVar6;
  *(char *)(param_5 + 1) = (char)uVar8;
  *(char *)((long)param_5 + 7) = (char)(uVar8 >> 0x18);
  return;
}


