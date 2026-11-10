/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b1f4ec; name: FUN_00b1f4ec
 */


void FUN_00b1f4ec(long param_1)

{
  undefined8 uVar1;
  long *local_60 [4];
  long *local_40;
  char *local_28;
  
  if (*(char *)(param_1 + 0x100) == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 8);
    local_28 = "bin/chara/table/biped_ik_link_joint_table.bin";
    FUN_009f1b84(local_60,&local_28);
    FUN_00938764(param_1 + 0x68,0,local_60,0,uVar1,0);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
    if (local_60[0] != (long *)0x0) {
      (**(code **)(*local_60[0] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x100) = 1;
    FUN_00b1f594(param_1);
  }
  return;
}


