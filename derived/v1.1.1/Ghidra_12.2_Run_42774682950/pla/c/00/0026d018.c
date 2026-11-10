/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026d018; name: FUN_0026d018
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0026d018(undefined1 *param_1,undefined8 param_2,long param_3,long param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 *local_28;
  
  *(long *)(param_1 + 0x78) = param_3;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_4 + 0x10);
  *(long *)(param_1 + 0x238) = param_4;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  if (*(char *)(*(long *)(param_4 + 0x10) + 0x75b) == '\0') {
    uVar14 = 0x3f800000;
    if (*(char *)(*(long *)(param_4 + 0x10) + 0x75c) != '\0') {
      uVar14 = 0;
    }
  }
  else {
    uVar14 = 0;
  }
  *(undefined4 *)(param_1 + 0x74) = uVar14;
  uVar9 = DAT_0388a148;
  uVar8 = DAT_0388a140;
  uVar7 = _UNK_03889a88;
  uVar6 = _DAT_03889a80;
  uVar5 = _UNK_03888d18;
  uVar4 = _DAT_03888d10;
  *(undefined4 *)(param_1 + 0x24) = param_5;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x5e4) = 1;
  *(undefined8 *)(param_1 + 0x348) = uVar7;
  *(undefined8 *)(param_1 + 0x340) = uVar6;
  *(undefined8 *)(param_1 + 0x358) = uVar9;
  *(undefined8 *)(param_1 + 0x350) = uVar8;
  *(undefined8 *)(param_1 + 0x368) = uVar5;
  *(undefined8 *)(param_1 + 0x360) = uVar4;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x388) = uVar7;
  *(undefined8 *)(param_1 + 0x380) = uVar6;
  *(undefined8 *)(param_1 + 0x398) = uVar9;
  *(undefined8 *)(param_1 + 0x390) = uVar8;
  *(undefined8 *)(param_1 + 0x3a8) = uVar5;
  *(undefined8 *)(param_1 + 0x3a0) = uVar4;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  if ((((*(char *)(param_4 + 4) == '\0') || (*(char *)(*(long *)(param_4 + 0x10) + 0x7e4) != '\0'))
      || (*(long *)(param_4 + 0x338) == 0)) || ((*(uint *)(param_4 + 0x330) & 0xfffffffe) != 2)) {
    if (*(long *)(param_4 + 0x90) != 0) {
      *(long *)(param_1 + 0x240) = *(long *)(param_4 + 0x90);
      *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_4 + 0x98);
      *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_4 + 0xa0);
      *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_4 + 0xa8);
      *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_4 + 0xb0);
      *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_4 + 0xb8);
      *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_4 + 0xc0);
      *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_4 + 200);
      *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_4 + 0xd0);
      *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_4 + 0xd8);
      *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_4 + 0xe0);
      *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_4 + 0xe8);
      *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_4 + 0xf0);
      *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_4 + 0xf8);
      *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_4 + 0x100);
      *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_4 + 0x108);
    }
    *(undefined8 *)(param_1 + 0x60) = 0x3f8000003f800000;
    *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(param_1 + 0x30) = 0;
    uVar2 = *(undefined1 *)(param_4 + 4);
    *(undefined2 *)(param_1 + 2) = 0x101;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined2 *)(param_1 + 0x6bc) = 0x100;
    param_1[10] = 1;
    *param_1 = uVar2;
    puVar11 = (uint *)FUN_00277098();
    cVar3 = *(char *)(*(long *)(param_1 + 0xa0) + 0x757);
    if (cVar3 == '\x02') {
      uVar10 = *(int *)(*(long *)(param_1 + 0xa0) + 0x760) * -0x2023e3cb;
LAB_0026d238:
      FUN_00277368(param_1 + 0xa8,uVar10);
    }
    else {
      if (cVar3 == '\x01') {
        uVar10 = *(uint *)(*(long *)(param_1 + 0x78) + 0x34);
        goto LAB_0026d238;
      }
      if (cVar3 == '\0') {
        uVar10 = *puVar11 ^ *puVar11 << 0xb;
        *puVar11 = puVar11[1];
        uVar1 = puVar11[3];
        uVar10 = uVar10 ^ uVar10 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
        puVar11[1] = puVar11[2];
        puVar11[2] = uVar1;
        puVar11[3] = uVar10;
        goto LAB_0026d238;
      }
    }
    uVar12 = FUN_0026d2ac(param_1,param_2,param_7);
    if ((uVar12 & 1) != 0) {
      lVar13 = *(long *)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      uVar4 = *(undefined8 *)(lVar13 + 0x90);
      *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(lVar13 + 0x98);
      *(undefined8 *)(param_1 + 0x3c0) = uVar4;
      *(undefined8 *)(param_1 + 0x3d8) = 0;
      *(undefined8 *)(param_1 + 0x3d0) = 0;
      auVar15 = NEON_fmov(0x3f800000,4);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar13 + 0x2c);
      *(long *)(param_1 + 0x428) = auVar15._8_8_;
      *(long *)(param_1 + 0x420) = auVar15._0_8_;
      *(long *)(param_1 + 0x438) = auVar15._8_8_;
      *(long *)(param_1 + 0x430) = auVar15._0_8_;
      local_28 = param_1;
      uVar10 = FUN_00265300(&local_28);
      goto LAB_0026d298;
    }
  }
  else {
    FUN_00271770("Lightweight child emitter and history based stripe cannot be combined.\n");
    FUN_00271760(param_1,0x20000);
  }
  uVar10 = 0;
  param_1[6] = 1;
LAB_0026d298:
  return uVar10 & 1;
}


