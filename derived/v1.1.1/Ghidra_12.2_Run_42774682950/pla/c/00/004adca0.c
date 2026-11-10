/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004adca0; name: FUN_004adca0
 */


void FUN_004adca0(uint *param_1,undefined1 *param_2,ulong param_3,undefined8 param_4,uint *param_5,
                 int param_6)

{
  uint uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint local_58;
  uint uStack_54;
  
  uVar8 = param_3 - 8;
  uVar1 = (*param_5 & 0xff00ff00) >> 8 | (*param_5 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar6 = (param_5[1] & 0xff00ff00) >> 8 | (param_5[1] & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  if (param_6 == 0) {
    if (-1 < (long)uVar8) {
      puVar3 = param_2;
      uVar4 = uVar8;
      uVar7 = uVar1;
      uVar5 = uVar6;
      do {
        uVar1 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
        uVar6 = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
        uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
        param_1 = param_1 + 2;
        local_58 = uVar1;
        uStack_54 = uVar6;
        FUN_004ad860(&local_58,param_4);
        local_58 = local_58 ^ uVar7;
        *puVar3 = (char)(local_58 >> 0x18);
        uStack_54 = uStack_54 ^ uVar5;
        puVar3[3] = (char)local_58;
        puVar3[2] = (char)(local_58 >> 8);
        puVar3[1] = (char)(local_58 >> 0x10);
        puVar3[4] = (char)(uStack_54 >> 0x18);
        param_2 = puVar3 + 8;
        puVar3[7] = (char)uStack_54;
        puVar3[5] = (char)(uStack_54 >> 0x10);
        uVar4 = uVar4 - 8;
        puVar3[6] = (char)(uStack_54 >> 8);
        puVar3 = param_2;
        uVar7 = uVar1;
        uVar5 = uVar6;
      } while (-1 < (long)uVar4);
      param_3 = uVar8 & 7;
    }
    if (param_3 != 0) {
      uVar7 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
      uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
      uVar5 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      local_58 = uVar7;
      uStack_54 = uVar5;
      FUN_004ad860(&local_58,param_4);
      if (param_3 - 1 < 7) {
        param_2 = param_2 + param_3;
        local_58 = local_58 ^ uVar1;
        uStack_54 = uStack_54 ^ uVar6;
        switch(param_3) {
        case 7:
          param_2 = param_2 + -1;
          *param_2 = (char)(uStack_54 >> 8);
        case 6:
          param_2 = param_2 + -1;
          *param_2 = (char)(uStack_54 >> 0x10);
        case 5:
          param_2 = param_2 + -1;
          *param_2 = (char)(uStack_54 >> 0x18);
        case 4:
          param_2 = param_2 + -1;
          *param_2 = (char)local_58;
        case 3:
          param_2 = param_2 + -1;
          *param_2 = (char)(local_58 >> 8);
        case 2:
          param_2 = param_2 + -1;
          *param_2 = (char)(local_58 >> 0x10);
        case 1:
          param_2[-1] = (char)(local_58 >> 0x18);
        }
      }
      goto LAB_004adf54;
    }
  }
  else {
    local_58 = uVar1;
    uStack_54 = uVar6;
    if (-1 < (long)uVar8) {
      puVar3 = param_2;
      uVar4 = uVar8;
      do {
        uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
        uVar6 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
        param_1 = param_1 + 2;
        local_58 = (uVar1 >> 0x10 | uVar1 << 0x10) ^ local_58;
        uStack_54 = (uVar6 >> 0x10 | uVar6 << 0x10) ^ uStack_54;
        FUN_004ad420(&local_58,param_4);
        puVar3[1] = (char)(local_58 >> 0x10);
        puVar3[2] = (char)(local_58 >> 8);
        *puVar3 = (char)(local_58 >> 0x18);
        param_2 = puVar3 + 8;
        puVar3[7] = (char)uStack_54;
        puVar3[4] = (char)(uStack_54 >> 0x18);
        puVar3[5] = (char)(uStack_54 >> 0x10);
        puVar3[3] = (char)local_58;
        puVar3[6] = (char)(uStack_54 >> 8);
        uVar4 = uVar4 - 8;
        puVar3 = param_2;
      } while (-1 < (long)uVar4);
      param_3 = uVar8 & 7;
    }
    uVar1 = local_58;
    uVar6 = uStack_54;
    if (param_3 != 0) {
      uVar1 = 0;
      if (param_3 - 1 < 7) {
        pbVar2 = (byte *)((long)param_1 + param_3);
        uVar6 = 0;
        switch(param_3) {
        case 7:
          pbVar2 = pbVar2 + -1;
          uVar1 = (uint)*pbVar2 << 8;
        case 6:
          pbVar2 = pbVar2 + -1;
          uVar1 = uVar1 | (uint)*pbVar2 << 0x10;
        case 5:
          pbVar2 = pbVar2 + -1;
          uVar1 = uVar1 | (uint)*pbVar2 << 0x18;
        case 4:
          uVar6 = uVar1;
          pbVar2 = pbVar2 + -1;
          uVar1 = (uint)*pbVar2;
        case 3:
          pbVar2 = pbVar2 + -1;
          uVar1 = uVar1 | (uint)*pbVar2 << 8;
        case 2:
          pbVar2 = pbVar2 + -1;
          uVar1 = uVar1 | (uint)*pbVar2 << 0x10;
        case 1:
          uVar1 = uVar1 | (uint)pbVar2[-1] << 0x18;
        }
      }
      else {
        uVar6 = 0;
      }
      local_58 = uVar1 ^ local_58;
      uStack_54 = uVar6 ^ uStack_54;
      FUN_004ad420(&local_58,param_4);
      *param_2 = (char)(local_58 >> 0x18);
      param_2[1] = (char)(local_58 >> 0x10);
      param_2[2] = (char)(local_58 >> 8);
      param_2[4] = (char)(uStack_54 >> 0x18);
      param_2[5] = (char)(uStack_54 >> 0x10);
      param_2[3] = (char)local_58;
      param_2[7] = (char)uStack_54;
      param_2[6] = (char)(uStack_54 >> 8);
      uVar7 = local_58;
      uVar5 = uStack_54;
      goto LAB_004adf54;
    }
  }
  uVar7 = uVar1;
  uVar5 = uVar6;
LAB_004adf54:
  *(char *)param_5 = (char)(uVar7 >> 0x18);
  *(char *)((long)param_5 + 1) = (char)(uVar7 >> 0x10);
  *(char *)(param_5 + 1) = (char)(uVar5 >> 0x18);
  *(char *)((long)param_5 + 2) = (char)(uVar7 >> 8);
  *(char *)((long)param_5 + 3) = (char)uVar7;
  *(char *)((long)param_5 + 5) = (char)(uVar5 >> 0x10);
  *(char *)((long)param_5 + 6) = (char)(uVar5 >> 8);
  *(char *)((long)param_5 + 7) = (char)uVar5;
  return;
}


