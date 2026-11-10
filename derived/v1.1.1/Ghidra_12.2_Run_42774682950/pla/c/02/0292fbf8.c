/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292fbf8; name: FUN_0292fbf8
 */


void FUN_0292fbf8(undefined4 *param_1,long param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                 undefined8 param_6,undefined8 *param_7)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  char local_70;
  char local_6f;
  char local_6e;
  char local_6d;
  char local_6c;
  char local_6b;
  undefined2 local_6a;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uStack_8c = *(undefined4 *)(param_2 + 8);
  local_90 = *(undefined4 *)(param_2 + 0xc);
  uStack_94 = *(undefined4 *)(param_2 + 0x10);
  local_98 = *(undefined4 *)(param_2 + 0x14);
  uVar14 = *(undefined4 *)(param_2 + 0x18);
  uVar13 = *(undefined4 *)(param_2 + 0x1c);
  uVar5 = *param_3;
  uVar6 = *(ulong *)(param_2 + 0x28);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar10 = uVar6 - 1 & uVar5;
    }
    else {
      uVar10 = uVar5;
      if (uVar6 <= uVar5) {
        uVar10 = 0;
        if (uVar6 != 0) {
          uVar10 = uVar5 / uVar6;
        }
        uVar10 = uVar5 - uVar10 * uVar6;
      }
    }
    lVar9 = *(long *)(param_2 + 0x20);
    plVar11 = *(long **)(lVar9 + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar11[1] == uVar5) {
            if (plVar11[2] == uVar5) goto LAB_0292fd2c;
          }
          else if ((plVar11[1] & uVar6 - 1) != uVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == uVar5) {
            if (plVar11[2] == uVar5) goto LAB_0292fd2c;
          }
          else {
            if (uVar6 <= uVar12) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar12 / uVar6;
              }
              uVar12 = uVar12 - uVar4 * uVar6;
            }
            if (uVar12 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    goto LAB_0292fd38;
  }
  goto LAB_0292fe04;
LAB_0292fd2c:
  local_90 = *(undefined4 *)((long)plVar11 + 0x1c);
  local_98 = *(undefined4 *)((long)plVar11 + 0x24);
  uVar13 = *(undefined4 *)((long)plVar11 + 0x2c);
LAB_0292fd38:
  uVar10 = *param_5;
  if (uVar7 < 2) {
    uVar12 = uVar10 & uVar6 - 1;
LAB_0292fd6c:
    plVar11 = *(long **)(lVar9 + uVar12 * 8);
  }
  else {
    uVar12 = uVar10;
    if (uVar10 < uVar6) goto LAB_0292fd6c;
    uVar12 = 0;
    if (uVar6 != 0) {
      uVar12 = uVar10 / uVar6;
    }
    uVar12 = uVar10 - uVar12 * uVar6;
    plVar11 = *(long **)(lVar9 + uVar12 * 8);
  }
  if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
    if (uVar7 < 2) {
      do {
        if (plVar11[1] == uVar10) {
          if (plVar11[2] == uVar10) goto LAB_0292fdf8;
        }
        else if ((plVar11[1] & uVar6 - 1) != uVar12) break;
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
    else {
      do {
        uVar7 = plVar11[1];
        if (uVar7 == uVar10) {
          if (plVar11[2] == uVar10) goto LAB_0292fdf8;
        }
        else {
          if (uVar6 <= uVar7) {
            uVar4 = 0;
            if (uVar6 != 0) {
              uVar4 = uVar7 / uVar6;
            }
            uVar7 = uVar7 - uVar4 * uVar6;
          }
          if (uVar7 != uVar12) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  goto LAB_0292fe04;
LAB_02930004:
  FUN_0292dc4c(&local_88,plVar11 + 3,param_5,param_6);
  local_68 = local_88;
  uStack_60 = local_80;
  local_58 = local_78;
  if (((((local_6f != '\0' || local_70 != '\0') || local_6e != '\0') || local_6d != '\0') ||
      local_6c != '\0') || local_6b != '\0') goto LAB_029300bc;
  uVar5 = *param_3;
  uVar6 = *(ulong *)(param_2 + 0x180);
  if (uVar6 == 0) goto LAB_029300ec;
  goto LAB_0292ff1c;
LAB_02930068:
  FUN_0292dc4c(&local_88,plVar11 + 3,param_5,param_6);
  local_68 = local_88;
  uStack_60 = local_80;
  local_58 = local_78;
  if (((((local_6f != '\0' || local_70 != '\0') || local_6e != '\0') || local_6d != '\0') ||
      local_6c != '\0') || local_6b != '\0') {
LAB_029300bc:
    local_78 = local_58;
    local_6a = 0;
    local_88 = local_68;
    local_80 = uStack_60;
    goto LAB_02930118;
  }
  goto LAB_029300ec;
LAB_0292fdf8:
  uStack_8c = (undefined4)plVar11[3];
  uStack_94 = (undefined4)plVar11[4];
  uVar14 = (undefined4)plVar11[5];
LAB_0292fe04:
  local_68 = DAT_03a7e9c4;
  uStack_60 = DAT_03a7e9cc;
  local_58 = DAT_03a7e9d4;
  uVar6 = *(ulong *)(param_2 + 0x1e8);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar10 = *param_4;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar12 = uVar6 - 1 & uVar10;
    }
    else {
      uVar12 = uVar10;
      if (uVar6 <= uVar10) {
        uVar12 = 0;
        if (uVar6 != 0) {
          uVar12 = uVar10 / uVar6;
        }
        uVar12 = uVar10 - uVar12 * uVar6;
      }
    }
    plVar11 = *(long **)(*(long *)(param_2 + 0x1e0) + uVar12 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar11[1] == uVar10) {
            if (plVar11[2] == uVar10) goto LAB_02930004;
          }
          else if ((plVar11[1] & uVar6 - 1) != uVar12) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar11[1];
          if (uVar7 == uVar10) {
            if (plVar11[2] == uVar10) goto LAB_02930004;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar4 * uVar6;
            }
            if (uVar7 != uVar12) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  uVar6 = *(ulong *)(param_2 + 0x180);
  if (uVar6 != 0) {
LAB_0292ff1c:
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar10 = uVar6 - 1 & uVar5;
    }
    else {
      uVar10 = uVar5;
      if (uVar6 <= uVar5) {
        uVar10 = 0;
        if (uVar6 != 0) {
          uVar10 = uVar5 / uVar6;
        }
        uVar10 = uVar5 - uVar10 * uVar6;
      }
    }
    plVar11 = *(long **)(*(long *)(param_2 + 0x178) + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar11[1] == uVar5) {
            if (plVar11[2] == uVar5) goto LAB_02930068;
          }
          else if ((plVar11[1] & uVar6 - 1) != uVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar11[1];
          if (uVar7 == uVar5) {
            if (plVar11[2] == uVar5) goto LAB_02930068;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar12 = 0;
              if (uVar6 != 0) {
                uVar12 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar12 * uVar6;
            }
            if (uVar7 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
LAB_029300ec:
  FUN_0292dc4c(&local_88,param_2 + 0x88,param_5,param_6);
LAB_02930118:
  puVar2 = (undefined8 *)&uStack_8c;
  if (local_70 != '\0') {
    puVar2 = &local_88;
  }
  puVar3 = &local_90;
  if (local_6f != '\0') {
    puVar3 = (undefined4 *)((ulong)&local_88 | 4);
  }
  uVar8 = *(undefined4 *)puVar2;
  local_68 = CONCAT44(local_68._4_4_,uVar8);
  puVar2 = (undefined8 *)&uStack_94;
  if (local_6e != '\0') {
    puVar2 = &local_80;
  }
  local_a0 = *(undefined4 *)puVar2;
  puVar1 = &local_98;
  if (local_6d != '\0') {
    puVar1 = (undefined4 *)((long)&local_80 + 4);
  }
  local_9c = *puVar3;
  local_a4 = *puVar1;
  if (local_6c != '\0') {
    uVar14 = (undefined4)local_78;
  }
  local_a8 = uVar14;
  if (local_6b != '\0') {
    uVar13 = local_78._4_4_;
  }
  local_ac = uVar13;
  if (param_7 != (undefined8 *)0x0) {
    puVar2 = &local_68;
    if (*(char *)(param_7 + 3) != '\0') {
      puVar2 = param_7;
    }
    uVar8 = *(undefined4 *)puVar2;
    puVar3 = &local_9c;
    if (*(char *)((long)param_7 + 0x19) != '\0') {
      puVar3 = (undefined4 *)((long)param_7 + 4);
    }
    local_9c = *puVar3;
    puVar2 = (undefined8 *)&local_a0;
    if (*(char *)((long)param_7 + 0x1a) != '\0') {
      puVar2 = param_7 + 1;
    }
    local_a0 = *(undefined4 *)puVar2;
    puVar3 = &local_a4;
    if (*(char *)((long)param_7 + 0x1b) != '\0') {
      puVar3 = (undefined4 *)((long)param_7 + 0xc);
    }
    local_a4 = *puVar3;
    puVar2 = (undefined8 *)&local_a8;
    if (*(char *)((long)param_7 + 0x1c) != '\0') {
      puVar2 = param_7 + 2;
    }
    uVar14 = *(undefined4 *)puVar2;
    puVar3 = &local_ac;
    if (*(char *)((long)param_7 + 0x1d) != '\0') {
      puVar3 = (undefined4 *)((long)param_7 + 0x14);
    }
    uVar13 = *puVar3;
  }
  *param_1 = uVar8;
  param_1[1] = local_9c;
  param_1[2] = local_a0;
  param_1[3] = local_a4;
  param_1[4] = uVar14;
  param_1[5] = uVar13;
  return;
}


