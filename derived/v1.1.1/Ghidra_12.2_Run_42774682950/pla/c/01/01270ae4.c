/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01270ae4; name: FUN_01270ae4
 */


void FUN_01270ae4(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  cVar1 = *(char *)(param_1 + 0x924);
  if (cVar1 == '\x01') {
    local_40 = 0xda74cfea38becf9f;
    pcStack_38 = "anime_list_out";
    local_30 = 0xe;
    local_28 = (long *)0x0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      uVar2 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
      if ((uVar2 & 1) == 0) {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x924) = 2;
  }
  else if (cVar1 == '\x03') {
    local_40 = 0x5deb53e286553cde;
    pcStack_38 = "anime_list_in";
    local_30 = 0xd;
    local_28 = (long *)0x0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      uVar2 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
      if ((uVar2 & 1) == 0) {
        return;
      }
    }
    FUN_00d42438(param_1,1,1);
    *(undefined1 *)(param_1 + 0x924) = 0;
  }
  else if (cVar1 == '\x02') {
    FUN_01270c54(param_1,1);
    FUN_0126be58(param_1 + 0x948,*(undefined1 *)(param_1 + 0x904),param_1 + 0x9c8);
    local_40 = 0x5deb53e286553cde;
    pcStack_38 = "anime_list_in";
    local_30 = 0xd;
    local_28 = (long *)0x0;
    FUN_00d2df7c(param_1 + 0x180,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x924) = 3;
  }
  return;
}


