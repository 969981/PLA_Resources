/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005aa3d0; name: FUN_005aa3d0
 */


undefined8 FUN_005aa3d0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong local_68;
  undefined *puStack_60;
  ulong local_50;
  ulong uStack_48;
  undefined1 *local_40;
  ulong local_30;
  undefined *puStack_28;
  ulong local_20;
  undefined *puStack_18;
  
  uStack_48 = 0;
  local_40 = (undefined1 *)0x0;
  local_50 = 0;
  if (param_1 == param_2) {
    puStack_60 = PTR_FUN_04373818;
                    /* try { // try from 005aa3f4 to 005aa40f has its CatchHandler @ 005aa51c */
    local_68 = param_1;
    FUN_002e6390(&local_30,&DAT_038aa48e,3,&local_68,1);
    if ((local_50 & 1) != 0) {
      *local_40 = 0;
      uStack_48 = 0;
      if ((local_50 & 1) == 0) {
        puVar3 = &local_30;
        goto LAB_005aa4b0;
      }
      puVar3 = &local_30;
LAB_005aa49c:
      uStack_48 = 0;
      FUN_002e2ea0(PTR_LAB_04373088,local_40);
      local_50 = 0;
      goto LAB_005aa4b0;
    }
    puVar3 = &local_30;
  }
  else {
    puStack_28 = PTR_FUN_04373818;
    puStack_18 = PTR_FUN_04373818;
                    /* try { // try from 005aa428 to 005aa443 has its CatchHandler @ 005aa50c */
    local_30 = param_1;
    local_20 = param_2;
    FUN_002e6390(&local_68,"%ld -> %ld",10,&local_30,2);
    if ((local_50 & 1) != 0) {
      *local_40 = 0;
      uStack_48 = 0;
      if ((local_50 & 1) == 0) {
        puVar3 = &local_68;
        goto LAB_005aa4b0;
      }
      puVar3 = &local_68;
      goto LAB_005aa49c;
    }
    puVar3 = &local_68;
  }
  local_50 = local_50 & 0xffffffffffff0000;
LAB_005aa4b0:
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  local_40 = (undefined1 *)puVar3[2];
  uVar1 = (ulong)&local_50 | 1;
  if ((*puVar3 & 1) != 0) {
    uVar1 = (ulong)local_40;
  }
                    /* try { // try from 005aa4d4 to 005aa4df has its CatchHandler @ 005aa52c */
  uVar2 = FUN_002ec960(uVar1,0x20,0x1e);
  if ((local_50 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_40);
  }
  return uVar2;
}


