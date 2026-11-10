/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f5740; name: FUN_002f5740
 */


void FUN_002f5740(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar8 = FUN_002eec80(1);
  auVar9 = FUN_002ef140(10,3);
  auVar9 = FUN_002ef150(auVar8._0_8_,auVar8._8_8_,auVar9._0_8_,auVar9._8_8_);
  auVar8 = FUN_002eec80(1);
  FUN_002f5da0();
  FUN_002f8c10();
  FUN_00300174();
  FUN_002ef750(&DAT_0438f800);
  puVar3 = PTR___tls_init_043737c8;
  lVar2 = tpidr_el0;
  if (DAT_0438f7f0 != &DAT_0438f7e8) {
    do {
      auVar10 = FUN_002eec80(1);
      auVar10 = FUN_002ef280(auVar10._0_8_,auVar10._8_8_,auVar8._0_8_,auVar8._8_8_);
      auVar11 = FUN_002ef140(1,3);
      iVar4 = FUN_002eef40(auVar10._0_8_,auVar10._8_8_,auVar11._0_8_,auVar11._8_8_);
      if (-1 < iVar4) {
        if (DAT_0438f7f0 != &DAT_0438f7e8) {
          lVar6 = 0;
          puVar7 = DAT_0438f7f0;
          do {
            puVar7 = (undefined8 *)puVar7[1];
            lVar6 = lVar6 + 1;
          } while (puVar7 != &DAT_0438f7e8);
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/iomgr.cc",0x6c,0,
                       "Waiting for %lu iomgr objects to be destroyed",lVar6);
        }
        auVar8 = FUN_002eec80(1);
      }
      if (puVar3 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar6 = *(long *)(lVar2 + 0x30);
      *(undefined8 *)(lVar6 + 0x38) = 0x7fffffffffffffff;
      *(undefined1 *)(lVar6 + 0x34) = 1;
      iVar4 = FUN_002f5ca0(0);
      if (iVar4 == 2) {
        FUN_002ef790(&DAT_0438f800);
        if (puVar3 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
        FUN_002eff00(*(undefined8 *)(lVar2 + 0x30));
        FUN_002f8c10();
        FUN_002ef750(&DAT_0438f800);
      }
      else {
        if (DAT_0438f7f0 == &DAT_0438f7e8) break;
        if (DAT_0438f7e0 != '\0') {
          uVar5 = FUN_002f5700();
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/iomgr.cc",0x7c,0,
                       "Failed to free %lu iomgr objects before shutdown deadline: memory leaks are likely"
                       ,uVar5);
          FUN_002f5ab0();
                    /* WARNING: Subroutine does not return */
          abort();
        }
        auVar10 = FUN_002eec80(0);
        auVar11 = FUN_002ef090(100,3);
        auVar10 = FUN_002ef150(auVar10._0_8_,auVar10._8_8_,auVar11._0_8_,auVar11._8_8_);
        iVar4 = FUN_002ef8a0(&DAT_0438f820,&DAT_0438f800,auVar10._0_8_,auVar10._8_8_);
        if (iVar4 != 0) {
          auVar10 = FUN_002eec80(1);
          iVar4 = FUN_002eef40(auVar10._0_8_,auVar10._8_8_,auVar9._0_8_,auVar9._8_8_);
          if (0 < iVar4) {
            if (DAT_0438f7f0 != &DAT_0438f7e8) {
              lVar6 = 0;
              puVar7 = DAT_0438f7f0;
              do {
                puVar7 = (undefined8 *)puVar7[1];
                lVar6 = lVar6 + 1;
              } while (puVar7 != &DAT_0438f7e8);
              FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/iomgr.cc",0x8b,0,
                           "Failed to free %lu iomgr objects before shutdown deadline: memory leaks are likely"
                           ,lVar6);
              puVar7 = DAT_0438f7f0;
              if (DAT_0438f7f0 != &DAT_0438f7e8) {
                do {
                  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/iomgr.cc",0x57,0,
                               "%s OBJECT: %s %p","LEAKED",*puVar7,puVar7);
                  puVar1 = puVar7 + 1;
                  puVar7 = (undefined8 *)*puVar1;
                } while ((undefined8 *)*puVar1 != &DAT_0438f7e8);
              }
            }
            break;
          }
        }
      }
    } while (DAT_0438f7f0 != &DAT_0438f7e8);
  }
  FUN_002ef790(&DAT_0438f800);
  FUN_002f5ce0();
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  FUN_002eff00(*(undefined8 *)(lVar2 + 0x30));
  FUN_002ef750(&DAT_0438f800);
  FUN_002ef790(&DAT_0438f800);
  FUN_002f8c20();
  FUN_002ef710(&DAT_0438f800);
  FUN_002ef860(&DAT_0438f820);
  return;
}


