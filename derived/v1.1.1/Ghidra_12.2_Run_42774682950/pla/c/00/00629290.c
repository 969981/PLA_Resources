/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00629290; name: FUN_00629290
 */


/* WARNING: Removing unreachable block (ram,0x00629670) */

undefined8 FUN_00629290(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  long *local_68;
  ulong local_60;
  
  uVar13 = param_2[4];
  uVar12 = param_1[4];
  if (uVar13 == uVar12) {
    bVar3 = (byte)*param_1;
    uVar9 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar9 = param_1[1];
    }
    bVar4 = (byte)*param_2;
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = param_2[1];
    }
    sVar2 = uVar9;
    if (uVar1 <= uVar9) {
      sVar2 = uVar1;
    }
    if (sVar2 != 0) {
      pbVar11 = (byte *)param_2[2];
      if ((bVar4 & 1) == 0) {
        pbVar11 = (byte *)((long)param_2 + 1);
      }
      pbVar10 = (byte *)param_1[2];
      if ((bVar3 & 1) == 0) {
        pbVar10 = (byte *)((long)param_1 + 1);
      }
      uVar5 = memcmp(pbVar11,pbVar10,sVar2);
      if (uVar5 != 0) {
        uVar5 = uVar5 >> 0x1f;
        uVar9 = param_3[4];
        goto joined_r0x0062939c;
      }
    }
    uVar5 = 0;
    if (uVar1 < uVar9) {
      uVar5 = 0xffffffff;
    }
    uVar5 = uVar5 >> 0x1f;
    uVar9 = param_3[4];
    if (uVar9 != uVar13) goto LAB_00629328;
LAB_006293a0:
    bVar3 = (byte)*param_2;
    uVar9 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar9 = param_2[1];
    }
    bVar4 = (byte)*param_3;
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = param_3[1];
    }
    sVar2 = uVar9;
    if (uVar1 <= uVar9) {
      sVar2 = uVar1;
    }
    if (sVar2 == 0) {
LAB_006293f4:
      uVar8 = 0;
      if (uVar1 < uVar9) {
        uVar8 = 0xffffffff;
      }
    }
    else {
      pbVar11 = (byte *)param_3[2];
      if ((bVar4 & 1) == 0) {
        pbVar11 = (byte *)((long)param_3 + 1);
      }
      pbVar10 = (byte *)param_2[2];
      if ((bVar3 & 1) == 0) {
        pbVar10 = (byte *)((long)param_2 + 1);
      }
      uVar8 = memcmp(pbVar11,pbVar10,sVar2);
      if (uVar8 == 0) goto LAB_006293f4;
    }
    uVar8 = uVar8 >> 0x1f;
    if (uVar5 != 0) goto LAB_0062940c;
LAB_00629330:
    if (uVar8 == 0) {
      return 0;
    }
    uStack_78 = param_2[1];
    local_80 = *param_2;
    local_68 = (long *)param_2[3];
    local_70 = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    local_60 = uVar13;
    if ((long *)param_2[3] == (long *)param_3[3]) {
LAB_00629370:
      *(undefined2 *)param_2 = 0;
LAB_00629374:
      uVar13 = param_3[1];
      uVar12 = *param_3;
      param_2[2] = param_3[2];
      param_2[1] = uVar13;
      *param_2 = uVar12;
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
    }
    else {
      uVar12 = (**(code **)(*(long *)param_2[3] + 0x20))();
      if ((uVar12 & 1) != 0) {
        if ((*param_2 & 1) == 0) goto LAB_00629370;
        *(undefined1 *)param_2[2] = 0;
        param_2[1] = 0;
        if ((*param_2 & 1) != 0) {
          (**(code **)(*(long *)param_2[3] + 0x18))
                    ((long *)param_2[3],param_2[2],*param_2 & 0xfffffffffffffffe,1);
          *param_2 = 0;
        }
        goto LAB_00629374;
      }
      if (param_2 != param_3) {
        uVar12 = param_3[1];
        pbVar11 = (byte *)param_3[2];
        if (((byte)*param_3 & 1) == 0) {
          pbVar11 = (byte *)((long)param_3 + 1);
          uVar12 = (ulong)(byte)((byte)*param_3 >> 1);
        }
                    /* try { // try from 00629514 to 0062951b has its CatchHandler @ 00629dbc */
        FUN_02762710(param_2,pbVar11,uVar12);
      }
    }
    param_2[4] = param_3[4];
    if (((long *)param_3[3] == local_68) ||
       (uVar12 = (**(code **)(*(long *)param_3[3] + 0x20))(), (uVar12 & 1) != 0)) {
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
        uVar12 = local_80 >> 1 & 0x7f;
        uVar13 = (ulong)&local_80 | 1;
        if ((local_80 & 1) != 0) {
          uVar12 = uStack_78;
          uVar13 = local_70;
        }
                    /* try { // try from 0062975c to 00629763 has its CatchHandler @ 00629dbc */
        FUN_02762710(param_3,uVar13,uVar12);
      }
      param_3[4] = local_60;
      if ((local_80 & 1) != 0) {
        (**(code **)(*local_68 + 0x18))(local_68,local_70,local_80 & 0xfffffffffffffffe,1);
      }
    }
    uVar12 = param_1[4];
    if (param_2[4] == uVar12) {
      bVar3 = (byte)*param_1;
      uVar13 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar13 = param_1[1];
      }
      bVar4 = (byte)*param_2;
      uVar9 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar9 = param_2[1];
      }
      sVar2 = uVar13;
      if (uVar9 <= uVar13) {
        sVar2 = uVar9;
      }
      if (sVar2 != 0) {
        pbVar11 = (byte *)param_2[2];
        if ((bVar4 & 1) == 0) {
          pbVar11 = (byte *)((long)param_2 + 1);
        }
        pbVar10 = (byte *)param_1[2];
        if ((bVar3 & 1) == 0) {
          pbVar10 = (byte *)((long)param_1 + 1);
        }
        iVar6 = memcmp(pbVar11,pbVar10,sVar2);
        if (iVar6 != 0) {
          if (iVar6 < 0) goto LAB_0062993c;
          goto LAB_006299fc;
        }
      }
      if (uVar9 < uVar13) goto LAB_0062993c;
      goto LAB_006299fc;
    }
    if (uVar12 <= param_2[4]) goto LAB_006299fc;
LAB_0062993c:
    uStack_78 = param_1[1];
    local_80 = *param_1;
    local_68 = (long *)param_1[3];
    local_70 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_60 = uVar12;
    if ((long *)param_1[3] == (long *)param_2[3]) {
LAB_00629978:
      *(undefined2 *)param_1 = 0;
LAB_0062997c:
      uVar13 = param_2[1];
      uVar12 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar13;
      *param_1 = uVar12;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
    }
    else {
      uVar12 = (**(code **)(*(long *)param_1[3] + 0x20))();
      if ((uVar12 & 1) != 0) {
        if ((*param_1 & 1) == 0) goto LAB_00629978;
        *(undefined1 *)param_1[2] = 0;
        param_1[1] = 0;
        if ((*param_1 & 1) != 0) {
          (**(code **)(*(long *)param_1[3] + 0x18))
                    ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
          *param_1 = 0;
        }
        goto LAB_0062997c;
      }
      if (param_1 != param_2) {
        uVar12 = param_2[1];
        pbVar11 = (byte *)param_2[2];
        if (((byte)*param_2 & 1) == 0) {
          pbVar11 = (byte *)((long)param_2 + 1);
          uVar12 = (ulong)(byte)((byte)*param_2 >> 1);
        }
                    /* try { // try from 00629acc to 00629ad3 has its CatchHandler @ 00629d6c */
        FUN_02762710(param_1,pbVar11,uVar12);
      }
    }
    param_1[4] = param_2[4];
    if (((long *)param_2[3] != local_68) &&
       (uVar12 = (**(code **)(*(long *)param_2[3] + 0x20))(), (uVar12 & 1) == 0)) {
      if (&local_80 != param_2) {
        uVar12 = local_80 >> 1 & 0x7f;
        uVar13 = (ulong)&local_80 | 1;
        if ((local_80 & 1) != 0) {
          uVar12 = uStack_78;
          uVar13 = local_70;
        }
                    /* try { // try from 00629c54 to 00629c5b has its CatchHandler @ 00629d6c */
        FUN_02762710(param_2,uVar13,uVar12);
      }
      param_2[4] = local_60;
      if ((local_80 & 1) == 0) goto LAB_00629ccc;
      goto LAB_00629cb0;
    }
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
    uVar5 = (uint)(uVar13 < uVar12);
    uVar9 = param_3[4];
joined_r0x0062939c:
    if (uVar9 == uVar13) goto LAB_006293a0;
LAB_00629328:
    uVar8 = (uint)(uVar9 < uVar13);
    if (uVar5 == 0) goto LAB_00629330;
LAB_0062940c:
    local_60 = uVar12;
    if (uVar8 != 0) {
      uStack_78 = param_1[1];
      local_80 = *param_1;
      local_68 = (long *)param_1[3];
      local_70 = param_1[2];
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if ((long *)param_1[3] == (long *)param_3[3]) {
LAB_0062944c:
        *(undefined2 *)param_1 = 0;
LAB_00629450:
        uVar13 = param_3[1];
        uVar12 = *param_3;
        param_1[2] = param_3[2];
        param_1[1] = uVar13;
        *param_1 = uVar12;
        param_3[1] = 0;
        param_3[2] = 0;
        *param_3 = 0;
      }
      else {
        uVar12 = (**(code **)(*(long *)param_1[3] + 0x20))();
        if ((uVar12 & 1) != 0) {
          if ((*param_1 & 1) == 0) goto LAB_0062944c;
          *(undefined1 *)param_1[2] = 0;
          param_1[1] = 0;
          if ((*param_1 & 1) != 0) {
            (**(code **)(*(long *)param_1[3] + 0x18))
                      ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
            *param_1 = 0;
          }
          goto LAB_00629450;
        }
        if (param_1 != param_3) {
          uVar12 = param_3[1];
          pbVar11 = (byte *)param_3[2];
          if (((byte)*param_3 & 1) == 0) {
            pbVar11 = (byte *)((long)param_3 + 1);
            uVar12 = (ulong)(byte)((byte)*param_3 >> 1);
          }
                    /* try { // try from 006295d4 to 006295db has its CatchHandler @ 00629dac */
          FUN_02762710(param_1,pbVar11,uVar12);
        }
      }
      param_1[4] = param_3[4];
      if (((long *)param_3[3] == local_68) ||
         (uVar12 = (**(code **)(*(long *)param_3[3] + 0x20))(), (uVar12 & 1) != 0)) {
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
        param_3[4] = local_60;
      }
      else {
        if (&local_80 != param_3) {
          uVar12 = local_80 >> 1 & 0x7f;
          uVar13 = (ulong)&local_80 | 1;
          if ((local_80 & 1) != 0) {
            uVar12 = uStack_78;
            uVar13 = local_70;
          }
                    /* try { // try from 0062982c to 00629833 has its CatchHandler @ 00629dac */
          FUN_02762710(param_3,uVar13,uVar12);
        }
        param_3[4] = local_60;
        if ((local_80 & 1) != 0) {
          (**(code **)(*local_68 + 0x18))(local_68,local_70,local_80 & 0xfffffffffffffffe,1);
        }
      }
LAB_006299fc:
      uVar7 = 1;
      goto LAB_00629cd0;
    }
    uStack_78 = param_1[1];
    local_80 = *param_1;
    local_68 = (long *)param_1[3];
    local_70 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((long *)param_1[3] == (long *)param_2[3]) {
LAB_006294d4:
      *(undefined2 *)param_1 = 0;
LAB_006294d8:
      uVar13 = param_2[1];
      uVar12 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar13;
      *param_1 = uVar12;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
    }
    else {
      uVar12 = (**(code **)(*(long *)param_1[3] + 0x20))();
      if ((uVar12 & 1) != 0) {
        if ((*param_1 & 1) == 0) goto LAB_006294d4;
        *(undefined1 *)param_1[2] = 0;
        param_1[1] = 0;
        if ((*param_1 & 1) != 0) {
          (**(code **)(*(long *)param_1[3] + 0x18))
                    ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
          *param_1 = 0;
        }
        goto LAB_006294d8;
      }
      if (param_1 != param_2) {
        uVar12 = param_2[1];
        pbVar11 = (byte *)param_2[2];
        if (((byte)*param_2 & 1) == 0) {
          pbVar11 = (byte *)((long)param_2 + 1);
          uVar12 = (ulong)(byte)((byte)*param_2 >> 1);
        }
                    /* try { // try from 00629694 to 0062969b has its CatchHandler @ 00629d7c */
        FUN_02762710(param_1,pbVar11,uVar12);
      }
    }
    param_1[4] = param_2[4];
    if (((long *)param_2[3] == local_68) ||
       (uVar12 = (**(code **)(*(long *)param_2[3] + 0x20))(), (uVar12 & 1) != 0)) {
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
      uStack_78 = 0;
      local_70 = 0;
      local_80 = 0;
      param_2[4] = local_60;
      uVar12 = local_60;
    }
    else {
      if (&local_80 != param_2) {
        uVar12 = local_80 >> 1 & 0x7f;
        uVar13 = (ulong)&local_80 | 1;
        if ((local_80 & 1) != 0) {
          uVar12 = uStack_78;
          uVar13 = local_70;
        }
                    /* try { // try from 0062988c to 00629893 has its CatchHandler @ 00629d7c */
        FUN_02762710(param_2,uVar13,uVar12);
      }
      param_2[4] = local_60;
      uVar12 = local_60;
      if ((local_80 & 1) != 0) {
        (**(code **)(*local_68 + 0x18))(local_68,local_70,local_80 & 0xfffffffffffffffe,1);
        uVar12 = param_2[4];
      }
    }
    if (param_3[4] == uVar12) {
      bVar3 = (byte)*param_2;
      uVar13 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar13 = param_2[1];
      }
      bVar4 = (byte)*param_3;
      uVar9 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar9 = param_3[1];
      }
      sVar2 = uVar13;
      if (uVar9 <= uVar13) {
        sVar2 = uVar9;
      }
      if (sVar2 != 0) {
        pbVar11 = (byte *)param_3[2];
        if ((bVar4 & 1) == 0) {
          pbVar11 = (byte *)((long)param_3 + 1);
        }
        pbVar10 = (byte *)param_2[2];
        if ((bVar3 & 1) == 0) {
          pbVar10 = (byte *)((long)param_2 + 1);
        }
        iVar6 = memcmp(pbVar11,pbVar10,sVar2);
        if (iVar6 != 0) {
          if (-1 < iVar6) goto LAB_006299fc;
          goto LAB_006299a0;
        }
      }
      if (uVar13 <= uVar9) goto LAB_006299fc;
    }
    else if (uVar12 <= param_3[4]) goto LAB_006299fc;
LAB_006299a0:
    uStack_78 = param_2[1];
    local_80 = *param_2;
    local_68 = (long *)param_2[3];
    local_70 = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    local_60 = uVar12;
    if ((long *)param_2[3] == (long *)param_3[3]) {
LAB_006299dc:
      *(undefined2 *)param_2 = 0;
LAB_006299e0:
      uVar13 = param_3[1];
      uVar12 = *param_3;
      param_2[2] = param_3[2];
      param_2[1] = uVar13;
      *param_2 = uVar12;
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
    }
    else {
      uVar12 = (**(code **)(*(long *)param_2[3] + 0x20))();
      if ((uVar12 & 1) != 0) {
        if ((*param_2 & 1) == 0) goto LAB_006299dc;
        *(undefined1 *)param_2[2] = 0;
        param_2[1] = 0;
        if ((*param_2 & 1) != 0) {
          (**(code **)(*(long *)param_2[3] + 0x18))
                    ((long *)param_2[3],param_2[2],*param_2 & 0xfffffffffffffffe,1);
          *param_2 = 0;
        }
        goto LAB_006299e0;
      }
      if (param_2 != param_3) {
        uVar12 = param_3[1];
        pbVar11 = (byte *)param_3[2];
        if (((byte)*param_3 & 1) == 0) {
          pbVar11 = (byte *)((long)param_3 + 1);
          uVar12 = (ulong)(byte)((byte)*param_3 >> 1);
        }
                    /* try { // try from 00629b8c to 00629b93 has its CatchHandler @ 00629d5c */
        FUN_02762710(param_2,pbVar11,uVar12);
      }
    }
    param_2[4] = param_3[4];
    if (((long *)param_3[3] == local_68) ||
       (uVar12 = (**(code **)(*(long *)param_3[3] + 0x20))(), (uVar12 & 1) != 0)) {
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
      param_3[4] = local_60;
    }
    else {
      if (&local_80 != param_3) {
        uVar12 = local_80 >> 1 & 0x7f;
        uVar13 = (ulong)&local_80 | 1;
        if ((local_80 & 1) != 0) {
          uVar12 = uStack_78;
          uVar13 = local_70;
        }
                    /* try { // try from 00629c98 to 00629c9f has its CatchHandler @ 00629d5c */
        FUN_02762710(param_3,uVar13,uVar12);
      }
      param_3[4] = local_60;
      if ((local_80 & 1) != 0) {
LAB_00629cb0:
        (**(code **)(*local_68 + 0x18))(local_68,local_70,local_80 & 0xfffffffffffffffe,1);
      }
    }
  }
LAB_00629ccc:
  uVar7 = 2;
LAB_00629cd0:
  return uVar7;
}


