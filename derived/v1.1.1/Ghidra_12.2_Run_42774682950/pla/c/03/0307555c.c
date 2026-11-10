/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0307555c; name: FUN_0307555c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0307555c(undefined8 *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined4 local_34;
  
  FUN_02fd9898(param_1 + 0x1c);
  FUN_02fd9898(param_1 + 0x3e);
  param_1[0xa1] = 0;
  param_1[0xa2] = param_1 + 0xa4;
  puVar3 = PTR_DAT_043724f8;
  uVar17 = DAT_0388a148;
  uVar16 = DAT_0388a140;
  uVar15 = _UNK_0388a138;
  uVar14 = _DAT_0388a130;
  uVar13 = _UNK_03889a88;
  uVar12 = _DAT_03889a80;
  uVar11 = _UNK_03888d18;
  uVar10 = _DAT_03888d10;
  auVar21 = NEON_fmov(0x3f800000,4);
  param_1[0x6f] = _UNK_03889a88;
  param_1[0x6e] = uVar12;
  param_1[0x71] = uVar17;
  param_1[0x70] = uVar16;
  param_1[0xa0] = puVar3 + 0x10;
  param_1[0x222] = puVar3 + 0x10;
  *(undefined4 *)(param_1 + 0xa3) = 0x800;
  param_1[0x9e] = 0;
  param_1[0x78] = 0;
  param_1[0x73] = uVar11;
  param_1[0x72] = uVar10;
  param_1[0x75] = uVar15;
  param_1[0x74] = uVar14;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0xd;
  *(undefined2 *)(param_1 + 0x1ed) = 0xffff;
  param_1[0x223] = 0;
  param_1[0x224] = param_1 + 0x226;
  *(undefined4 *)(param_1 + 0x225) = 0x800;
  param_1[0x220] = 0;
  param_1[0x1fa] = 0;
  *(undefined4 *)(param_1 + 0x21b) = 0;
  param_1[0x21c] = 0xd;
  *(undefined2 *)(param_1 + 0x36f) = 0xffff;
  *(undefined4 *)(param_1 + 0x374) = 7;
  param_1[0x375] = 0;
  param_1[0x376] = 0;
  param_1[0x377] = 0;
  param_1[0x378] = 0;
  *(undefined4 *)(param_1 + 0x4f6) = 7;
  param_1[0x4f7] = 0;
  param_1[0x4f8] = 0;
  param_1[0x4f9] = 0;
  param_1[0x4fa] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  uVar22 = auVar21._8_8_;
  param_1[0x9d] = uVar22;
  uVar20 = auVar21._0_8_;
  param_1[0x9c] = uVar20;
  param_1[0x1f1] = uVar13;
  param_1[0x1f0] = uVar12;
  param_1[499] = uVar17;
  param_1[0x1f2] = uVar16;
  param_1[0x1f5] = uVar11;
  param_1[500] = uVar10;
  param_1[0x1f7] = uVar15;
  param_1[0x1f6] = uVar14;
  param_1[0x1f9] = 0;
  param_1[0x1f8] = 0;
  param_1[0x21f] = uVar22;
  param_1[0x21e] = uVar20;
  lVar9 = *(long *)(param_2 + 8);
  lVar6 = *(long *)(lVar9 + 0x38);
  puVar5 = (undefined8 *)(lVar6 + (param_3 & 0xffffff) * 0xc0);
  param_1[0x60] = puVar5;
  lVar7 = puVar5[0xf];
  if ((lVar7 == 0) || (*(char *)(lVar7 + 0x18) != '\x15')) {
    *(undefined4 *)(param_1 + 99) = 0xffffffff;
    param_1[100] = lVar7;
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x50);
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar8 + lVar7 + 0x50;
    }
    param_1[100] = lVar8;
    *(undefined4 *)(param_1 + 99) = 0x3fffffff;
  }
  lVar6 = lVar6 + (param_3 & 0xffffff) * 0xc0;
  param_1[0x61] = *(long *)(lVar9 + 0x150) + (long)*(int *)(lVar6 + 0x80) * 0x80;
  uVar2 = *(ushort *)(lVar6 + 0x8a);
  lVar6 = *(long *)(param_2 + 0x20);
  param_1[0x66] = param_1 + 0x6e;
  param_1[0x62] = lVar6 + (ulong)uVar2 * 0x50;
  lVar6 = puVar5[0xf];
  if (*(char *)(lVar6 + 0x19) == '\x02') {
    param_1[0x65] = lVar6;
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar6 + 0x18) * 0x200 + 0xa8))
              (lVar6,param_1 + 0x374,param_1 + 0x37c,param_1 + 0x4f6);
    puVar5 = (undefined8 *)param_1[0x60];
  }
  uVar11 = puVar5[1];
  uVar10 = *puVar5;
  param_1[1] = uVar11;
  *param_1 = uVar10;
  uVar13 = puVar5[3];
  uVar12 = puVar5[2];
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar15 = puVar5[5];
  uVar14 = puVar5[4];
  param_1[5] = uVar15;
  param_1[4] = uVar14;
  uVar17 = puVar5[7];
  uVar16 = puVar5[6];
  param_1[7] = uVar17;
  param_1[6] = uVar16;
  uVar19 = puVar5[9];
  uVar18 = puVar5[8];
  param_1[0x9a] = 8;
  param_1[0x9e] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x6f] = uVar11;
  param_1[0x6e] = uVar10;
  param_1[0x71] = uVar13;
  param_1[0x70] = uVar12;
  param_1[0x73] = uVar15;
  param_1[0x72] = uVar14;
  param_1[0x75] = uVar17;
  param_1[0x74] = uVar16;
  param_1[0x9d] = uVar22;
  param_1[0x9c] = uVar20;
  param_1[9] = uVar19;
  param_1[8] = uVar18;
  param_1[0x77] = uVar19;
  param_1[0x76] = uVar18;
  local_34 = 0x34000000;
  uVar4 = FUN_032c91c4(param_1,&DAT_03aae430,&local_34);
  if ((uVar4 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x9a);
    *(uint *)(param_1 + 0x9a) = uVar1 | 4;
    if ((ABS((float)((ulong)param_1[6] >> 0x20)) <= 1.1920929e-07 &&
        ABS((float)param_1[6]) <= 1.1920929e-07) && ABS((float)param_1[7]) <= 1.1920929e-07) {
      *(uint *)(param_1 + 0x9a) = uVar1 | 5;
    }
  }
  *(undefined2 *)(param_1 + 0x1ed) = 0xffff;
  param_1[0x67] = 0;
  param_1[0x68] = *(undefined8 *)(lVar9 + 0x150);
  param_1[0x6d] = param_1 + 0x1f0;
  param_1[0x69] = 0;
  return;
}


