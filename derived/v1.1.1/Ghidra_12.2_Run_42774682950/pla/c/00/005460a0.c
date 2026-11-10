/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005460a0; name: FUN_005460a0
 */


void FUN_005460a0(undefined8 *param_1,int *param_2,long *param_3)

{
  int *piVar1;
  int *piVar2;
  ulong *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  char *__s2;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  byte *__s1;
  byte *pbVar11;
  ulong uVar12;
  ulong *puVar13;
  byte local_98 [16];
  ulong local_88;
  undefined1 auStack_80 [32];
  byte *local_60;
  undefined *puStack_58;
  
  if ((param_3 == (long *)0x0) || (*param_3 != 0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy_registry.cc"
                 ,0xa1,2,"assertion failed: %s","error != nullptr && *error == ((grpc_error*)0L)");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (DAT_0439ece0 == (ulong *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy_registry.cc"
                 ,0xa2,2,"assertion failed: %s","g_state != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*param_2 == 6) {
    piVar2 = *(int **)(param_2 + 0x10);
    for (piVar1 = *(int **)(param_2 + 0xe); piVar1 != piVar2; piVar1 = piVar1 + 0x14) {
      if (*piVar1 != 5) {
        FUN_002f2c60(auStack_80,"child entry should be of type object");
        uVar8 = 0x84;
        goto LAB_00546244;
      }
      if (*(long *)(piVar1 + 0xc) != 1) {
        if (*(long *)(piVar1 + 0xc) == 0) {
          FUN_002f2c60(auStack_80,"no policy found in child entry");
          uVar8 = 0x88;
        }
        else {
          FUN_002f2c60(auStack_80,"oneOf violation");
          uVar8 = 0x8b;
        }
        goto LAB_00546244;
      }
      lVar6 = *(long *)(piVar1 + 8);
      if (*(int *)(lVar6 + 0x38) != 5) {
        FUN_002f2c60(auStack_80,"child entry should be of type object");
        uVar8 = 0x90;
        goto LAB_00546244;
      }
      if ((*(byte *)(lVar6 + 0x20) & 1) == 0) {
        uVar9 = FUN_00545e20(lVar6 + 0x21,0);
      }
      else {
        uVar9 = FUN_00545e20(*(undefined8 *)(lVar6 + 0x30),0);
      }
      if ((uVar9 & 1) != 0) {
        *param_3 = 0;
        pbVar11 = (byte *)(lVar6 + 0x20);
        puVar3 = DAT_0439ece0;
        bVar4 = *pbVar11;
        goto joined_r0x00546164;
      }
    }
    FUN_002f2c60(auStack_80,"No known policy");
    uVar8 = 0x99;
  }
  else {
    FUN_002f2c60(auStack_80,"type should be array");
    uVar8 = 0x7e;
  }
LAB_00546244:
  lVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy_registry.cc"
                       ,uVar8,auStack_80,0,0);
  *param_3 = lVar6;
  if (lVar6 == 0) {
    lVar6 = 0;
    pbVar11 = &DAT_00000020;
    puVar3 = DAT_0439ece0;
    bVar4 = DAT_00000020;
joined_r0x00546164:
    if ((bVar4 & 1) == 0) {
      __s1 = pbVar11 + 1;
      uVar9 = *puVar3;
    }
    else {
      __s1 = *(byte **)(lVar6 + 0x30);
      uVar9 = *puVar3;
    }
    DAT_0439ece0 = puVar3;
    if (1 < uVar9) {
      uVar12 = 0;
      puVar13 = puVar3 + 1;
      do {
        puVar10 = puVar13;
        if ((uVar9 & 1) != 0) {
          puVar10 = (ulong *)puVar3[1];
        }
        __s2 = (char *)(**(code **)(*(long *)puVar10[uVar12] + 0x18))();
        iVar5 = strcmp((char *)__s1,__s2);
        if (iVar5 == 0) {
          if (*puVar3 >> 1 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",
                          0x13e,"operator[]");
          }
          if ((*puVar3 & 1) != 0) {
            puVar13 = (ulong *)puVar3[1];
          }
          plVar7 = (long *)puVar13[uVar12];
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x20))(param_1,plVar7,lVar6 + 0x38,param_3);
            return;
          }
          break;
        }
        uVar9 = *puVar3;
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar9 >> 1);
    }
    puStack_58 = PTR_LAB_04374a18;
    local_60 = pbVar11;
    FUN_002e6390(local_98,"Factory not found for policy \"%s\"",0x21,&local_60,1);
    uVar9 = (ulong)local_98 | 1;
    if ((local_98[0] & 1) != 0) {
      uVar9 = local_88;
    }
                    /* try { // try from 0054633c to 0054635f has its CatchHandler @ 0054640c */
    FUN_002f2ff0(auStack_80,uVar9);
    lVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy_registry.cc"
                         ,0xae,auStack_80,0,0);
    *param_3 = lVar6;
    if ((local_98[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_88);
    }
  }
  *param_1 = 0;
  return;
}


