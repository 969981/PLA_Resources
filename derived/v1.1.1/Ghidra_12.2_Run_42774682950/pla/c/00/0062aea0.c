/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0062aea0; name: FUN_0062aea0
 */


void FUN_0062aea0(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long *local_78;
  ulong local_70;
  
  puVar12 = param_1 + 10;
  FUN_00629290(param_1,param_1 + 5,puVar12,param_3);
  puVar14 = param_1 + 0xf;
  if (puVar14 == param_2) {
    return;
  }
  lVar15 = 0;
  uVar16 = param_1[0x13];
  bVar7 = param_1[0xe] <= uVar16;
  if (uVar16 != param_1[0xe]) goto LAB_0062af88;
LAB_0062af28:
  bVar6 = (byte)*puVar12;
  uVar2 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    uVar2 = puVar12[1];
  }
  bVar5 = (byte)*puVar14;
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = puVar14[1];
  }
  sVar3 = uVar2;
  if (uVar1 <= uVar2) {
    sVar3 = uVar1;
  }
  if (sVar3 != 0) {
    pbVar11 = (byte *)puVar14[2];
    if ((bVar5 & 1) == 0) {
      pbVar11 = (byte *)((long)puVar14 + 1);
    }
    pbVar10 = (byte *)puVar12[2];
    if ((bVar6 & 1) == 0) {
      pbVar10 = (byte *)((long)puVar12 + 1);
    }
    iVar8 = memcmp(pbVar11,pbVar10,sVar3);
    if (iVar8 != 0) {
      puVar12 = puVar14;
      if (-1 < iVar8) goto LAB_0062af04;
      goto LAB_0062af8c;
    }
  }
  bVar7 = uVar2 <= uVar1;
LAB_0062af88:
  puVar12 = puVar14;
  if (!bVar7) {
LAB_0062af8c:
    uStack_88 = puVar14[1];
    local_90 = *puVar14;
    local_78 = (long *)puVar14[3];
    local_80 = (void *)puVar14[2];
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    lVar13 = lVar15;
    local_70 = uVar16;
    do {
      plVar9 = *(long **)((long)param_1 + lVar13 + 0x90);
      if ((plVar9 == *(long **)((long)param_1 + lVar13 + 0x68)) ||
         (uVar16 = (**(code **)(*plVar9 + 0x20))(), (uVar16 & 1) != 0)) {
        pbVar11 = (byte *)((long)param_1 + lVar13 + 0x78);
        if ((*pbVar11 & 1) == 0) {
          *(byte *)((long)param_1 + lVar13 + 0x79) = 0;
          *pbVar11 = 0;
        }
        else {
          **(undefined1 **)((long)param_1 + lVar13 + 0x88) = 0;
          pbVar10 = (byte *)((long)param_1 + lVar13 + 0x80);
          pbVar10[0] = 0;
          pbVar10[1] = 0;
          pbVar10[2] = 0;
          pbVar10[3] = 0;
          pbVar10[4] = 0;
          pbVar10[5] = 0;
          pbVar10[6] = 0;
          pbVar10[7] = 0;
          if ((*pbVar11 & 1) != 0) {
            plVar9 = *(long **)((long)param_1 + lVar13 + 0x90);
            (**(code **)(*plVar9 + 0x18))
                      (plVar9,*(undefined8 *)((long)param_1 + lVar13 + 0x88),
                       *(ulong *)((long)param_1 + lVar13 + 0x78) & 0xfffffffffffffffe,1);
            pbVar10 = (byte *)((long)param_1 + lVar13 + 0x78);
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
        *(undefined8 *)((long)param_1 + lVar13 + 0x88) =
             *(undefined8 *)((long)param_1 + lVar13 + 0x60);
        *(undefined8 *)((long)param_1 + lVar13 + 0x80) =
             *(undefined8 *)((long)param_1 + lVar13 + 0x58);
        *(undefined8 *)pbVar11 = *(undefined8 *)((long)param_1 + lVar13 + 0x50);
        pbVar11 = (byte *)((long)param_1 + lVar13 + 0x58);
        pbVar11[0] = 0;
        pbVar11[1] = 0;
        pbVar11[2] = 0;
        pbVar11[3] = 0;
        pbVar11[4] = 0;
        pbVar11[5] = 0;
        pbVar11[6] = 0;
        pbVar11[7] = 0;
        pbVar11 = (byte *)((long)param_1 + lVar13 + 0x60);
        pbVar11[0] = 0;
        pbVar11[1] = 0;
        pbVar11[2] = 0;
        pbVar11[3] = 0;
        pbVar11[4] = 0;
        pbVar11[5] = 0;
        pbVar11[6] = 0;
        pbVar11[7] = 0;
        pbVar11 = (byte *)((long)param_1 + lVar13 + 0x50);
        pbVar11[0] = 0;
        pbVar11[1] = 0;
        pbVar11[2] = 0;
        pbVar11[3] = 0;
        pbVar11[4] = 0;
        pbVar11[5] = 0;
        pbVar11[6] = 0;
        pbVar11[7] = 0;
        *(undefined8 *)((long)param_1 + lVar13 + 0x98) =
             *(undefined8 *)((long)param_1 + lVar13 + 0x70);
      }
      else {
        bVar6 = *(byte *)((long)param_1 + lVar13 + 0x50);
        uVar16 = (ulong)(bVar6 >> 1);
        pbVar11 = (byte *)((long)param_1 + lVar13 + 0x51);
        if ((bVar6 & 1) != 0) {
          uVar16 = *(ulong *)((long)param_1 + lVar13 + 0x58);
          pbVar11 = *(byte **)((long)param_1 + lVar13 + 0x60);
        }
                    /* try { // try from 0062b06c to 0062b06f has its CatchHandler @ 0062b228 */
        FUN_02762710((byte *)((long)param_1 + lVar13 + 0x78),pbVar11,uVar16);
        *(undefined8 *)((long)param_1 + lVar13 + 0x98) =
             *(undefined8 *)((long)param_1 + lVar13 + 0x70);
      }
      puVar12 = puVar14;
      if (lVar13 == -0x50) {
        plVar9 = (long *)param_1[3];
        puVar14 = param_1;
        if (plVar9 == local_78) goto LAB_0062b16c;
        goto LAB_0062b10c;
      }
      uVar16 = *(ulong *)((long)param_1 + lVar13 + 0x48);
      if (local_70 == uVar16) {
        bVar6 = *(byte *)((long)param_1 + lVar13 + 0x28);
        uVar16 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          uVar16 = *(ulong *)((long)param_1 + lVar13 + 0x30);
        }
        uVar2 = local_90 >> 1 & 0x7f;
        if ((local_90 & 1) != 0) {
          uVar2 = uStack_88;
        }
        sVar3 = uVar16;
        if (uVar2 <= uVar16) {
          sVar3 = uVar2;
        }
        if (sVar3 != 0) {
          pvVar4 = (void *)((ulong)&local_90 | 1);
          if ((local_90 & 1) != 0) {
            pvVar4 = local_80;
          }
          pbVar11 = (byte *)((long)param_1 + lVar13 + 0x29);
          if ((bVar6 & 1) != 0) {
            pbVar11 = *(byte **)((long)param_1 + lVar13 + 0x38);
          }
          iVar8 = memcmp(pvVar4,pbVar11,sVar3);
          if (iVar8 != 0) {
            if (iVar8 < 0) goto LAB_0062afac;
            goto LAB_0062b0f8;
          }
        }
        if (uVar16 <= uVar2) goto LAB_0062b0f8;
      }
      else if (uVar16 <= local_70) goto LAB_0062b0f8;
LAB_0062afac:
      lVar13 = lVar13 + -0x28;
    } while( true );
  }
  goto LAB_0062af04;
LAB_0062b0f8:
  puVar14 = (ulong *)((long)param_1 + lVar13 + 0x50);
  plVar9 = *(long **)((long)param_1 + lVar13 + 0x68);
  if (plVar9 != local_78) {
LAB_0062b10c:
    uVar16 = (**(code **)(*plVar9 + 0x20))();
    if ((uVar16 & 1) == 0) {
      if (puVar14 != &local_90) {
        uVar16 = local_90 >> 1 & 0x7f;
        pvVar4 = (void *)((ulong)&local_90 | 1);
        if ((local_90 & 1) != 0) {
          uVar16 = uStack_88;
          pvVar4 = local_80;
        }
                    /* try { // try from 0062b13c to 0062b143 has its CatchHandler @ 0062b218 */
        FUN_02762710(puVar14,pvVar4,uVar16);
      }
      puVar14[4] = local_70;
      if ((local_90 & 1) != 0) {
        (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1);
      }
      goto LAB_0062af04;
    }
  }
LAB_0062b16c:
  if ((*puVar14 & 1) == 0) {
    *(undefined2 *)puVar14 = 0;
  }
  else {
    *(undefined1 *)puVar14[2] = 0;
    puVar14[1] = 0;
    if ((*puVar14 & 1) != 0) {
      (**(code **)(*(long *)puVar14[3] + 0x18))
                ((long *)puVar14[3],puVar14[2],*puVar14 & 0xfffffffffffffffe,1);
      *puVar14 = 0;
    }
  }
  puVar14[2] = (ulong)local_80;
  puVar14[1] = uStack_88;
  *puVar14 = local_90;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  local_90 = 0;
  puVar14[4] = local_70;
LAB_0062af04:
  puVar14 = puVar12 + 5;
  lVar15 = lVar15 + 0x28;
  if (puVar14 == param_2) {
    return;
  }
  uVar16 = puVar12[9];
  bVar7 = puVar12[4] <= uVar16;
  if (uVar16 == puVar12[4]) goto LAB_0062af28;
  goto LAB_0062af88;
}


