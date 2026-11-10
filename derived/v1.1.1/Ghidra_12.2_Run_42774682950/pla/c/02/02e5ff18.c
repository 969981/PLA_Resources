/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5ff18; name: FUN_02e5ff18
 */


void FUN_02e5ff18(long param_1,undefined8 *param_2,long *param_3,uint param_4,long *param_5)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **local_c0 [6];
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_70;
  float fStack_6c;
  float local_68;
  
  nn::os::GetSystemTick();
  uVar1 = *(uint *)(param_3 + 1);
  if (uVar1 == 0) {
    lVar4 = param_3[6];
  }
  else {
    lVar4 = ((undefined8 *)*param_3)[(ulong)(uVar1 - 1) * 10 + 6];
    lVar3 = (ulong)uVar1 * 0x50;
    puVar5 = (undefined8 *)*param_3;
    do {
      (**(code **)*puVar5)(puVar5);
      lVar3 = lVar3 + -0x50;
      puVar5 = puVar5 + 10;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if ((int)param_3[4] != 0) {
    uVar6 = 0;
    do {
      lVar3 = param_3[3];
      plVar2 = *(long **)(lVar3 + uVar6 * 8);
      if (plVar2 != (long *)0x0) {
        do {
          plVar2 = (long *)*plVar2;
          FUN_02f59e60(0xb);
        } while (plVar2 != (long *)0x0);
        lVar3 = param_3[3];
      }
      *(undefined8 *)(lVar3 + uVar6 * 8) = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_3 + 4));
  }
  *(undefined4 *)(param_3 + 5) = 0;
  (**(code **)(*param_5 + 0x10))(param_5);
  auVar9 = NEON_fmov(0x3f800000,4);
  uVar10 = auVar9._8_8_;
  uVar8 = auVar9._0_8_;
  do {
    (**(code **)(*param_5 + 0x18))(&local_70,param_5);
    fVar7 = *(float *)(param_1 + 0x18);
    local_70 = local_70 * fVar7;
    fStack_6c = fStack_6c * fVar7;
    local_68 = local_68 * fVar7;
    local_90 = param_3[6];
    param_3[6] = local_90 + 1;
    local_c0[0] = &PTR_LAB_042a5f70;
    local_88 = 0;
    uStack_80 = 0;
    local_e0 = CONCAT44(fStack_6c,local_70);
    uStack_d0 = *param_2;
    uStack_d8 = (ulong)(uint)local_68;
    uStack_c8 = CONCAT44((int)((ulong)uVar10 >> 0x20),*(undefined4 *)(param_2 + 1));
    FUN_02e60188(param_1,&uStack_d0,&local_e0,param_2,param_3,1,local_c0,param_5,uVar8,uVar10);
  } while ((ulong)(param_3[6] - lVar4) <= (ulong)param_4);
  return;
}


