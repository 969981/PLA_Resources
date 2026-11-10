/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eba77c; name: FUN_02eba77c
 */


void FUN_02eba77c(undefined4 param_1,long param_2,undefined4 *param_3,uint param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_14;
  
  local_50 = *param_5;
  uStack_48 = param_5[1];
  local_40 = param_5[2];
  uStack_38 = param_5[3];
  local_30 = param_5[4];
  uStack_28 = param_5[5];
  local_14 = param_1;
  pbVar6 = *(byte **)(param_2 + 0x20);
  pbVar7 = pbVar6;
  if (pbVar6 != (byte *)0x0) {
    uVar8 = 0;
    pbVar7 = pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc);
    do {
      if ((uint)pbVar6[uVar8 + 1] == (param_4 & 0xff)) goto LAB_02eba7ec;
      uVar8 = uVar8 + 1;
      pbVar7 = pbVar7 + 4;
    } while (uVar8 < *pbVar6);
    pbVar7 = (byte *)0x0;
  }
LAB_02eba7ec:
  pbVar6 = (byte *)&local_14;
  if (pbVar7 != (byte *)0x0) {
    pbVar6 = pbVar7;
  }
  *param_3 = *(undefined4 *)pbVar6;
  uVar3 = *(uint *)(&DAT_03a9ef3c + (ulong)param_4 * 4);
  if ((1L << ((ulong)uVar3 & 0x3f) & (ulong)*(uint *)(param_2 + 0x30)) != 0) {
    uVar2 = *(uint *)(DAT_0440a160 + 0x20);
    uVar9 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar3 + (int)param_2;
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar1 / uVar2;
      }
      for (plVar5 = *(long **)(*(long *)(DAT_0440a160 + 0x18) + (ulong)(uVar1 - uVar4 * uVar2) * 8);
          plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
        if ((*plVar5 == param_2) && (*(uint *)(plVar5 + 1) == uVar3)) {
          if (*(int *)((long)plVar5 + 0x4c) == 3) {
            uVar9 = FUN_02eb1180(DAT_0440a160,plVar5,&local_50);
          }
          else {
            uVar9 = FUN_02eb1334();
          }
          break;
        }
      }
    }
    *param_3 = uVar9;
  }
  return;
}


