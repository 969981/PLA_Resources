/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e28c4; name: FUN_002e28c4
 */


char * FUN_002e28c4(undefined8 *param_1,char *param_2,long param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined1 auVar12 [12];
  long *local_70 [4];
  byte *local_50;
  undefined8 uStack_48;
  char *local_38;
  
  local_38 = param_2;
  uVar3 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)(param_3 + 0x5c));
  if ((uVar3 & 1) == 0) {
    if (*local_38 == '\n') {
      if (local_38[1] < '\0') {
        auVar12 = FUN_003232c0();
        if (auVar12._0_8_ == 0) {
          return (char *)0x0;
        }
      }
      else {
        auVar12[8] = local_38[1];
        auVar12._0_8_ = local_38 + 2;
        auVar12._9_3_ = 0;
      }
      lVar5 = auVar12._0_8_;
      lVar8 = (long)auVar12._8_4_;
      pbVar1 = (byte *)(param_1 + 2);
      if ((*(long *)(param_3 + 8) - lVar5) + 0x10 < lVar8) {
        local_38 = (char *)FUN_00322ab0(param_3,lVar5,auVar12._8_4_,pbVar1);
        if (local_38 == (char *)0x0) {
          return (char *)0x0;
        }
      }
      else {
        FUN_00291910(pbVar1,lVar5,lVar8);
        local_38 = (char *)(lVar5 + lVar8);
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
      uVar3 = FUN_0033b628(lVar5,uVar3,0,"nn.npln.common.MapValue.FieldsEntry.key");
      if ((uVar3 & 1) == 0) {
        return (char *)0x0;
      }
      uVar3 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)(param_3 + 0x5c));
      if ((uVar3 & 1) == 0) {
        if (*local_38 != '\x12') goto LAB_002e2a98;
        lVar8 = param_1[1];
        plVar4 = *(long **)(lVar8 + 0x10);
        lVar9 = *plVar4;
        uStack_48 = 0;
        local_50 = pbVar1;
        FUN_00634d1c(local_70,plVar4,&local_50);
        lVar5 = local_70[0][1];
        if (lVar5 == 0) {
          lVar5 = FUN_00634be0(lVar8,pbVar1);
          *local_70[0] = lVar5;
          local_70[0][1] = lVar5;
        }
        param_1[5] = lVar5 + 0x18;
        if (lVar9 == **(long **)(param_1[1] + 0x10)) goto LAB_002e2a98;
        local_38 = (char *)FUN_002e0964(param_3,lVar5 + 0x18,local_38 + 1);
        if (local_38 == (char *)0x0) {
          FUN_00635a88(param_1[1],pbVar1);
          return (char *)0x0;
        }
        uVar3 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)(param_3 + 0x5c));
        if ((uVar3 & 1) != 0) {
          return local_38;
        }
        if (local_38 == (char *)0x0) {
          return (char *)0x0;
        }
        lVar5 = FUN_002e1998(*(undefined8 *)*param_1);
        param_1[6] = lVar5;
        uVar7 = param_1[5];
        *(uint *)(lVar5 + 0x20) = *(uint *)(lVar5 + 0x20) | 2;
        puVar6 = (ulong *)(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(lVar5 + 8) & 1) == 0) {
          lVar8 = *(long *)(lVar5 + 0x18);
        }
        else {
          puVar6 = (ulong *)*puVar6;
          lVar8 = *(long *)(lVar5 + 0x18);
        }
        if (lVar8 == 0) {
          lVar8 = FUN_002e17cc(puVar6);
          *(long *)(lVar5 + 0x18) = lVar8;
        }
        FUN_002e2c00(uVar7,lVar8);
        FUN_00635a88(param_1[1],pbVar1);
        lVar5 = param_1[6];
      }
      else {
        if (local_38 == (char *)0x0) {
          return (char *)0x0;
        }
LAB_002e2a98:
        lVar5 = FUN_002e1998(*(undefined8 *)*param_1);
        param_1[6] = lVar5;
      }
      *(uint *)(lVar5 + 0x20) = *(uint *)(lVar5 + 0x20) | 1;
      puVar2 = (undefined8 *)(lVar5 + 0x10);
      puVar6 = (ulong *)(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      pbVar10 = (byte *)*puVar2;
      if (pbVar10 == PTR_DAT_043730c0) {
        FUN_0029175c(puVar2,puVar6,PTR_DAT_043730c0);
        pbVar10 = (byte *)*puVar2;
      }
      if ((*pbVar10 & 1) == 0) {
        pbVar10[0] = 0;
        pbVar10[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar10 + 0x10) = 0;
        pbVar10[8] = 0;
        pbVar10[9] = 0;
        pbVar10[10] = 0;
        pbVar10[0xb] = 0;
        pbVar10[0xc] = 0;
        pbVar10[0xd] = 0;
        pbVar10[0xe] = 0;
        pbVar10[0xf] = 0;
        if ((*pbVar10 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar10 + 0x10));
          pbVar10[0] = 0;
          pbVar10[1] = 0;
          pbVar10[2] = 0;
          pbVar10[3] = 0;
          pbVar10[4] = 0;
          pbVar10[5] = 0;
          pbVar10[6] = 0;
          pbVar10[7] = 0;
        }
      }
      uVar11 = param_1[3];
      uVar7 = *(undefined8 *)pbVar1;
      *(undefined8 *)(pbVar10 + 0x10) = param_1[4];
      *(undefined8 *)(pbVar10 + 8) = uVar11;
      *(undefined8 *)pbVar10 = uVar7;
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
      goto LAB_002e2b40;
    }
  }
  else if (local_38 == (char *)0x0) {
    return (char *)0x0;
  }
  uVar7 = FUN_002e1998(*(undefined8 *)*param_1);
  param_1[6] = uVar7;
LAB_002e2b40:
  local_38 = (char *)FUN_002e1f00(uVar7,local_38,param_3);
  if (local_38 != (char *)0x0) {
    FUN_002e2d28(param_1);
  }
  return local_38;
}


