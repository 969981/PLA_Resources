/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dfbb28; name: FUN_00dfbb28
 */


undefined8
FUN_00dfbb28(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 *param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  char *pcVar7;
  byte *pbVar8;
  
  *param_6 = 1;
  param_6[1] = param_6[1] + 1;
  if ((int)param_4 == 7) {
    iVar1 = FUN_00152090(param_2,param_3);
    if (iVar1 != 0) {
      uVar2 = FUN_0014fef0(param_2);
      pbVar3 = (byte *)FUN_00dfa238();
      pbVar8 = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        pbVar8 = pbVar3 + 1;
      }
      FUN_00151a70(param_2,0xfff0b9d8,pbVar8);
      iVar1 = FUN_00150310(param_2,0xffffffff);
      if ((iVar1 == 0) || (iVar1 = FUN_00150750(param_2,0xffffffff,uVar2), iVar1 != 1)) {
        FUN_0014ff10(param_2,0xfffffffe);
        pbVar3 = (byte *)FUN_00df9074();
        pbVar8 = *(byte **)(pbVar3 + 0x10);
        if ((*pbVar3 & 1) == 0) {
          pbVar8 = pbVar3 + 1;
        }
        FUN_00151a70(param_2,0xfff0b9d8,pbVar8);
        iVar1 = FUN_00150310(param_2,0xffffffff);
        if ((iVar1 == 0) || (iVar1 = FUN_00150750(param_2,0xffffffff,uVar2), iVar1 != 1)) {
          FUN_0014ff10(param_2,0xfffffffe);
          pbVar3 = (byte *)FUN_00dfaaa8();
          pbVar8 = *(byte **)(pbVar3 + 0x10);
          if ((*pbVar3 & 1) == 0) {
            pbVar8 = pbVar3 + 1;
          }
          FUN_00151a70(param_2,0xfff0b9d8,pbVar8);
          iVar1 = FUN_00150310(param_2,0xffffffff);
          if ((iVar1 == 0) || (iVar1 = FUN_00150750(param_2,0xffffffff,uVar2), iVar1 != 1)) {
            FUN_0014ff10(param_2,0xfffffffe);
            pbVar3 = (byte *)FUN_00dfb2e8();
            pbVar8 = *(byte **)(pbVar3 + 0x10);
            if ((*pbVar3 & 1) == 0) {
              pbVar8 = pbVar3 + 1;
            }
            FUN_00151a70(param_2,0xfff0b9d8,pbVar8);
            iVar1 = FUN_00150310(param_2,0xffffffff);
            if ((iVar1 == 0) || (iVar1 = FUN_00150750(param_2,0xffffffff,uVar2), iVar1 != 1)) {
              FUN_0014ff10(param_2,0xfffffffe);
              if (*PTR_DAT_0437be00 == '\0') {
LAB_00dfbda4:
                FUN_0014ff10(param_2,0xfffffffe);
              }
              else {
                FUN_00151570(param_2,"class_check");
                FUN_00151d20(param_2,uVar2);
                iVar1 = FUN_00150310(param_2,0xffffffff);
                if (iVar1 == 0) {
                  FUN_0014ff10(param_2,0xfffffffe);
                  goto LAB_00dfbda4;
                }
                pcVar5 = (code *)FUN_001511d0(param_2,0xffffffff);
                FUN_00dfa180();
                uVar6 = (*pcVar5)();
                FUN_0014ff10(param_2,0xfffffffe);
                FUN_0014ff10(param_2,0xfffffffe);
                if ((uVar6 & 1) != 0) goto LAB_00dfbcd8;
              }
              pcVar5 = (code *)*param_5;
              pcVar7 = "value at this index does not properly reflect the desired type";
              param_4 = 7;
              goto LAB_00dfbcf8;
            }
          }
        }
      }
      FUN_0014ff10(param_2,0xfffffffd);
    }
LAB_00dfbcd8:
    uVar4 = 1;
  }
  else {
    pcVar5 = (code *)*param_5;
    pcVar7 = "value is not a valid userdata";
LAB_00dfbcf8:
    (*pcVar5)(param_2,param_3,7,param_4,pcVar7);
    uVar4 = 0;
  }
  return uVar4;
}


