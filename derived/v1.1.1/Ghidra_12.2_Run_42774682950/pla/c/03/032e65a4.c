/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e65a4; name: FUN_032e65a4
 */


undefined4 FUN_032e65a4(long *param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *local_28;
  
  uVar3 = 0x80040200;
  if ((*param_1 != 0) && (*param_2 != 0)) {
    pbVar5 = (byte *)param_1[1];
    if ((*pbVar5 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar1 = *pbVar5;
      while ((bVar1 & 1) == 0) {
        pbVar5 = *(byte **)(pbVar5 + 8);
        bVar1 = *pbVar5;
      }
    }
    pbVar9 = (byte *)param_2[1];
    pbVar8 = pbVar9;
    if ((*pbVar9 & 1) == 0) {
      pbVar8 = *(byte **)(pbVar9 + 8);
      bVar1 = *pbVar8;
      while ((bVar1 & 1) == 0) {
        pbVar8 = *(byte **)(pbVar8 + 8);
        bVar1 = *pbVar8;
      }
    }
    if (((*(uint *)(pbVar8 + 0x10) ^ (uint)*(undefined8 *)(pbVar5 + 0x10)) & 0x1f) == 0) {
      if ((((((pbVar9 != (byte *)0x0) && (uVar4 = FUN_032e225c(pbVar9), (uVar4 & 1) != 0)) &&
            (uVar2 = FUN_032e2598(pbVar9), (uVar2 >> 3 & 1) == 0)) &&
           ((*(byte *)(param_1 + 2) & 1) == 0)) &&
          (((puVar6 = (undefined8 *)param_1[1], puVar6 < (undefined8 *)0x2 ||
            (uVar2 = (uint)*puVar6, (uVar2 >> 0x11 & 1) == 0)) ||
           (uVar2 = (uVar2 & 0x1ffff) - (uVar2 >> 1 & 0x5555),
           uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333),
           (puVar6[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] & 0x300000)
           == 0 || (puVar6[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] &
                   0x500000) == 0)))) && (uVar2 = FUN_032e2598(param_2[1]), (uVar2 >> 3 & 1) == 0))
      {
        puVar7 = (ulong *)param_1[1];
        while( true ) {
          uVar2 = (uint)*puVar7;
          if ((uVar2 >> 9 & 1) != 0) break;
          if (((*puVar7 & 1) != 0) || (puVar7 = (ulong *)puVar7[1], puVar7 == (ulong *)0x0))
          goto LAB_032e6758;
        }
        if ((puVar7 != (ulong *)0x0) &&
           (uVar2 = (uVar2 & 0x1ff) - (uVar2 >> 1 & 0x55),
           uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333),
           (code *)puVar7[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] !=
           (code *)0x0)) {
          (*(code *)puVar7[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2])
                    (*param_1,*param_2,(ulong *)param_1[1],1);
          return 0;
        }
      }
LAB_032e6758:
      local_28 = param_1;
      uVar3 = FUN_032e6770(&local_28,param_2);
    }
  }
  return uVar3;
}


