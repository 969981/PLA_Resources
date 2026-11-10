/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053fd30; name: FUN_0053fd30
 */


uint FUN_0053fd30(byte *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  
  param_3 = (uint)param_2 ^ param_3;
  if (param_2 < 4) {
LAB_0053fe48:
    uVar5 = param_2 - 4;
    if (3 < param_2) {
      uVar8 = uVar5 & 0xfffffffffffffffc;
      pbVar3 = param_1;
      do {
        param_2 = param_2 - 4;
        param_3 = (*(int *)pbVar3 * 0x5bd1e995 ^ (uint)(*(int *)pbVar3 * 0x5bd1e995) >> 0x18) *
                  0x5bd1e995 ^ param_3 * 0x5bd1e995;
        pbVar3 = pbVar3 + 4;
      } while (3 < param_2);
      param_2 = uVar5 - uVar8;
      param_1 = param_1 + uVar8 + 4;
    }
    if (param_2 != 1) {
joined_r0x0053fe90:
      if (param_2 != 2) {
        if (param_2 != 3) {
switchD_0053fe18_default:
          uVar4 = (param_3 ^ param_3 >> 0xd) * 0x5bd1e995;
          return uVar4 ^ uVar4 >> 0xf;
        }
        param_3 = param_3 ^ (uint)param_1[2] << 0x10;
      }
      param_3 = param_3 ^ (uint)param_1[1] << 8;
    }
  }
  else {
    uVar4 = (uint)param_1 & 3;
    uVar5 = (ulong)uVar4;
    if (((ulong)param_1 & 3) == 0) goto LAB_0053fe48;
    uVar6 = 0;
    if (uVar4 == 3) {
LAB_0053fd78:
      uVar6 = uVar6 | *param_1;
    }
    else {
      if (uVar4 == 2) {
LAB_0053fd70:
        uVar6 = uVar6 | (uint)param_1[1] << 8;
        goto LAB_0053fd78;
      }
      if (uVar4 == 1) {
        uVar6 = (uint)param_1[2] << 0x10;
        goto LAB_0053fd70;
      }
    }
    uVar1 = uVar4 << 3;
    uVar6 = uVar6 << (ulong)uVar1;
    uVar13 = (ulong)(4 - uVar4);
    uVar9 = param_2 - uVar13;
    puVar7 = (uint *)(param_1 + uVar13);
    uVar2 = (4 - uVar4) * 8;
    uVar8 = uVar9 - 4;
    if (3 < uVar9) {
      uVar12 = uVar8 & 0xfffffffffffffffc;
      do {
        uVar10 = uVar6 >> (ulong)uVar1;
        uVar6 = *puVar7;
        uVar10 = (uVar6 << (ulong)(uVar2 & 0x1f) | uVar10) * 0x5bd1e995;
        uVar9 = uVar9 - 4;
        param_3 = (uVar10 ^ uVar10 >> 0x18) * 0x5bd1e995 ^ param_3 * 0x5bd1e995;
        puVar7 = puVar7 + 1;
      } while (3 < uVar9);
      puVar7 = (uint *)(param_1 + uVar12 + uVar13 + 4);
      uVar9 = uVar8 - uVar12;
    }
    param_2 = uVar9 - uVar5;
    if (uVar9 < uVar5) {
      uVar4 = 0;
      uVar10 = 0;
      uVar11 = 0;
      switch(uVar9) {
      case 3:
        uVar4 = (uint)*(byte *)((long)puVar7 + 2) << 0x10;
      case 2:
        uVar10 = uVar4 | (uint)*(byte *)((long)puVar7 + 1) << 8;
      case 1:
        uVar11 = uVar10 | (byte)*puVar7;
      case 0:
        param_3 = (uVar11 << (ulong)(uVar2 & 0x1f) | uVar6 >> (ulong)uVar1) ^ param_3;
        break;
      default:
        goto switchD_0053fe18_default;
      }
      goto LAB_0053ff34;
    }
    uVar10 = 0;
    if (uVar4 == 1) {
LAB_0053fed8:
      uVar10 = uVar10 | (byte)*puVar7;
    }
    else {
      if (uVar4 == 2) {
LAB_0053fed0:
        uVar10 = uVar10 | (uint)*(byte *)((long)puVar7 + 1) << 8;
        goto LAB_0053fed8;
      }
      if (uVar4 == 3) {
        uVar10 = (uint)*(byte *)((long)puVar7 + 2) << 0x10;
        goto LAB_0053fed0;
      }
    }
    uVar4 = (uVar10 << (ulong)(uVar2 & 0x1f) | uVar6 >> (ulong)uVar1) * 0x5bd1e995;
    param_3 = (uVar4 ^ uVar4 >> 0x18) * 0x5bd1e995 ^ param_3 * 0x5bd1e995;
    param_1 = (byte *)((long)puVar7 + uVar5);
    if (param_2 != 1) goto joined_r0x0053fe90;
  }
  param_3 = param_3 ^ *param_1;
LAB_0053ff34:
  uVar4 = (param_3 * 0x5bd1e995 ^ param_3 * 0x5bd1e995 >> 0xd) * 0x5bd1e995;
  return uVar4 ^ uVar4 >> 0xf;
}


