/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029dd0d4; name: FUN_029dd0d4
 */


void FUN_029dd0d4(long param_1,int *param_2,long *param_3)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  ushort *puVar10;
  char *pcVar11;
  long lVar12;
  byte bVar13;
  int iVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined1 uVar18;
  byte *local_f0;
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined4 local_bc [5];
  int local_a8 [5];
  byte local_94 [12];
  undefined1 *local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  
  *param_2 = 0;
  local_f0 = (byte *)param_3[2];
  if ((uint)local_f0[1] + (uint)*local_f0 == 0) {
    return;
  }
  local_d8 = *param_3;
  pcVar11 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  cVar3 = *(char *)(local_d8 + 0x7d);
  if ((*pcVar11 == '\0') || (pcVar11[2] != cVar3)) {
    if ((pcVar11[3] == '\0') || (pcVar11[5] != cVar3)) {
      if ((pcVar11[6] == '\0') || (pcVar11[8] != cVar3)) {
        if ((pcVar11[9] == '\0') || (pcVar11[0xb] != cVar3)) {
          if ((pcVar11[0xc] == '\0') || (pcVar11[0xe] != cVar3)) {
            if ((pcVar11[0xf] == '\0') || (pcVar11[0x11] != cVar3)) {
              uVar18 = 6;
            }
            else {
              uVar18 = 5;
            }
          }
          else {
            uVar18 = 4;
          }
        }
        else {
          uVar18 = 3;
        }
      }
      else {
        uVar18 = 2;
      }
    }
    else {
      uVar18 = 1;
    }
  }
  else {
    uVar18 = 0;
  }
  lStack_d0 = param_3[6];
  local_e8 = param_3[1];
  local_e0 = param_3[3];
  FUN_029dd68c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x920),&local_88,&local_f0);
  local_d8 = param_3[3];
  local_e8 = param_3[4];
  local_f0 = (byte *)*param_3;
  local_e0 = param_3[2];
  FUN_029da694(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x580),&local_88,&local_f0);
  pbVar8 = (byte *)param_3[2];
  bVar4 = *pbVar8;
  uVar15 = (ulong)bVar4;
  bVar13 = pbVar8[1];
  lVar7 = *(long *)(param_1 + 0x60);
  if ((uint)bVar13 + (uint)bVar4 == 0) {
    if ((uint)bVar13 == -(uint)bVar4) goto LAB_029dd4c8;
  }
  else {
    lVar12 = *(long *)(lVar7 + 0x460);
    uVar9 = 0;
    pbVar1 = pbVar8 + 0xd;
    bVar4 = *pbVar1;
    uVar6 = 0;
    while( true ) {
      uVar17 = uVar6;
      if ((bVar4 >> 3 & 1) == 0) {
        (&local_c8)[uVar6 - 5] =
             *(undefined8 *)
              (*(long *)(*(long *)(lVar12 + 0x10) + 8) + (ulong)pbVar1[-7] * 8 + 0x120);
        *(undefined2 *)((long)&local_c8 + uVar6 * 2) = *(undefined2 *)(pbVar1 + -9);
        uVar17 = (ulong)((int)uVar6 + 1);
        local_bc[uVar6] = *(undefined4 *)(pbVar1 + -5);
        local_94[uVar6] = pbVar1[-1];
        iVar14 = 1;
        if ((*pbVar1 & 2) != 0) {
          iVar14 = 2;
        }
        iVar2 = 0;
        if ((*pbVar1 & 1) != 0) {
          iVar2 = iVar14;
        }
        local_a8[uVar6] = iVar2;
        uVar15 = (ulong)*pbVar8;
        bVar13 = pbVar8[1];
      }
      uVar9 = uVar9 + 1;
      pbVar1 = pbVar1 + 0xc;
      if (uVar15 + bVar13 <= uVar9) break;
      bVar4 = *pbVar1;
      uVar6 = uVar17;
    }
    if ((uVar17 & 0xff) != 0) {
      uVar9 = (ulong)((uint)uVar17 & 0xff);
      FUN_02a3c1fc(*(undefined8 *)(param_1 + 0x20),*param_3,param_3[3],uVar9,&local_f0,local_bc,
                   &local_c8);
      local_78 = *param_3;
      local_80 = param_3[3];
      local_70 = param_3[4];
      uVar5 = (undefined1)uVar17;
      local_68._0_2_ = CONCAT11((char)param_3[5],uVar5);
      local_88 = (undefined1 *)&local_f0;
      FUN_029eca18(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x14e0),auStack_58,&local_88);
      local_88 = (undefined1 *)*param_3;
      local_78 = param_3[3];
      lStack_60 = param_3[6];
      local_70 = CONCAT71(local_70._1_7_,uVar5);
      local_80 = CONCAT71(local_80._1_7_,uVar18);
      local_68 = &local_f0;
      FUN_029ef02c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x15e0),auStack_58,&local_88);
      uVar15 = 0;
      do {
        local_88 = (undefined1 *)(&local_c8)[uVar15 - 5];
        local_80 = CONCAT71(local_80._1_7_,local_94[uVar15]);
        FUN_029ea874(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1380),auStack_58,&local_88);
        uVar15 = uVar15 + 1;
      } while (uVar9 != uVar15);
      local_70 = *param_3;
      local_80 = param_3[1];
      local_78 = param_3[3];
      local_68 = (byte **)CONCAT71(local_68._1_7_,uVar5);
      local_88 = (undefined1 *)&local_f0;
      FUN_02a00e78(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1a40),auStack_58,&local_88);
      uVar15 = 0;
      lVar7 = 0x34;
      do {
        FUN_02989b48(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x1a60) + 0x38),*param_3,
                     (&local_c8)[uVar15 - 5],param_3[3],
                     *(undefined4 *)((long)local_bc + lVar7 + -0x34),
                     *(undefined2 *)((long)&local_c8 + uVar15 * 2),
                     *(int *)((long)local_bc + lVar7 + -0x20) != 0,0);
        uVar15 = uVar15 + 1;
        lVar7 = lVar7 + 4;
      } while (uVar9 != uVar15);
      local_80 = param_3[3];
      local_78 = param_3[4];
      local_70 = *param_3;
      local_68 = (byte **)CONCAT71(local_68._1_7_,uVar5);
      local_88 = (undefined1 *)&local_f0;
      FUN_029d3874(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x2c0),auStack_58,&local_88);
      goto LAB_029dd4c8;
    }
    if ((uint)bVar13 == -(int)uVar15) goto LAB_029dd4c8;
  }
  lVar7 = *(long *)(lVar7 + 0x2a0);
  puVar16 = (undefined1 *)*param_3;
  uVar15 = FUN_0298121c(*(undefined8 *)(lVar7 + 0x38),puVar16,param_3[3]);
  if ((uVar15 & 1) != 0) {
    local_80 = CONCAT71(local_80._1_7_,1);
    local_78 = 0;
    local_88 = puVar16;
    FUN_029d6ea4(*(undefined8 *)(*(long *)(lVar7 + 0x60) + 0x440),auStack_58,&local_88);
  }
LAB_029dd4c8:
  pbVar8 = (byte *)param_3[2];
  if ((uint)pbVar8[1] + (uint)*pbVar8 == 0) {
    iVar14 = 0;
  }
  else {
    uVar15 = 0;
    iVar14 = 0;
    puVar10 = (ushort *)(pbVar8 + 4);
    do {
      uVar15 = uVar15 + 1;
      iVar14 = iVar14 + (uint)*puVar10;
      puVar10 = puVar10 + 6;
    } while (uVar15 < (ulong)pbVar8[1] + (ulong)*pbVar8);
  }
  FUN_02982178(*(undefined8 *)(param_1 + 0x38),*param_3,param_3[3],iVar14);
  *param_2 = iVar14;
  return;
}


