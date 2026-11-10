/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052d130; name: FUN_0052d130
 */


undefined8 FUN_0052d130(long param_1,long param_2,long param_3,uint param_4,ulong *param_5)

{
  int iVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x140) == 0) {
    return 0;
  }
  piVar10 = *(int **)(*(long *)(param_1 + 0x140) + 0x18);
  if (piVar10 == (int *)0x0) {
    return 0;
  }
  uVar9 = *(undefined8 *)(param_2 + 8);
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_00536130(*(undefined8 *)(param_3 + 0x10));
    if ((*(byte *)(lVar3 + 0x5e0) & 1) != 0) {
      if (PTR_DAT_04374b48[0x10] == '\0') {
        return 1;
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0xa85,1,"chand=%p calld=%p: retry already dispatched",uVar9,param_1);
      return 1;
    }
  }
  if (param_4 == 0) {
    if (*(long *)(param_1 + 0x138) != 0) {
      FUN_0054ac68();
    }
    if (PTR_DAT_04374b48[0x10] == '\0') {
      return 0;
    }
    pcVar7 = "chand=%p calld=%p: call succeeded";
    uVar6 = 0xa91;
  }
  else {
    if ((piVar10[7] & 1 << (ulong)(param_4 & 0x1f)) == 0) {
      if (PTR_DAT_04374b48[0x10] == '\0') {
        return 0;
      }
      uVar6 = FUN_00535490(param_4);
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0xa98,1,"chand=%p calld=%p: status %s not configured as retryable",uVar9,param_1
                   ,uVar6);
      return 0;
    }
    if ((*(long *)(param_1 + 0x138) == 0) || (uVar4 = FUN_0054ac14(), (uVar4 & 1) != 0)) {
      if ((*(byte *)(param_1 + 0x318) >> 4 & 1) == 0) {
        iVar1 = *(int *)(param_1 + 0x31c) + 1;
        *(int *)(param_1 + 0x31c) = iVar1;
        if (*piVar10 <= iVar1) {
          if (PTR_DAT_04374b48[0x10] == '\0') {
            return 0;
          }
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                       ,0xab8,1,"chand=%p calld=%p: exceeded %d retry attempts",uVar9,param_1);
          return 0;
        }
        if (*(long *)(param_1 + 0x198) == 0) {
          if (param_5 == (ulong *)0x0) {
            uVar4 = 0xffffffffffffffff;
            lVar8 = *(long *)(param_1 + 0x140);
          }
          else {
            uVar4 = *param_5 & 0xfffffffffffffffc;
            uStack_78 = *(undefined8 *)(uVar4 + 0x28);
            local_80 = *(undefined8 *)(uVar4 + 0x20);
            uStack_68 = *(undefined8 *)(uVar4 + 0x38);
            uStack_70 = *(undefined8 *)(uVar4 + 0x30);
            uVar4 = FUN_00304fc0(&local_80,&local_60);
            if ((uVar4 & 1) == 0) {
              if (PTR_DAT_04374b48[0x10] == '\0') {
                return 0;
              }
              pcVar7 = "chand=%p calld=%p: not retrying due to server push-back";
              uVar6 = 0xacd;
              goto LAB_0052d264;
            }
            if (PTR_DAT_04374b48[0x10] != '\0') {
              FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                           ,0xad4,1,"chand=%p calld=%p: server push-back: retry in %u ms",uVar9,
                           param_1,local_60 & 0xffffffff);
            }
            uVar4 = local_60 & 0xffffffff;
            lVar8 = *(long *)(param_1 + 0x140);
          }
          if (lVar8 == 0) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                         ,0xa50,2,"assertion failed: %s","method_params_ != nullptr");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar8 = *(long *)(lVar8 + 0x18);
          if (lVar8 == 0) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                         ,0xa52,2,"assertion failed: %s","retry_policy != nullptr");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar9 = *(undefined8 *)(param_2 + 8);
          if (*(long *)(param_1 + 400) != 0) {
            FUN_005363ac();
          }
          *(undefined8 *)(param_1 + 400) = 0;
          if ((long)uVar4 < 0) {
            if ((*(int *)(param_1 + 0x31c) == 1) || ((*(byte *)(param_1 + 0x318) >> 5 & 1) != 0)) {
              local_60 = *(ulong *)(lVar8 + 8);
              local_58 = (double)*(float *)(lVar8 + 0x18);
              local_50 = 0x3fc999999999999a;
              local_48 = *(undefined8 *)(lVar8 + 0x10);
              FUN_0053ecc8(param_1 + 0x328,&local_60);
              *(byte *)(param_1 + 0x318) = *(byte *)(param_1 + 0x318) & 0xdf;
            }
            lVar8 = FUN_0053ed18(param_1 + 0x328);
            cVar2 = PTR_DAT_04374b48[0x10];
          }
          else {
            if (PTR___tls_init_043737c8 != (undefined *)0x0) {
              grpc_core::ExecCtx::exec_ctx_::__tls_init();
            }
            lVar8 = tpidr_el0;
            lVar8 = FUN_002f00fc(*(undefined8 *)(lVar8 + 0x30));
            lVar8 = lVar8 + uVar4;
            *(byte *)(param_1 + 0x318) = *(byte *)(param_1 + 0x318) | 0x20;
            cVar2 = PTR_DAT_04374b48[0x10];
          }
          if (cVar2 != '\0') {
            if (PTR___tls_init_043737c8 != (undefined *)0x0) {
              grpc_core::ExecCtx::exec_ctx_::__tls_init();
            }
            lVar5 = tpidr_el0;
            lVar5 = FUN_002f00fc(*(undefined8 *)(lVar5 + 0x30));
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                         ,0xa67,1,"chand=%p calld=%p: retrying failed call in %ld ms",uVar9,param_1,
                         lVar8 - lVar5);
          }
          *(code **)(param_1 + 0x218) = FUN_00529020;
          *(char **)(param_1 + 0x238) =
               "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
          ;
          *(long *)(param_1 + 0x220) = param_2;
          *(undefined8 *)(param_1 + 0x228) = 0;
          *(undefined2 *)(param_1 + 0x230) = 0;
          *(undefined8 *)(param_1 + 0x248) = 0;
          *(undefined4 *)(param_1 + 0x250) = 0;
          *(undefined4 *)(param_1 + 0x240) = 0xa6d;
          FUN_002f5c60(param_1 + 0x358,lVar8,param_1 + 0x210);
          if (lVar3 != 0) {
            *(byte *)(lVar3 + 0x5e0) = *(byte *)(lVar3 + 0x5e0) | 1;
          }
          return 1;
        }
        if (PTR_DAT_04374b48[0x10] == '\0') {
          return 0;
        }
        pcVar7 = "chand=%p calld=%p: call cancelled from surface, not retrying";
        uVar6 = 0xac0;
      }
      else {
        if (PTR_DAT_04374b48[0x10] == '\0') {
          return 0;
        }
        pcVar7 = "chand=%p calld=%p: retries already committed";
        uVar6 = 0xaaf;
      }
    }
    else {
      if (PTR_DAT_04374b48[0x10] == '\0') {
        return 0;
      }
      pcVar7 = "chand=%p calld=%p: retries throttled";
      uVar6 = 0xaa8;
    }
  }
LAB_0052d264:
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
               ,uVar6,1,pcVar7,uVar9,param_1);
  return 0;
}


