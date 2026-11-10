/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131300c; name: FUN_0131300c
 */


void FUN_0131300c(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_3 + 0x5c0);
  uVar1 = *(undefined4 *)(lVar3 + 0x84);
  uVar5 = *(undefined8 *)(lVar3 + 0x78);
  lVar3 = *(long *)(lVar3 + 0x198);
  iVar2 = FUN_0131afa4(param_3,uVar1,0x14);
  if (iVar2 == 0) {
    *(undefined1 *)(lVar3 + 0x1430) = 0;
    lVar4 = *(long *)(lVar3 + 0x13a0);
    *(undefined8 *)(lVar3 + 0x1460) = 0;
    *(undefined8 *)(lVar3 + 0x1458) = 0;
    *(undefined8 *)(lVar3 + 0x1450) = 0;
    *(undefined8 *)(lVar3 + 0x1448) = 0;
    *(undefined8 *)(lVar3 + 0x1440) = 0;
    *(undefined8 *)(lVar3 + 0x1438) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined4 *)(lVar4 + 0x38) = 0;
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
    lVar4 = *(long *)(lVar3 + 0x13a0);
    *(undefined8 *)(lVar4 + 0x3c) = 0;
    *(undefined4 *)(lVar4 + 0x44) = 0;
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
    *(byte *)(*(long *)(lVar3 + 0x13a0) + 0x58) = *(byte *)(*(long *)(lVar3 + 0x13a0) + 0x58) & 0xfe
    ;
    lVar4 = *(long *)(lVar3 + 0x13a8);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(undefined4 *)(lVar4 + 0x38) = 0;
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
      lVar4 = *(long *)(lVar3 + 0x13a8);
      *(undefined4 *)(lVar4 + 0x44) = 0;
      *(undefined8 *)(lVar4 + 0x3c) = 0;
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
      *(byte *)(*(long *)(lVar3 + 0x13a8) + 0x58) =
           *(byte *)(*(long *)(lVar3 + 0x13a8) + 0x58) & 0xfe;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x13b8);
      *(undefined8 *)(lVar3 + 0x13a8) = 0;
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        *(undefined8 *)(lVar3 + 0x13c8) = 0;
        *(undefined8 *)(lVar3 + 0x13c0) = 0;
        *(undefined8 *)(lVar3 + 0x13b8) = 0;
        *(undefined8 *)(lVar3 + 0x13b0) = 0;
                    /* WARNING: Could not recover jumptable at 0x01313130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(lVar3 + 0x13d0);
        return;
      }
    }
  }
  else {
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0xb;
    uStack_58 = 0;
    fVar6 = (float)FUN_0131ac1c(uVar5,uVar1);
    if (*(char *)(param_3 + 0x1e08) == '\0') {
      fVar8 = *(float *)(param_3 + 0x1e30);
      fVar7 = *(float *)(param_3 + 0xd64);
      fVar9 = *(float *)(param_3 + 0xd60) +
              ((((fVar6 + 1000.0) / 2000.0) * 936.0 + -468.0) - *(float *)(param_3 + 0xd60)) * fVar8
      ;
      fVar6 = (((param_2 + -1027.0) / 2000.0) * 936.0 + 495.0) - fVar7;
    }
    else {
      fVar9 = *(float *)(param_3 + 0x1e28) + *(float *)(param_3 + 0xd60);
      fVar7 = *(float *)(param_3 + 0x1e2c) + *(float *)(param_3 + 0xd64);
      fVar8 = *(float *)(param_3 + 0x1e30);
      fVar9 = fVar9 + fVar8 * ((fVar6 + *(float *)(param_3 + 0x1e28)) - fVar9);
      fVar6 = (param_2 + *(float *)(param_3 + 0x1e2c)) - fVar7;
    }
    uStack_58 = CONCAT44(uStack_58._4_4_,fVar7 + fVar6 * fVar8);
    local_60._0_3_ = CONCAT21(0x202,(char)local_60);
    local_60 = CONCAT53((int5)(((ulong)(uint)fVar9 << 0x20) >> 0x18),(undefined3)local_60);
    FUN_013065d0(lVar3,0x18,&local_60);
  }
  return;
}


