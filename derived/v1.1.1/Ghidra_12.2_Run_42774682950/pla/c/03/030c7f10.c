/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c7f10; name: FUN_030c7f10
 */


void FUN_030c7f10(long param_1,uint *param_2,long param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6,long param_7,long *param_8,long param_9,undefined8 *param_10)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  uint *puVar18;
  double dVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((param_4 & 1) == 0) {
    puVar17 = param_2 + 1;
    piVar8 = (int *)(param_3 + 0xa4);
    puVar9 = (undefined4 *)(param_3 + 0xa0);
  }
  else {
    piVar8 = (int *)(param_3 + 0xa0);
    puVar9 = (undefined4 *)(param_3 + 0xa4);
    puVar17 = param_2;
    param_2 = param_2 + 1;
  }
  uVar1 = *puVar9;
  iVar2 = *piVar8;
  if (*(float *)(*(long *)(param_3 + 0x98) + 0x9c) == (float)*(undefined8 *)(param_1 + 0x2d0)) {
    lVar11 = *(long *)(param_1 + 0x298);
    uVar15 = (ulong)*param_2 & 0xffffff;
    if ((int)uVar15 == 0xffffff) {
      uVar10 = 0xffffffffffffffff;
    }
    else {
      uVar10 = *(undefined8 *)(*(long *)(*(long *)(lVar11 + 8) + 0x38) + uVar15 * 0xc0 + 0xb0);
    }
    uVar16 = (ulong)*puVar17 & 0xffffff;
    if ((int)uVar16 == 0xffffff) {
      uVar13 = 0xffffffffffffffff;
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar11 + 8) + 0x38) + uVar16 * 0xc0 + 0xb0);
    }
    puVar17 = *(uint **)(*(long *)(lVar11 + 0x530) + (long)*(int *)(lVar11 + 0x538) * 8 + -8);
    uVar12 = *(undefined8 *)(lVar11 + 0x4e0);
    uVar5 = *puVar17;
    if (0xe4 < uVar5 >> 0x14) {
      puVar18 = puVar17;
      do {
        puVar17 = (uint *)FUN_032be688(lVar11 + 0x520,uVar12);
        *(uint **)(puVar18 + 2) = puVar17;
        uVar5 = *puVar17;
        puVar18 = puVar17;
      } while (0xe4 < uVar5 >> 0x14);
    }
    uVar5 = uVar5 >> 0x10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar17,0x10);
      if (bVar4) {
        *puVar17 = *puVar17 + 0x900001;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(int *)(lVar11 + 0x528) = *(int *)(lVar11 + 0x528) + 1;
    uVar20 = *(undefined8 *)(param_3 + 0x18);
    uVar12 = *(undefined8 *)(param_3 + 0x10);
    uVar21 = *(undefined4 *)(param_3 + 0x30);
    uVar22 = *(undefined8 *)(param_1 + 0x2b0);
    puVar7 = *(undefined8 **)(param_1 + 0x2a8);
    *(undefined4 *)((long)puVar17 + (ulong)uVar5 + 0x20) = 0x4000090;
    *(undefined2 *)((long)puVar17 + (ulong)uVar5 + 0x24) = 6;
    *(undefined8 *)((long)puVar17 + (ulong)uVar5 + 0x28) = uVar10;
    *(undefined8 *)((long)puVar17 + (ulong)uVar5 + 0x30) = uVar13;
    *(undefined8 *)((long)puVar17 + (ulong)uVar5 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    *(undefined8 *)((long)puVar17 + (ulong)uVar5 + 0x40) = *(undefined8 *)(param_3 + 0x40);
    *(ulong *)((long)puVar17 + (ulong)uVar5 + 0x58) = CONCAT44(uVar21,(int)uVar20);
    *(undefined8 *)((long)puVar17 + (ulong)uVar5 + 0x50) = uVar12;
    dVar19 = (double)puVar7[2];
    dVar23 = (double)puVar7[3];
    dVar24 = (double)puVar7[4];
    *(undefined8 *)((long)puVar17 + (ulong)uVar5 + 0x68) = puVar7[1];
    *(undefined8 *)((long)puVar17 + (ulong)uVar5 + 0x60) = *puVar7;
    *(ulong *)((long)puVar17 + (ulong)uVar5 + 0x78) = (ulong)(uint)(float)dVar24;
    *(ulong *)((long)puVar17 + (ulong)uVar5 + 0x70) = CONCAT44((float)dVar23,(float)dVar19);
    *(undefined8 *)((long)puVar17 + (ulong)uVar5 + 0x88) = puVar7[0xd];
    *(undefined8 *)((long)puVar17 + (ulong)uVar5 + 0x80) = puVar7[0xc];
    *(undefined8 *)((long)puVar17 + (ulong)uVar5 + 0x98) = puVar7[0xd];
    *(undefined8 *)((long)puVar17 + (ulong)uVar5 + 0x90) = puVar7[0xc];
    *(int *)((long)puVar17 + (ulong)uVar5 + 0xa0) = (int)uVar22;
    *(int *)((long)puVar17 + (ulong)uVar5 + 0xa4) = iVar2;
    *(undefined4 *)((long)puVar17 + (ulong)uVar5 + 0xa8) = uVar1;
  }
  else {
    uVar15 = (ulong)(*param_2 & 0xffffff);
    uVar16 = (ulong)(*puVar17 & 0xffffff);
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x298) + 8);
  lVar11 = plVar6[7];
  lVar14 = lVar11 + uVar15 * 0xc0;
  lVar11 = lVar11 + uVar16 * 0xc0;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))();
  if (plVar6 == (long *)0x0) {
    uVar5 = 0x24;
  }
  else {
    uVar5 = (**(code **)(*plVar6 + 0x48))(plVar6,lVar14,lVar11);
  }
  if (lVar14 == *param_8) {
    if (iVar2 == (int)param_8[3]) goto LAB_030c8160;
  }
  else {
    FUN_030c7920(param_1,lVar14,uVar5 >> 5 & 7,0,&local_70,&local_a0,param_7,param_8);
    param_8[6] = param_7;
  }
  FUN_030c7ce0(param_8,param_5,param_3,~param_4 & 1,
               *(undefined8 *)(*(long *)(param_1 + 0x298) + 0x4a0),iVar2);
LAB_030c8160:
  FUN_030c7920(param_1,lVar11,uVar5 >> 2 & 7,1,&local_70,&local_a0,param_6,param_9);
  FUN_030c7ce0(param_9,param_6,param_3,param_4 & 1,
               *(undefined8 *)(*(long *)(param_1 + 0x298) + 0x4a8),uVar1);
  puVar7 = *(undefined8 **)(param_9 + 8);
  uVar1 = *(undefined4 *)(puVar7 + 1);
  uVar21 = *(undefined4 *)((long)puVar7 + 0xc);
  *param_10 = *puVar7;
  *(undefined4 *)(param_10 + 1) = uVar1;
  *(undefined4 *)((long)param_10 + 0xc) = uVar21;
  uVar1 = *(undefined4 *)(puVar7 + 3);
  uVar21 = *(undefined4 *)((long)puVar7 + 0x1c);
  param_10[2] = puVar7[2];
  *(undefined4 *)(param_10 + 3) = uVar1;
  *(undefined4 *)((long)param_10 + 0x1c) = uVar21;
  uVar1 = *(undefined4 *)(puVar7 + 5);
  uVar21 = *(undefined4 *)((long)puVar7 + 0x2c);
  param_10[4] = puVar7[4];
  *(undefined4 *)(param_10 + 5) = uVar1;
  *(undefined4 *)((long)param_10 + 0x2c) = uVar21;
  uVar1 = *(undefined4 *)(puVar7 + 7);
  uVar21 = *(undefined4 *)((long)puVar7 + 0x3c);
  param_10[6] = puVar7[6];
  *(undefined4 *)(param_10 + 7) = uVar1;
  *(undefined4 *)((long)param_10 + 0x3c) = uVar21;
  uVar1 = *(undefined4 *)(puVar7 + 9);
  uVar21 = *(undefined4 *)((long)puVar7 + 0x4c);
  param_10[8] = puVar7[8];
  *(undefined4 *)(param_10 + 9) = uVar1;
  *(undefined4 *)((long)param_10 + 0x4c) = uVar21;
  uVar1 = *(undefined4 *)(puVar7 + 0xb);
  uVar21 = *(undefined4 *)((long)puVar7 + 0x5c);
  param_10[10] = puVar7[10];
  *(undefined4 *)(param_10 + 0xb) = uVar1;
  *(undefined4 *)((long)param_10 + 0x5c) = uVar21;
  uVar1 = *(undefined4 *)(puVar7 + 0xd);
  uVar21 = *(undefined4 *)((long)puVar7 + 0x6c);
  param_10[0xc] = puVar7[0xc];
  *(undefined4 *)(param_10 + 0xd) = uVar1;
  *(undefined4 *)((long)param_10 + 0x6c) = uVar21;
  uVar1 = *(undefined4 *)(puVar7 + 0xf);
  uVar21 = *(undefined4 *)((long)puVar7 + 0x7c);
  param_10[0xe] = puVar7[0xe];
  *(undefined4 *)(param_10 + 0xf) = uVar1;
  *(undefined4 *)((long)param_10 + 0x7c) = uVar21;
  param_10[2] = local_a0;
  param_10[3] = local_98;
  param_10[4] = local_90;
  param_10[1] = uStack_68;
  *param_10 = local_70;
  *(undefined8 **)(param_9 + 8) = param_10;
  return;
}


