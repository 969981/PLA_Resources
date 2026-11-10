/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008294b8; name: FUN_008294b8
 */


void FUN_008294b8(long *param_1,undefined8 *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  
  *(undefined2 *)(param_1 + 1) = 0;
  puVar3 = PTR_DAT_04377ce0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x10] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_007e8f94();
  plVar13 = param_1 + 0x1d;
  *plVar13 = 0;
  param_1[0x1e] = 0;
  FUN_007e8f94(plVar13);
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_70);
  FUN_007ee578(param_1 + 0x24,local_60);
  *(undefined2 *)(param_1 + 0x26) = 0;
  FUN_007e3400(param_1 + 0x27);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)((long)param_1 + 0x16c) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 1;
  FUN_0083fbc0(param_1 + 0x2f);
  FUN_0083fbc0(param_1 + 0x37);
  FUN_007e8190(param_1 + 0x3f);
  FUN_007e8434(param_1 + 0x3f);
  memset(param_1 + 0x50,0,0x10);
  FUN_007e8190(param_1 + 0x52);
  FUN_007e8434(param_1 + 0x52);
  memset(param_1 + 99,0,0x10);
  FUN_007e8190(param_1 + 0x65);
  FUN_007e8434(param_1 + 0x65);
  memset(param_1 + 0x76,0,0x10);
  FUN_007e8190(param_1 + 0x78);
  FUN_007e8434(param_1 + 0x78);
  memset(param_1 + 0x89,0,0x10);
  *(undefined2 *)(param_1 + 0x8b) = 0x100;
  FUN_007e3120((long)param_1 + 0x45c);
  *(undefined2 *)(param_1 + 0x8e) = 0;
  *(undefined1 *)((long)param_1 + 0x472) = 0;
  plVar14 = (long *)*param_2;
  lVar7 = (**(code **)(*plVar14 + 0xe8))(plVar14,*(undefined2 *)(param_2 + 1));
  param_1[0xc] = lVar7;
  puVar3 = PTR_DAT_043773c0;
  *(undefined1 *)((long)param_1 + 0x471) = *(undefined1 *)((long)param_2 + 0xb);
  iVar5 = 0;
  if (*(char *)(*(long *)puVar3 + 0x38) == '\0') {
    lVar7 = *(long *)puVar3 + 0x10;
    puVar8 = (undefined8 *)FUN_008477c4(lVar7,0xa18);
    FUN_0083397c();
    iVar5 = FUN_00847840(lVar7,puVar8,0x98000000);
    if (iVar5 == *(int *)PTR_DAT_043779d0) {
      (**(code **)*puVar8)(puVar8);
      FUN_008477a0(lVar7,puVar8);
    }
  }
  *(int *)((long)param_1 + 0xc) = iVar5;
  lVar7 = FUN_00847ad0(*(long *)puVar3 + 0x10,iVar5,0x98);
  param_1[2] = lVar7;
  FUN_00833c68(local_60,lVar7,plVar14);
  uVar16 = *(undefined8 *)PTR_DAT_04377ce8;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(*(long *)puVar3 + 0x50);
  cVar1 = *(char *)((long)param_2 + 10);
  *(char *)((long)param_1 + 0x472) = cVar1;
  bVar4 = cVar1 != '\0';
  lVar7 = (**(code **)(*plVar14 + 0xe0))(plVar14);
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    PTR_DAT_043773b8[0x3f8] = *(undefined1 *)((long)param_1 + 0x471);
    plVar9 = (long *)(**(code **)(*plVar14 + 0xe0))(plVar14);
    uVar6 = (**(code **)(*plVar9 + 0x158))();
    if (cVar1 == '\0') {
      bVar4 = 0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0xe0))(plVar14);
      bVar4 = (**(code **)(*plVar14 + 0x158))();
    }
  }
  FUN_0082e7b8(local_70,uVar16,(short)param_1[1],(short)param_1[1],1,uVar6 & 1,bVar4 & 1);
  FUN_007ee660(local_60,local_70);
  uVar16 = FUN_007e336c();
  lVar7 = FUN_0081a750(0x58,uVar16);
  if (lVar7 != 0) {
    FUN_0083f634(lVar7);
  }
  param_1[5] = lVar7;
  uVar16 = FUN_007e336c();
  lVar7 = FUN_0081a750(0x110,uVar16);
  if (lVar7 != 0) {
    FUN_0082d8b4(lVar7);
  }
  param_1[6] = lVar7;
  uVar16 = FUN_007e336c();
  lVar7 = FUN_0081a750(0xa0,uVar16);
  if (lVar7 != 0) {
    FUN_0082c4f0(lVar7);
  }
  param_1[7] = lVar7;
  uVar16 = FUN_007e336c();
  lVar7 = FUN_0081a750(0x90,uVar16);
  if (lVar7 != 0) {
    FUN_0082cb28(lVar7);
  }
  param_1[8] = lVar7;
  uVar16 = FUN_007e336c();
  lVar7 = FUN_0081a750(0xa8,uVar16);
  if (lVar7 != 0) {
    FUN_0082d160(lVar7);
  }
  param_1[9] = lVar7;
  uVar16 = FUN_007e336c();
  lVar7 = FUN_0081a750(0xb8,uVar16);
  if (lVar7 != 0) {
    FUN_0082b78c(lVar7);
  }
  param_1[10] = lVar7;
  uVar16 = FUN_007e336c();
  lVar7 = FUN_0081a750(0x98,uVar16);
  if (lVar7 != 0) {
    FUN_008406b0(lVar7);
  }
  uVar2 = *(ushort *)(param_1 + 1);
  uVar17 = (ulong)uVar2;
  param_1[0xb] = lVar7;
  uVar16 = FUN_007e336c();
  puVar8 = (undefined8 *)FUN_0081a750(uVar17 * 0x18,uVar16);
  if (puVar8 == (undefined8 *)0x0) {
    param_1[0x22] = 0;
  }
  else {
    if (uVar2 != 0) {
      uVar10 = uVar17 * 3 & 3;
      if (uVar17 * 3 - 1 < 3) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        puVar12 = puVar8 + 2;
        do {
          lVar7 = lVar7 + -4;
          puVar12[-2] = 0;
          puVar12[-1] = 0;
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12 = puVar12 + 4;
        } while (uVar10 + uVar17 * -3 != lVar7);
        lVar7 = -lVar7;
      }
      if (uVar10 != 0) {
        puVar12 = puVar8 + lVar7;
        do {
          uVar10 = uVar10 - 1;
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        } while (uVar10 != 0);
      }
    }
    uVar2 = *(ushort *)(param_1 + 1);
    param_1[0x22] = (long)puVar8;
    if (uVar2 != 0) {
      param_1[0x20] = (long)puVar8;
      *(uint *)(param_1 + 0x21) = (uint)uVar2;
      *puVar8 = 0;
      puVar8[1] = 0;
      FUN_007e8fa0(plVar13,plVar13,(long)*(int *)((long)param_1 + 0xfc) + (long)puVar8);
      if (uVar2 != 1) {
        lVar7 = 0;
        lVar15 = (ulong)uVar2 - 1;
        do {
          lVar11 = param_1[0x20];
          puVar8 = (undefined8 *)(lVar11 + lVar7 + 0x18);
          *puVar8 = 0;
          *(undefined8 *)(lVar11 + lVar7 + 0x20) = 0;
          FUN_007e8fa0(plVar13,plVar13,(long)*(int *)((long)param_1 + 0xfc) + (long)puVar8);
          lVar7 = lVar7 + 0x18;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
    }
  }
  uVar16 = FUN_007e336c();
  lVar7 = FUN_0081a750(0x30,uVar16);
  if (lVar7 != 0) {
    FUN_007e5b70(lVar7);
  }
  param_1[0x15] = lVar7;
  memset(param_1 + 0x11,0,0x20);
  return;
}


