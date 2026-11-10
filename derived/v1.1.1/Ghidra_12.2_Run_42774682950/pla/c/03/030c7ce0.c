/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c7ce0; name: FUN_030c7ce0
 */


void FUN_030c7ce0(long *param_1,undefined8 *param_2,long param_3,ulong param_4,long param_5,
                 uint param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  uint local_38 [2];
  
  lVar4 = *(long *)(*param_1 + 0x78);
  *(uint *)(param_1 + 3) = param_6;
  if (*(char *)(lVar4 + 0x18) == '\x15') {
    plVar5 = (long *)(lVar4 + (ulong)(param_6 >> 0x1d) * 8 + 0x48);
    lVar4 = *plVar5;
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar4 + (long)plVar5;
    }
  }
  param_1[4] = lVar4;
  if ((*(char *)(lVar4 + 0x19) == '\x03') || ((*(byte *)(lVar4 + 0x1a) >> 3 & 1) != 0)) {
    lVar4 = 0;
    if ((*(byte *)(param_3 + 0x95) & 4) != 0) {
      lVar4 = param_3 + 0xc0;
    }
    local_38[0] = param_6;
    if ((lVar4 == 0) || ((param_4 & 1) == 0)) {
      puVar6 = (undefined8 *)param_1[6];
      param_2[0x30] = 0;
      param_2[10] = 0;
      *(undefined4 *)(param_2 + 0x2b) = 0;
      param_2[0x2c] = 8;
      uVar8 = *puVar6;
      param_2[1] = puVar6[1];
      *param_2 = uVar8;
      uVar8 = puVar6[2];
      param_2[3] = puVar6[3];
      param_2[2] = uVar8;
      uVar8 = puVar6[4];
      param_2[5] = puVar6[5];
      param_2[4] = uVar8;
      uVar8 = puVar6[6];
      param_2[7] = puVar6[7];
      param_2[6] = uVar8;
      uVar9 = puVar6[9];
      uVar8 = puVar6[8];
      auVar7 = NEON_fmov(0x3f800000,4);
      param_2[0x2f] = auVar7._8_8_;
      param_2[0x2e] = auVar7._0_8_;
      param_2[9] = uVar9;
      param_2[8] = uVar8;
      local_38[1] = 0x34000000;
      uVar3 = FUN_032c91c4(puVar6,&DAT_03aae430,local_38 + 1);
      if ((uVar3 & 1) != 0) {
        uVar1 = *(uint *)(param_2 + 0x2c);
        *(uint *)(param_2 + 0x2c) = uVar1 | 4;
        if (ABS(*(float *)(puVar6 + 7)) <= 1.1920929e-07 &&
            (ABS(*(float *)(puVar6 + 6)) <= 1.1920929e-07 &&
            ABS(*(float *)((long)puVar6 + 0x34)) <= 1.1920929e-07)) {
          *(uint *)(param_2 + 0x2c) = uVar1 | 5;
        }
      }
      *(undefined2 *)(param_2 + 0x17f) = 0xffff;
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(*param_1 + 0x78) + 0x18) * 0x200 + 0xb8
                  ))(*(long *)(*param_1 + 0x78),local_38,1,param_2);
      if ((*(byte *)(param_2 + 0x2c) >> 4 & 1) == 0) {
        lVar4 = param_2[0x30];
      }
      else {
        lVar4 = FUN_02fed7a0(param_2,0,param_5);
      }
      param_1[5] = lVar4;
      param_1[6] = (long)param_2;
    }
    else {
      FUN_02fda8b8(param_5,lVar4,lVar4 + 0x10,lVar4 + 0x20,lVar4 + 0x30);
      *(undefined4 *)(param_5 + 0x20) = *(undefined4 *)(lVar4 + 0x3c);
      if (*(float *)(lVar4 + 0x2c) == (float)((ulong)*(undefined8 *)(lVar4 + 0x38) >> 0x20) &&
          (*(float *)(lVar4 + 0x28) == (float)*(undefined8 *)(lVar4 + 0x38) &&
          (*(float *)(lVar4 + 0x20) == (float)*(undefined8 *)(lVar4 + 0x30) &&
          *(float *)(lVar4 + 0x24) == (float)((ulong)*(undefined8 *)(lVar4 + 0x30) >> 0x20)))) {
        iVar2 = *(int *)(param_5 + 0x40);
        if (iVar2 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = (long)iVar2 + param_5 + 0x40;
        }
        *(undefined8 *)(lVar4 + 0x24) = *(undefined8 *)(lVar4 + 0x18);
        *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(lVar4 + 0x20);
        *(undefined4 *)(param_5 + 0x44) = 3;
      }
      param_1[5] = param_5;
    }
  }
  else {
    param_1[5] = lVar4;
  }
  return;
}


