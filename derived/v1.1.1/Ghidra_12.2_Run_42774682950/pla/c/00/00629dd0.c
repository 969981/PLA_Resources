/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00629dd0; name: FUN_00629dd0
 */


int FUN_00629dd0(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  long *local_68;
  ulong local_60;
  
  iVar5 = FUN_00629290();
  local_60 = param_3[4];
  if (param_4[4] == local_60) {
    bVar3 = (byte)*param_3;
    uVar8 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar8 = param_3[1];
    }
    bVar4 = (byte)*param_4;
    uVar11 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar11 = param_4[1];
    }
    sVar2 = uVar8;
    if (uVar11 <= uVar8) {
      sVar2 = uVar11;
    }
    if (sVar2 != 0) {
      pbVar10 = (byte *)param_4[2];
      if ((bVar4 & 1) == 0) {
        pbVar10 = (byte *)((long)param_4 + 1);
      }
      pbVar9 = (byte *)param_3[2];
      if ((bVar3 & 1) == 0) {
        pbVar9 = (byte *)((long)param_3 + 1);
      }
      iVar6 = memcmp(pbVar10,pbVar9,sVar2);
      if (iVar6 != 0) {
        if (-1 < iVar6) {
          return iVar5;
        }
        goto LAB_00629e84;
      }
    }
    if (uVar8 <= uVar11) {
      return iVar5;
    }
  }
  else if (local_60 <= param_4[4]) {
    return iVar5;
  }
LAB_00629e84:
  uStack_78 = param_3[1];
  local_80 = *param_3;
  local_68 = (long *)param_3[3];
  local_70 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if ((long *)param_3[3] == (long *)param_4[3]) {
LAB_00629ec0:
    *(undefined2 *)param_3 = 0;
LAB_00629ec4:
    uVar11 = param_4[1];
    uVar8 = *param_4;
    param_3[2] = param_4[2];
    param_3[1] = uVar11;
    *param_3 = uVar8;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
  }
  else {
    uVar8 = (**(code **)(*(long *)param_3[3] + 0x20))();
    if ((uVar8 & 1) != 0) {
      if ((*param_3 & 1) == 0) goto LAB_00629ec0;
      *(undefined1 *)param_3[2] = 0;
      param_3[1] = 0;
      if ((*param_3 & 1) != 0) {
        (**(code **)(*(long *)param_3[3] + 0x18))
                  ((long *)param_3[3],param_3[2],*param_3 & 0xfffffffffffffffe,1);
        *param_3 = 0;
      }
      goto LAB_00629ec4;
    }
    if (param_3 != param_4) {
      uVar8 = param_4[1];
      pbVar10 = (byte *)param_4[2];
      if (((byte)*param_4 & 1) == 0) {
        pbVar10 = (byte *)((long)param_4 + 1);
        uVar8 = (ulong)(byte)((byte)*param_4 >> 1);
      }
                    /* try { // try from 00629f00 to 00629f07 has its CatchHandler @ 0062a4d8 */
      FUN_02762710(param_3,pbVar10,uVar8);
    }
  }
  param_3[4] = param_4[4];
  if (((long *)param_4[3] == local_68) ||
     (uVar8 = (**(code **)(*(long *)param_4[3] + 0x20))(), (uVar8 & 1) != 0)) {
    if ((*param_4 & 1) == 0) {
      *(undefined2 *)param_4 = 0;
    }
    else {
      *(undefined1 *)param_4[2] = 0;
      param_4[1] = 0;
      if ((*param_4 & 1) != 0) {
        (**(code **)(*(long *)param_4[3] + 0x18))
                  ((long *)param_4[3],param_4[2],*param_4 & 0xfffffffffffffffe,1);
        *param_4 = 0;
      }
    }
    param_4[2] = local_70;
    param_4[1] = uStack_78;
    *param_4 = local_80;
    uStack_78 = 0;
    local_70 = 0;
    local_80 = 0;
    param_4[4] = local_60;
  }
  else {
    if (&local_80 != param_4) {
      uVar8 = local_80 >> 1 & 0x7f;
      uVar11 = (ulong)&local_80 | 1;
      if ((local_80 & 1) != 0) {
        uVar8 = uStack_78;
        uVar11 = local_70;
      }
                    /* try { // try from 00629fc8 to 00629fcf has its CatchHandler @ 0062a4d8 */
      FUN_02762710(param_4,uVar11,uVar8);
    }
    param_4[4] = local_60;
    if ((local_80 & 1) != 0) {
      (**(code **)(*local_68 + 0x18))(local_68,local_70,local_80 & 0xfffffffffffffffe,1);
    }
  }
  iVar6 = iVar5 + 1;
  uVar8 = param_2[4];
  if (param_3[4] == uVar8) {
    bVar3 = (byte)*param_2;
    uVar11 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar11 = param_2[1];
    }
    bVar4 = (byte)*param_3;
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = param_3[1];
    }
    sVar2 = uVar11;
    if (uVar1 <= uVar11) {
      sVar2 = uVar1;
    }
    if (sVar2 != 0) {
      pbVar10 = (byte *)param_3[2];
      if ((bVar4 & 1) == 0) {
        pbVar10 = (byte *)((long)param_3 + 1);
      }
      pbVar9 = (byte *)param_2[2];
      if ((bVar3 & 1) == 0) {
        pbVar9 = (byte *)((long)param_2 + 1);
      }
      iVar7 = memcmp(pbVar10,pbVar9,sVar2);
      if (iVar7 != 0) {
        if (-1 < iVar7) {
          return iVar6;
        }
        goto LAB_0062a07c;
      }
    }
    if (uVar11 <= uVar1) {
      return iVar6;
    }
  }
  else if (uVar8 <= param_3[4]) {
    return iVar6;
  }
LAB_0062a07c:
  uStack_78 = param_2[1];
  local_80 = *param_2;
  local_68 = (long *)param_2[3];
  local_70 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_60 = uVar8;
  if ((long *)param_2[3] == (long *)param_3[3]) {
LAB_0062a0b8:
    *(undefined2 *)param_2 = 0;
LAB_0062a0bc:
    uVar11 = param_3[1];
    uVar8 = *param_3;
    param_2[2] = param_3[2];
    param_2[1] = uVar11;
    *param_2 = uVar8;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
  }
  else {
    uVar8 = (**(code **)(*(long *)param_2[3] + 0x20))();
    if ((uVar8 & 1) != 0) {
      if ((*param_2 & 1) == 0) goto LAB_0062a0b8;
      *(undefined1 *)param_2[2] = 0;
      param_2[1] = 0;
      if ((*param_2 & 1) != 0) {
        (**(code **)(*(long *)param_2[3] + 0x18))
                  ((long *)param_2[3],param_2[2],*param_2 & 0xfffffffffffffffe,1);
        *param_2 = 0;
      }
      goto LAB_0062a0bc;
    }
    if (param_2 != param_3) {
      uVar8 = param_3[1];
      pbVar10 = (byte *)param_3[2];
      if (((byte)*param_3 & 1) == 0) {
        pbVar10 = (byte *)((long)param_3 + 1);
        uVar8 = (ulong)(byte)((byte)*param_3 >> 1);
      }
                    /* try { // try from 0062a130 to 0062a137 has its CatchHandler @ 0062a4c8 */
      FUN_02762710(param_2,pbVar10,uVar8);
    }
  }
  param_2[4] = param_3[4];
  if (((long *)param_3[3] == local_68) ||
     (uVar8 = (**(code **)(*(long *)param_3[3] + 0x20))(), (uVar8 & 1) != 0)) {
    if ((*param_3 & 1) == 0) {
      *(undefined2 *)param_3 = 0;
    }
    else {
      *(undefined1 *)param_3[2] = 0;
      param_3[1] = 0;
      if ((*param_3 & 1) != 0) {
        (**(code **)(*(long *)param_3[3] + 0x18))
                  ((long *)param_3[3],param_3[2],*param_3 & 0xfffffffffffffffe,1);
        *param_3 = 0;
      }
    }
    param_3[2] = local_70;
    param_3[1] = uStack_78;
    *param_3 = local_80;
    uStack_78 = 0;
    local_70 = 0;
    local_80 = 0;
    param_3[4] = local_60;
  }
  else {
    if (&local_80 != param_3) {
      uVar8 = local_80 >> 1 & 0x7f;
      uVar11 = (ulong)&local_80 | 1;
      if ((local_80 & 1) != 0) {
        uVar8 = uStack_78;
        uVar11 = local_70;
      }
                    /* try { // try from 0062a1f8 to 0062a1ff has its CatchHandler @ 0062a4c8 */
      FUN_02762710(param_3,uVar11,uVar8);
    }
    param_3[4] = local_60;
    if ((local_80 & 1) != 0) {
      (**(code **)(*local_68 + 0x18))(local_68,local_70,local_80 & 0xfffffffffffffffe,1);
    }
  }
  iVar6 = iVar5 + 2;
  uVar8 = param_1[4];
  if (param_2[4] == uVar8) {
    bVar3 = (byte)*param_1;
    uVar11 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar11 = param_1[1];
    }
    bVar4 = (byte)*param_2;
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = param_2[1];
    }
    sVar2 = uVar11;
    if (uVar1 <= uVar11) {
      sVar2 = uVar1;
    }
    if (sVar2 != 0) {
      pbVar10 = (byte *)param_2[2];
      if ((bVar4 & 1) == 0) {
        pbVar10 = (byte *)((long)param_2 + 1);
      }
      pbVar9 = (byte *)param_1[2];
      if ((bVar3 & 1) == 0) {
        pbVar9 = (byte *)((long)param_1 + 1);
      }
      iVar7 = memcmp(pbVar10,pbVar9,sVar2);
      if (iVar7 != 0) {
        if (-1 < iVar7) {
          return iVar6;
        }
        goto LAB_0062a2ac;
      }
    }
    if (uVar11 <= uVar1) {
      return iVar6;
    }
  }
  else if (uVar8 <= param_2[4]) {
    return iVar6;
  }
LAB_0062a2ac:
  uStack_78 = param_1[1];
  local_80 = *param_1;
  local_68 = (long *)param_1[3];
  local_70 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_60 = uVar8;
  if ((long *)param_1[3] == (long *)param_2[3]) {
LAB_0062a2e8:
    *(undefined2 *)param_1 = 0;
  }
  else {
    uVar8 = (**(code **)(*(long *)param_1[3] + 0x20))();
    if ((uVar8 & 1) == 0) {
      if (param_1 != param_2) {
        uVar8 = param_2[1];
        pbVar10 = (byte *)param_2[2];
        if (((byte)*param_2 & 1) == 0) {
          pbVar10 = (byte *)((long)param_2 + 1);
          uVar8 = (ulong)(byte)((byte)*param_2 >> 1);
        }
                    /* try { // try from 0062a360 to 0062a367 has its CatchHandler @ 0062a4b8 */
        FUN_02762710(param_1,pbVar10,uVar8);
      }
      goto LAB_0062a368;
    }
    if ((*param_1 & 1) == 0) goto LAB_0062a2e8;
    *(undefined1 *)param_1[2] = 0;
    param_1[1] = 0;
    if ((*param_1 & 1) != 0) {
      (**(code **)(*(long *)param_1[3] + 0x18))
                ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
      *param_1 = 0;
    }
  }
  uVar11 = param_2[1];
  uVar8 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar11;
  *param_1 = uVar8;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
LAB_0062a368:
  param_1[4] = param_2[4];
  if (((long *)param_2[3] == local_68) ||
     (uVar8 = (**(code **)(*(long *)param_2[3] + 0x20))(), (uVar8 & 1) != 0)) {
    if ((*param_2 & 1) == 0) {
      *(undefined2 *)param_2 = 0;
    }
    else {
      *(undefined1 *)param_2[2] = 0;
      param_2[1] = 0;
      if ((*param_2 & 1) != 0) {
        (**(code **)(*(long *)param_2[3] + 0x18))
                  ((long *)param_2[3],param_2[2],*param_2 & 0xfffffffffffffffe,1);
        *param_2 = 0;
      }
    }
    param_2[2] = local_70;
    param_2[1] = uStack_78;
    *param_2 = local_80;
    param_2[4] = local_60;
  }
  else {
    if (&local_80 != param_2) {
      uVar8 = local_80 >> 1 & 0x7f;
      uVar11 = (ulong)&local_80 | 1;
      if ((local_80 & 1) != 0) {
        uVar8 = uStack_78;
        uVar11 = local_70;
      }
                    /* try { // try from 0062a428 to 0062a42f has its CatchHandler @ 0062a4b8 */
      FUN_02762710(param_2,uVar11,uVar8);
    }
    param_2[4] = local_60;
    if ((local_80 & 1) != 0) {
      (**(code **)(*local_68 + 0x18))(local_68,local_70,local_80 & 0xfffffffffffffffe,1);
    }
  }
  return iVar5 + 3;
}


