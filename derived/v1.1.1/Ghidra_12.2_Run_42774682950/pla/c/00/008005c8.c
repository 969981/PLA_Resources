/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008005c8; name: FUN_008005c8
 */


void FUN_008005c8(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (*(char *)((long)param_2 + 0x65) == '\0') {
    uVar1 = FUN_007e5f0c();
    if ((uVar1 & 1) != 0) {
      uVar1 = FUN_007e5f54(param_2);
      if ((uVar1 & 1) != 0) {
        local_30[0] = 0x10408;
        goto LAB_0080063c;
      }
      if (param_2[0xb] != 0) {
        FUN_007e5da4();
      }
    }
    (**(code **)(*param_2 + 0x10))(param_2,0);
    *(undefined1 *)((long)param_2 + 0x65) = 1;
  }
  local_30[0] = 0;
LAB_0080063c:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


