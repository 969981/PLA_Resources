/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01306838; name: FUN_01306838
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_01306838(long param_1,undefined8 *param_2,float *param_3,uint param_4,undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  float *pfVar5;
  uint uVar6;
  code *pcVar7;
  ulong uVar8;
  code **ppcVar9;
  uint uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  code *local_200;
  code *local_1f8;
  undefined1 *local_1f0;
  undefined1 *puStack_1e8;
  undefined1 local_1e0 [96];
  undefined1 *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [96];
  code *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 local_e0 [112];
  undefined1 local_64 [4];
  
  ppcVar9 = &local_200;
  local_1e0[0] = param_5;
  local_180 = &LAB_01306d74;
  local_178 = FUN_01306d7c;
  local_170 = &LAB_01306d80;
  puStack_168 = &LAB_01306d84;
  local_200 = FUN_01306d88;
  local_1f8 = FUN_01306d9c;
  local_1f0 = &LAB_01306da0;
  puStack_1e8 = &LAB_01306dac;
  if ((param_4 & 1) == 0) {
    ppcVar9 = (code **)&local_180;
  }
  else {
    local_e0[0] = param_5;
  }
  local_f0 = ppcVar9[2];
  puStack_e8 = ppcVar9[3];
  local_100 = *ppcVar9;
  local_f8 = ppcVar9[1];
  lVar11 = 0;
  fVar13 = 999999.0;
  cVar4 = *(char *)(param_1 + 0xb0);
  pfVar5 = (float *)(param_1 + 0xc0);
  uVar6 = 0xffffffff;
  while( true ) {
    uVar10 = uVar6;
    if (cVar4 != '\0') {
      local_64[0] = *(undefined1 *)((long)pfVar5 + -7);
      uVar8 = (*local_100)(local_e0,local_64);
      if ((uVar8 & 1) != 0) {
        fVar12 = (*param_3 - pfVar5[-1]) * (*param_3 - pfVar5[-1]) +
                 (param_3[1] - *pfVar5) * (param_3[1] - *pfVar5);
        uVar10 = (uint)lVar11;
        if (900.0 < fVar12 || fVar13 <= fVar12) {
          uVar10 = uVar6;
          fVar12 = fVar13;
        }
        fVar13 = fVar12;
      }
    }
    pcVar7 = local_1f8;
    lVar11 = lVar11 + 1;
    if (lVar11 == 100) break;
    cVar4 = *(char *)(pfVar5 + 0x30);
    pfVar5 = pfVar5 + 0x34;
    uVar6 = uVar10;
  }
  if ((param_2 != (undefined8 *)0x0) && (uVar10 != 0xffffffff)) {
    if (99 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_01306bb0();
    }
    param_1 = param_1 + (long)(int)uVar10 * 0xd0;
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *param_2 = *(undefined8 *)(param_1 + 0xb8);
    param_2[1] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 200);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    param_2[4] = *(undefined8 *)(param_1 + 0xd8);
    param_2[5] = uVar3;
    param_2[2] = uVar1;
    param_2[3] = uVar2;
  }
  if (local_1f8 == (code *)0x0) {
    local_1f8 = (code *)0x0;
    pcVar7 = local_178;
  }
  else {
    local_1f0 = (undefined1 *)0x0;
    puStack_1e8 = (undefined1 *)0x0;
    local_200 = (code *)0x0;
    local_1f8 = (code *)0x0;
    (*pcVar7)(local_1e0);
    pcVar7 = local_178;
  }
  if (pcVar7 == (code *)0x0) {
    local_178 = (code *)0x0;
    pcVar7 = local_f8;
  }
  else {
    local_170 = (undefined1 *)0x0;
    puStack_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar7)(auStack_160);
    pcVar7 = local_f8;
  }
  if (pcVar7 != (code *)0x0) {
    local_f0 = (undefined1 *)0x0;
    puStack_e8 = (undefined1 *)0x0;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar7)(local_e0);
  }
  return uVar10;
}


