/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f150f4; name: FUN_02f150f4
 */


undefined8 * FUN_02f150f4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  char local_64 [4];
  long local_60;
  undefined8 uStack_58;
  
  local_60 = param_1;
  uStack_58 = param_2;
  if (param_3 == (undefined8 *)0x0) {
    lVar6 = FUN_02eca560(&local_60);
    if (lVar6 == 0) {
      return (undefined8 *)0x0;
    }
    if (*(char *)(lVar6 + 0x3c) == '\0') {
      return (undefined8 *)0x0;
    }
    local_64[0] = '\0';
    param_3 = (undefined8 *)FUN_02ec825c(lVar6,local_64);
    uVar2 = DAT_0440ae08;
    if (local_64[0] != '\0') {
      if (param_3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      if ((param_3[5] == 0) && ((param_3[0xd] == 0 || (*(long *)(param_3[0xd] + 0x88) == 0)))) {
        plVar5 = (long *)FUN_02f18244();
      }
      else {
        uVar1 = DAT_0440ae0c;
        lVar7 = DAT_0440ae00;
        if (DAT_0440ae0c <= DAT_0440ae08) {
          iVar3 = DAT_0440ae0c + (DAT_0440ae0c >> 1);
          if (DAT_0440ae0c == 0) {
            iVar3 = 1;
          }
          uVar1 = iVar3 + DAT_0440ae0c;
          lVar7 = (*DAT_0442d148)(5,DAT_0440ae00,(ulong)uVar1 << 3);
          if (lVar7 == 0) goto LAB_02f154a0;
        }
        DAT_0440ae00 = lVar7;
        DAT_0440ae0c = uVar1;
        if (DAT_0440ae0c <= uVar2) goto LAB_02f154a0;
        plVar5 = (long *)(DAT_0440ae00 + (ulong)DAT_0440ae08 * 8);
        DAT_0440ae08 = DAT_0440ae08 + 1;
      }
      if (plVar5 == (long *)0x0) {
LAB_02f154a0:
        FUN_02ec8398(lVar6);
        return (undefined8 *)0x0;
      }
      *plVar5 = (long)param_3;
      DAT_0440ae44 = 1;
      uVar8 = (ulong)DAT_0440ae08;
      if (DAT_0440ae08 == 0) goto LAB_02f15124;
      uVar9 = 0;
      do {
        puVar4 = *(undefined8 **)(DAT_0440ae00 + uVar9 * 8);
        if (((puVar4 != param_3) && (puVar4[5] == 0)) &&
           ((puVar4[0xd] == 0 || (*(long *)(puVar4[0xd] + 0x88) == 0)))) {
          lVar7 = FUN_02eca560(puVar4 + 0xd);
          if (lVar7 == lVar6) {
            FUN_02f25d70(puVar4,param_3,0);
            break;
          }
          uVar8 = (ulong)DAT_0440ae08;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar8);
    }
    if (param_3 != (undefined8 *)0x0) goto LAB_02f15124;
    if (param_1 != 0) goto LAB_02f15128;
LAB_02f15134:
    puVar4 = (undefined8 *)(*DAT_0442d138)(5,0x350);
    if (puVar4 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_02f26608();
    *puVar4 = &PTR_FUN_042ac6b8;
    puVar4[0x15] = &PTR_FUN_042ac808;
    *(undefined4 *)(puVar4 + 0x69) = 0x7fffffff;
    *(byte *)((long)puVar4 + 0x34c) = *(byte *)((long)puVar4 + 0x34c) & 0xf8;
  }
  else {
LAB_02f15124:
    if (param_1 == 0) {
      return param_3;
    }
LAB_02f15128:
    if ((*(byte *)(param_1 + 0xa2) & 0xe) == 0) goto LAB_02f15134;
    puVar4 = (undefined8 *)(*DAT_0442d138)(5,0x368);
    if (puVar4 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_02f166e0(puVar4,param_1,param_2);
  }
  iVar3 = FUN_02f1551c(puVar4,param_1,param_2,param_3);
  uVar2 = DAT_0440ae08;
  if (iVar3 == 1) {
    if ((puVar4[5] == 0) && ((puVar4[0xd] == 0 || (*(long *)(puVar4[0xd] + 0x88) == 0)))) {
      puVar10 = (undefined8 *)FUN_02f18244();
    }
    else {
      uVar1 = DAT_0440ae0c;
      lVar6 = DAT_0440ae00;
      if (DAT_0440ae0c <= DAT_0440ae08) {
        iVar3 = DAT_0440ae0c + (DAT_0440ae0c >> 1);
        if (DAT_0440ae0c == 0) {
          iVar3 = 1;
        }
        uVar1 = iVar3 + DAT_0440ae0c;
        lVar6 = (*DAT_0442d148)(5,DAT_0440ae00,(ulong)uVar1 << 3);
        if (lVar6 == 0) goto LAB_02f152b0;
      }
      DAT_0440ae00 = lVar6;
      DAT_0440ae0c = uVar1;
      if (DAT_0440ae0c <= uVar2) goto LAB_02f152b0;
      puVar10 = (undefined8 *)(DAT_0440ae00 + (ulong)DAT_0440ae08 * 8);
      DAT_0440ae08 = DAT_0440ae08 + 1;
    }
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = puVar4;
      DAT_0440ae44 = 1;
      return puVar4;
    }
  }
LAB_02f152b0:
  if (((puVar4[5] == 0) &&
      (((puVar4[0xd] == 0 || (*(long *)(puVar4[0xd] + 0x88) == 0)) &&
       (lVar6 = FUN_02eca560(), lVar6 != 0)))) &&
     ((*(undefined8 **)(lVar6 + 0x158) == puVar4 ||
      (*(undefined8 **)(lVar6 + 0x158) == (undefined8 *)0x0)))) {
    *(undefined1 *)(lVar6 + 0x164) = 0;
    *(undefined8 *)(lVar6 + 0x158) = 0;
  }
  *puVar4 = &PTR_FUN_042ac6b8;
  puVar4[0x15] = &PTR_FUN_042ac808;
  FUN_02f24810(puVar4);
  FUN_02f26970(puVar4);
  plVar5 = (long *)puVar4[1];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))(plVar5,0);
    puVar10 = (undefined8 *)puVar4[1];
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10);
      (*DAT_0442d150)(5,puVar10);
    }
    puVar4[1] = 0;
  }
  if (puVar4[0xf] != 0) {
    (*DAT_0442d158)(5);
    puVar4[0xf] = 0;
  }
  FUN_02f267e4(puVar4);
  (*DAT_0442d150)(5,puVar4);
  return (undefined8 *)0x0;
}


