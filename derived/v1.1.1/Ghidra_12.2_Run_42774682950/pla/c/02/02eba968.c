/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eba968; name: FUN_02eba968
 */


void FUN_02eba968(long param_1,int *param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  float fVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_14;
  
  local_50 = *param_3;
  uStack_48 = param_3[1];
  local_40 = param_3[2];
  uStack_38 = param_3[3];
  local_30 = param_3[4];
  uStack_28 = param_3[5];
  local_14 = param_4;
  pbVar5 = *(byte **)(param_1 + 0x20);
  pbVar6 = pbVar5;
  if (pbVar5 != (byte *)0x0) {
    uVar7 = 0;
    pbVar6 = pbVar5 + ((ulong)(*pbVar5 + 4) & 0x1fc);
    do {
      if (pbVar5[uVar7 + 1] == 5) goto LAB_02eba9d8;
      uVar7 = uVar7 + 1;
      pbVar6 = pbVar6 + 4;
    } while (uVar7 < *pbVar5);
    pbVar6 = (byte *)0x0;
  }
LAB_02eba9d8:
  pbVar5 = (byte *)&local_14;
  if (pbVar6 != (byte *)0x0) {
    pbVar5 = pbVar6;
  }
  *param_2 = *(int *)pbVar5;
  if ((*(byte *)(param_1 + 0x30) >> 3 & 1) != 0) {
    uVar2 = *(uint *)(DAT_0440a160 + 0x20);
    fVar8 = 0.0;
    if (uVar2 != 0) {
      uVar1 = (int)param_1 + 3;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (plVar4 = *(long **)(*(long *)(DAT_0440a160 + 0x18) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          plVar4 != (long *)0x0; plVar4 = (long *)plVar4[2]) {
        if ((*plVar4 == param_1) && ((int)plVar4[1] == 3)) {
          if (*(int *)((long)plVar4 + 0x4c) == 3) {
            fVar8 = (float)FUN_02eb1180(DAT_0440a160,plVar4,&local_50);
          }
          else {
            fVar8 = (float)FUN_02eb1334();
          }
          break;
        }
      }
    }
    *param_2 = (int)fVar8;
  }
  return;
}


