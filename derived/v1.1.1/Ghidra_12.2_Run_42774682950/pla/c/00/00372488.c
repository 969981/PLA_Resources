/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00372488; name: FUN_00372488
 */


bool FUN_00372488(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined *local_48;
  long *local_40;
  undefined8 uStack_38;
  int local_30;
  undefined2 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = *param_1;
  uStack_38 = 0;
  local_30 = 0;
  puVar1 = PTR_DAT_04373c68 + 0x10;
  local_2c = 1;
                    /* try { // try from 003724bc to 003724c3 has its CatchHandler @ 00372508 */
  local_48 = puVar1;
  local_40 = param_3;
  uStack_24 = local_28;
  FUN_00372540(param_1,param_2,&local_48);
  cVar2 = local_2c._1_1_;
  if ((local_2c._1_1_ == '\0') && (0 < local_30)) {
    local_48 = puVar1;
                    /* try { // try from 003724e8 to 003724eb has its CatchHandler @ 00372504 */
    (**(code **)(*local_40 + 0x18))();
  }
  return cVar2 == '\0';
}


