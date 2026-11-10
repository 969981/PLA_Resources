/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00999b04; name: FUN_00999b04
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00999b04(long param_1)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = 0xa9b9ef40cada2fcd;
  pcStack_38 = "12ROMBattleCircleColor";
  local_30 = 0x1f;
  uStack_48 = _UNK_03888fc8;
  local_50 = _DAT_03888fc0;
  FUN_02ad63b4(&local_40,&local_50);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x45cc0641ced71448;
  pcStack_38 = "12ROMBattleCircleParams";
  local_30 = 0x1f;
  local_28 = (long *)0x0;
  local_50 = CONCAT44(*(undefined4 *)(param_1 + 0x538),*(undefined4 *)(param_1 + 0x530));
  uStack_48 = CONCAT44(*(float *)(param_1 + 0x544) + 0.1,*(float *)(param_1 + 0x544) + -0.1);
  FUN_02ad63b4(local_50,*(undefined4 *)(param_1 + 0x534),&local_40,&local_50);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


