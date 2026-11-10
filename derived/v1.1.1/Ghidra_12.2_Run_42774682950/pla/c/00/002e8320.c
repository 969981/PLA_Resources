/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e8320; name: FUN_002e8320
 */


ulong FUN_002e8320(byte *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  void *__dest;
  ulong uVar2;
  byte *__src;
  
  if ((*param_1 & 1) == 0) {
    __src = param_1 + 1;
    uVar2 = (ulong)(*param_1 >> 1);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((long)uVar2 < 0) {
                    /* try { // try from 002e8428 to 002e8447 has its CatchHandler @ 002e8468 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    __src = *(byte **)(param_1 + 0x10);
  }
  if (((uint)param_2 & 0xff) != 2) {
    return 0;
  }
  if (((uint)param_2 >> 8 & 1) == 0) {
    uVar2 = FUN_002e9018(param_4,__src,uVar2,param_2 >> 0x20,param_3,param_2 >> 9 & 1);
    return uVar2 & 1;
  }
  if (uVar2 != 0) {
    __dest = (void *)param_4[3];
    param_4[2] = param_4[2] + uVar2;
    if (uVar2 < (ulong)((long)param_4 + (0x420 - (long)__dest))) {
      memcpy(__dest,__src,uVar2);
      param_4[3] = param_4[3] + uVar2;
    }
    else {
      puVar1 = param_4 + 4;
      if ((long)__dest - (long)puVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      (*(code *)param_4[1])(*param_4,puVar1,(long)__dest - (long)puVar1,param_4,param_3);
      param_4[3] = puVar1;
      (*(code *)param_4[1])(*param_4,__src,uVar2);
    }
  }
  return 1;
}


