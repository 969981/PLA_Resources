/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00371468; name: FUN_00371468
 */


undefined8 FUN_00371468(long param_1,undefined8 param_2,long *param_3,long param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong *puVar7;
  byte *pbVar8;
  long lVar9;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  byte *local_78;
  byte *local_70;
  undefined8 uStack_68;
  byte *local_60;
  ulong local_58;
  
  while (*(int *)(param_4 + 0x28) != 1) {
    uVar6 = FUN_00375a58(param_4,param_3);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)(param_4 + 0xf0) != '\0') {
    return 0;
  }
  if ((*(char *)(param_1 + 0x18) != '\0') ||
     (uVar6 = (**(code **)(*param_3 + 0x30))(param_3), (uVar6 & 1) != 0)) {
    return 1;
  }
  local_70 = (byte *)0x0;
  uStack_68 = 0;
  local_78 = (byte *)0x0;
                    /* try { // try from 003714f0 to 003714fb has its CatchHandler @ 003716c0 */
  FUN_003918e8(param_3,&local_78);
  pbVar4 = local_70;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  if (local_78 != local_70) {
    lVar9 = 0;
    pbVar8 = local_78;
    do {
      if (lVar9 != 0) {
                    /* try { // try from 00371520 to 00371567 has its CatchHandler @ 003716d0 */
        FUN_002e4094(&local_a8,&DAT_0398d5c8,2);
      }
      local_60 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        local_60 = pbVar8 + 1;
      }
      local_58 = (ulong)(*pbVar8 >> 1);
      if ((*pbVar8 & 1) != 0) {
        local_58 = *(ulong *)(pbVar8 + 8);
      }
      FUN_003218f0(&local_a8,&local_60);
      pbVar8 = pbVar8 + 0x18;
      lVar9 = lVar9 + -0x18;
    } while (pbVar8 != pbVar4);
  }
                    /* try { // try from 00371578 to 0037158f has its CatchHandler @ 003716b0 */
  puVar7 = (ulong *)FUN_002e3e88(&local_a8,0,"Message missing required fields: ",0x21);
  uStack_88 = puVar7[1];
  local_90 = *puVar7;
  local_80 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
                    /* try { // try from 003715a8 to 003715bb has its CatchHandler @ 00371674 */
  FUN_0037196c(param_4,0xffffffff,0,&local_90);
  if ((local_90 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
  puVar3 = PTR_LAB_04373088;
  pbVar4 = local_78;
  if ((local_a8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_98);
    puVar3 = PTR_LAB_04373088;
    pbVar4 = local_78;
  }
  if (pbVar4 == (byte *)0x0) {
    PTR_LAB_04373088 = puVar3;
    return 0;
  }
  PTR_LAB_04373088 = puVar3;
  local_78 = pbVar4;
  if (local_70 != pbVar4) {
    bVar1 = local_70[-0x18];
    pbVar5 = local_70 + -0x18;
    pbVar8 = local_70;
    while( true ) {
      pbVar2 = pbVar5;
      if ((bVar1 & 1) != 0) {
        FUN_002e2ea0(puVar3,*(undefined8 *)(pbVar8 + -8));
      }
      if (pbVar4 == pbVar2) break;
      bVar1 = pbVar2[-0x18];
      pbVar5 = pbVar2 + -0x18;
      pbVar8 = pbVar2;
    }
  }
  local_70 = pbVar4;
  FUN_002e2ea0(PTR_LAB_04373088,local_78);
  return 0;
}


