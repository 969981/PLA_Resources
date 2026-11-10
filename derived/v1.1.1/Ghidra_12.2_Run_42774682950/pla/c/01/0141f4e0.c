/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141f4e0; name: FUN_0141f4e0
 */


void FUN_0141f4e0(long *param_1,long param_2,ulong param_3,undefined4 *param_4,uint param_5)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(*(long *)(param_2 + 0x70) + 0x60);
  uVar4 = FUN_02c6cf3c(*(undefined8 *)(lVar7 + 0x98));
  if (((uVar4 & 1) == 0) &&
     ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
    FUN_0141f7a8(param_1,param_2);
    FUN_0141fa4c(param_1,param_2);
    bVar3 = FUN_02c6d5b0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x70) + 0x60) + 0x98));
    plVar5 = *(long **)(*param_1 + 0x148);
    lVar7 = *(long *)(*param_1 + 0x150);
    if ((lVar7 != 0) && (*plVar5 != 0x61306d14a65978b4)) {
      plVar6 = plVar5 + lVar7 * 6;
      lVar7 = lVar7 * 0x30;
      do {
        lVar7 = lVar7 + -0x30;
        if (lVar7 == 0) {
          plVar5 = plVar6;
          break;
        }
        plVar2 = plVar5 + 6;
        plVar1 = plVar5 + 6;
        plVar5 = plVar2;
      } while (*plVar1 != 0x61306d14a65978b4);
    }
    param_5 = param_5 & 1;
    *(byte *)(plVar5[4] + 0x58) = *(byte *)(plVar5[4] + 0x58) & 0xfe | bVar3 & 1;
    FUN_0141fc60(param_1 + 5,param_2,param_3 & 0xffffffff,*param_4,param_5);
    FUN_0141fc60(param_1 + 10,param_2,param_3 >> 8 & 0xffffff,param_4[1],param_5);
    FUN_0141fc60(param_1 + 0xf,param_2,param_3 >> 0x10 & 0xffff,param_4[2],param_5);
    FUN_0141fc60(param_1 + 0x14,param_2,param_3 >> 0x18 & 0xff,param_4[3],param_5);
    plVar5 = *(long **)(*param_1 + 0x148);
    lVar7 = *(long *)(*param_1 + 0x150);
    if ((lVar7 != 0) && (*plVar5 != -0x17ab4adb67ddb0af)) {
      plVar6 = plVar5 + lVar7 * 6;
      lVar7 = lVar7 * 0x30;
      do {
        lVar7 = lVar7 + -0x30;
        if (lVar7 == 0) {
          plVar5 = plVar6;
          break;
        }
        plVar2 = plVar5 + 6;
        plVar1 = plVar5 + 6;
        plVar5 = plVar2;
      } while (*plVar1 != -0x17ab4adb67ddb0af);
    }
    lVar7 = plVar5[4];
    bVar3 = *(byte *)(lVar7 + 0x58) | 1;
  }
  else {
    plVar5 = *(long **)(*param_1 + 0x148);
    lVar7 = *(long *)(*param_1 + 0x150);
    if ((lVar7 != 0) && (*plVar5 != -0x17ab4adb67ddb0af)) {
      plVar6 = plVar5 + lVar7 * 6;
      lVar7 = lVar7 * 0x30;
      do {
        lVar7 = lVar7 + -0x30;
        if (lVar7 == 0) {
          plVar5 = plVar6;
          break;
        }
        plVar2 = plVar5 + 6;
        plVar1 = plVar5 + 6;
        plVar5 = plVar2;
      } while (*plVar1 != -0x17ab4adb67ddb0af);
    }
    lVar7 = plVar5[4];
    bVar3 = *(byte *)(lVar7 + 0x58) & 0xfe;
  }
  *(byte *)(lVar7 + 0x58) = bVar3;
  plVar5 = *(long **)(*param_1 + 0x148);
  lVar7 = *(long *)(*param_1 + 0x150);
  if ((lVar7 != 0) && (*plVar5 != -0x17ab4adb67ddb0af)) {
    plVar6 = plVar5 + lVar7 * 6;
    lVar7 = lVar7 * 0x30;
    do {
      lVar7 = lVar7 + -0x30;
      if (lVar7 == 0) {
        plVar5 = plVar6;
        break;
      }
      plVar2 = plVar5 + 6;
      plVar1 = plVar5 + 6;
      plVar5 = plVar2;
    } while (*plVar1 != -0x17ab4adb67ddb0af);
  }
  *(byte *)(plVar5[4] + 0x58) = *(byte *)(plVar5[4] + 0x58) | 1;
  return;
}


