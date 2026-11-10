/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00351814; name: FUN_00351814
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00351814(long param_1,long param_2,int param_3)

{
  byte *pbVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong local_70;
  undefined8 uStack_68;
  char *local_60;
  
  local_60 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  uVar6 = s_File_recursively_imports_itself__038dac91._24_8_;
  uVar5 = s_File_recursively_imports_itself__038dac91._16_8_;
  uVar4 = s_File_recursively_imports_itself__038dac91._8_8_;
  uVar3 = s_File_recursively_imports_itself__038dac91._0_8_;
  uStack_68 = _UNK_03889b68;
  local_70 = _DAT_03889b60;
  local_60[0x21] = '\0';
  local_60[0x20] = ' ';
  *(undefined8 *)(local_60 + 8) = uVar4;
  *(undefined8 *)local_60 = uVar3;
  *(undefined8 *)(local_60 + 0x18) = uVar6;
  *(undefined8 *)(local_60 + 0x10) = uVar5;
  plVar7 = *(long **)(param_1 + 8);
  uVar9 = (ulong)param_3;
  if (uVar9 < (ulong)((plVar7[1] - *plVar7 >> 3) * -0x5555555555555555)) {
    lVar10 = uVar9 * 0x18;
    uVar11 = uVar9;
    do {
      pbVar1 = (byte *)(*plVar7 + lVar10);
      uVar2 = *(ulong *)(pbVar1 + 8);
      pbVar8 = *(byte **)(pbVar1 + 0x10);
      if ((*pbVar1 & 1) == 0) {
        pbVar8 = pbVar1 + 1;
        uVar2 = (ulong)(*pbVar1 >> 1);
      }
                    /* try { // try from 003518d0 to 003518e7 has its CatchHandler @ 003519d0 */
      FUN_002e4094(&local_70,pbVar8,uVar2);
      FUN_002e4094(&local_70,&DAT_03953789,4);
      plVar7 = *(long **)(param_1 + 8);
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x18;
    } while (uVar11 < (ulong)((plVar7[1] - *plVar7 >> 3) * -0x5555555555555555));
  }
  pbVar8 = *(byte **)(param_2 + 0xb0);
  uVar11 = *(ulong *)(pbVar8 + 8);
  pbVar1 = *(byte **)(pbVar8 + 0x10);
  if ((*pbVar8 & 1) == 0) {
    pbVar1 = pbVar8 + 1;
    uVar11 = (ulong)(*pbVar8 >> 1);
  }
                    /* try { // try from 00351928 to 003519bb has its CatchHandler @ 003519c0 */
  FUN_002e4094(&local_70,pbVar1,uVar11);
  lVar10 = **(long **)(param_1 + 8);
  if (uVar9 < ((*(long **)(param_1 + 8))[1] - lVar10 >> 3) * -0x5555555555555555 - 1U) {
    FUN_0034db00(param_1,lVar10 + (long)(param_3 + 1) * 0x18,param_2,9,&local_70);
  }
  else {
    FUN_0034db00(param_1,*(undefined8 *)(param_2 + 0xb0),param_2,9,&local_70);
  }
  if ((local_70 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
  return;
}


