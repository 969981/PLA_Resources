/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01394bc4; name: FUN_01394bc4
 */


void FUN_01394bc4(long *param_1,byte param_2)

{
  undefined1 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int local_138;
  uint local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined1 local_ef;
  char local_e8 [12];
  int local_dc;
  byte local_a3;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [26];
  undefined1 local_72;
  undefined1 local_71;
  
  lVar2 = *param_1;
  iVar3 = 1;
  do {
    iVar4 = 0;
    do {
      FUN_02790540(local_e8,*(undefined8 *)param_1[1],iVar3,iVar4);
      if (local_e8[0] != '\0') {
        if ((local_dc != 2) && (((local_dc == 1 ^ param_2) & 1) != 0)) {
          local_134 = (uint)local_a3;
          uStack_130 = local_94;
          uStack_108 = 0;
          local_128 = 0;
          local_100 = 0;
          uStack_f8 = 0;
          local_f0 = 0;
          local_12c = uStack_90;
          local_110 = (ulong)CONCAT11(local_71,local_72) << 0x10;
          local_120 = 0;
          uStack_118 = 0;
          local_138 = iVar4;
          local_ef = local_dc == 1;
          FUN_02c30580(&local_128,auStack_8c,0xd);
          uVar1 = FUN_01123ce8(*(undefined8 *)param_1[2]);
          uStack_f8._0_7_ = CONCAT16(uVar1,(undefined6)uStack_f8);
          uVar1 = FUN_01123cf0(*(undefined8 *)param_1[2]);
          uStack_f8 = CONCAT17(uVar1,(undefined7)uStack_f8);
          FUN_01123bb4(*(undefined8 *)param_1[2],(long)&local_110 + 4);
          FUN_01394e58(lVar2 + 8,&local_138);
          if (local_e8[0] == '\0') goto LAB_01394c28;
        }
        local_e8[0] = '\0';
      }
LAB_01394c28:
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    iVar3 = iVar3 + 1;
    if (iVar3 == 6) {
      return;
    }
  } while( true );
}


