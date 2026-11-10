/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00304bb0; name: FUN_00304bb0
 */


void FUN_00304bb0(long *param_1,char *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  long local_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 auStack_140 [32];
  long local_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [32];
  long local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [32];
  long local_80;
  ulong uStack_78;
  ulong local_70;
  long lStack_68;
  
  sVar2 = strlen(param_2);
  puVar11 = (ulong *)(param_1 + 1);
  lVar12 = *param_1;
  if (lVar12 == 0) {
    lVar10 = (long)param_1 + 9;
  }
  else {
    lVar10 = param_1[2];
  }
  if (sVar2 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice_string_helpers.cc",0x57,2,
                 "assertion failed: %s","sep_len > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uStack_78 = param_1[1];
  local_80 = *param_1;
  lStack_68 = param_1[3];
  local_70 = param_1[2];
  uVar8 = (ulong)&local_80 | 9;
  uVar5 = uStack_78 & 0xff;
  if (local_80 != 0) {
    uVar8 = local_70;
    uVar5 = uStack_78;
  }
  sVar3 = strlen(param_2);
  if (sVar3 <= uVar5) {
    uVar9 = 0;
    while (iVar1 = memcmp((void *)(uVar8 + uVar9),param_2,sVar3), iVar1 != 0) {
      uVar9 = uVar9 + 1;
      if (uVar5 - sVar3 < uVar9) goto LAB_00304c60;
    }
    uVar8 = 0;
    if ((param_4 & 1) != 0) {
      uVar5 = uVar9;
      if (uVar9 == 0) goto joined_r0x00304d64;
      do {
        do {
          uVar5 = uVar9;
          if (*(char *)(lVar10 + uVar8) != ' ') goto joined_r0x00304d64;
          uVar8 = uVar8 + 1;
        } while (uVar9 != uVar8);
        uVar8 = uVar9;
        while( true ) {
          lStack_b8 = param_1[1];
          local_c0 = *param_1;
          lStack_a8 = param_1[3];
          lStack_b0 = param_1[2];
          FUN_002f3570(auStack_a0,&local_c0,uVar8,uVar9);
          FUN_00305230(param_3,auStack_a0);
          uStack_d8 = param_1[1];
          local_e0 = *param_1;
          lStack_c8 = param_1[3];
          local_d0 = param_1[2];
          uVar8 = uVar5 + sVar2;
          lVar12 = (long)&uStack_d8 + 1;
          uVar5 = uStack_d8 & 0xff;
          if (local_e0 != 0) {
            lVar12 = local_d0;
            uVar5 = uStack_d8;
          }
          sVar3 = strlen(param_2);
          if (uVar5 - uVar8 < sVar3) goto LAB_00304ee0;
          uVar9 = 0;
          while (iVar1 = memcmp((void *)(lVar12 + uVar8 + uVar9),param_2,sVar3), iVar1 != 0) {
            uVar9 = uVar9 + 1;
            if ((uVar5 - uVar8) - sVar3 < uVar9) goto LAB_00304ee0;
          }
          uVar9 = uVar8 + uVar9;
          uVar5 = uVar9;
          if (uVar8 < uVar9) break;
joined_r0x00304d64:
          for (; (uVar8 < uVar9 && (*(char *)(lVar10 + -1 + uVar9) == ' ')); uVar9 = uVar9 - 1) {
          }
        }
      } while( true );
    }
    while( true ) {
      lStack_b8 = param_1[1];
      local_c0 = *param_1;
      lStack_a8 = param_1[3];
      lStack_b0 = param_1[2];
      FUN_002f3570(auStack_a0,&local_c0,uVar8,uVar9);
      FUN_00305230(param_3,auStack_a0);
      uStack_d8 = param_1[1];
      local_e0 = *param_1;
      lStack_c8 = param_1[3];
      local_d0 = param_1[2];
      uVar8 = uVar9 + sVar2;
      lVar12 = (long)&uStack_d8 + 1;
      uVar5 = uStack_d8 & 0xff;
      if (local_e0 != 0) {
        lVar12 = local_d0;
        uVar5 = uStack_d8;
      }
      sVar3 = strlen(param_2);
      if (uVar5 - uVar8 < sVar3) break;
      uVar9 = 0;
      while (iVar1 = memcmp((void *)(lVar12 + uVar8 + uVar9),param_2,sVar3), iVar1 != 0) {
        uVar9 = uVar9 + 1;
        if ((uVar5 - uVar8) - sVar3 < uVar9) goto LAB_00304ee0;
      }
      uVar9 = uVar8 + uVar9;
    }
LAB_00304ee0:
    if (*param_1 == 0) {
      uVar5 = (ulong)(byte)*puVar11;
    }
    else {
      uVar5 = *puVar11;
    }
    if ((param_4 & 1) != 0) {
      if (uVar8 < uVar5) {
        while (*(char *)(lVar10 + uVar8) == ' ') {
          uVar8 = uVar8 + 1;
          if (uVar5 == uVar8) {
            uVar8 = uVar5;
            goto LAB_00304f48;
          }
        }
      }
      if (uVar8 < uVar5) {
        do {
          if (*(char *)(lVar10 + -1 + uVar5) != ' ') break;
          uVar5 = uVar5 - 1;
        } while (uVar8 < uVar5);
      }
    }
LAB_00304f48:
    lStack_118 = param_1[1];
    local_120 = *param_1;
    lStack_108 = param_1[3];
    lStack_110 = param_1[2];
    puVar7 = auStack_100;
    puVar6 = auStack_100;
    plVar4 = &local_120;
    goto LAB_00304f60;
  }
LAB_00304c60:
  if (lVar12 == 0) {
    uVar5 = (ulong)(byte)*puVar11;
  }
  else {
    uVar5 = *puVar11;
  }
  uVar8 = 0;
  if ((param_4 & 1) != 0) {
    uVar8 = 0;
    if (uVar5 == 0) {
LAB_00304cd8:
      if (uVar8 < uVar5) {
        do {
          if (*(char *)(lVar10 + -1 + uVar5) != ' ') break;
          uVar5 = uVar5 - 1;
        } while (uVar8 < uVar5);
      }
    }
    else {
      do {
        if (*(char *)(lVar10 + uVar8) != ' ') goto LAB_00304cd8;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
      uVar8 = uVar5;
    }
  }
  lStack_158 = param_1[1];
  local_160 = *param_1;
  lStack_148 = param_1[3];
  lStack_150 = param_1[2];
  puVar7 = auStack_140;
  puVar6 = auStack_140;
  plVar4 = &local_160;
LAB_00304f60:
  FUN_002f3570(puVar6,plVar4,uVar8);
  FUN_00305230(param_3,puVar7);
  return;
}


