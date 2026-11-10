/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0062a510; name: FUN_0062a510
 */


int FUN_0062a510(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

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
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  long *local_78;
  ulong local_70;
  
  iVar5 = FUN_00629dd0();
  local_70 = param_4[4];
  if (param_5[4] == local_70) {
    bVar3 = (byte)*param_4;
    uVar8 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar8 = param_4[1];
    }
    bVar4 = (byte)*param_5;
    uVar11 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar11 = param_5[1];
    }
    sVar2 = uVar8;
    if (uVar11 <= uVar8) {
      sVar2 = uVar11;
    }
    if (sVar2 != 0) {
      pbVar10 = (byte *)param_5[2];
      if ((bVar4 & 1) == 0) {
        pbVar10 = (byte *)((long)param_5 + 1);
      }
      pbVar9 = (byte *)param_4[2];
      if ((bVar3 & 1) == 0) {
        pbVar9 = (byte *)((long)param_4 + 1);
      }
      iVar6 = memcmp(pbVar10,pbVar9,sVar2);
      if (iVar6 != 0) {
        if (-1 < iVar6) {
          return iVar5;
        }
        goto LAB_0062a5cc;
      }
    }
    if (uVar8 <= uVar11) {
      return iVar5;
    }
  }
  else if (local_70 <= param_5[4]) {
    return iVar5;
  }
LAB_0062a5cc:
  uStack_88 = param_4[1];
  local_90 = *param_4;
  local_78 = (long *)param_4[3];
  local_80 = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  if ((long *)param_4[3] == (long *)param_5[3]) {
LAB_0062a608:
    *(undefined2 *)param_4 = 0;
LAB_0062a60c:
    uVar11 = param_5[1];
    uVar8 = *param_5;
    param_4[2] = param_5[2];
    param_4[1] = uVar11;
    *param_4 = uVar8;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
  }
  else {
    uVar8 = (**(code **)(*(long *)param_4[3] + 0x20))();
    if ((uVar8 & 1) != 0) {
      if ((*param_4 & 1) == 0) goto LAB_0062a608;
      *(undefined1 *)param_4[2] = 0;
      param_4[1] = 0;
      if ((*param_4 & 1) != 0) {
        (**(code **)(*(long *)param_4[3] + 0x18))
                  ((long *)param_4[3],param_4[2],*param_4 & 0xfffffffffffffffe,1);
        *param_4 = 0;
      }
      goto LAB_0062a60c;
    }
    if (param_4 != param_5) {
      uVar8 = param_5[1];
      pbVar10 = (byte *)param_5[2];
      if (((byte)*param_5 & 1) == 0) {
        pbVar10 = (byte *)((long)param_5 + 1);
        uVar8 = (ulong)(byte)((byte)*param_5 >> 1);
      }
                    /* try { // try from 0062a648 to 0062a64f has its CatchHandler @ 0062ae64 */
      FUN_02762710(param_4,pbVar10,uVar8);
    }
  }
  param_4[4] = param_5[4];
  if (((long *)param_5[3] == local_78) ||
     (uVar8 = (**(code **)(*(long *)param_5[3] + 0x20))(), (uVar8 & 1) != 0)) {
    if ((*param_5 & 1) == 0) {
      *(undefined2 *)param_5 = 0;
    }
    else {
      *(undefined1 *)param_5[2] = 0;
      param_5[1] = 0;
      if ((*param_5 & 1) != 0) {
        (**(code **)(*(long *)param_5[3] + 0x18))
                  ((long *)param_5[3],param_5[2],*param_5 & 0xfffffffffffffffe,1);
        *param_5 = 0;
      }
    }
    param_5[2] = local_80;
    param_5[1] = uStack_88;
    *param_5 = local_90;
    uStack_88 = 0;
    local_80 = 0;
    local_90 = 0;
    param_5[4] = local_70;
  }
  else {
    if (&local_90 != param_5) {
      uVar8 = local_90 >> 1 & 0x7f;
      uVar11 = (ulong)&local_90 | 1;
      if ((local_90 & 1) != 0) {
        uVar8 = uStack_88;
        uVar11 = local_80;
      }
                    /* try { // try from 0062a710 to 0062a717 has its CatchHandler @ 0062ae64 */
      FUN_02762710(param_5,uVar11,uVar8);
    }
    param_5[4] = local_70;
    if ((local_90 & 1) != 0) {
      (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1);
    }
  }
  iVar6 = iVar5 + 1;
  uVar8 = param_3[4];
  if (param_4[4] == uVar8) {
    bVar3 = (byte)*param_3;
    uVar11 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar11 = param_3[1];
    }
    bVar4 = (byte)*param_4;
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = param_4[1];
    }
    sVar2 = uVar11;
    if (uVar1 <= uVar11) {
      sVar2 = uVar1;
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
      iVar7 = memcmp(pbVar10,pbVar9,sVar2);
      if (iVar7 != 0) {
        if (-1 < iVar7) {
          return iVar6;
        }
        goto LAB_0062a7c4;
      }
    }
    if (uVar11 <= uVar1) {
      return iVar6;
    }
  }
  else if (uVar8 <= param_4[4]) {
    return iVar6;
  }
LAB_0062a7c4:
  uStack_88 = param_3[1];
  local_90 = *param_3;
  local_78 = (long *)param_3[3];
  local_80 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  local_70 = uVar8;
  if ((long *)param_3[3] == (long *)param_4[3]) {
LAB_0062a800:
    *(undefined2 *)param_3 = 0;
LAB_0062a804:
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
      if ((*param_3 & 1) == 0) goto LAB_0062a800;
      *(undefined1 *)param_3[2] = 0;
      param_3[1] = 0;
      if ((*param_3 & 1) != 0) {
        (**(code **)(*(long *)param_3[3] + 0x18))
                  ((long *)param_3[3],param_3[2],*param_3 & 0xfffffffffffffffe,1);
        *param_3 = 0;
      }
      goto LAB_0062a804;
    }
    if (param_3 != param_4) {
      uVar8 = param_4[1];
      pbVar10 = (byte *)param_4[2];
      if (((byte)*param_4 & 1) == 0) {
        pbVar10 = (byte *)((long)param_4 + 1);
        uVar8 = (ulong)(byte)((byte)*param_4 >> 1);
      }
                    /* try { // try from 0062a878 to 0062a87f has its CatchHandler @ 0062ae54 */
      FUN_02762710(param_3,pbVar10,uVar8);
    }
  }
  param_3[4] = param_4[4];
  if (((long *)param_4[3] == local_78) ||
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
    param_4[2] = local_80;
    param_4[1] = uStack_88;
    *param_4 = local_90;
    uStack_88 = 0;
    local_80 = 0;
    local_90 = 0;
    param_4[4] = local_70;
  }
  else {
    if (&local_90 != param_4) {
      uVar8 = local_90 >> 1 & 0x7f;
      uVar11 = (ulong)&local_90 | 1;
      if ((local_90 & 1) != 0) {
        uVar8 = uStack_88;
        uVar11 = local_80;
      }
                    /* try { // try from 0062a940 to 0062a947 has its CatchHandler @ 0062ae54 */
      FUN_02762710(param_4,uVar11,uVar8);
    }
    param_4[4] = local_70;
    if ((local_90 & 1) != 0) {
      (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1);
    }
  }
  iVar6 = iVar5 + 2;
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
        goto LAB_0062a9f4;
      }
    }
    if (uVar11 <= uVar1) {
      return iVar6;
    }
  }
  else if (uVar8 <= param_3[4]) {
    return iVar6;
  }
LAB_0062a9f4:
  uStack_88 = param_2[1];
  local_90 = *param_2;
  local_78 = (long *)param_2[3];
  local_80 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_70 = uVar8;
  if ((long *)param_2[3] == (long *)param_3[3]) {
LAB_0062aa30:
    *(undefined2 *)param_2 = 0;
LAB_0062aa34:
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
      if ((*param_2 & 1) == 0) goto LAB_0062aa30;
      *(undefined1 *)param_2[2] = 0;
      param_2[1] = 0;
      if ((*param_2 & 1) != 0) {
        (**(code **)(*(long *)param_2[3] + 0x18))
                  ((long *)param_2[3],param_2[2],*param_2 & 0xfffffffffffffffe,1);
        *param_2 = 0;
      }
      goto LAB_0062aa34;
    }
    if (param_2 != param_3) {
      uVar8 = param_3[1];
      pbVar10 = (byte *)param_3[2];
      if (((byte)*param_3 & 1) == 0) {
        pbVar10 = (byte *)((long)param_3 + 1);
        uVar8 = (ulong)(byte)((byte)*param_3 >> 1);
      }
                    /* try { // try from 0062aaa8 to 0062aaaf has its CatchHandler @ 0062ae44 */
      FUN_02762710(param_2,pbVar10,uVar8);
    }
  }
  param_2[4] = param_3[4];
  if (((long *)param_3[3] == local_78) ||
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
    param_3[2] = local_80;
    param_3[1] = uStack_88;
    *param_3 = local_90;
    uStack_88 = 0;
    local_80 = 0;
    local_90 = 0;
    param_3[4] = local_70;
  }
  else {
    if (&local_90 != param_3) {
      uVar8 = local_90 >> 1 & 0x7f;
      uVar11 = (ulong)&local_90 | 1;
      if ((local_90 & 1) != 0) {
        uVar8 = uStack_88;
        uVar11 = local_80;
      }
                    /* try { // try from 0062ab70 to 0062ab77 has its CatchHandler @ 0062ae44 */
      FUN_02762710(param_3,uVar11,uVar8);
    }
    param_3[4] = local_70;
    if ((local_90 & 1) != 0) {
      (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1);
    }
  }
  iVar6 = iVar5 + 3;
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
        goto LAB_0062ac24;
      }
    }
    if (uVar11 <= uVar1) {
      return iVar6;
    }
  }
  else if (uVar8 <= param_2[4]) {
    return iVar6;
  }
LAB_0062ac24:
  uStack_88 = param_1[1];
  local_90 = *param_1;
  local_78 = (long *)param_1[3];
  local_80 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_70 = uVar8;
  if ((long *)param_1[3] == (long *)param_2[3]) {
LAB_0062ac60:
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
                    /* try { // try from 0062acd8 to 0062acdf has its CatchHandler @ 0062ae34 */
        FUN_02762710(param_1,pbVar10,uVar8);
      }
      goto LAB_0062ace0;
    }
    if ((*param_1 & 1) == 0) goto LAB_0062ac60;
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
LAB_0062ace0:
  param_1[4] = param_2[4];
  if (((long *)param_2[3] == local_78) ||
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
    param_2[2] = local_80;
    param_2[1] = uStack_88;
    *param_2 = local_90;
    param_2[4] = local_70;
  }
  else {
    if (&local_90 != param_2) {
      uVar8 = local_90 >> 1 & 0x7f;
      uVar11 = (ulong)&local_90 | 1;
      if ((local_90 & 1) != 0) {
        uVar8 = uStack_88;
        uVar11 = local_80;
      }
                    /* try { // try from 0062ada0 to 0062ada7 has its CatchHandler @ 0062ae34 */
      FUN_02762710(param_2,uVar11,uVar8);
    }
    param_2[4] = local_70;
    if ((local_90 & 1) != 0) {
      (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1);
    }
  }
  return iVar5 + 4;
}


