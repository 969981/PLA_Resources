/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed6dc0; name: FUN_02ed6dc0
 */


undefined1  [16] FUN_02ed6dc0(long param_1,undefined8 param_2)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  byte *pbVar4;
  ulong uVar5;
  float extraout_s0;
  float fVar6;
  undefined4 extraout_var;
  undefined4 uVar8;
  undefined8 extraout_var_00;
  undefined1 auVar7 [16];
  undefined8 uVar9;
  float fVar10;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_30;
  float local_24;
  
  if ((*(long *)(param_1 + 0x80) == 0) || ((*(byte *)(param_1 + 0xa0) & 1) != 0)) {
    local_48 = 0;
    local_50 = 0;
    local_40 = 0xff;
    local_38 = 0xff;
    local_30 = 0;
    local_58 = param_2;
    pfVar2 = *(float **)(param_1 + 0x98);
    local_24 = DAT_0440a818._4_4_;
    pfVar3 = pfVar2;
    if (pfVar2 != (float *)0x0) {
      uVar5 = 0;
      pfVar3 = (float *)((long)pfVar2 + ((ulong)(*(byte *)pfVar2 + 4) & 0x1fc));
      do {
        if (*(byte *)((long)pfVar2 + uVar5 + 1) == 7) goto LAB_02ed6e68;
        uVar5 = uVar5 + 1;
        pfVar3 = pfVar3 + 1;
      } while (uVar5 < *(byte *)pfVar2);
      pfVar3 = (float *)0x0;
    }
LAB_02ed6e68:
    pfVar2 = &local_24;
    if (pfVar3 != (float *)0x0) {
      pfVar2 = pfVar3;
    }
    fVar10 = *pfVar2;
    fVar6 = (float)FUN_02ed2e94(param_1,0x11,&local_58);
    fVar6 = fVar6 + fVar10;
    if ((~(uint)fVar6 & 0x7f800000) == 0) {
      fVar6 = 50.0;
      cVar1 = *(char *)(param_1 + 0xab);
    }
    else {
      cVar1 = *(char *)(param_1 + 0xab);
    }
    if (cVar1 < '\0') {
      uVar9 = 0;
      uVar8 = 0;
      local_58 = CONCAT44(local_58._4_4_,DAT_0440a820);
      pbVar4 = *(byte **)(param_1 + 0x98);
      if (pbVar4 != (byte *)0x0) {
        uVar5 = 0;
        do {
          if (pbVar4[uVar5 + 1] == 8) break;
          uVar5 = uVar5 + 1;
        } while (uVar5 < *pbVar4);
      }
    }
    else {
      uVar9 = 0;
      uVar8 = 0;
    }
  }
  else {
    FUN_02ed6dc0();
    fVar6 = extraout_s0;
    uVar8 = extraout_var;
    uVar9 = extraout_var_00;
  }
  auVar7._4_4_ = uVar8;
  auVar7._0_4_ = fVar6;
  auVar7._8_8_ = uVar9;
  return auVar7;
}


