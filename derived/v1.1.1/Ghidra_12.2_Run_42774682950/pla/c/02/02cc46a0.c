/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc46a0; name: FUN_02cc46a0
 */


void FUN_02cc46a0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 local_48;
  char *local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined2 local_2c;
  long local_28;
  
  if (DAT_04408b90 == 0) {
    DAT_04408b90 = param_1;
    local_28 = param_1;
    FUN_02daa960(param_1,0x10000);
    DAT_04407ce0 = param_2[2];
    DAT_04407cd0 = *param_2;
    DAT_04407cd8 = param_2[1];
    DAT_04407cc8 = param_1;
    DAT_04408908 = param_1;
    DAT_04408ad0 = param_1;
    DAT_04408ad8 = param_1;
    nn::account::GetUserId((Uid *)&DAT_04407ce8,(UserHandle *)&DAT_04407cd0);
    DAT_04408ab0 = *(undefined2 *)(param_2 + 3);
    DAT_044089c8 = param_1;
    DAT_04408a50 = param_1;
    plVar1 = (long *)FUN_027812ec();
    lVar2 = *plVar1;
    *(long *)PTR_DAT_0437b478 = lVar2;
    if (lVar2 == 0) {
      FUN_02cc47c8(param_1,&local_28);
    }
    plVar1 = (long *)FUN_013b2b18();
    lVar2 = *plVar1;
    *(long *)PTR_DAT_0437b480 = lVar2;
    if (lVar2 == 0) {
      FUN_02cc4a8c(local_28,&local_28);
    }
    local_48 = 0x1b1170ee4dc66d59;
    local_40 = "beacon";
    uStack_38 = 6;
    local_30 = 0x20000;
    local_2c = 2;
    FUN_02da29b0(&local_48);
  }
  return;
}


