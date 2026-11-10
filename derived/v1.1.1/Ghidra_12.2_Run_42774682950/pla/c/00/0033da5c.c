/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033da5c; name: FUN_0033da5c
 */


void FUN_0033da5c(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_1[0x33] != param_1[0x34]) {
                    /* try { // try from 0033da80 to 0033da97 has its CatchHandler @ 0033dfe8 */
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x33e);
                    /* try { // try from 0033da98 to 0033daab has its CatchHandler @ 0033dfd8 */
    uVar4 = FUN_0030f3ac(auStack_60,"CHECK failed: checkpoints_.empty(): ");
                    /* try { // try from 0033daac to 0033dab3 has its CatchHandler @ 0033dfd4 */
    FUN_0030f41c(auStack_68,uVar4);
    FUN_0030f658(auStack_60);
  }
  if (param_1[0x3c] != 0) {
    param_1[0x3d] = param_1[0x3c];
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  if (param_1[0x39] != 0) {
    param_1[0x3a] = param_1[0x39];
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  if (param_1[0x36] != 0) {
    param_1[0x37] = param_1[0x36];
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  if (param_1[0x33] != 0) {
    param_1[0x34] = param_1[0x33];
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  FUN_00367c28(param_1 + 0x30,param_1[0x31]);
  puVar3 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[0x2d];
  while (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
    FUN_002e2ea0(puVar3);
  }
  lVar6 = param_1[0x2b];
  param_1[0x2b] = 0;
  if (lVar6 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  puVar3 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[0x28];
  while (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
    FUN_002e2ea0(puVar3);
  }
  lVar6 = param_1[0x26];
  param_1[0x26] = 0;
  if (lVar6 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  puVar3 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[0x23];
  if (plVar5 != (long *)0x0) {
    if ((long *)param_1[0x24] == plVar5) {
      plVar7 = plVar5;
    }
    else {
      plVar7 = (long *)param_1[0x24] + -1;
      lVar6 = *plVar7;
      *plVar7 = 0;
      if (lVar6 != 0) goto LAB_0033dbdc;
      while (plVar5 != plVar7) {
        while( true ) {
          plVar7 = plVar7 + -1;
          lVar6 = *plVar7;
          *plVar7 = 0;
          if (lVar6 == 0) break;
LAB_0033dbdc:
          FUN_0033e9f8(lVar6);
          FUN_002e2ea0(puVar3,lVar6);
          if (plVar5 == plVar7) goto LAB_0033dbf8;
        }
      }
LAB_0033dbf8:
      plVar7 = (long *)param_1[0x23];
    }
    param_1[0x24] = plVar5;
    FUN_002e2ea0(PTR_LAB_04373088,plVar7);
  }
  puVar3 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[0x20];
  if (plVar5 != (long *)0x0) {
    if ((long *)param_1[0x21] == plVar5) {
      plVar7 = plVar5;
    }
    else {
      plVar7 = (long *)param_1[0x21] + -1;
      lVar6 = *plVar7;
      *plVar7 = 0;
      if (lVar6 != 0) goto LAB_0033dc50;
      while (plVar5 != plVar7) {
        while( true ) {
          plVar7 = plVar7 + -1;
          lVar6 = *plVar7;
          *plVar7 = 0;
          if (lVar6 == 0) break;
LAB_0033dc50:
          FUN_002e2ea0(puVar3);
          if (plVar5 == plVar7) goto LAB_0033dc60;
        }
      }
LAB_0033dc60:
      plVar7 = (long *)param_1[0x20];
    }
    param_1[0x21] = plVar5;
    FUN_002e2ea0(PTR_LAB_04373088,plVar7);
  }
  puVar3 = PTR_LAB_04373088;
  puVar11 = (undefined8 *)param_1[0x1d];
  if (puVar11 != (undefined8 *)0x0) {
    if ((undefined8 *)param_1[0x1e] == puVar11) {
      puVar9 = puVar11;
    }
    else {
      puVar13 = (undefined8 *)param_1[0x1e] + -1;
      puVar9 = (undefined8 *)*puVar13;
      *puVar13 = 0;
      if (puVar9 != (undefined8 *)0x0) goto LAB_0033dcb8;
      while (puVar11 != puVar13) {
        while( true ) {
          puVar13 = puVar13 + -1;
          puVar9 = (undefined8 *)*puVar13;
          *puVar13 = 0;
          if (puVar9 == (undefined8 *)0x0) break;
LAB_0033dcb8:
          (**(code **)*puVar9)(puVar9);
          FUN_002e2ea0(puVar3,puVar9);
          if (puVar11 == puVar13) goto LAB_0033dcdc;
        }
      }
LAB_0033dcdc:
      puVar9 = (undefined8 *)param_1[0x1d];
    }
    param_1[0x1e] = puVar11;
    FUN_002e2ea0(PTR_LAB_04373088,puVar9);
  }
  puVar3 = PTR_LAB_04373088;
  puVar11 = (undefined8 *)param_1[0x1a];
  if (puVar11 != (undefined8 *)0x0) {
    if ((undefined8 *)param_1[0x1b] == puVar11) {
      puVar9 = puVar11;
    }
    else {
      puVar9 = (undefined8 *)param_1[0x1b] + -1;
      pbVar10 = (byte *)*puVar9;
      *puVar9 = 0;
      while( true ) {
        if (pbVar10 != (byte *)0x0) {
          if ((*pbVar10 & 1) != 0) {
            FUN_002e2ea0(puVar3,*(undefined8 *)(pbVar10 + 0x10));
          }
          FUN_002e2ea0(puVar3,pbVar10);
        }
        if (puVar11 == puVar9) break;
        puVar9 = puVar9 + -1;
        pbVar10 = (byte *)*puVar9;
        *puVar9 = 0;
      }
      puVar9 = (undefined8 *)param_1[0x1a];
    }
    param_1[0x1b] = puVar11;
    FUN_002e2ea0(PTR_LAB_04373088,puVar9);
  }
  puVar3 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[0x17];
  if (plVar5 != (long *)0x0) {
    plVar7 = (long *)param_1[0x18];
    if (plVar7 == plVar5) {
      plVar7 = plVar5;
    }
    else {
      plVar12 = plVar7 + -3;
      lVar6 = *plVar12;
      if (lVar6 != 0) goto LAB_0033ddb4;
      while (plVar7 = plVar12, plVar5 != plVar12) {
        while( true ) {
          plVar12 = plVar7 + -3;
          lVar6 = *plVar12;
          if (lVar6 == 0) break;
LAB_0033ddb4:
          plVar7[-2] = lVar6;
          FUN_002e2ea0(puVar3);
          plVar7 = plVar12;
          if (plVar5 == plVar12) goto LAB_0033ddcc;
        }
      }
LAB_0033ddcc:
      plVar7 = (long *)param_1[0x17];
    }
    param_1[0x18] = plVar5;
    FUN_002e2ea0(PTR_LAB_04373088,plVar7);
  }
  puVar3 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[0x14];
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(plVar5 + 2);
    plVar7 = (long *)*plVar5;
    while( true ) {
      if ((bVar1 & 1) != 0) {
        FUN_002e2ea0(puVar3,plVar5[4]);
      }
      FUN_002e2ea0(puVar3,plVar5);
      if (plVar7 == (long *)0x0) break;
      bVar1 = *(byte *)(plVar7 + 2);
      plVar5 = plVar7;
      plVar7 = (long *)*plVar7;
    }
  }
  lVar6 = param_1[0x12];
  param_1[0x12] = 0;
  if (lVar6 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  puVar3 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[0xf];
  while (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
    FUN_002e2ea0(puVar3);
  }
  lVar6 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar6 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  puVar3 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(plVar5 + 2);
    plVar7 = (long *)*plVar5;
    while( true ) {
      if ((bVar1 & 1) != 0) {
        FUN_002e2ea0(puVar3,plVar5[4]);
      }
      FUN_002e2ea0(puVar3,plVar5);
      if (plVar7 == (long *)0x0) break;
      bVar1 = *(byte *)(plVar7 + 2);
      plVar5 = plVar7;
      plVar7 = (long *)*plVar7;
    }
  }
  lVar6 = param_1[8];
  param_1[8] = 0;
  if (lVar6 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  puVar3 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[5];
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(plVar5 + 2);
    plVar7 = (long *)*plVar5;
    while( true ) {
      if ((bVar1 & 1) != 0) {
        FUN_002e2ea0(puVar3,plVar5[4]);
      }
      FUN_002e2ea0(puVar3,plVar5);
      if (plVar7 == (long *)0x0) break;
      bVar1 = *(byte *)(plVar7 + 2);
      plVar5 = plVar7;
      plVar7 = (long *)*plVar7;
    }
  }
  lVar6 = param_1[3];
  param_1[3] = 0;
  if (lVar6 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  puVar3 = PTR_LAB_04373088;
  pbVar10 = (byte *)*param_1;
  if (pbVar10 != (byte *)0x0) {
    pbVar8 = (byte *)param_1[1];
    if (pbVar8 == pbVar10) {
      pbVar8 = pbVar10;
    }
    else {
      bVar1 = pbVar8[-0x18];
      pbVar2 = pbVar8 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          FUN_002e2ea0(puVar3,*(undefined8 *)(pbVar8 + -8));
        }
        if (pbVar10 == pbVar2) break;
        bVar1 = pbVar2[-0x18];
        pbVar8 = pbVar2;
        pbVar2 = pbVar2 + -0x18;
      }
      pbVar8 = (byte *)*param_1;
    }
    param_1[1] = pbVar10;
    FUN_002e2ea0(PTR_LAB_04373088,pbVar8);
  }
  return;
}


