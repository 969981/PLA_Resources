/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0139462c; name: FUN_0139462c
 */


void FUN_0139462c(long *param_1,byte param_2)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int local_bc8;
  uint uStack_bc4;
  undefined4 local_bc0;
  undefined4 uStack_bbc;
  undefined8 local_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined8 local_ba0;
  undefined8 uStack_b98;
  undefined8 local_b90;
  undefined8 uStack_b88;
  undefined1 local_b80;
  undefined1 local_b7f;
  char local_b78 [16];
  int local_b68;
  byte local_b2f;
  undefined4 local_b20;
  undefined4 uStack_b1c;
  undefined1 auStack_b18 [26];
  undefined2 local_afe;
  
  lVar1 = *param_1;
  uVar4 = FUN_027884b0(*(undefined8 *)param_1[1]);
  if (uVar4 != 0) {
    uVar5 = 1;
    do {
      FUN_02788704(local_b78,*(undefined8 *)param_1[1],uVar5 - 1);
      if (local_b78[0] != '\0') {
        if ((local_b68 != 3) && (((local_b68 == 2 ^ param_2) & 1) != 0)) {
          local_bb8 = 0;
          local_b80 = 1;
          local_b90 = 0;
          uStack_b88 = 0;
          local_bc0 = local_b20;
          uStack_bbc = uStack_b1c;
          uStack_bc4 = (uint)local_b2f;
          local_ba0 = 0;
          uStack_b98 = 0;
          local_bb0 = 0;
          uStack_ba8 = 0;
          local_bc8 = uVar5 - 1;
          local_b7f = local_b68 == 2;
          uVar3 = FUN_01123ce8(*(undefined8 *)param_1[2]);
          local_ba0._0_3_ = CONCAT12(uVar3,(undefined2)local_ba0);
          uVar3 = FUN_01123cf0(*(undefined8 *)param_1[2]);
          local_ba0._0_4_ = CONCAT13(uVar3,(undefined3)local_ba0);
          FUN_01123bb4(*(undefined8 *)param_1[2],&local_bb8);
          uStack_b88 = CONCAT26(local_afe,(undefined6)uStack_b88);
          FUN_02c30580((long)&local_ba0 + 4,auStack_b18,0xd);
          FUN_01394e58(lVar1 + 8,&local_bc8);
          if (local_b78[0] == '\0') goto LAB_01394778;
        }
        local_b78[0] = '\0';
      }
LAB_01394778:
    } while ((uVar5 < uVar4) && (bVar2 = uVar5 < 0x14, uVar5 = uVar5 + 1, bVar2));
  }
  return;
}


