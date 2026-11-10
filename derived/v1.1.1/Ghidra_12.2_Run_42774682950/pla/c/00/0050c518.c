/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050c518; name: FUN_0050c518
 */


ulong FUN_0050c518(ulong *param_1,char *param_2,long *param_3,byte *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  size_t sVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong *puVar7;
  char *pcVar8;
  ulong uVar9;
  ulong *puVar10;
  char *local_b8;
  size_t local_b0;
  char *local_88;
  size_t local_80;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (param_3 == (long *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver_registry.cc"
                 ,0x46,2,"assertion failed: %s","uri != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar2 = (undefined8 *)FUN_003eb610(param_2,1);
  *param_3 = (long)puVar2;
  if ((puVar2 != (undefined8 *)0x0) && (uVar6 = *param_1, 1 < uVar6)) {
    pcVar8 = (char *)*puVar2;
    uVar9 = 0;
    puVar10 = param_1 + 1;
    do {
      puVar7 = puVar10;
      if ((uVar6 & 1) != 0) {
        puVar7 = (ulong *)param_1[1];
      }
      pcVar3 = (char *)(**(code **)(*(long *)puVar7[uVar9] + 0x18))();
      iVar1 = strcmp(pcVar8,pcVar3);
      if (iVar1 == 0) {
        if (*param_1 >> 1 <= uVar9) goto LAB_0050c7cc;
        if ((*param_1 & 1) != 0) {
          puVar10 = (ulong *)param_1[1];
        }
        if (puVar10[uVar9] != 0) {
          return puVar10[uVar9];
        }
        break;
      }
      uVar6 = *param_1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6 >> 1);
  }
  FUN_003ec320(*param_3);
  local_88 = (char *)param_1[0xb];
  sVar4 = 0;
  if ((local_88 != (char *)0x0) && (sVar4 = strlen(local_88), (long)sVar4 < 0)) {
LAB_0050c5fc:
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  local_b8 = param_2;
  local_80 = sVar4;
  if (param_2 == (char *)0x0) {
    local_b0 = 0;
  }
  else {
    local_b0 = strlen(param_2);
    if ((long)local_b0 < 0) goto LAB_0050c5fc;
  }
  FUN_002eced0(&local_58,&local_88,&local_b8);
  if ((*param_4 & 1) == 0) {
    param_4[0] = 0;
    param_4[1] = 0;
  }
  else {
    **(undefined1 **)(param_4 + 0x10) = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[0xc] = 0;
    param_4[0xd] = 0;
    param_4[0xe] = 0;
    param_4[0xf] = 0;
    if ((*param_4 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_4 + 0x10));
      param_4[0] = 0;
      param_4[1] = 0;
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
      param_4[6] = 0;
      param_4[7] = 0;
    }
  }
  *(undefined8 *)(param_4 + 0x10) = local_48;
  *(undefined8 *)(param_4 + 8) = uStack_50;
  *(undefined8 *)param_4 = local_58;
  if ((*param_4 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_003eb610(param_4 + 1,1);
    *param_3 = (long)puVar2;
  }
  else {
    puVar2 = (undefined8 *)FUN_003eb610(*(undefined8 *)(param_4 + 0x10),1);
    *param_3 = (long)puVar2;
  }
  if ((puVar2 != (undefined8 *)0x0) && (uVar6 = *param_1, 1 < uVar6)) {
    pcVar8 = (char *)*puVar2;
    uVar9 = 0;
    puVar10 = param_1 + 1;
    do {
      puVar7 = puVar10;
      if ((uVar6 & 1) != 0) {
        puVar7 = (ulong *)param_1[1];
      }
      pcVar3 = (char *)(**(code **)(*(long *)puVar7[uVar9] + 0x18))();
      iVar1 = strcmp(pcVar8,pcVar3);
      if (iVar1 == 0) {
        if (*param_1 >> 1 <= uVar9) {
LAB_0050c7cc:
                    /* WARNING: Subroutine does not return */
          __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",
                        0x13e,"operator[]");
        }
        if ((*param_1 & 1) != 0) {
          puVar10 = (ulong *)param_1[1];
        }
        if (puVar10[uVar9] != 0) {
          return puVar10[uVar9];
        }
        break;
      }
      uVar6 = *param_1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6 >> 1);
  }
  FUN_003eb610(param_2,0);
  FUN_003ec320();
  if ((*param_4 & 1) == 0) {
    pbVar5 = param_4 + 1;
  }
  else {
    pbVar5 = *(byte **)(param_4 + 0x10);
  }
  FUN_003eb610(pbVar5,0);
  FUN_003ec320();
  if ((*param_4 & 1) == 0) {
    param_4 = param_4 + 1;
  }
  else {
    param_4 = *(byte **)(param_4 + 0x10);
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver_registry.cc"
               ,0x53,2,"don\'t know how to resolve \'%s\' or \'%s\'",param_2,param_4);
  return 0;
}


