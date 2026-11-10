/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002527ec; name: FUN_002527ec
 */


/* WARNING: Removing unreachable block (ram,0x00252a34) */

void FUN_002527ec(long *param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  byte bVar14;
  undefined4 uVar15;
  long lVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long local_90;
  
  FUN_00242014();
  puVar1 = PTR_DAT_04372b28;
  plVar10 = param_1 + 0x1f;
  *(undefined1 *)((long)param_1 + 0x10a) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((long)param_1 + 0xd2) = 0;
  *(undefined8 *)((long)param_1 + 0xda) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0022cf34(plVar10);
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  FUN_0022cf34(plVar10);
  *(undefined4 *)((long)param_1 + 0xec) = 0xffffffff;
  FUN_0022cf34(plVar10);
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  FUN_0022cf34(plVar10);
  *(undefined4 *)((long)param_1 + 0xf4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x10a) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if ((param_5 == 0) || (lVar13 = param_5, *(short *)(param_6 + 0x44) != 0)) {
    lVar13 = param_4;
  }
  *(byte *)(param_1 + 0x21) = *(byte *)(lVar13 + 0x65) >> 2 & 3;
  bVar5 = *(byte *)(lVar13 + 0x65);
  bVar14 = (bVar5 >> 1 & 1) != 0;
  if ((bool)bVar14) {
    *(undefined1 *)((long)param_1 + 0x10a) = 1;
    bVar5 = *(byte *)(lVar13 + 0x65);
  }
  if ((bVar5 & 1) != 0) {
    bVar14 = bVar14 | 2;
    *(byte *)((long)param_1 + 0x10a) = bVar14;
    bVar5 = *(byte *)(lVar13 + 0x65);
  }
  if ((bVar5 >> 4 & 1) != 0) {
    *(byte *)((long)param_1 + 0x10a) = bVar14 | 4;
  }
  puVar2 = (undefined4 *)(lVar13 + (ulong)*(uint *)(lVar13 + 0x68));
  bVar14 = *(byte *)((long)puVar2 + 0x12);
  if (2 < bVar14) {
    bVar14 = 3;
  }
  if (bVar14 != 0) {
    FUN_0022cf70(plVar10,bVar14);
  }
  FUN_00252d74(param_1,lVar13);
  *(undefined4 *)(param_1 + 0x1d) = *puVar2;
  *(undefined4 *)((long)param_1 + 0xec) = puVar2[1];
  *(undefined4 *)(param_1 + 0x1e) = puVar2[2];
  *(undefined4 *)((long)param_1 + 0xf4) = puVar2[3];
  if ((bVar14 != 0) && ((char)*plVar10 != '\0')) {
    FUN_0022d10c(plVar10,puVar2 + 5,bVar14);
  }
  uVar8 = FUN_0022d180(*(undefined8 *)(param_6 + 0x30),
                       *(undefined2 *)(param_4 + (ulong)*(uint *)(param_4 + 0x68) + 0x10));
  if (param_5 == 0) {
    uVar9 = 0;
    plVar10 = (long *)FUN_00232654(0x50);
  }
  else {
    uVar9 = FUN_0022d180(*(undefined8 *)(param_6 + 0x38),
                         *(undefined2 *)(param_5 + (ulong)*(uint *)(param_5 + 0x68) + 0x10));
    plVar10 = (long *)FUN_00232654(0x50);
  }
  if (plVar10 != (long *)0x0) {
    *plVar10 = (long)(PTR_DAT_04372cb0 + 0x10);
    FUN_0023aa78(plVar10,param_2,param_3,uVar8,uVar9,param_6);
  }
  param_1[0x23] = (long)plVar10;
  FUN_0023c5a4(plVar10,param_2,param_3,param_6);
  *(undefined1 *)((long)param_1 + 0x109) = 0;
  param_1[0x22] = 0;
  bVar14 = *(byte *)(lVar13 + 100);
  uVar18 = (ulong)bVar14;
  if (uVar18 == 0) {
    return;
  }
  plVar10 = param_1 + 0x22;
  *(undefined1 *)((long)param_1 + 0x109) = 0;
  lVar11 = FUN_00232654(uVar18 << 4);
  if (lVar11 == 0) {
    *plVar10 = 0;
    goto LAB_00252aa4;
  }
  if (bVar14 == 1) {
    lVar16 = 0;
LAB_00252a90:
    puVar17 = (undefined1 *)(lVar11 + lVar16 * 0x10);
    *puVar17 = 0;
    *(undefined8 *)(puVar17 + 8) = 0;
  }
  else {
    lVar16 = 0;
    puVar17 = (undefined1 *)(lVar11 + 0x10);
    do {
      lVar16 = lVar16 + 2;
      puVar17[-0x10] = 0;
      *(undefined8 *)(puVar17 + -8) = 0;
      *puVar17 = 0;
      *(undefined8 *)(puVar17 + 8) = 0;
      puVar17 = puVar17 + 0x20;
    } while (uVar18 - (uVar18 & 1) != lVar16);
    if ((bVar14 & 1) != 0) goto LAB_00252a90;
  }
  param_1[0x22] = lVar11;
  *(byte *)((long)param_1 + 0x109) = bVar14;
LAB_00252aa4:
  uVar3 = *(uint *)(lVar13 + 0x6c);
  uVar4 = *(uint *)(param_4 + 0x6c);
  if (param_5 == 0) {
    local_90 = 0;
    cVar6 = *(char *)((long)param_1 + 0x109);
  }
  else {
    local_90 = param_5 + (ulong)*(uint *)(param_5 + 0x6c);
    cVar6 = *(char *)((long)param_1 + 0x109);
  }
  if ('\0' < cVar6) {
    if (param_5 == 0) {
      lVar16 = 0;
      uVar18 = 0;
      puVar1 = PTR_DAT_04372cb0 + 0x10;
      while( true ) {
        *(undefined1 *)(lVar11 + lVar16) =
             *(undefined1 *)(lVar13 + 2 + (ulong)*(uint *)(lVar13 + (ulong)uVar3 + uVar18 * 4));
        if (uVar18 < *(byte *)(param_4 + 100)) {
          uVar8 = FUN_0022d180(*(undefined8 *)(param_6 + 0x30),
                               *(undefined2 *)
                                (param_4 + (ulong)*(uint *)(param_4 + (ulong)uVar4 + uVar18 * 4)));
          plVar12 = (long *)FUN_00232654(0x50);
        }
        else {
          uVar8 = 0;
          plVar12 = (long *)FUN_00232654(0x50);
        }
        if (plVar12 != (long *)0x0) {
          *plVar12 = (long)puVar1;
          FUN_0023aa78(plVar12,param_2,param_3,uVar8,0,param_6);
        }
        *(long **)(param_1[0x22] + lVar16 + 8) = plVar12;
        FUN_0023c5a4(*(undefined8 *)(param_1[0x22] + lVar16 + 8),param_2,param_3,param_6);
        uVar18 = uVar18 + 1;
        if ((long)*(char *)((long)param_1 + 0x109) <= (long)uVar18) break;
        lVar11 = *plVar10;
        lVar16 = lVar16 + 0x10;
      }
    }
    else {
      lVar16 = 0;
      uVar18 = 0;
      puVar1 = PTR_DAT_04372cb0 + 0x10;
      while( true ) {
        *(undefined1 *)(lVar11 + lVar16) =
             *(undefined1 *)(lVar13 + 2 + (ulong)*(uint *)(lVar13 + (ulong)uVar3 + uVar18 * 4));
        if (uVar18 < *(byte *)(param_4 + 100)) {
          uVar8 = FUN_0022d180(*(undefined8 *)(param_6 + 0x30),
                               *(undefined2 *)
                                (param_4 + (ulong)*(uint *)(param_4 + (ulong)uVar4 + uVar18 * 4)));
        }
        else {
          uVar8 = 0;
        }
        uVar9 = FUN_0022d180(*(undefined8 *)(param_6 + 0x38),
                             *(undefined2 *)(param_5 + (ulong)*(uint *)(local_90 + uVar18 * 4)));
        plVar12 = (long *)FUN_00232654(0x50);
        if (plVar12 != (long *)0x0) {
          *plVar12 = (long)puVar1;
          FUN_0023aa78(plVar12,param_2,param_3,uVar8,uVar9,param_6);
        }
        *(long **)(param_1[0x22] + lVar16 + 8) = plVar12;
        FUN_0023c5a4(*(undefined8 *)(param_1[0x22] + lVar16 + 8),param_2,param_3,param_6);
        uVar18 = uVar18 + 1;
        if ((long)*(char *)((long)param_1 + 0x109) <= (long)uVar18) break;
        lVar11 = *plVar10;
        lVar16 = lVar16 + 0x10;
      }
    }
  }
  if (*(char *)(lVar13 + 100) == '\x01') {
    bVar7 = 1 < *(byte *)(param_1 + 0x21) - 1;
    uVar8 = 4;
    if (bVar7) {
      uVar8 = 0xc;
    }
    uVar15 = 3;
    if (!bVar7) {
      uVar15 = 1;
    }
    lVar13 = FUN_00232654(uVar8);
    param_1[0x24] = lVar13;
    *(undefined4 *)(param_1 + 0x25) = uVar15;
    if (param_2 != (long *)0x0) {
      lVar13 = FUN_00250f00(param_3,0x10,0x230);
      *param_2 = *param_2 + lVar13 * (ulong)*(uint *)(param_1 + 0x25);
    }
  }
  return;
}


