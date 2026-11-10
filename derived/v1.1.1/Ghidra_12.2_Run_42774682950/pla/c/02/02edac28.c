/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edac28; name: FUN_02edac28
 */


void FUN_02edac28(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 uVar9;
  float fVar10;
  byte local_28 [40];
  
  do {
    lVar4 = param_1;
    param_1 = *(long *)(lVar4 + 0x80);
  } while (*(long *)(lVar4 + 0x80) != 0 && (*(uint *)(lVar4 + 0xa0) & 0x20000ffe) == 0);
  FUN_02eda768(lVar4,param_2);
  *(undefined2 *)(param_4 + 5) = *(undefined2 *)(lVar4 + 0xa8);
  if (((*(long *)(lVar4 + 0x38) != 0) && ((*(byte *)(*(long *)(lVar4 + 0x38) + 5) >> 6 & 1) != 0))
     || (uVar5 = (**(code **)(*(long *)(lVar4 + 0x18) + 0x20))((long *)(lVar4 + 0x18),0x2e),
        (uVar5 & 1) != 0)) {
    fVar10 = (float)FUN_02ed2e94(lVar4,0x2e,param_2);
    *(ushort *)(param_4 + 5) = *(ushort *)(param_4 + 5) & 0xffbf | (ushort)(0.0 < fVar10) << 6;
  }
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  pbVar7 = *(byte **)(lVar4 + 0x98);
  pbVar8 = pbVar7;
  if (pbVar7 != (byte *)0x0) {
    uVar5 = 0;
    pbVar8 = pbVar7 + ((ulong)(*pbVar7 + 4) & 0x1fc);
    do {
      if (pbVar7[uVar5 + 1] == 0x46) goto LAB_02edacfc;
      uVar5 = uVar5 + 1;
      pbVar8 = pbVar8 + 4;
    } while (uVar5 < *pbVar7);
    pbVar8 = (byte *)0x0;
  }
LAB_02edacfc:
  pbVar7 = local_28 + 4;
  if (pbVar8 != (byte *)0x0) {
    pbVar7 = pbVar8;
  }
  param_4[1] = *(undefined4 *)pbVar7;
  if ((*(long *)(lVar4 + 0x38) == 0) || (-1 < *(char *)(*(long *)(lVar4 + 0x38) + 2))) {
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 200;
    local_28[3] = 0x42;
    pbVar7 = *(byte **)(lVar4 + 0x98);
    pbVar8 = pbVar7;
    if (pbVar7 != (byte *)0x0) {
      uVar5 = 0;
      pbVar8 = pbVar7 + ((ulong)(*pbVar7 + 4) & 0x1fc);
      do {
        if (pbVar7[uVar5 + 1] == 0x47) goto LAB_02edad68;
        uVar5 = uVar5 + 1;
        pbVar8 = pbVar8 + 4;
      } while (uVar5 < *pbVar7);
      pbVar8 = (byte *)0x0;
    }
LAB_02edad68:
    pbVar7 = local_28;
    if (pbVar8 != (byte *)0x0) {
      pbVar7 = pbVar8;
    }
    *param_4 = *(undefined4 *)pbVar7;
  }
  else {
    uVar2 = *(uint *)(DAT_0440a160 + 0x20);
    uVar9 = 0;
    if (uVar2 != 0) {
      uVar1 = (int)(lVar4 + 0x30) + 0x17;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (plVar6 = *(long **)(*(long *)(DAT_0440a160 + 0x18) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          plVar6 != (long *)0x0; plVar6 = (long *)plVar6[2]) {
        if ((*plVar6 == lVar4 + 0x30) && ((int)plVar6[1] == 0x17)) {
          if (*(int *)((long)plVar6 + 0x4c) == 3) {
            uVar9 = FUN_02eb1180(DAT_0440a160,plVar6,param_2);
            *param_4 = uVar9;
            return;
          }
          uVar9 = FUN_02eb1334();
          break;
        }
      }
    }
    *param_4 = uVar9;
  }
  return;
}


