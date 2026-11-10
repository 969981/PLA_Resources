/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edebc0; name: FUN_02edebc0
 */


void FUN_02edebc0(long param_1)

{
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0xff;
  local_40 = 0xff;
  FUN_02edec68(param_1,&local_60);
  FUN_02edef28((undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = &PTR_LAB_042aaa78;
  return;
}


