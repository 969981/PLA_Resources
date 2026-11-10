/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00594e20; name: FUN_00594e20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00594e20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 local_50 [4];
  undefined8 local_48;
  int local_40 [2];
  long *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_002ef750(&DAT_0439ef18);
  if (DAT_0439ee98 == 0) {
    DAT_0439ef38 = FUN_00595070(param_1,0,0);
    DAT_0439ee98 = FUN_003d2170(0);
    local_50[0] = 0x101;
    local_48 = 0;
    FUN_002f6abc(local_40,"alts_tsi_handshaker",&LAB_00594f80,0,0,local_50);
    DAT_0439ee78 = local_40[0];
    DAT_0439ee80 = local_38;
    DAT_0439ee90 = uStack_28;
    _DAT_0439ee88 = local_30;
    uVar1 = FUN_002fe040();
    DAT_0439eea0 = uVar1;
    uVar2 = FUN_003ceda0(DAT_0439ee98);
    FUN_002fe080(uVar1,uVar2);
    if (DAT_0439ee80 == (long *)0x0) {
      if (DAT_0439ee78 != 4) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/thd.h",0x8b,2,
                     "assertion failed: %s","state_ == FAILED");
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (DAT_0439ee78 != 1) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/thd.h",0x82,2,
                     "assertion failed: %s","state_ == ALIVE");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      DAT_0439ee78 = 2;
      (**(code **)(*DAT_0439ee80 + 0x10))();
    }
  }
  FUN_002ef790(&DAT_0439ef18);
  return;
}


