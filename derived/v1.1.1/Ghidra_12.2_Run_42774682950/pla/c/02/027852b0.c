/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027852b0; name: FUN_027852b0
 */


void FUN_027852b0(void *param_1,int *param_2,void *param_3)

{
  uint uVar1;
  short sVar2;
  undefined4 *puVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_e810 [2736];
  undefined8 local_dd60;
  undefined8 local_dd58;
  undefined8 local_dd50;
  undefined8 local_dd48;
  undefined8 local_dd40;
  undefined8 local_dd38;
  undefined8 local_dd30;
  undefined8 local_dd28;
  undefined8 local_dd20;
  short local_dd18;
  int local_dd10 [2];
  undefined8 local_dd08;
  uint local_dd00;
  undefined8 auStack_dcfc [9];
  short asStack_dcb4 [2];
  undefined1 auStack_dcb0 [28];
  undefined4 local_dc94 [14093];
  
  if (*(short *)((long)param_3 + 0x56) == 0) {
    memcpy(param_1,param_2,0xdca8);
    return;
  }
  lVar6 = 0xdca0;
  local_dd10[0] = 0;
  memset(&local_dd08,0,0xdca0);
  puVar3 = local_dc94;
  do {
    *(undefined8 *)(puVar3 + -0x1b) = 0;
    lVar6 = lVar6 + -0xb08;
    *(undefined2 *)(puVar3 + -0xd) = 0x100;
    *(undefined2 *)((long)puVar3 + -2) = 0;
    *puVar3 = 0;
    *(undefined8 *)(puVar3 + -0xc) = 0;
    *(undefined8 *)(puVar3 + -10) = 0;
    *(undefined8 *)((long)puVar3 + -0x22) = 0;
    puVar3 = puVar3 + 0x2c2;
  } while (lVar6 != 0);
  uVar8 = 0;
  piVar5 = param_2 + 0x18;
  lVar6 = 0x14;
  do {
    local_dd48 = *(undefined8 *)(piVar5 + -0xd);
    local_dd40 = *(undefined8 *)(piVar5 + -0xb);
    local_dd38 = *(undefined8 *)(piVar5 + -9);
    local_dd50 = *(undefined8 *)(piVar5 + -0xf);
    uVar9 = *(undefined8 *)(piVar5 + -0x16);
    iVar7 = piVar5[-0x14];
    local_dd28 = *(undefined8 *)(piVar5 + -5);
    local_dd20 = *(undefined8 *)(piVar5 + -3);
    local_dd18 = (short)piVar5[-1];
    local_dd30 = *(undefined8 *)(piVar5 + -7);
    local_dd60 = *(undefined8 *)(piVar5 + -0x13);
    local_dd58 = *(undefined8 *)(piVar5 + -0x11);
    sVar2 = *(short *)((long)piVar5 + -2);
    memcpy(auStack_e810,piVar5,0xab0);
    if ((iVar7 == 2) && (sVar2 != 0)) {
      lVar4 = (long)(int)uVar8;
      *(undefined4 *)((long)auStack_dcfc + lVar4 * 0xb08 + -4) = 2;
      auStack_dcfc[lVar4 * 0x161 + 1] = local_dd58;
      auStack_dcfc[lVar4 * 0x161 + 5] = local_dd38;
      auStack_dcfc[lVar4 * 0x161 + 4] = local_dd40;
      auStack_dcfc[lVar4 * 0x161 + 2] = local_dd50;
      auStack_dcfc[lVar4 * 0x161] = local_dd60;
      *(undefined8 *)(local_dd10 + lVar4 * 0x2c2 + 2) = uVar9;
      auStack_dcfc[lVar4 * 0x161 + 3] = local_dd48;
      uVar8 = uVar8 + 1;
      asStack_dcb4[lVar4 * 0x584 + 1] = sVar2;
      asStack_dcb4[lVar4 * 0x584] = local_dd18;
      auStack_dcfc[lVar4 * 0x161 + 8] = local_dd20;
      auStack_dcfc[lVar4 * 0x161 + 7] = local_dd28;
      auStack_dcfc[lVar4 * 0x161 + 6] = local_dd30;
      memcpy(auStack_dcb0 + lVar4 * 0xb08,auStack_e810,0xaac);
    }
    lVar6 = lVar6 + -1;
    piVar5 = piVar5 + 0x2c2;
  } while (lVar6 != 0);
  if (uVar8 < 0x14) {
    memcpy(local_dd10 + (long)(int)uVar8 * 0x2c2 + 2,param_3,0xb04);
    piVar5 = param_2 + 0x18;
    local_dd10[0] = *param_2 + 1;
    iVar7 = 1;
    lVar6 = 0x14;
    do {
      if (0x13 < iVar7 + uVar8) break;
      local_dd48 = *(undefined8 *)(piVar5 + -0xd);
      local_dd40 = *(undefined8 *)(piVar5 + -0xb);
      local_dd38 = *(undefined8 *)(piVar5 + -9);
      local_dd50 = *(undefined8 *)(piVar5 + -0xf);
      uVar9 = *(undefined8 *)(piVar5 + -0x16);
      uVar1 = piVar5[-0x14];
      local_dd28 = *(undefined8 *)(piVar5 + -5);
      local_dd20 = *(undefined8 *)(piVar5 + -3);
      local_dd18 = (short)piVar5[-1];
      local_dd30 = *(undefined8 *)(piVar5 + -7);
      local_dd60 = *(undefined8 *)(piVar5 + -0x13);
      local_dd58 = *(undefined8 *)(piVar5 + -0x11);
      sVar2 = *(short *)((long)piVar5 + -2);
      memcpy(auStack_e810,piVar5,0xab0);
      if ((uVar1 < 2) && (sVar2 != 0)) {
        lVar4 = (long)(int)(iVar7 + uVar8);
        auStack_dcfc[lVar4 * 0x161 + 1] = local_dd58;
        auStack_dcfc[lVar4 * 0x161 + 5] = local_dd38;
        auStack_dcfc[lVar4 * 0x161 + 2] = local_dd50;
        auStack_dcfc[lVar4 * 0x161 + 4] = local_dd40;
        auStack_dcfc[lVar4 * 0x161] = local_dd60;
        asStack_dcb4[lVar4 * 0x584] = local_dd18;
        *(undefined8 *)(local_dd10 + lVar4 * 0x2c2 + 2) = uVar9;
        *(uint *)((long)auStack_dcfc + lVar4 * 0xb08 + -4) = uVar1;
        auStack_dcfc[lVar4 * 0x161 + 3] = local_dd48;
        asStack_dcb4[lVar4 * 0x584 + 1] = sVar2;
        auStack_dcfc[lVar4 * 0x161 + 8] = local_dd20;
        auStack_dcfc[lVar4 * 0x161 + 7] = local_dd28;
        auStack_dcfc[lVar4 * 0x161 + 6] = local_dd30;
        memcpy(auStack_dcb0 + lVar4 * 0xb08,auStack_e810,0xaac);
        iVar7 = iVar7 + 1;
      }
      lVar6 = lVar6 + -1;
      piVar5 = piVar5 + 0x2c2;
    } while (lVar6 != 0);
    param_2 = local_dd10;
  }
  memcpy(param_1,param_2,0xdca8);
  return;
}


