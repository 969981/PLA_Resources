/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147f78c; name: FUN_0147f78c
 */


void FUN_0147f78c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  puVar2 = (undefined1 *)*param_2;
  if ((puVar2 != &DAT_cbf29ce484222645) && (puVar2 != *(undefined1 **)(param_1 + 0x5b8))) {
    if ((*(byte *)(param_1 + 0x5b0) & 0xf) != 0) {
      FUN_00d73864(param_1);
      *(undefined1 **)(param_1 + 0x5b8) = &DAT_cbf29ce484222645;
      *(ulong *)(param_1 + 0x5b0) = *(ulong *)(param_1 + 0x5b0) & 0xfffffffffffffff0;
      FUN_00d42690(param_1,0,1);
      puVar2 = (undefined1 *)*param_2;
    }
    *(undefined1 **)(param_1 + 0x5b8) = puVar2;
    FUN_0147f8ec(param_1,param_2);
    uVar1 = FUN_00d7380c(param_1,1);
    if ((uVar1 & 1) != 0) {
      FUN_00d73864(param_1);
    }
    FUN_00d42690(param_1,1,1);
    *(ulong *)(param_1 + 0x5b0) = *(ulong *)(param_1 + 0x5b0) | 3;
    local_50 = 0x994cd76cf26dfc40;
    pcStack_48 = "anime_wake";
    local_40 = 10;
    local_38 = (long *)0x0;
    FUN_00d2df7c(param_1 + 0x180,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x3b758d8885fad36b;
    pcStack_48 = "PLAY_UI_COMMON_HUD_AREANAME";
    local_40 = 0x1b;
    local_38 = (long *)0x0;
    FUN_028354b0(&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


