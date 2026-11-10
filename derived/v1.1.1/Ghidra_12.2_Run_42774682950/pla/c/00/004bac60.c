/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bac60; name: FUN_004bac60
 */


undefined8 FUN_004bac60(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar3 = uVar1 >> 3;
  uVar4 = (ulong)uVar3;
  if ((uVar1 & 7) == 0) {
    *(undefined1 *)((long)param_2 + uVar4 + 0x40) = 0x80;
    uVar4 = (ulong)(uVar3 + 1);
    if (uVar1 < 0x100) goto LAB_004bacf4;
LAB_004baca4:
    if ((uint)uVar4 < 0x40) {
      memset((void *)((long)param_2 + uVar4 + 0x40),0,(ulong)(0x3f - uVar3));
    }
    FUN_004bad90(param_2,param_2 + 8,1);
    uVar4 = 0;
  }
  else {
    *(byte *)((long)param_2 + uVar4 + 0x40) =
         *(byte *)((long)param_2 + uVar4 + 0x40) | (byte)(0x80 >> (ulong)(uVar1 & 7));
    uVar4 = (ulong)(uVar3 + 1);
    if (0xff < uVar1) goto LAB_004baca4;
LAB_004bacf4:
    if (0x1f < (uint)uVar4) goto LAB_004bad14;
  }
  memset((void *)((long)param_2 + uVar4 + 0x40),0,(ulong)(0x20 - (int)uVar4));
LAB_004bad14:
  uVar4 = (param_2[0x11] & 0xff00ff00ff00ff00) >> 8 | (param_2[0x11] & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar2 = (param_2[0x12] & 0xff00ff00ff00ff00) >> 8 | (param_2[0x12] & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  param_2[0xe] = uVar2 >> 0x20 | uVar2 << 0x20;
  param_2[0xf] = uVar4 >> 0x20 | uVar4 << 0x20;
  uVar4 = (param_2[0x13] & 0xff00ff00ff00ff00) >> 8 | (param_2[0x13] & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar2 = (param_2[0x14] & 0xff00ff00ff00ff00) >> 8 | (param_2[0x14] & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  param_2[0xc] = uVar2 >> 0x20 | uVar2 << 0x20;
  param_2[0xd] = uVar4 >> 0x20 | uVar4 << 0x20;
  FUN_004bad90(param_2,param_2 + 8,1);
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar9 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  param_1[7] = uVar11;
  param_1[6] = uVar10;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  FUN_004006a0(param_2,0xa8);
  return 1;
}


