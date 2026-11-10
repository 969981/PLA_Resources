/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee2440; name: FUN_02ee2440
 */


undefined1  [16] FUN_02ee2440(long *param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 extraout_s0;
  undefined4 uVar10;
  undefined4 extraout_var;
  undefined8 uVar11;
  undefined8 extraout_var_00;
  undefined1 auVar9 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  uint local_28;
  undefined4 local_24;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar8 = 0;
  uVar10 = 0;
  uVar11 = 0;
  if (uVar2 != 0) {
    uVar1 = (int)param_2 + 0x3a;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    for (plVar5 = *(long **)(param_1[3] + (ulong)(uVar1 - uVar3 * uVar2) * 8); plVar5 != (long *)0x0
        ; plVar5 = (long *)plVar5[2]) {
      if ((*plVar5 == param_2) && ((int)plVar5[1] == 0x3a)) {
        if ((int)plVar5[0xb] != 0) {
          local_60 = *param_3;
          uStack_58 = param_3[1];
          local_50 = param_3[2];
          uStack_48 = param_3[3];
          local_40 = param_3[4];
          uStack_38 = param_3[5];
          lVar7 = plVar5[10];
          uVar2 = *(uint *)(lVar7 + 4);
          uVar1 = *(uint *)(param_1 + 1);
          if (uVar1 == 0) goto LAB_02ee2500;
          uVar3 = 0;
          if (uVar1 != 0) {
            uVar3 = uVar2 / uVar1;
          }
          puVar6 = *(uint **)(*param_1 + (ulong)(uVar2 - uVar3 * uVar1) * 8);
          goto joined_r0x02ee24e8;
        }
        break;
      }
    }
  }
  goto LAB_02ee2568;
joined_r0x02ee24e8:
  if (puVar6 == (uint *)0x0) goto LAB_02ee2500;
  if (*puVar6 == uVar2) {
    puVar6 = (uint *)FUN_02eb14e4(0,puVar6 + 8,&local_60);
    if (puVar6 == (uint *)0x0) goto LAB_02ee257c;
    local_28 = *puVar6;
    goto LAB_02ee254c;
  }
  puVar6 = *(uint **)(puVar6 + 2);
  goto joined_r0x02ee24e8;
LAB_02ee2500:
  if (((int)plVar5[9] != 1) &&
     ((((int)plVar5[1] == 7 || ((int)plVar5[1] == 0)) &&
      (uVar4 = FUN_02ec5b20(DAT_0440a180,uVar2), (uVar4 & 1) != 0)))) {
    uVar8 = 0;
    uVar10 = 0;
    uVar11 = 0;
    goto LAB_02ee2568;
  }
  uVar4 = FUN_02ec5abc(DAT_0440a180,uVar2,&local_60,&local_28);
  if ((uVar4 & 1) == 0) {
LAB_02ee257c:
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 != 0) {
      uVar1 = *(uint *)(lVar7 + 4);
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      puVar6 = *(uint **)(*param_1 + (ulong)(uVar1 - uVar3 * uVar2) * 8);
      if (puVar6 != (uint *)0x0) {
        local_28 = 0;
        do {
          if (*puVar6 == uVar1) {
            local_28 = puVar6[4];
            break;
          }
          puVar6 = *(uint **)(puVar6 + 2);
        } while (puVar6 != (uint *)0x0);
        goto LAB_02ee254c;
      }
    }
    local_28 = 0;
  }
LAB_02ee254c:
  local_24 = *(undefined4 *)(lVar7 + 0x18);
  FUN_02e74568(local_28,lVar7 + 8,&local_24);
  *(undefined4 *)(lVar7 + 0x18) = local_24;
  uVar8 = extraout_s0;
  uVar10 = extraout_var;
  uVar11 = extraout_var_00;
LAB_02ee2568:
  auVar9._4_4_ = uVar10;
  auVar9._0_4_ = uVar8;
  auVar9._8_8_ = uVar11;
  return auVar9;
}


