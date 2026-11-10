/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0062b260; name: FUN_0062b260
 */


ulong FUN_0062b260(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong *puVar14;
  long lVar15;
  ulong *puVar16;
  int iVar17;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long *local_78;
  ulong local_70;
  
  lVar10 = (long)param_2 - (long)param_1 >> 3;
  if ((ulong)(lVar10 * -0x3333333333333333) < 6) {
                    /* WARNING: Could not recover jumptable at 0x0062b2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*(code *)(&UNK_0062b2c0 +
                      (ulong)*(ushort *)(&DAT_03a3f93a + lVar10 * -0x6666666666666666) * 4))(1);
    return uVar8;
  }
  FUN_00629290(param_1,param_1 + 5,param_1 + 10,param_3);
  if (param_1 + 0xf == param_2) {
    return 1;
  }
  lVar10 = 0;
  iVar17 = 0;
  puVar16 = param_1 + 0xf;
  puVar14 = param_1 + 10;
LAB_0062b380:
  puVar11 = puVar16;
  uVar8 = puVar11[4];
  if (uVar8 == puVar14[4]) {
    bVar6 = (byte)*puVar14;
    uVar2 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      uVar2 = puVar14[1];
    }
    bVar5 = (byte)*puVar11;
    uVar1 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar1 = puVar11[1];
    }
    sVar3 = uVar2;
    if (uVar1 <= uVar2) {
      sVar3 = uVar1;
    }
    if (sVar3 != 0) {
      pbVar13 = (byte *)puVar11[2];
      if ((bVar5 & 1) == 0) {
        pbVar13 = (byte *)((long)puVar11 + 1);
      }
      pbVar12 = (byte *)puVar14[2];
      if ((bVar6 & 1) == 0) {
        pbVar12 = (byte *)((long)puVar14 + 1);
      }
      iVar7 = memcmp(pbVar13,pbVar12,sVar3);
      if (iVar7 != 0) {
        if (iVar7 < 0) goto LAB_0062b404;
        goto LAB_0062b370;
      }
    }
    if (uVar1 < uVar2) {
LAB_0062b404:
      uStack_88 = puVar11[1];
      local_90 = *puVar11;
      local_78 = (long *)puVar11[3];
      local_80 = (void *)puVar11[2];
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      lVar15 = lVar10;
      local_70 = uVar8;
      do {
        plVar9 = *(long **)((long)param_1 + lVar15 + 0x90);
        if ((plVar9 == *(long **)((long)param_1 + lVar15 + 0x68)) ||
           (uVar8 = (**(code **)(*plVar9 + 0x20))(), (uVar8 & 1) != 0)) {
          pbVar13 = (byte *)((long)param_1 + lVar15 + 0x78);
          if ((*pbVar13 & 1) == 0) {
            *(byte *)((long)param_1 + lVar15 + 0x79) = 0;
            *pbVar13 = 0;
          }
          else {
            **(undefined1 **)((long)param_1 + lVar15 + 0x88) = 0;
            pbVar12 = (byte *)((long)param_1 + lVar15 + 0x80);
            pbVar12[0] = 0;
            pbVar12[1] = 0;
            pbVar12[2] = 0;
            pbVar12[3] = 0;
            pbVar12[4] = 0;
            pbVar12[5] = 0;
            pbVar12[6] = 0;
            pbVar12[7] = 0;
            if ((*pbVar13 & 1) != 0) {
              plVar9 = *(long **)((long)param_1 + lVar15 + 0x90);
              (**(code **)(*plVar9 + 0x18))
                        (plVar9,*(undefined8 *)((long)param_1 + lVar15 + 0x88),
                         *(ulong *)((long)param_1 + lVar15 + 0x78) & 0xfffffffffffffffe,1);
              pbVar12 = (byte *)((long)param_1 + lVar15 + 0x78);
              pbVar12[0] = 0;
              pbVar12[1] = 0;
              pbVar12[2] = 0;
              pbVar12[3] = 0;
              pbVar12[4] = 0;
              pbVar12[5] = 0;
              pbVar12[6] = 0;
              pbVar12[7] = 0;
            }
          }
          *(undefined8 *)((long)param_1 + lVar15 + 0x88) =
               *(undefined8 *)((long)param_1 + lVar15 + 0x60);
          *(undefined8 *)((long)param_1 + lVar15 + 0x80) =
               *(undefined8 *)((long)param_1 + lVar15 + 0x58);
          *(undefined8 *)pbVar13 = *(undefined8 *)((long)param_1 + lVar15 + 0x50);
          pbVar13 = (byte *)((long)param_1 + lVar15 + 0x58);
          pbVar13[0] = 0;
          pbVar13[1] = 0;
          pbVar13[2] = 0;
          pbVar13[3] = 0;
          pbVar13[4] = 0;
          pbVar13[5] = 0;
          pbVar13[6] = 0;
          pbVar13[7] = 0;
          pbVar13 = (byte *)((long)param_1 + lVar15 + 0x60);
          pbVar13[0] = 0;
          pbVar13[1] = 0;
          pbVar13[2] = 0;
          pbVar13[3] = 0;
          pbVar13[4] = 0;
          pbVar13[5] = 0;
          pbVar13[6] = 0;
          pbVar13[7] = 0;
          pbVar13 = (byte *)((long)param_1 + lVar15 + 0x50);
          pbVar13[0] = 0;
          pbVar13[1] = 0;
          pbVar13[2] = 0;
          pbVar13[3] = 0;
          pbVar13[4] = 0;
          pbVar13[5] = 0;
          pbVar13[6] = 0;
          pbVar13[7] = 0;
          *(undefined8 *)((long)param_1 + lVar15 + 0x98) =
               *(undefined8 *)((long)param_1 + lVar15 + 0x70);
        }
        else {
          pbVar13 = (byte *)((long)param_1 + lVar15 + 0x78);
          if ((byte *)((long)param_1 + lVar15 + 0x50) != pbVar13) {
            bVar6 = *(byte *)((long)param_1 + lVar15 + 0x50);
            uVar8 = (ulong)(bVar6 >> 1);
            pbVar12 = (byte *)((long)param_1 + lVar15 + 0x51);
            if ((bVar6 & 1) != 0) {
              uVar8 = *(ulong *)((long)param_1 + lVar15 + 0x58);
              pbVar12 = *(byte **)((long)param_1 + lVar15 + 0x60);
            }
                    /* try { // try from 0062b55c to 0062b55f has its CatchHandler @ 0062b8d4 */
            FUN_02762710(pbVar13,pbVar12,uVar8);
          }
          *(undefined8 *)((long)param_1 + lVar15 + 0x98) =
               *(undefined8 *)((long)param_1 + lVar15 + 0x70);
        }
        if (lVar15 == -0x50) {
          plVar9 = (long *)param_1[3];
          puVar16 = param_1;
          if (plVar9 != local_78) goto LAB_0062b590;
          goto LAB_0062b5e0;
        }
        uVar8 = *(ulong *)((long)param_1 + lVar15 + 0x48);
        if (local_70 == uVar8) {
          bVar6 = *(byte *)((long)param_1 + lVar15 + 0x28);
          uVar8 = (ulong)(bVar6 >> 1);
          if ((bVar6 & 1) != 0) {
            uVar8 = *(ulong *)((long)param_1 + lVar15 + 0x30);
          }
          uVar2 = local_90 >> 1 & 0x7f;
          if ((local_90 & 1) != 0) {
            uVar2 = uStack_88;
          }
          sVar3 = uVar8;
          if (uVar2 <= uVar8) {
            sVar3 = uVar2;
          }
          if (sVar3 != 0) {
            pvVar4 = (void *)((ulong)&local_90 | 1);
            if ((local_90 & 1) != 0) {
              pvVar4 = local_80;
            }
            pbVar13 = (byte *)((long)param_1 + lVar15 + 0x29);
            if ((bVar6 & 1) != 0) {
              pbVar13 = *(byte **)((long)param_1 + lVar15 + 0x38);
            }
            iVar7 = memcmp(pvVar4,pbVar13,sVar3);
            if (iVar7 != 0) {
              if (iVar7 < 0) goto LAB_0062b424;
              goto LAB_0062b57c;
            }
          }
          if (uVar8 <= uVar2) goto LAB_0062b57c;
        }
        else if (uVar8 <= local_70) goto LAB_0062b57c;
LAB_0062b424:
        lVar15 = lVar15 + -0x28;
      } while( true );
    }
  }
  else if (uVar8 < puVar14[4]) goto LAB_0062b404;
  goto LAB_0062b370;
LAB_0062b57c:
  puVar16 = (ulong *)((long)param_1 + lVar15 + 0x50);
  plVar9 = *(long **)((long)param_1 + lVar15 + 0x68);
  if (plVar9 != local_78) {
LAB_0062b590:
    uVar8 = (**(code **)(*plVar9 + 0x20))();
    if ((uVar8 & 1) == 0) {
      if (puVar16 != &local_90) {
        uVar8 = local_90 >> 1 & 0x7f;
        pvVar4 = (void *)((ulong)&local_90 | 1);
        if ((local_90 & 1) != 0) {
          uVar8 = uStack_88;
          pvVar4 = local_80;
        }
                    /* try { // try from 0062b5c0 to 0062b5c7 has its CatchHandler @ 0062b8c4 */
        FUN_02762710(puVar16,pvVar4,uVar8);
      }
      goto LAB_0062b63c;
    }
  }
LAB_0062b5e0:
  if ((*puVar16 & 1) == 0) {
    *(undefined2 *)puVar16 = 0;
  }
  else {
    *(undefined1 *)puVar16[2] = 0;
    puVar16[1] = 0;
    if ((*puVar16 & 1) != 0) {
      (**(code **)(*(long *)puVar16[3] + 0x18))
                ((long *)puVar16[3],puVar16[2],*puVar16 & 0xfffffffffffffffe,1);
      *puVar16 = 0;
    }
  }
  puVar16[2] = (ulong)local_80;
  puVar16[1] = uStack_88;
  *puVar16 = local_90;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  local_90 = 0;
LAB_0062b63c:
  puVar16[4] = local_70;
  iVar17 = iVar17 + 1;
  if ((local_90 & 1) != 0) {
    (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1);
  }
  if (iVar17 == 8) {
    return (ulong)(puVar11 + 5 == param_2);
  }
LAB_0062b370:
  lVar10 = lVar10 + 0x28;
  puVar16 = puVar11 + 5;
  puVar14 = puVar11;
  if (puVar11 + 5 == param_2) {
    return 1;
  }
  goto LAB_0062b380;
}


