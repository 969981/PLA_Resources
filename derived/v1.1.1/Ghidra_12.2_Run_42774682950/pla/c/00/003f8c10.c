/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f8c10; name: FUN_003f8c10
 */


undefined8 FUN_003f8c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = 0;
  local_18 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_002fe9e0(param_2,param_3,&local_20,&local_30);
  if (local_18 == 0) {
    return 0;
  }
  uVar1 = FUN_002fee98(&local_20,0x25,0);
  if (uVar1 != 0xffffffffffffffff) {
    if (local_18 < uVar1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("n <= length_","external/com_google_absl\\absl/strings/string_view.h",0x156,
                    "remove_suffix");
    }
    local_18 = uVar1;
  }
  uVar2 = FUN_003fbb60(param_1,local_20,local_18);
  return uVar2;
}


