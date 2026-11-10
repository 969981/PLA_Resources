/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003712c8; name: FUN_003712c8
 */


uint FUN_003712c8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined *local_148;
  undefined8 *puStack_140;
  undefined1 auStack_138 [164];
  undefined1 local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  uint local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_74;
  undefined1 local_70;
  
  (**(code **)(*param_3 + 0x28))(param_3);
  bVar2 = *(byte *)((long)param_1 + 0x1f);
  uVar11 = (**(code **)(*param_3 + 0x98))(param_3);
  uStack_158 = param_1[1];
  local_160 = *param_1;
  local_150 = param_1[2];
  cVar3 = *(char *)((long)param_1 + 0x1e);
  uVar4 = *(undefined1 *)((long)param_1 + 0x19);
  uVar5 = *(undefined1 *)((long)param_1 + 0x1a);
  uVar6 = *(undefined1 *)((long)param_1 + 0x1b);
  uVar7 = *(undefined1 *)((long)param_1 + 0x1c);
  uVar8 = *(undefined1 *)((long)param_1 + 0x1d);
  uVar9 = *(undefined1 *)(param_1 + 3);
  uVar1 = *(undefined4 *)(param_1 + 4);
  puStack_140 = &local_160;
  local_148 = PTR_DAT_04373c60 + 0x10;
                    /* try { // try from 0037136c to 0037137b has its CatchHandler @ 00371454 */
  FUN_0039f178(auStack_138,param_2);
  local_80 = bVar2 ^ 1;
  local_94 = 1;
  local_90 = 1;
  local_70 = 0;
  if (cVar3 != '\0') {
    local_8c = 0x100;
  }
                    /* try { // try from 003713c8 to 003713cf has its CatchHandler @ 00371438 */
  local_88 = uVar11;
  local_7c = uVar4;
  local_7b = uVar5;
  local_7a = uVar6;
  local_79 = uVar7;
  local_78 = uVar8;
  local_77 = uVar9;
  local_74 = uVar1;
  FUN_003a0640(auStack_138);
                    /* try { // try from 003713d0 to 003713e3 has its CatchHandler @ 0037141c */
  uVar10 = FUN_00371468(param_1,extraout_x1,param_3,&local_160);
  FUN_0039f2c8(auStack_138);
  FUN_0039f174(&local_148);
  return uVar10 & 1;
}


