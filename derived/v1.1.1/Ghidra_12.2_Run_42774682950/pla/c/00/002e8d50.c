/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e8d50; name: FUN_002e8d50
 */


void FUN_002e8d50(undefined1 param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong __n;
  size_t __n_00;
  undefined8 *puVar3;
  ulong __n_01;
  ulong __n_02;
  
  lVar2 = (long)param_2 >> 0x20;
  if ((long)param_2 < 0) {
    lVar2 = 0;
  }
  __n = 0;
  if (lVar2 != 0) {
    __n = lVar2 - 1;
  }
  if (__n == 0 || (param_2 & 0x200) != 0) {
    puVar3 = (undefined8 *)param_4[3];
  }
  else {
    puVar1 = (undefined8 *)param_4[3];
    param_4[2] = param_4[2] + __n;
    __n_02 = (long)param_4 + (0x420 - (long)puVar1);
    puVar3 = puVar1;
    __n_01 = __n;
    if (__n_02 < __n) {
      puVar3 = param_4 + 4;
      do {
        if (__n_02 != 0) {
          memset(puVar1,0x20,__n_02);
          puVar1 = (undefined8 *)(param_4[3] + __n_02);
          param_4[3] = puVar1;
        }
        if ((long)puVar1 - (long)puVar3 < 0) goto LAB_002e8f08;
        __n_01 = __n_01 - __n_02;
        (*(code *)param_4[1])(*param_4,puVar3,(long)puVar1 - (long)puVar3);
        param_4[3] = puVar3;
        __n_02 = 0x400;
        puVar1 = puVar3;
      } while (0x400 < __n_01);
    }
    memset(puVar3,0x20,__n_01);
    puVar3 = (undefined8 *)(param_4[3] + __n_01);
    param_4[3] = puVar3;
  }
  param_4[2] = param_4[2] + 1;
  if (puVar3 == param_4 + 0x84) {
    puVar3 = param_4 + 4;
    (*(code *)param_4[1])(*param_4,puVar3,0x400);
    param_4[3] = puVar3;
  }
  *(undefined1 *)puVar3 = param_1;
  puVar3 = (undefined8 *)(param_4[3] + 1);
  param_4[3] = puVar3;
  if ((((uint)param_2 >> 9 & 1) != 0) && (__n != 0)) {
    __n_00 = (long)(param_4 + 0x84) - (long)puVar3;
    param_4[2] = param_4[2] + __n;
    puVar1 = puVar3;
    if (__n_00 < __n) {
      puVar1 = param_4 + 4;
      do {
        if (__n_00 != 0) {
          memset(puVar3,0x20,__n_00);
          puVar3 = (undefined8 *)(param_4[3] + __n_00);
          param_4[3] = puVar3;
        }
        if ((long)puVar3 - (long)puVar1 < 0) {
LAB_002e8f08:
                    /* WARNING: Subroutine does not return */
          __assert_fail("false && \"len <= kMaxSize\"",
                        "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
        }
        __n = __n - __n_00;
        (*(code *)param_4[1])(*param_4,puVar1,(long)puVar3 - (long)puVar1);
        param_4[3] = puVar1;
        __n_00 = 0x400;
        puVar3 = puVar1;
      } while (0x400 < __n);
    }
    memset(puVar1,0x20,__n);
    param_4[3] = param_4[3] + __n;
  }
  return;
}


