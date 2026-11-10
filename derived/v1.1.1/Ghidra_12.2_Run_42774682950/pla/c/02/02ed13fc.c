/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed13fc; name: FUN_02ed13fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_02ed13fc(long param_1,byte *param_2,undefined4 param_3,char *param_4,undefined8 param_5,
            undefined4 param_6)

{
  byte *pbVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  byte local_60;
  byte local_58;
  undefined8 local_50;
  undefined4 local_44;
  
  local_78 = CONCAT44(local_78._4_4_,_DAT_0440a8d4);
  puVar3 = *(uint **)(param_1 + 0x98);
  puVar4 = puVar3;
  if (puVar3 != (uint *)0x0) {
    uVar7 = 0;
    puVar4 = (uint *)((long)puVar3 + ((ulong)((byte)*puVar3 + 4) & 0x1fc));
    do {
      if (*(char *)((long)puVar3 + uVar7 + 1) == '5') goto LAB_02ed1478;
      uVar7 = uVar7 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar7 < (byte)*puVar3);
    puVar4 = (uint *)0x0;
  }
LAB_02ed1478:
  puVar3 = (uint *)&local_78;
  if (puVar4 != (uint *)0x0) {
    puVar3 = puVar4;
  }
  local_60 = param_2[1];
  if ((1 << (ulong)(local_60 & 0x1f) & *puVar3) == 0) {
    uVar2 = 0x52;
  }
  else {
    if (*param_4 != '\0') {
      if ((*(long *)(param_1 + 0x80) != 0) &&
         (uVar2 = FUN_02ed13fc(*(long *)(param_1 + 0x80),param_2,param_3,param_4,param_5,param_6),
         (int)uVar2 != 1)) {
        return uVar2;
      }
      *param_4 = '\0';
      local_60 = param_2[1];
    }
    local_58 = 0xff;
    if ((*param_2 - 0x80 < 0x21) && ((1L << ((ulong)(*param_2 - 0x80) & 0x3f) & 0x100010001U) != 0))
    {
      local_58 = param_2[2];
    }
    local_50 = 0;
    local_7c = 0;
    local_78 = param_5;
    local_70 = param_6;
    local_68 = param_3;
    FUN_02ed2dd0(param_1,&local_7c,0x2f,&local_78);
    uVar6 = local_7c + (uint)param_2[2];
    if (0x7e < (int)uVar6) {
      uVar6 = 0x7f;
    }
    local_44 = DAT_0440a8c0._4_4_;
    pbVar5 = *(byte **)(param_1 + 0x98);
    if (pbVar5 != (byte *)0x0) {
      uVar7 = 0;
      pbVar8 = pbVar5 + ((ulong)(*pbVar5 + 4) & 0x1fc);
      do {
        if (pbVar5[uVar7 + 1] == 0x31) goto LAB_02ed1598;
        uVar7 = uVar7 + 1;
        pbVar8 = pbVar8 + 4;
      } while (uVar7 < *pbVar5);
    }
    pbVar8 = (byte *)0x0;
LAB_02ed1598:
    uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    pbVar1 = (byte *)&local_44;
    if (pbVar8 != (byte *)0x0) {
      pbVar1 = pbVar8;
    }
    local_44 = DAT_0440a8c8;
    pbVar8 = pbVar5;
    if (pbVar5 != (byte *)0x0) {
      uVar7 = 0;
      pbVar8 = pbVar5 + ((ulong)(*pbVar5 + 4) & 0x1fc);
      do {
        if (pbVar5[uVar7 + 1] == 0x32) goto LAB_02ed15f4;
        uVar7 = uVar7 + 1;
        pbVar8 = pbVar8 + 4;
      } while (uVar7 < *pbVar5);
      pbVar8 = (byte *)0x0;
    }
LAB_02ed15f4:
    pbVar5 = (byte *)&local_44;
    if (pbVar8 != (byte *)0x0) {
      pbVar5 = pbVar8;
    }
    uVar2 = 0x52;
    if ((*(int *)pbVar1 <= (int)uVar6) && ((int)uVar6 <= *(int *)pbVar5)) {
      local_80 = 0;
      FUN_02ed2dd0(param_1,&local_80,0x30,&local_78);
      local_80 = local_80 + (uint)param_2[3];
      if (0x7e < local_80) {
        local_80 = 0x7f;
      }
      local_44 = DAT_0440a8cc;
      pbVar5 = *(byte **)(param_1 + 0x98);
      if (local_80 < 2) {
        local_80 = 1;
      }
      if (pbVar5 != (byte *)0x0) {
        uVar7 = 0;
        pbVar8 = pbVar5 + ((ulong)(*pbVar5 + 4) & 0x1fc);
        do {
          if (pbVar5[uVar7 + 1] == 0x33) goto LAB_02ed169c;
          uVar7 = uVar7 + 1;
          pbVar8 = pbVar8 + 4;
        } while (uVar7 < *pbVar5);
      }
      pbVar8 = (byte *)0x0;
LAB_02ed169c:
      pbVar1 = (byte *)&local_44;
      if (pbVar8 != (byte *)0x0) {
        pbVar1 = pbVar8;
      }
      local_44 = DAT_0440a8d0;
      pbVar8 = pbVar5;
      if (pbVar5 != (byte *)0x0) {
        uVar7 = 0;
        pbVar8 = pbVar5 + ((ulong)(*pbVar5 + 4) & 0x1fc);
        do {
          if (pbVar5[uVar7 + 1] == 0x34) goto LAB_02ed16f4;
          uVar7 = uVar7 + 1;
          pbVar8 = pbVar8 + 4;
        } while (uVar7 < *pbVar5);
        pbVar8 = (byte *)0x0;
      }
LAB_02ed16f4:
      pbVar5 = (byte *)&local_44;
      if (pbVar8 != (byte *)0x0) {
        pbVar5 = pbVar8;
      }
      uVar2 = 0x52;
      if ((*(int *)pbVar1 <= local_80) && (local_80 <= *(int *)pbVar5)) {
        uVar2 = 1;
        param_2[2] = (byte)uVar6;
        param_2[3] = (byte)local_80;
      }
    }
  }
  return uVar2;
}


