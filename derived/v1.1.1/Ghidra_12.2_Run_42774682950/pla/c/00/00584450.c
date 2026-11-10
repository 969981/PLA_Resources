/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00584450; name: FUN_00584450
 */


uint FUN_00584450(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined **local_60 [4];
  long *local_40;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  uVar3 = FUN_00580600(param_2,&local_28);
  if ((uVar3 & 1) != 0) {
    FUN_00582164(param_1,&local_28);
    uVar2 = 1;
    goto LAB_00584534;
  }
  local_60[0] = &PTR_LAB_04189d78;
                    /* try { // try from 005844ac to 005844bb has its CatchHandler @ 00584580 */
  local_40 = (long *)local_60;
  (**(code **)PTR_DAT_04374e48)(&local_30,param_2,local_60);
  if (local_60 == (undefined ***)local_40) {
    pcVar4 = *(code **)(*local_40 + 0x20);
LAB_005844e0:
    (*pcVar4)();
  }
  else if (local_40 != (long *)0x0) {
    pcVar4 = *(code **)(*local_40 + 0x28);
    goto LAB_005844e0;
  }
  if (local_30 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
                    /* try { // try from 005844ec to 005844f7 has its CatchHandler @ 00584548 */
    uVar2 = FUN_00583594(param_1,param_2);
    puVar1 = local_30;
    local_30 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      FUN_002e2ea0(PTR_LAB_04373088,puVar1);
    }
  }
LAB_00584534:
  return uVar2 & 1;
}


