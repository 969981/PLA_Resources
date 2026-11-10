/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cce28; name: FUN_013cce28
 */


void FUN_013cce28(long param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  uVar1 = FUN_013ccf18();
  if ((uVar1 & 1) != 0) {
    if (*(char *)(param_1 + 0x704) == '\0') {
      local_50 = 0xc87032f5d865cc01;
      pcStack_48 = "anime_record_in";
      local_40 = 0xf;
      local_38 = (long *)0x0;
      FUN_00d2df7c(param_1 + 0x180,&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      uVar3 = 0;
      uVar2 = 1;
    }
    else {
      local_50 = 0xc61918be958456e2;
      pcStack_48 = "anime_record_out";
      local_40 = 0x10;
      local_38 = (long *)0x0;
      FUN_00d2df7c(param_1 + 0x180,&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      uVar2 = 0;
      uVar3 = 1;
    }
    FUN_013c8c28(param_1,uVar2);
    FUN_013ccdd8(param_1,uVar3);
    *(undefined1 *)(param_1 + 0x704) = uVar2;
  }
  return;
}


