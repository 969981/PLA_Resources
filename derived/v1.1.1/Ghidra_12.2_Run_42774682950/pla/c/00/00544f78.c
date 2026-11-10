/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00544f78; name: FUN_00544f78
 */


long FUN_00544f78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar6 = 0;
  lVar1 = param_1 + 0x28;
  do {
    FUN_002ef750(lVar1);
    auVar7 = FUN_003fe0f0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0);
    lVar5 = auVar7._8_8_;
    uVar2 = auVar7._0_8_;
    FUN_002ef790(lVar1);
    lVar3 = FUN_003fdb00(uVar2,lVar5,param_2,0);
    if (lVar3 == 0) {
      auVar7 = FUN_003fe0f0(uVar2,lVar5,0);
      lVar3 = FUN_002e2e80(PTR_FUN_04373078,8);
      if (lVar3 != 0) {
        FUN_0053c284(lVar3,param_2);
      }
      uVar4 = FUN_00538334(param_3,
                           "external/com_google_grpc_base/src/core/ext/filters/client_channel/global_subchannel_pool.cc"
                           ,0x68,"subchannel_register+new");
      auVar7 = FUN_003fdb80(auVar7._0_8_,auVar7._8_8_,lVar3,uVar4,0);
      FUN_002ef750(lVar1);
      if (*(long *)(param_1 + 0x20) == lVar5) {
        auVar8._8_8_ = *(long *)(param_1 + 0x20);
        auVar8._0_8_ = *(undefined8 *)(param_1 + 0x18);
        *(undefined1 (*) [16])(param_1 + 0x18) = auVar7;
        lVar3 = param_3;
      }
      else {
        lVar3 = 0;
        auVar8 = auVar7;
      }
      FUN_002ef790(lVar1);
      thunk_FUN_003fddd0(auVar8._0_8_,auVar8._8_8_,0);
    }
    else {
      lVar3 = FUN_00538408();
      if (lVar3 != 0) {
        FUN_00537ecc(param_3,
                     "external/com_google_grpc_base/src/core/ext/filters/client_channel/global_subchannel_pool.cc"
                     ,0x4c,"subchannel_register+found_existing");
        thunk_FUN_003fddd0(uVar2,lVar5,0);
        return lVar3;
      }
      if (99 < uVar6) {
        auVar7 = FUN_002eec80(1);
        auVar8 = FUN_002eeff0(10,3);
        FUN_002ef150(auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_);
        FUN_002eed10();
      }
      lVar3 = 0;
    }
    thunk_FUN_003fddd0(uVar2,lVar5,0);
    uVar6 = uVar6 + 1;
  } while (lVar3 == 0);
  return lVar3;
}


