/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f18338; name: FUN_02f18338
 */


void FUN_02f18338(long param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  undefined4 local_14;
  
  if ((*(ulong **)(param_1 + 0x38) == (ulong *)0x0) ||
     (uVar3 = *(uint *)(&DAT_03a9f0d0 + (ulong)param_3 * 4),
     (**(ulong **)(param_1 + 0x38) & 1L << ((ulong)uVar3 & 0x3f)) == 0)) {
    local_14 = *(undefined4 *)((long)&DAT_0440a800 + (ulong)param_3 * 4);
    pbVar6 = *(byte **)(param_1 + 0x98);
    pbVar7 = pbVar6;
    if (pbVar6 != (byte *)0x0) {
      uVar8 = 0;
      pbVar7 = pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc);
      do {
        if ((uint)pbVar6[uVar8 + 1] == (param_3 & 0xff)) goto LAB_02f1841c;
        uVar8 = uVar8 + 1;
        pbVar7 = pbVar7 + 4;
      } while (uVar8 < *pbVar6);
      pbVar7 = (byte *)0x0;
    }
LAB_02f1841c:
    pbVar6 = (byte *)&local_14;
    if (pbVar7 != (byte *)0x0) {
      pbVar6 = pbVar7;
    }
    *param_2 = *(undefined4 *)pbVar6;
  }
  else {
    uVar2 = *(uint *)(DAT_0440a160 + 0x20);
    uVar9 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar3 + (int)(param_1 + 0x30);
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar1 / uVar2;
      }
      for (plVar5 = *(long **)(*(long *)(DAT_0440a160 + 0x18) + (ulong)(uVar1 - uVar4 * uVar2) * 8);
          plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
        if ((*plVar5 == param_1 + 0x30) && (*(uint *)(plVar5 + 1) == uVar3)) {
          if (*(int *)((long)plVar5 + 0x4c) == 3) {
            uVar9 = FUN_02eb1180(DAT_0440a160,plVar5,param_4);
            *param_2 = uVar9;
            return;
          }
          uVar9 = FUN_02eb1334();
          break;
        }
      }
    }
    *param_2 = uVar9;
  }
  return;
}


