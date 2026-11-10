/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b2f08; name: FUN_007b2f08
 */


char * FUN_007b2f08(undefined8 *param_1,char *param_2,long param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong *puVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  byte *local_78;
  undefined8 uStack_70;
  long *local_60 [4];
  char *local_38;
  
  local_38 = param_2;
  uVar3 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)(param_3 + 0x5c));
  if ((uVar3 & 1) == 0) {
    if (*local_38 == '\n') {
      if (local_38[1] < '\0') {
        auVar14 = FUN_003232c0();
        if (auVar14._0_8_ == 0) {
          return (char *)0x0;
        }
      }
      else {
        auVar14[8] = local_38[1];
        auVar14._0_8_ = local_38 + 2;
        auVar14._9_3_ = 0;
      }
      lVar5 = auVar14._0_8_;
      lVar10 = (long)auVar14._8_4_;
      pbVar1 = (byte *)(param_1 + 2);
      if ((*(long *)(param_3 + 8) - lVar5) + 0x10 < lVar10) {
        local_38 = (char *)FUN_00322ab0(param_3,lVar5,auVar14._8_4_,pbVar1);
        if (local_38 == (char *)0x0) {
          return (char *)0x0;
        }
      }
      else {
        FUN_00291910(pbVar1,lVar5,lVar10);
        local_38 = (char *)(lVar5 + lVar10);
        if (local_38 == (char *)0x0) {
          return (char *)0x0;
        }
      }
      if ((*pbVar1 & 1) == 0) {
        lVar5 = (long)param_1 + 0x11;
        uVar3 = (ulong)(*pbVar1 >> 1);
      }
      else {
        uVar3 = param_1[3];
        lVar5 = param_1[4];
      }
      uVar3 = FUN_0033b628(lVar5,uVar3,0,"nn.npln.hydro.v1.TrackContentRequest.TargetsEntry.key");
      if ((uVar3 & 1) == 0) {
        return (char *)0x0;
      }
      uVar3 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)(param_3 + 0x5c));
      if ((uVar3 & 1) == 0) {
        if (*local_38 != '\x12') goto LAB_007b31bc;
        lVar10 = param_1[1];
        plVar4 = *(long **)(lVar10 + 0x10);
        lVar11 = *plVar4;
        uStack_70 = 0;
        local_78 = pbVar1;
        FUN_0079410c(local_60,plVar4,&local_78);
        plVar4 = local_60[0];
        lVar5 = local_60[0][1];
        if (lVar5 == 0) {
          lVar5 = FUN_00793f40(lVar10,pbVar1);
          *plVar4 = lVar5;
          plVar4[1] = lVar5;
        }
        lVar5 = lVar5 + 0x18;
        param_1[5] = lVar5;
        if (lVar11 == **(long **)(param_1[1] + 0x10)) goto LAB_007b31bc;
        if (local_38[1] < '\0') {
          auVar15 = FUN_003232c0();
          if (auVar15._0_8_ == 0) {
            local_38 = (char *)0x0;
            goto LAB_007b3158;
          }
        }
        else {
          auVar15[8] = local_38[1];
          auVar15._0_8_ = local_38 + 2;
          auVar15._9_3_ = 0;
        }
        lVar10 = auVar15._0_8_;
        lVar11 = (long)auVar15._8_4_;
        if ((*(long *)(param_3 + 8) - lVar10) + 0x10 < lVar11) {
          local_38 = (char *)FUN_00322ab0(param_3,lVar10,auVar15._8_4_,lVar5);
        }
        else {
          FUN_00291910(lVar5,lVar10,lVar11);
          local_38 = (char *)(lVar10 + lVar11);
        }
        if (local_38 == (char *)0x0) {
LAB_007b3158:
          lVar5 = param_1[1];
          local_78 = pbVar1;
          FUN_007944ac(local_60,*(undefined8 *)(lVar5 + 0x10),&local_78,0);
          if (local_60[0] != (long *)0x0) {
            FUN_007b1258(&local_78,lVar5,local_60);
          }
          return (char *)0x0;
        }
        pbVar9 = (byte *)param_1[5];
        if ((*pbVar9 & 1) == 0) {
          pbVar6 = pbVar9 + 1;
          uVar3 = (ulong)(*pbVar9 >> 1);
        }
        else {
          uVar3 = *(ulong *)(pbVar9 + 8);
          pbVar6 = *(byte **)(pbVar9 + 0x10);
        }
        uVar3 = FUN_0033b628(pbVar6,uVar3,0,
                             "nn.npln.hydro.v1.TrackContentRequest.TargetsEntry.value");
        if ((uVar3 & 1) == 0) goto LAB_007b3158;
        uVar3 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)(param_3 + 0x5c));
        if ((uVar3 & 1) != 0) {
          return local_38;
        }
        if (local_38 == (char *)0x0) {
          return (char *)0x0;
        }
        lVar5 = FUN_007af4e8(*(undefined8 *)*param_1);
        param_1[6] = lVar5;
        puVar12 = (undefined8 *)param_1[5];
        *(uint *)(lVar5 + 0x20) = *(uint *)(lVar5 + 0x20) | 2;
        puVar2 = (undefined8 *)(lVar5 + 0x18);
        puVar8 = (ulong *)(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        pbVar9 = (byte *)*puVar2;
        if (pbVar9 == PTR_DAT_043730c0) {
          FUN_0029175c(puVar2,puVar8,PTR_DAT_043730c0);
          pbVar9 = (byte *)*puVar2;
        }
        if ((*pbVar9 & 1) == 0) {
          pbVar9[0] = 0;
          pbVar9[1] = 0;
        }
        else {
          **(undefined1 **)(pbVar9 + 0x10) = 0;
          pbVar9[8] = 0;
          pbVar9[9] = 0;
          pbVar9[10] = 0;
          pbVar9[0xb] = 0;
          pbVar9[0xc] = 0;
          pbVar9[0xd] = 0;
          pbVar9[0xe] = 0;
          pbVar9[0xf] = 0;
          if ((*pbVar9 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar9 + 0x10));
            pbVar9[0] = 0;
            pbVar9[1] = 0;
            pbVar9[2] = 0;
            pbVar9[3] = 0;
            pbVar9[4] = 0;
            pbVar9[5] = 0;
            pbVar9[6] = 0;
            pbVar9[7] = 0;
          }
        }
        uVar13 = puVar12[1];
        uVar7 = *puVar12;
        *(undefined8 *)(pbVar9 + 0x10) = puVar12[2];
        *(undefined8 *)(pbVar9 + 8) = uVar13;
        *(undefined8 *)pbVar9 = uVar7;
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = 0;
        lVar5 = param_1[1];
        local_78 = pbVar1;
        FUN_007944ac(local_60,*(undefined8 *)(lVar5 + 0x10),&local_78,0);
        if (local_60[0] != (long *)0x0) {
          FUN_007b1258(&local_78,lVar5,local_60);
        }
        lVar5 = param_1[6];
      }
      else {
        if (local_38 == (char *)0x0) {
          return (char *)0x0;
        }
LAB_007b31bc:
        lVar5 = FUN_007af4e8(*(undefined8 *)*param_1);
        param_1[6] = lVar5;
      }
      *(uint *)(lVar5 + 0x20) = *(uint *)(lVar5 + 0x20) | 1;
      puVar2 = (undefined8 *)(lVar5 + 0x10);
      puVar8 = (ulong *)(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
        puVar8 = (ulong *)*puVar8;
      }
      pbVar9 = (byte *)*puVar2;
      if (pbVar9 == PTR_DAT_043730c0) {
        FUN_0029175c(puVar2,puVar8,PTR_DAT_043730c0);
        pbVar9 = (byte *)*puVar2;
      }
      if ((*pbVar9 & 1) == 0) {
        pbVar9[0] = 0;
        pbVar9[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar9 + 0x10) = 0;
        pbVar9[8] = 0;
        pbVar9[9] = 0;
        pbVar9[10] = 0;
        pbVar9[0xb] = 0;
        pbVar9[0xc] = 0;
        pbVar9[0xd] = 0;
        pbVar9[0xe] = 0;
        pbVar9[0xf] = 0;
        if ((*pbVar9 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar9 + 0x10));
          pbVar9[0] = 0;
          pbVar9[1] = 0;
          pbVar9[2] = 0;
          pbVar9[3] = 0;
          pbVar9[4] = 0;
          pbVar9[5] = 0;
          pbVar9[6] = 0;
          pbVar9[7] = 0;
        }
      }
      uVar13 = param_1[3];
      uVar7 = *(undefined8 *)pbVar1;
      *(undefined8 *)(pbVar9 + 0x10) = param_1[4];
      *(undefined8 *)(pbVar9 + 8) = uVar13;
      *(undefined8 *)pbVar9 = uVar7;
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
      uVar7 = param_1[6];
      goto LAB_007b3264;
    }
  }
  else if (local_38 == (char *)0x0) {
    return (char *)0x0;
  }
  uVar7 = FUN_007af4e8(*(undefined8 *)*param_1);
  param_1[6] = uVar7;
LAB_007b3264:
  local_38 = (char *)FUN_007b0bc8(uVar7,local_38,param_3);
  if (local_38 != (char *)0x0) {
    FUN_007b338c(param_1);
  }
  return local_38;
}


