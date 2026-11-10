/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b0654; name: FUN_013b0654
 */


void FUN_013b0654(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined1 auStack_6a0 [712];
  char local_3d8 [8];
  undefined1 auStack_3d0 [792];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  if (*param_2 != 0) {
    iVar1 = FUN_01395ad8(param_1 + 0x120);
    if (iVar1 != 0) {
      iVar3 = 0;
      do {
        FUN_01395b04(local_3d8,param_1 + 0x120,iVar3);
        if ((local_3d8[0] == '\0') || (iVar2 = FUN_0139557c(auStack_3d0), iVar2 == 2)) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        FUN_01395584(auStack_6a0,auStack_3d0);
        FUN_013bc730(&local_710,auStack_6a0);
        local_68 = local_6c0;
        uStack_60 = uStack_6b8;
        local_58 = local_6b0;
        uStack_50 = uStack_6a8;
        local_48 = 0;
        local_88 = local_6e0;
        uStack_80 = uStack_6d8;
        local_78 = local_6d0;
        uStack_70 = uStack_6c8;
        local_a8 = local_700;
        uStack_a0 = uStack_6f8;
        local_98 = local_6f0;
        uStack_90 = uStack_6e8;
        local_b8 = local_710;
        uStack_b0 = uStack_708;
        FUN_013bc258(*param_2 + 0x88,&local_b8);
        if (local_3d8[0] != '\0') {
          FUN_01395560(auStack_3d0);
          local_3d8[0] = '\0';
        }
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
  }
  return;
}


