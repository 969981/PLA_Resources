/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014deea4; name: FUN_014deea4
 */


void FUN_014deea4(undefined8 *param_1)

{
  long *plVar1;
  undefined8 **ppuVar2;
  long lVar3;
  code *pcVar4;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 *apuStack_90 [12];
  undefined1 local_30 [16];
  
  switch(*(undefined4 *)(param_1 + 0xf)) {
  case 1:
    local_b0 = (undefined1 *)0x244fd0f825809cb;
    FUN_027bcf60(param_1 + 0x18,&local_b0);
    lVar3 = param_1[0x12];
    goto LAB_014def70;
  default:
    goto switchD_014deedc_caseD_2;
  case 3:
  case 4:
  case 5:
    plVar1 = (long *)0x0;
    if (param_1[0x13] != 0) {
      plVar1 = (long *)(param_1[0x13] + 0x5b0);
    }
    param_1[0x11] = plVar1;
                    /* WARNING: Could not recover jumptable at 0x014def08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))();
    return;
  case 7:
    local_b0 = (undefined1 *)0x245000f82580ee4;
    break;
  case 8:
    local_b0 = (undefined1 *)0xf64792dafb1c80;
    break;
  case 9:
    plVar1 = (long *)0x0;
    if (param_1[0x14] != 0) {
      plVar1 = (long *)(param_1[0x14] + 0x5b0);
    }
    param_1[0x11] = plVar1;
    (**(code **)(*plVar1 + 0x18))();
    if ((long *)param_1[0xe] == (long *)0x0) {
      return;
    }
    local_30 = (**(code **)(*(long *)param_1[0xe] + 8))();
    local_b0 = &LAB_014df3e4;
    local_a8 = (code *)&LAB_014df524;
    local_a0 = &LAB_014df528;
    apuStack_90[0] = (undefined8 *)local_30;
    local_98 = &LAB_014df534;
    FUN_027bcc74(param_1 + 0x18,&local_b0);
    pcVar4 = local_a8;
    goto joined_r0x014df080;
  case 10:
    local_30._0_8_ = 0xf64892dafb1e33;
    local_b0 = &LAB_014df540;
    local_a8 = FUN_014df550;
    local_a0 = &LAB_014df554;
    local_98 = &LAB_014df560;
    apuStack_90[0] = param_1;
    FUN_027bc868(param_1 + 0x18,local_30,&local_b0);
    pcVar4 = local_a8;
joined_r0x014df080:
    if (pcVar4 == (code *)0x0) {
      return;
    }
    ppuVar2 = apuStack_90;
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    goto LAB_014def88;
  }
  FUN_027bcc14(param_1 + 0x18,&local_b0);
  lVar3 = param_1[0x14];
LAB_014def70:
  ppuVar2 = (undefined8 **)0x0;
  if (lVar3 != 0) {
    ppuVar2 = (undefined8 **)(lVar3 + 0x5b0);
  }
  param_1[0x11] = ppuVar2;
  pcVar4 = (code *)(*ppuVar2)[3];
LAB_014def88:
  (*pcVar4)(ppuVar2);
switchD_014deedc_caseD_2:
  return;
}


