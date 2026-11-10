/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033ef14; name: FUN_0033ef14
 */


void FUN_0033ef14(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long local_70 [6];
  undefined1 auStack_38 [8];
  
  lVar11 = *(long *)(param_1 + 0x1a0);
  if (*(long *)(param_1 + 0x198) == lVar11) {
    FUN_0030f640(local_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x365);
                    /* try { // try from 0033ef50 to 0033ef63 has its CatchHandler @ 0033f424 */
    uVar3 = FUN_0030f3ac(local_70,"CHECK failed: !checkpoints_.empty(): ");
                    /* try { // try from 0033ef64 to 0033ef6b has its CatchHandler @ 0033f420 */
    FUN_0030f41c(auStack_38,uVar3);
    FUN_0030f658(local_70);
    lVar11 = *(long *)(param_1 + 0x1a0);
  }
  puVar2 = PTR_LAB_04373088;
  uVar13 = (ulong)*(int *)(lVar11 + -0xc);
  if (uVar13 < (ulong)(*(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0) >> 3)) {
    lVar6 = param_1 + 0x130;
    lVar15 = uVar13 * 8;
    lVar4 = FUN_00369100(lVar6,*(long *)(param_1 + 0x1b0) + lVar15);
    while( true ) {
      if (lVar4 != 0) {
        FUN_00369240(local_70,lVar6,lVar4);
        lVar4 = local_70[0];
        local_70[0] = 0;
        if (lVar4 != 0) {
          FUN_002e2ea0(puVar2);
        }
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 8;
      if ((ulong)(*(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0) >> 3) <= uVar13) break;
      lVar4 = FUN_00369100(lVar6,*(long *)(param_1 + 0x1b0) + lVar15);
    }
  }
  puVar2 = PTR_LAB_04373088;
  uVar13 = (ulong)*(int *)(lVar11 + -8);
  if (uVar13 < (ulong)(*(long *)(param_1 + 0x1d0) - *(long *)(param_1 + 0x1c8) >> 3)) {
    lVar6 = param_1 + 0x158;
    lVar15 = uVar13 * 8;
    lVar4 = FUN_0036938c(lVar6,*(long *)(param_1 + 0x1c8) + lVar15);
    while( true ) {
      if (lVar4 != 0) {
        FUN_003694cc(local_70,lVar6,lVar4);
        lVar4 = local_70[0];
        local_70[0] = 0;
        if (lVar4 != 0) {
          FUN_002e2ea0(puVar2);
        }
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 8;
      if ((ulong)(*(long *)(param_1 + 0x1d0) - *(long *)(param_1 + 0x1c8) >> 3) <= uVar13) break;
      lVar4 = FUN_0036938c(lVar6,*(long *)(param_1 + 0x1c8) + lVar15);
    }
  }
  lVar6 = *(long *)(param_1 + 0x1e0);
  uVar13 = (ulong)*(int *)(lVar11 + -4);
  if (uVar13 < (ulong)(*(long *)(param_1 + 0x1e8) - lVar6 >> 4)) {
    lVar15 = uVar13 << 4;
    do {
      FUN_00369618(param_1 + 0x180,lVar6 + lVar15);
      lVar6 = *(long *)(param_1 + 0x1e0);
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 0x10;
    } while (uVar13 < (ulong)(*(long *)(param_1 + 0x1e8) - lVar6 >> 4));
  }
  uVar13 = (ulong)*(int *)(lVar11 + -0xc);
  uVar7 = *(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0) >> 3;
  if (uVar7 < uVar13) {
    FUN_00369750(param_1 + 0x1b0,uVar13 - uVar7);
  }
  else if (uVar7 != uVar13) {
    *(ulong *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b0) + uVar13 * 8;
  }
  uVar13 = (ulong)*(int *)(lVar11 + -8);
  uVar7 = *(long *)(param_1 + 0x1d0) - *(long *)(param_1 + 0x1c8) >> 3;
  if (uVar7 < uVar13) {
    FUN_00369750(param_1 + 0x1c8,uVar13 - uVar7);
  }
  else if (uVar7 != uVar13) {
    *(ulong *)(param_1 + 0x1d0) = *(long *)(param_1 + 0x1c8) + uVar13 * 8;
  }
  uVar13 = (ulong)*(int *)(lVar11 + -4);
  uVar7 = *(long *)(param_1 + 0x1e8) - *(long *)(param_1 + 0x1e0) >> 4;
  if (uVar7 < uVar13) {
    FUN_00369934(param_1 + 0x1e0,uVar13 - uVar7);
  }
  else if (uVar7 != uVar13) {
    *(ulong *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e0) + uVar13 * 0x10;
  }
  puVar2 = PTR_LAB_04373088;
  lVar6 = *(long *)(param_1 + 0xd0);
  uVar13 = (ulong)*(int *)(lVar11 + -0x20);
  puVar14 = *(undefined8 **)(param_1 + 0xd8);
  uVar7 = (long)puVar14 - lVar6 >> 3;
  if (uVar7 < uVar13) {
    FUN_00369b9c((long *)(param_1 + 0xd0),uVar13 - uVar7);
  }
  else if (uVar7 != uVar13) {
    puVar1 = (undefined8 *)(lVar6 + uVar13 * 8);
    if (puVar1 != puVar14) {
      puVar14 = puVar14 + -1;
      pbVar8 = (byte *)*puVar14;
      *puVar14 = 0;
      while( true ) {
        if (pbVar8 != (byte *)0x0) {
          if ((*pbVar8 & 1) != 0) {
            FUN_002e2ea0(puVar2,*(undefined8 *)(pbVar8 + 0x10));
          }
          FUN_002e2ea0(puVar2,pbVar8);
        }
        if (puVar1 == puVar14) break;
        puVar14 = puVar14 + -1;
        pbVar8 = (byte *)*puVar14;
        *puVar14 = 0;
      }
    }
    *(undefined8 **)(param_1 + 0xd8) = puVar1;
  }
  puVar2 = PTR_LAB_04373088;
  lVar6 = *(long *)(param_1 + 0xe8);
  uVar13 = (ulong)*(int *)(lVar11 + -0x1c);
  puVar14 = *(undefined8 **)(param_1 + 0xf0);
  uVar7 = (long)puVar14 - lVar6 >> 3;
  if (uVar7 < uVar13) {
    FUN_00369d8c((long *)(param_1 + 0xe8),uVar13 - uVar7);
  }
  else if (uVar7 != uVar13) {
    puVar1 = (undefined8 *)(lVar6 + uVar13 * 8);
    if (puVar1 != puVar14) {
      puVar14 = puVar14 + -1;
      puVar9 = (undefined8 *)*puVar14;
      *puVar14 = 0;
      if (puVar9 != (undefined8 *)0x0) goto LAB_0033f250;
      while (puVar1 != puVar14) {
        while( true ) {
          puVar14 = puVar14 + -1;
          puVar9 = (undefined8 *)*puVar14;
          *puVar14 = 0;
          if (puVar9 == (undefined8 *)0x0) break;
LAB_0033f250:
          (**(code **)*puVar9)(puVar9);
          FUN_002e2ea0(puVar2,puVar9);
          if (puVar1 == puVar14) goto LAB_0033f274;
        }
      }
    }
LAB_0033f274:
    *(undefined8 **)(param_1 + 0xf0) = puVar1;
  }
  puVar2 = PTR_LAB_04373088;
  plVar5 = *(long **)(param_1 + 0x108);
  uVar13 = (ulong)*(int *)(lVar11 + -0x18);
  uVar7 = (long)plVar5 - *(long *)(param_1 + 0x100) >> 3;
  if (uVar7 < uVar13) {
    FUN_00369f78(param_1 + 0x100,uVar13 - uVar7);
  }
  else if (uVar7 != uVar13) {
    plVar10 = (long *)(*(long *)(param_1 + 0x100) + uVar13 * 8);
    if (plVar10 != plVar5) {
      plVar5 = plVar5 + -1;
      lVar6 = *plVar5;
      *plVar5 = 0;
      if (lVar6 != 0) goto LAB_0033f2d8;
      while (plVar10 != plVar5) {
        while( true ) {
          plVar5 = plVar5 + -1;
          lVar6 = *plVar5;
          *plVar5 = 0;
          if (lVar6 == 0) break;
LAB_0033f2d8:
          FUN_002e2ea0(puVar2);
          if (plVar10 == plVar5) goto LAB_0033f2e8;
        }
      }
    }
LAB_0033f2e8:
    *(long **)(param_1 + 0x108) = plVar10;
  }
  puVar2 = PTR_LAB_04373088;
  plVar5 = *(long **)(param_1 + 0x120);
  uVar13 = (ulong)*(int *)(lVar11 + -0x14);
  uVar7 = (long)plVar5 - *(long *)(param_1 + 0x118) >> 3;
  if (uVar7 < uVar13) {
    FUN_0036a150(param_1 + 0x118,uVar13 - uVar7);
  }
  else if (uVar7 != uVar13) {
    plVar10 = (long *)(*(long *)(param_1 + 0x118) + uVar13 * 8);
    if (plVar10 != plVar5) {
      plVar5 = plVar5 + -1;
      lVar6 = *plVar5;
      *plVar5 = 0;
      if (lVar6 != 0) goto LAB_0033f34c;
      while (plVar10 != plVar5) {
        while( true ) {
          plVar5 = plVar5 + -1;
          lVar6 = *plVar5;
          *plVar5 = 0;
          if (lVar6 == 0) break;
LAB_0033f34c:
          FUN_0033e9f8(lVar6);
          FUN_002e2ea0(puVar2,lVar6);
          if (plVar10 == plVar5) goto LAB_0033f368;
        }
      }
    }
LAB_0033f368:
    *(long **)(param_1 + 0x120) = plVar10;
  }
  puVar2 = PTR_LAB_04373088;
  lVar6 = *(long *)(param_1 + 0xb8);
  uVar13 = (ulong)*(int *)(lVar11 + -0x10);
  plVar5 = *(long **)(param_1 + 0xc0);
  lVar11 = (long)plVar5 - lVar6 >> 3;
  uVar7 = lVar11 * -0x5555555555555555;
  if (uVar7 < uVar13) {
    FUN_0036a334((long *)(param_1 + 0xb8),uVar13 + lVar11 * 0x5555555555555555);
  }
  else if (uVar7 != uVar13) {
    plVar10 = (long *)(lVar6 + uVar13 * 0x18);
    if (plVar10 != plVar5) {
      plVar12 = plVar5 + -3;
      lVar11 = *plVar12;
      if (lVar11 != 0) goto LAB_0033f3e0;
      while (plVar5 = plVar12, plVar10 != plVar12) {
        while( true ) {
          plVar12 = plVar5 + -3;
          lVar11 = *plVar12;
          if (lVar11 == 0) break;
LAB_0033f3e0:
          plVar5[-2] = lVar11;
          FUN_002e2ea0(puVar2);
          plVar5 = plVar12;
          if (plVar10 == plVar12) goto LAB_0033f3f8;
        }
      }
    }
LAB_0033f3f8:
    *(long **)(param_1 + 0xc0) = plVar10;
  }
  *(long *)(param_1 + 0x1a0) = *(long *)(param_1 + 0x1a0) + -0x20;
  return;
}


