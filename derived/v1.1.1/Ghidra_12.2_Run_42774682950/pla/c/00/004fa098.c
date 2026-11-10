/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fa098; name: FUN_004fa098
 */


undefined1  [16] FUN_004fa098(undefined1 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_3;
  uVar2 = FUN_002fee98(&local_20,*param_1,param_4);
  if (uVar2 == 0xffffffffffffffff) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_20 + local_18;
    return auVar4;
  }
  if (local_18 < uVar2) {
    FUN_002ee770("absl::string_view::substr");
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x4fa104);
    (*pcVar1)();
  }
  auVar3[8] = local_18 != uVar2;
  auVar3._0_8_ = local_20 + uVar2;
  auVar3._9_7_ = 0;
  return auVar3;
}


