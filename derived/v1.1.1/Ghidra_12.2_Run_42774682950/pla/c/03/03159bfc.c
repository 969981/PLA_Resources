/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03159bfc; name: FUN_03159bfc
 */


void FUN_03159bfc(char *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*param_1 != '\0') {
    local_38 = param_2[3];
    uStack_48 = param_2[1];
    local_50 = *param_2;
    local_40 = param_2[2];
    FUN_03159c80(param_1,&local_50);
    FUN_03159c80(param_1,&local_40);
    auVar1._8_8_ = uStack_48;
    auVar1._0_8_ = local_50;
    auVar3._8_8_ = uStack_48;
    auVar3._0_8_ = local_50;
    auVar2._8_8_ = local_38;
    auVar2._0_8_ = local_40;
    auVar4 = NEON_fmin(auVar3,auVar2,4);
    auVar3 = NEON_fmax(auVar1,auVar2,4);
    param_2[1] = auVar4._8_8_;
    *param_2 = auVar4._0_8_;
    param_2[3] = auVar3._8_8_;
    param_2[2] = auVar3._0_8_;
  }
  return;
}


