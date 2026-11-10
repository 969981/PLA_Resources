/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033875a4; name: FUN_033875a4
 */


undefined1  [16] FUN_033875a4(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  byte *local_18;
  
  uVar2 = *param_2;
  uVar6 = (ulong)uVar2;
  if (uVar2 >> 0x1c == 0) {
    local_18 = (byte *)0x0;
    uVar4 = 0;
    goto LAB_033875fc;
  }
  uVar1 = uVar2 & 0xf0000000;
  if (uVar1 == 0x20000000) {
    if (param_2[2] == 0) {
      local_18 = (byte *)0x0;
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 8) + (uVar6 & 0xffffff) * 8);
      goto LAB_033875fc;
    }
LAB_033875e4:
    local_18 = (byte *)(*(long *)(param_1 + 0x38) + (ulong)param_2[1]);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)(uVar2 & 0xffffff) * 8);
  }
  else {
    if (uVar1 == 0x40000000) {
      local_18 = *(byte **)(*(long *)(param_1 + 8) + (uVar6 & 0xffffff) * 8);
      if (local_18 == (byte *)0x0) {
LAB_033876d0:
        uVar4 = 0;
        goto LAB_033875fc;
      }
      pbVar5 = local_18;
      if ((*local_18 & 1) == 0) {
        do {
          pbVar5 = *(byte **)(pbVar5 + 8);
        } while ((*pbVar5 & 1) == 0);
      }
    }
    else {
      if (uVar1 != 0x50000000) goto LAB_033875e4;
      plVar3 = (long *)FUN_032e2050(*(undefined8 *)(*(long *)(param_1 + 8) + (uVar6 & 0xffffff) * 8)
                                    ,0x800000);
      local_18 = *(byte **)(*plVar3 + (long)(int)param_2[2] * 8 + 8);
      if (local_18 == (byte *)0x0) goto LAB_033876d0;
      pbVar5 = local_18;
      if ((*local_18 & 1) == 0) {
        do {
          pbVar5 = *(byte **)(pbVar5 + 8);
        } while ((*pbVar5 & 1) == 0);
      }
    }
    uVar4 = FUN_032e3540(*(uint *)(pbVar5 + 0x10) & 0x1f);
  }
LAB_033875fc:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = local_18;
  return auVar7;
}


