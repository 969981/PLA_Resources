/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c5f98; name: FUN_032c5f98
 */


long FUN_032c5f98(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *local_220;
  int local_218;
  uint local_214;
  undefined1 auStack_210 [128];
  undefined1 *local_190;
  uint local_188;
  uint local_184;
  undefined1 local_180 [128];
  undefined1 *local_100;
  int local_f8;
  undefined4 uStack_f4;
  undefined1 local_f0 [128];
  undefined4 local_70;
  
  local_100 = local_f0;
  local_f8 = 0;
  uStack_f4 = 0x80000080;
  FUN_032c4ebc(&local_100,param_1);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  if (1 < local_f8) {
    lVar6 = 0;
    do {
      if (local_100[lVar6] == '\\') {
        local_100[lVar6] = 0x2f;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < local_f8 + -1);
  }
  puVar8 = &DAT_038bda1d;
  uVar4 = FUN_032c4b20(local_100,&DAT_038bda1d);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_032c4b20(local_100,&DAT_0389ffa9);
    puVar8 = &DAT_0389ffa9;
    if ((uVar4 & 1) == 0) {
      puVar8 = &DAT_03996322;
    }
  }
  local_190 = local_180;
  local_188 = 0;
  local_184 = 0x80000010;
  FUN_032c5224(&local_100,&local_190);
  uVar1 = local_188;
  puVar2 = PTR_PTR_0434a090;
  local_220 = auStack_210;
  local_218 = 0;
  local_214 = 0x80000010;
  if (0x10 < (int)local_188) {
    if ((int)local_188 < 0x40000000) {
      uVar5 = 0x20;
    }
    else {
      FUN_032bd0a8(local_188);
      uVar5 = (local_214 & 0x3fffffff) * 2;
      if (0x3ffffffe < uVar5) {
        uVar5 = 0x3fffffff;
      }
    }
    if ((int)uVar1 <= (int)uVar5) {
      uVar1 = uVar5;
    }
    local_220 = (undefined1 *)FUN_032bd1d4(puVar2,uVar1,8,local_220,0,&local_214);
  }
  if (0 < (int)local_188) {
    lVar6 = 0;
    iVar7 = 0;
    do {
      iVar3 = strcmp("..",*(char **)(local_190 + lVar6 * 8));
      puVar9 = local_190;
      if (iVar3 == 0) {
        if (iVar7 == 0) {
          uVar1 = local_218 + 1;
          if (local_218 < (int)(local_214 & 0x3fffffff)) {
            iVar7 = 0;
          }
          else {
            if (0x3ffffffe < local_218) {
              FUN_032bd0a8(uVar1);
            }
            uVar5 = (local_214 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar5) {
              uVar5 = 0x3fffffff;
            }
            if ((int)uVar1 <= (int)uVar5) {
              uVar1 = uVar5;
            }
            local_220 = (undefined1 *)FUN_032bd1d4(puVar2,uVar1,8,local_220,local_218,&local_214);
            iVar7 = 0;
          }
LAB_032c614c:
          *(undefined8 *)(local_220 + (long)local_218 * 8) = *(undefined8 *)(puVar9 + lVar6 * 8);
          local_218 = local_218 + 1;
        }
        else {
          local_218 = local_218 + -1;
          iVar7 = iVar7 + -1;
        }
      }
      else {
        iVar3 = strcmp(".",*(char **)(local_190 + lVar6 * 8));
        if (iVar3 != 0) {
          iVar3 = strcmp(*(char **)(local_190 + lVar6 * 8),"");
          puVar9 = local_190;
          if (iVar3 != 0) {
            iVar7 = iVar7 + 1;
            uVar1 = local_218 + 1;
            if ((int)(local_214 & 0x3fffffff) <= local_218) {
              if (0x3ffffffe < local_218) {
                FUN_032bd0a8(uVar1);
              }
              uVar5 = (local_214 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar5) {
                uVar5 = 0x3fffffff;
              }
              if ((int)uVar1 <= (int)uVar5) {
                uVar1 = uVar5;
              }
              local_220 = (undefined1 *)FUN_032bd1d4(puVar2,uVar1,8,local_220,local_218,&local_214);
            }
            goto LAB_032c614c;
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)local_188);
  }
  FUN_032c4d7c(param_1,puVar8,0xffffffff);
  if (0 < local_218) {
    lVar6 = 0;
    do {
      FUN_032c638c(param_1,*(undefined8 *)(local_220 + lVar6 * 8),0,0);
      lVar6 = lVar6 + 1;
    } while (lVar6 < local_218);
  }
  if ((-1 < (int)local_214) && (local_220 != (undefined1 *)0x0)) {
    FUN_032cf244(puVar2,local_220,8,local_214 & 0x3fffffff);
  }
  local_188 = 0;
  if ((-1 < (int)local_184) && (local_190 != (undefined1 *)0x0)) {
    FUN_032cf244(puVar2,local_190,8,local_184 & 0x3fffffff);
  }
  FUN_032c4ce8(&local_100);
  return param_1;
}


