/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecaee8; name: FUN_02ecaee8
 */


void FUN_02ecaee8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  *param_1 = &DAT_042aa308;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = &PTR___cxa_pure_virtual_042aa330;
  FUN_02e9b9cc(param_1 + 3,*(undefined8 *)(param_2 + 0x10),param_3,
               *(byte *)(param_2 + 0x288) >> 2 & 1);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *param_1 = &PTR_FUN_042aa198;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[2] = &PTR_LAB_042aa270;
  param_1[3] = &PTR_LAB_042aa288;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x204) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)((long)param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x30);
  piVar8 = *(int **)(param_2 + 0x20);
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  *(int **)((long)param_1 + 0x1fc) = piVar8;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  lVar9 = *(long *)(param_2 + 8);
  param_1[0x45] = lVar9;
  param_1[0x46] = param_4;
  param_1[0x47] = 0;
  *(undefined4 *)((long)param_1 + 0x244) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x254) = 0x3f800000;
  *(int *)((long)param_1 + 0x29c) = param_6;
  *(undefined2 *)(param_1 + 0x54) = 1;
  *(byte *)((long)param_1 + 0x2a2) = *(byte *)((long)param_1 + 0x2a2) & 0x80;
  uVar4 = *(uint *)((long)param_1 + 0x2a3);
  uVar2 = (uint)(param_6 != 0) << 0x16;
  *(uint *)((long)param_1 + 0x2a3) = uVar4 & 0xf8000000 | uVar2 | 0x220000;
  uVar1 = (*(byte *)(param_2 + 0x288) >> 3 & 1) << 0x1b;
  *(uint *)((long)param_1 + 0x2a3) = uVar4 & 0x80000000 | uVar2 | 0x220000 | uVar1;
  uVar2 = uVar2 | 0x220000 | uVar1 | (*(byte *)(param_2 + 0x288) & 2) << 0x1e;
  *(uint *)((long)param_1 + 0x2a3) = uVar2;
  uVar10 = *param_5;
  uVar12 = param_5[1];
  *(undefined4 *)(param_1 + 0x57) = *(undefined4 *)(param_5 + 2);
  param_1[0x56] = uVar12;
  param_1[0x55] = uVar10;
  *(undefined4 *)((long)param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x84);
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  uVar1 = *(uint *)(param_2 + 0x98);
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  *(uint *)((long)param_1 + 0x2d4) = uVar1;
  iVar11 = *(int *)(param_2 + 0x90);
  if (iVar11 == 0) {
    iVar11 = DAT_042aa180;
    DAT_042aa180 = DAT_042aa180 + 1;
  }
  else {
    *(uint *)((long)param_1 + 0x2a3) = uVar2 | 0x2000000;
  }
  *(int *)(param_1 + 0x56) = iVar11;
  *(undefined4 *)((long)param_1 + 0x244) = 0x4101;
  *(undefined4 *)((long)param_1 + 0x2ac) = *(undefined4 *)((long)param_1 + 0x194);
  uVar12 = *(undefined8 *)(param_2 + 0x70);
  uVar10 = *(undefined8 *)(param_2 + 0x60);
  uVar6 = *(undefined4 *)(param_2 + 0x78);
  param_1[0x51] = *(undefined8 *)(param_2 + 0x68);
  param_1[0x52] = uVar12;
  param_1[0x50] = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  uVar12 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  param_1[0x4e] = *(undefined8 *)(param_2 + 0x50);
  param_1[0x4f] = uVar3;
  param_1[0x4c] = uVar10;
  param_1[0x4d] = uVar12;
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x53) = uVar6;
  param_1[0x4b] = uVar10;
  uVar2 = (uVar1 & 0xff) - 0x80;
  uVar5 = (undefined1)(uVar1 >> 8);
  if ((uVar2 < 0x21) && ((1L << ((ulong)uVar2 & 0x3f) & 0x100010001U) != 0)) {
    *(undefined1 *)(param_1 + 8) = uVar5;
    *(char *)(param_1 + 9) = (char)(uVar1 >> 0x10);
  }
  else {
    *(undefined1 *)(param_1 + 8) = uVar5;
    *(undefined1 *)(param_1 + 9) = 0xff;
    if ((uVar1 & 0xff) == 0) {
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + 0x42);
      param_1[10] = param_1;
      goto LAB_02ecb1b8;
    }
  }
  if (lVar9 != 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(lVar9 + 0x10);
  }
  param_1[10] = param_1;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + 0x42);
  if (((uVar1 & 0xff) == 0x90) && (uVar1 >> 0x18 != 0)) {
    local_80 = param_1[5];
    local_70 = param_1[7];
    uStack_68 = param_1[8];
    local_60 = param_1[9];
    uStack_58 = param_1[10];
    local_78 = param_1[6] & 0xffffffff00000000;
    local_48 = 0;
    local_50 = 0x400000000;
    FUN_02ee0d64((float)(uVar1 >> 0x18),DAT_0440a160,0x81,&local_80,&local_50,1,0);
  }
LAB_02ecb1b8:
  lVar9 = *(long *)(param_2 + 0xa0);
  param_1[0x5b] = lVar9;
  if (lVar9 != 0) {
    FUN_02e7b4cc();
    uVar6 = FUN_02ed1118(param_1[0x30]);
    puVar7 = (undefined4 *)FUN_02ecf4c0(param_1[0x5b] + 0x40);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = uVar6;
      *(undefined8 **)(puVar7 + 2) = param_1;
    }
  }
  return;
}


