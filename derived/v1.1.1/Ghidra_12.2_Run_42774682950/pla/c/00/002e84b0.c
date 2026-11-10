/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e84b0; name: FUN_002e84b0
 */


ulong FUN_002e84b0(void *param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  void *__dest;
  ulong uVar2;
  
  if (((uint)param_3 & 0xff) != 2) {
    return 0;
  }
  if (((uint)param_3 >> 8 & 1) == 0) {
    uVar2 = FUN_002e9018(param_5,param_1,param_2,param_3 >> 0x20,param_4,param_3 >> 9 & 1);
    return uVar2 & 1;
  }
  if (param_2 != 0) {
    __dest = (void *)param_5[3];
    param_5[2] = param_5[2] + param_2;
    if (param_2 < (ulong)((long)param_5 + (0x420 - (long)__dest))) {
      memcpy(__dest,param_1,param_2);
      param_5[3] = param_5[3] + param_2;
    }
    else {
      puVar1 = param_5 + 4;
      if ((long)__dest - (long)puVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      (*(code *)param_5[1])(*param_5,puVar1,(long)__dest - (long)puVar1);
      param_5[3] = puVar1;
      (*(code *)param_5[1])(*param_5,param_1,param_2);
    }
  }
  return 1;
}


