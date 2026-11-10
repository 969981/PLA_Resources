/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002bb32c; name: FUN_002bb32c
 */


/* WARNING: Removing unreachable block (ram,0x002bb4c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002bb32c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = (long)(PTR_DAT_043734e8 + 0x10);
  param_1[1] = 0;
  plVar7 = param_1 + 8;
  param_1[9] = 0;
  *plVar7 = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
                    /* try { // try from 002bb38c to 002bb38f has its CatchHandler @ 002bb4fc */
  if ((*param_2 == 0) ||
     (iVar4 = (**(code **)(**(long **)PTR_DAT_04373140 + 0xd0))
                        (*(long **)PTR_DAT_04373140,param_1 + 3), iVar4 == 0)) {
    puVar3 = PTR_FUN_04373078;
    pcVar5 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    uVar11 = s_Couldn_t_initialize_byte_buffer_r_03996bdd._16_8_;
    uVar10 = s_Couldn_t_initialize_byte_buffer_r_03996bdd._0_8_;
    uVar9 = CONCAT26(s_Couldn_t_initialize_byte_buffer_r_03996bdd._30_2_,
                     s_Couldn_t_initialize_byte_buffer_r_03996bdd._24_6_);
    *(undefined8 *)(pcVar5 + 8) = s_Couldn_t_initialize_byte_buffer_r_03996bdd._8_8_;
    *(undefined8 *)pcVar5 = uVar10;
    *(undefined8 *)(pcVar5 + 0x18) = uVar9;
    *(undefined8 *)(pcVar5 + 0x10) = uVar11;
    pcVar5[0x26] = '\0';
    *(ulong *)(pcVar5 + 0x1e) =
         CONCAT62(s_Couldn_t_initialize_byte_buffer_r_03996bdd._32_6_,
                  s_Couldn_t_initialize_byte_buffer_r_03996bdd._30_2_);
    puVar6 = (undefined8 *)FUN_002e2e80(puVar3,0x30);
    lVar2 = _UNK_03889458;
    lVar1 = _DAT_03889450;
    uVar10 = *(undefined8 *)(pcVar5 + 8);
    uVar9 = *(undefined8 *)pcVar5;
    uVar12 = *(undefined8 *)(pcVar5 + 0x18);
    uVar11 = *(undefined8 *)(pcVar5 + 0x10);
    *(undefined8 *)((long)puVar6 + 0x1e) = *(undefined8 *)(pcVar5 + 0x1e);
    puVar6[1] = uVar10;
    *puVar6 = uVar9;
    puVar6[3] = uVar12;
    puVar6[2] = uVar11;
    *(undefined1 *)((long)puVar6 + 0x26) = 0;
    *(undefined4 *)(param_1 + 7) = 0xd;
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      *(undefined2 *)plVar7 = 0;
    }
    else {
      *(undefined1 *)param_1[10] = 0;
      param_1[9] = 0;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,param_1[10]);
        param_1[8] = 0;
      }
    }
    param_1[10] = (long)puVar6;
    param_1[9] = lVar2;
    *plVar7 = lVar1;
    pbVar8 = (byte *)(param_1 + 0xb);
    if ((*pbVar8 & 1) == 0) {
      pbVar8[0] = 0;
      pbVar8[1] = 0;
    }
    else {
      *(undefined1 *)param_1[0xd] = 0;
      param_1[0xc] = 0;
      if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,param_1[0xd]);
        param_1[0xb] = 0;
      }
    }
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    pbVar8[0] = 0;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    pbVar8[4] = 0;
    pbVar8[5] = 0;
    pbVar8[6] = 0;
    pbVar8[7] = 0;
    FUN_002e2ea0(PTR_LAB_04373088,pcVar5);
  }
  return;
}


