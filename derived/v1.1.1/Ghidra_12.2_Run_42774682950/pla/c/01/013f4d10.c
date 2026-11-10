/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f4d10; name: FUN_013f4d10
 */


void FUN_013f4d10(long param_1,int param_2)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  lVar1 = param_1 + 0x180;
  if (param_2 == 0) {
    FUN_00d42690(param_1,1,1);
    FUN_013e1dd8(lVar1);
    local_40 = 0x35c47871346bd963;
    pcStack_38 = "anime_page_in";
    local_30 = 0xd;
    local_28 = (long *)0x0;
    FUN_00d2df7c(lVar1,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    FUN_013ee5d0(*(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x68),0);
    *(undefined1 *)(param_1 + 0xc24) = 0;
    FUN_013f539c(param_1);
    *(undefined2 *)(param_1 + 0x6e8) = 0x101;
  }
  else {
    FUN_013e1dd8(lVar1);
    local_40 = 0xb9ef675c0ba05f50;
    pcStack_38 = "anime_page_out";
    local_30 = 0xe;
    local_28 = (long *)0x0;
    FUN_00d2df7c(lVar1,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    FUN_01363394(*(undefined8 *)(param_1 + 0x5b8));
  }
  return;
}


