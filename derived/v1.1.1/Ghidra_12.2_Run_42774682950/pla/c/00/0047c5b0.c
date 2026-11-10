/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0047c5b0; name: FUN_0047c5b0
 */


void FUN_0047c5b0(uint *param_1,undefined1 *param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint *param_7,int param_8)

{
  uint *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint local_68;
  uint uStack_64;
  
  uVar8 = *param_7;
  uVar6 = param_7[1];
  uVar9 = param_3 - 8;
  if (param_8 == 0) {
    if (-1 < (long)uVar9) {
      puVar1 = param_1;
      puVar3 = param_2;
      uVar4 = uVar9;
      uVar7 = uVar8;
      uVar5 = uVar6;
      do {
        param_1 = puVar1 + 2;
        uVar8 = *puVar1;
        uVar6 = puVar1[1];
        local_68 = uVar8;
        uStack_64 = uVar6;
        FUN_0047c1f0(&local_68,param_4,param_5,param_6);
        local_68 = local_68 ^ uVar7;
        *puVar3 = (char)local_68;
        uStack_64 = uStack_64 ^ uVar5;
        puVar3[3] = (char)(local_68 >> 0x18);
        puVar3[1] = (char)(local_68 >> 8);
        param_2 = puVar3 + 8;
        puVar3[2] = (char)(local_68 >> 0x10);
        puVar3[4] = (char)uStack_64;
        puVar3[5] = (char)(uStack_64 >> 8);
        uVar4 = uVar4 - 8;
        puVar3[6] = (char)(uStack_64 >> 0x10);
        puVar3[7] = (char)(uStack_64 >> 0x18);
        puVar1 = param_1;
        puVar3 = param_2;
        uVar7 = uVar8;
        uVar5 = uVar6;
      } while (-1 < (long)uVar4);
      param_3 = uVar9 & 7;
    }
    if (param_3 != 0) {
      uVar7 = *param_1;
      uVar5 = param_1[1];
      local_68 = uVar7;
      uStack_64 = uVar5;
      FUN_0047c1f0(&local_68,param_4,param_5,param_6);
      if (param_3 - 1 < 7) {
        param_2 = param_2 + param_3;
        local_68 = local_68 ^ uVar8;
        uStack_64 = uStack_64 ^ uVar6;
        switch(param_3) {
        case 7:
          param_2 = param_2 + -1;
          *param_2 = (char)(uStack_64 >> 0x10);
        case 6:
          param_2 = param_2 + -1;
          *param_2 = (char)(uStack_64 >> 8);
        case 5:
          param_2 = param_2 + -1;
          *param_2 = (char)uStack_64;
        case 4:
          param_2 = param_2 + -1;
          *param_2 = (char)(local_68 >> 0x18);
        case 3:
          param_2 = param_2 + -1;
          *param_2 = (char)(local_68 >> 0x10);
        case 2:
          param_2 = param_2 + -1;
          *param_2 = (char)(local_68 >> 8);
        case 1:
          param_2[-1] = (char)local_68;
        }
      }
      goto LAB_0047c878;
    }
  }
  else {
    local_68 = uVar8;
    uStack_64 = uVar6;
    if (-1 < (long)uVar9) {
      puVar3 = param_2;
      uVar4 = uVar9;
      do {
        uVar8 = *param_1;
        puVar1 = param_1 + 1;
        param_1 = param_1 + 2;
        local_68 = uVar8 ^ local_68;
        uStack_64 = *puVar1 ^ uStack_64;
        FUN_0047c0f0(&local_68,param_4,param_5,param_6);
        puVar3[2] = (char)(local_68 >> 0x10);
        puVar3[3] = (char)(local_68 >> 0x18);
        puVar3[1] = (char)(local_68 >> 8);
        param_2 = puVar3 + 8;
        puVar3[4] = (char)uStack_64;
        puVar3[5] = (char)(uStack_64 >> 8);
        puVar3[6] = (char)(uStack_64 >> 0x10);
        *puVar3 = (char)local_68;
        uVar4 = uVar4 - 8;
        puVar3[7] = (char)(uStack_64 >> 0x18);
        puVar3 = param_2;
      } while (-1 < (long)uVar4);
      param_3 = uVar9 & 7;
    }
    uVar8 = local_68;
    uVar6 = uStack_64;
    if (param_3 != 0) {
      uVar8 = 0;
      if (param_3 - 1 < 7) {
        pbVar2 = (byte *)((long)param_1 + param_3);
        uVar6 = 0;
        switch(param_3) {
        case 7:
          pbVar2 = pbVar2 + -1;
          uVar8 = (uint)*pbVar2 << 0x10;
        case 6:
          pbVar2 = pbVar2 + -1;
          uVar8 = uVar8 | (uint)*pbVar2 << 8;
        case 5:
          pbVar2 = pbVar2 + -1;
          uVar8 = uVar8 | *pbVar2;
        case 4:
          uVar6 = uVar8;
          pbVar2 = pbVar2 + -1;
          uVar8 = (uint)*pbVar2 << 0x18;
        case 3:
          pbVar2 = pbVar2 + -1;
          uVar8 = uVar8 | (uint)*pbVar2 << 0x10;
        case 2:
          pbVar2 = pbVar2 + -1;
          uVar8 = uVar8 | (uint)*pbVar2 << 8;
        case 1:
          uVar8 = uVar8 | pbVar2[-1];
        }
      }
      else {
        uVar6 = 0;
      }
      local_68 = uVar8 ^ local_68;
      uStack_64 = uVar6 ^ uStack_64;
      FUN_0047c0f0(&local_68,param_4,param_5,param_6);
      param_2[1] = (char)(local_68 >> 8);
      param_2[2] = (char)(local_68 >> 0x10);
      param_2[3] = (char)(local_68 >> 0x18);
      param_2[5] = (char)(uStack_64 >> 8);
      param_2[6] = (char)(uStack_64 >> 0x10);
      *param_2 = (char)local_68;
      param_2[4] = (char)uStack_64;
      param_2[7] = (char)(uStack_64 >> 0x18);
      uVar7 = local_68;
      uVar5 = uStack_64;
      goto LAB_0047c878;
    }
  }
  uVar7 = uVar8;
  uVar5 = uVar6;
LAB_0047c878:
  *(char *)((long)param_7 + 1) = (char)(uVar7 >> 8);
  *(char *)((long)param_7 + 3) = (char)(uVar7 >> 0x18);
  *(char *)((long)param_7 + 5) = (char)(uVar5 >> 8);
  *(char *)((long)param_7 + 2) = (char)(uVar7 >> 0x10);
  *(char *)((long)param_7 + 6) = (char)(uVar5 >> 0x10);
  *(char *)param_7 = (char)uVar7;
  *(char *)(param_7 + 1) = (char)uVar5;
  *(char *)((long)param_7 + 7) = (char)(uVar5 >> 0x18);
  return;
}


