/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335fa00; name: FUN_0335fa00
 */


undefined1  [16] FUN_0335fa00(undefined8 param_1,ulong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 *local_850;
  undefined8 local_848;
  undefined1 local_840 [2048];
  
  puVar4 = PTR_PTR_0434a080;
  if ((*(int *)((long)param_2 + 0xc) == 0x10) && ((*param_2 & 0xf) == 0)) {
    auVar7 = FUN_0335e9f8(param_1,*param_2,(int)param_2[1]);
    return auVar7;
  }
  uVar3 = (uint)param_2[1];
  local_848._0_4_ = 0;
  local_848._4_4_ = 0x80000080;
  local_850 = local_840;
  if ((int)uVar3 < 0x81) {
    if (uVar3 == 0) goto LAB_0335fa78;
  }
  else {
    if ((int)uVar3 < 0x40000000) {
      uVar5 = 0x100;
    }
    else {
      FUN_032bd0a8(uVar3);
      uVar5 = (local_848._4_4_ & 0x3fffffff) * 2;
      if (0x3ffffffe < uVar5) {
        uVar5 = 0x3fffffff;
      }
    }
    uVar2 = uVar3;
    if ((int)uVar3 <= (int)uVar5) {
      uVar2 = uVar5;
    }
    local_850 = (undefined1 *)FUN_032bd1d4(puVar4,uVar2,0x10,local_840,0,(ulong)&local_850 | 0xc);
    if ((uint)local_848 == uVar3) goto LAB_0335fa78;
  }
  local_848._0_4_ = uVar3;
LAB_0335fa78:
  if (0 < (int)param_2[1]) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(*param_2 + (long)(*(int *)((long)param_2 + 0xc) * (int)lVar6));
      uVar9 = *puVar1;
      uVar8 = 0;
      if (0xf < *(int *)((long)param_2 + 0xc)) {
        uVar8 = *(undefined4 *)((long)puVar1 + 0xc);
      }
      *(ulong *)((long)(local_850 + lVar6 * 0x10) + 8) = CONCAT44(uVar8,*(undefined4 *)(puVar1 + 1))
      ;
      *(undefined8 *)(local_850 + lVar6 * 0x10) = uVar9;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_2[1]);
  }
  auVar7 = FUN_0335e9f8(param_1,local_850,(uint)local_848);
  uVar3 = local_848._4_4_;
  uVar9 = auVar7._8_8_;
  local_848 = (ulong)local_848._4_4_ << 0x20;
  if ((-1 < (int)uVar3) && (local_850 != (undefined1 *)0x0)) {
    FUN_032cf244(puVar4,local_850,0x10,uVar3 & 0x3fffffff);
  }
  auVar7._8_8_ = uVar9;
  return auVar7;
}


