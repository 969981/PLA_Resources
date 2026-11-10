/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e20a74; name: FUN_02e20a74
 */


undefined8 FUN_02e20a74(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  char local_48 [8];
  undefined8 local_40;
  char local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  
  if ((*(char *)(*(long *)(param_1 + 0x10) + 0x20) != '\0') && (*(char *)(param_1 + 0x49) == '\0'))
  {
    plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
    if (plVar3 != (long *)0x0) {
      local_30 = CONCAT44(0xffffffff,(undefined4)local_30);
      local_48[0] = '\0';
      local_48[1] = '\0';
      local_48[2] = '\0';
      local_48[3] = '\0';
      local_48[4] = '\x01';
      local_48[5] = '\0';
      local_48[6] = '\0';
      local_48[7] = '\0';
      local_30 = local_30 & 0xffffffffffffff00;
      puVar1 = (undefined8 *)(param_1 + 0x28);
      local_38[0] = '\0';
      local_38[1] = '\0';
      local_38[2] = '\0';
      local_38[3] = '\0';
      local_38[4] = '\0';
      local_38[5] = '\0';
      local_38[6] = '\0';
      local_38[7] = '\0';
      local_40 = (ulong)local_40._4_4_ << 0x20;
      iVar2 = (**(code **)(*plVar3 + 0x20))
                        (plVar3,*(long *)(param_1 + 0x10) + 0x20,local_48,2,puVar1,0);
      if (iVar2 == 1) {
        uVar4 = FUN_02e22878(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                             *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                             *(undefined2 *)(*(long *)(param_1 + 0x10) + 0x1c));
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        (**(code **)(*(long *)*puVar1 + 0x10))();
        *puVar1 = 0;
      }
    }
    local_48[0] = s_Recorder__Cannot_create_output_f_0398bc59[0];
    local_48[1] = s_Recorder__Cannot_create_output_f_0398bc59[1];
    local_48[2] = s_Recorder__Cannot_create_output_f_0398bc59[2];
    local_48[3] = s_Recorder__Cannot_create_output_f_0398bc59[3];
    local_48[4] = s_Recorder__Cannot_create_output_f_0398bc59[4];
    local_48[5] = s_Recorder__Cannot_create_output_f_0398bc59[5];
    local_48[6] = s_Recorder__Cannot_create_output_f_0398bc59[6];
    local_48[7] = s_Recorder__Cannot_create_output_f_0398bc59[7];
    local_40._0_1_ = s_Recorder__Cannot_create_output_f_0398bc59[8];
    local_40._1_1_ = s_Recorder__Cannot_create_output_f_0398bc59[9];
    local_40._2_1_ = s_Recorder__Cannot_create_output_f_0398bc59[10];
    local_40._3_1_ = s_Recorder__Cannot_create_output_f_0398bc59[0xb];
    local_40._4_1_ = s_Recorder__Cannot_create_output_f_0398bc59[0xc];
    local_40._5_1_ = s_Recorder__Cannot_create_output_f_0398bc59[0xd];
    local_40._6_1_ = s_Recorder__Cannot_create_output_f_0398bc59[0xe];
    local_40._7_1_ = s_Recorder__Cannot_create_output_f_0398bc59[0xf];
    local_38[0] = s_Recorder__Cannot_create_output_f_0398bc59[0x10];
    local_38[1] = s_Recorder__Cannot_create_output_f_0398bc59[0x11];
    local_38[2] = s_Recorder__Cannot_create_output_f_0398bc59[0x12];
    local_38[3] = s_Recorder__Cannot_create_output_f_0398bc59[0x13];
    local_38[4] = s_Recorder__Cannot_create_output_f_0398bc59[0x14];
    local_38[5] = s_Recorder__Cannot_create_output_f_0398bc59[0x15];
    local_38[6] = s_Recorder__Cannot_create_output_f_0398bc59[0x16];
    local_38[7] = s_Recorder__Cannot_create_output_f_0398bc59[0x17];
    local_30._0_1_ = s_Recorder__Cannot_create_output_f_0398bc59[0x18];
    local_30._1_1_ = s_Recorder__Cannot_create_output_f_0398bc59[0x19];
    local_30._2_1_ = s_Recorder__Cannot_create_output_f_0398bc59[0x1a];
    local_30._3_1_ = s_Recorder__Cannot_create_output_f_0398bc59[0x1b];
    local_30._4_1_ = s_Recorder__Cannot_create_output_f_0398bc59[0x1c];
    local_30._5_1_ = s_Recorder__Cannot_create_output_f_0398bc59[0x1d];
    local_30._6_1_ = s_Recorder__Cannot_create_output_f_0398bc59[0x1e];
    local_30._7_1_ = s_Recorder__Cannot_create_output_f_0398bc59[0x1f];
    local_28 = 0x656c69;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x48))(*(long **)(param_1 + 0x18),local_48,2);
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  return 0;
}


