/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00726d78; name: FUN_00726d78
 */


char * FUN_00726d78(undefined8 *param_1,char *param_2,long *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  undefined8 uVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  long *local_70 [4];
  byte *local_50;
  undefined8 uStack_48;
  char *local_38;
  
  local_38 = param_2;
  uVar6 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)((long)param_3 + 0x5c));
  if ((uVar6 & 1) == 0) {
    if (*local_38 == '\n') {
      if (local_38[1] < '\0') {
        auVar16 = FUN_003232c0();
        if (auVar16._0_8_ == 0) {
          return (char *)0x0;
        }
      }
      else {
        auVar16[8] = local_38[1];
        auVar16._0_8_ = local_38 + 2;
        auVar16._9_3_ = 0;
      }
      lVar8 = auVar16._0_8_;
      lVar12 = (long)auVar16._8_4_;
      pbVar1 = (byte *)(param_1 + 2);
      if ((param_3[1] - lVar8) + 0x10 < lVar12) {
        local_38 = (char *)FUN_00322ab0(param_3,lVar8,auVar16._8_4_,pbVar1);
        if (local_38 == (char *)0x0) {
          return (char *)0x0;
        }
      }
      else {
        FUN_00291910(pbVar1,lVar8,lVar12);
        local_38 = (char *)(lVar8 + lVar12);
        if (local_38 == (char *)0x0) {
          return (char *)0x0;
        }
      }
      if ((*pbVar1 & 1) == 0) {
        lVar8 = (long)param_1 + 0x11;
        uVar6 = (ulong)(*pbVar1 >> 1);
      }
      else {
        uVar6 = param_1[3];
        lVar8 = param_1[4];
      }
      uVar6 = FUN_0033b628(lVar8,uVar6,0,"nn.npln.matchmaking.v1.LatencyData.LatenciesEntry.key");
      if ((uVar6 & 1) == 0) {
        return (char *)0x0;
      }
      uVar6 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)((long)param_3 + 0x5c));
      if ((uVar6 & 1) == 0) {
        if (*local_38 != '\x12') goto LAB_00727028;
        lVar12 = param_1[1];
        plVar7 = *(long **)(lVar12 + 0x10);
        lVar13 = *plVar7;
        uStack_48 = 0;
        local_50 = pbVar1;
        FUN_00726a0c(local_70,plVar7,&local_50);
        lVar8 = local_70[0][1];
        if (lVar8 == 0) {
          lVar8 = FUN_007268d0(lVar12,pbVar1);
          *local_70[0] = lVar8;
          local_70[0][1] = lVar8;
        }
        param_1[5] = lVar8 + 0x18;
        if (lVar13 == **(long **)(param_1[1] + 0x10)) goto LAB_00727028;
        cVar4 = local_38[1];
        if (cVar4 < '\0') {
          auVar17 = FUN_003232c0(local_38 + 1,cVar4);
          if (auVar17._0_8_ == 0) goto LAB_00726fd8;
        }
        else {
          auVar17[8] = cVar4;
          auVar17._0_8_ = local_38 + 2;
          auVar17._9_7_ = 0;
        }
        iVar5 = FUN_0031e1b4(param_3,auVar17._0_8_,auVar17._8_8_);
        lVar12 = param_3[0xb];
        *(int *)(param_3 + 0xb) = (int)lVar12 + -1;
        if ((((int)lVar12 < 1) ||
            (local_38 = (char *)FUN_0030bfbc(lVar8 + 0x18,auVar17._0_8_,param_3),
            local_38 == (char *)0x0)) ||
           (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0)) {
LAB_00726fd8:
          local_38 = (char *)0x0;
          FUN_0072718c(param_1[1],pbVar1);
          return (char *)0x0;
        }
        uVar3 = *(int *)((long)param_3 + 0x1c) + iVar5;
        *(uint *)((long)param_3 + 0x1c) = uVar3;
        *param_3 = param_3[1] + (long)(int)(uVar3 & (int)uVar3 >> 0x1f);
        uVar6 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)((long)param_3 + 0x5c));
        if ((uVar6 & 1) != 0) {
          return local_38;
        }
        if (local_38 == (char *)0x0) {
          return (char *)0x0;
        }
        lVar8 = FUN_007249b8(*(undefined8 *)*param_1);
        param_1[6] = lVar8;
        lVar12 = param_1[5];
        *(uint *)(lVar8 + 0x20) = *(uint *)(lVar8 + 0x20) | 2;
        puVar10 = (ulong *)(*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(lVar8 + 8) & 1) == 0) {
          lVar13 = *(long *)(lVar8 + 0x18);
        }
        else {
          puVar10 = (ulong *)*puVar10;
          lVar13 = *(long *)(lVar8 + 0x18);
        }
        if (lVar13 == 0) {
          lVar13 = FUN_0030c720(puVar10);
          *(long *)(lVar8 + 0x18) = lVar13;
        }
        if (lVar12 != lVar13) {
          puVar10 = (ulong *)(*(ulong *)(lVar13 + 8) & 0xfffffffffffffffe);
          if ((*(ulong *)(lVar13 + 8) & 1) == 0) {
            puVar11 = (ulong *)(*(ulong *)(lVar12 + 8) & 0xfffffffffffffffe);
            if ((*(ulong *)(lVar12 + 8) & 1) == 0) goto LAB_00727140;
LAB_00727164:
            if (puVar10 == (ulong *)*puVar11) goto LAB_00727174;
          }
          else {
            puVar10 = (ulong *)*puVar10;
            puVar11 = (ulong *)(*(ulong *)(lVar12 + 8) & 0xfffffffffffffffe);
            if ((*(ulong *)(lVar12 + 8) & 1) != 0) goto LAB_00727164;
LAB_00727140:
            if (puVar10 == puVar11) {
LAB_00727174:
              FUN_0030c638(lVar13,lVar12);
              goto LAB_00727178;
            }
          }
          FUN_0039cfb0();
        }
LAB_00727178:
        FUN_0072718c(param_1[1],pbVar1);
        lVar8 = param_1[6];
      }
      else {
        if (local_38 == (char *)0x0) {
          return (char *)0x0;
        }
LAB_00727028:
        lVar8 = FUN_007249b8(*(undefined8 *)*param_1);
        param_1[6] = lVar8;
      }
      *(uint *)(lVar8 + 0x20) = *(uint *)(lVar8 + 0x20) | 1;
      puVar2 = (undefined8 *)(lVar8 + 0x10);
      puVar10 = (ulong *)(*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar8 + 8) & 1) != 0) {
        puVar10 = (ulong *)*puVar10;
      }
      pbVar14 = (byte *)*puVar2;
      if (pbVar14 == PTR_DAT_043730c0) {
        FUN_0029175c(puVar2,puVar10,PTR_DAT_043730c0);
        pbVar14 = (byte *)*puVar2;
      }
      if ((*pbVar14 & 1) == 0) {
        pbVar14[0] = 0;
        pbVar14[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar14 + 0x10) = 0;
        pbVar14[8] = 0;
        pbVar14[9] = 0;
        pbVar14[10] = 0;
        pbVar14[0xb] = 0;
        pbVar14[0xc] = 0;
        pbVar14[0xd] = 0;
        pbVar14[0xe] = 0;
        pbVar14[0xf] = 0;
        if ((*pbVar14 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar14 + 0x10));
          pbVar14[0] = 0;
          pbVar14[1] = 0;
          pbVar14[2] = 0;
          pbVar14[3] = 0;
          pbVar14[4] = 0;
          pbVar14[5] = 0;
          pbVar14[6] = 0;
          pbVar14[7] = 0;
        }
      }
      uVar15 = param_1[3];
      uVar9 = *(undefined8 *)pbVar1;
      *(undefined8 *)(pbVar14 + 0x10) = param_1[4];
      *(undefined8 *)(pbVar14 + 8) = uVar15;
      *(undefined8 *)pbVar14 = uVar9;
      param_1[3] = 0;
      param_1[4] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      uVar9 = param_1[6];
      goto LAB_007270d0;
    }
  }
  else if (local_38 == (char *)0x0) {
    return (char *)0x0;
  }
  uVar9 = FUN_007249b8(*(undefined8 *)*param_1);
  param_1[6] = uVar9;
LAB_007270d0:
  local_38 = (char *)FUN_00725300(uVar9,local_38,param_3);
  if (local_38 != (char *)0x0) {
    FUN_0072724c(param_1);
  }
  return local_38;
}


