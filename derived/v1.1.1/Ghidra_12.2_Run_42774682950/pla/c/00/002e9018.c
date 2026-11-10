/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e9018; name: FUN_002e9018
 */


undefined8
FUN_002e9018(undefined8 *param_1,void *param_2,ulong param_3,int param_4,int param_5,uint param_6)

{
  void *pvVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong __n;
  undefined8 *puVar5;
  ulong uVar6;
  
  if (((param_5 < 0) || (uVar6 = (long)param_5, param_3 <= (ulong)(long)param_5)) &&
     (uVar6 = param_3, (long)param_3 < 0)) {
LAB_002e9260:
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  uVar3 = (long)param_4 & ((long)param_4 >> 0x3f ^ 0xffffffffffffffffU);
  __n = 0;
  if (uVar6 <= uVar3) {
    __n = uVar3 - uVar6;
  }
  if ((param_6 & 1) == 0) {
    if (__n != 0) {
      puVar2 = (undefined8 *)param_1[3];
      param_1[2] = param_1[2] + __n;
      uVar3 = (long)param_1 + (0x420 - (long)puVar2);
      puVar5 = puVar2;
      if (uVar3 < __n) {
        puVar5 = param_1 + 4;
        do {
          if (uVar3 != 0) {
            memset(puVar2,0x20,uVar3);
            puVar2 = (undefined8 *)(param_1[3] + uVar3);
            param_1[3] = puVar2;
          }
          if ((long)puVar2 - (long)puVar5 < 0) goto LAB_002e9260;
          __n = __n - uVar3;
          (*(code *)param_1[1])(*param_1,puVar5,(long)puVar2 - (long)puVar5);
          param_1[3] = puVar5;
          uVar3 = 0x400;
          puVar2 = puVar5;
        } while (0x400 < __n);
      }
      memset(puVar5,0x20,__n);
      param_1[3] = param_1[3] + __n;
    }
    if (uVar6 == 0) {
      return 1;
    }
    pvVar1 = (void *)param_1[3];
    param_1[2] = param_1[2] + uVar6;
    if ((ulong)((long)param_1 + (0x420 - (long)pvVar1)) <= uVar6) {
      puVar5 = param_1 + 4;
      if (-1 < (long)pvVar1 - (long)puVar5) {
        (*(code *)param_1[1])(*param_1,puVar5,(long)pvVar1 - (long)puVar5);
        param_1[3] = puVar5;
        (*(code *)param_1[1])(*param_1,param_2,uVar6);
        return 1;
      }
      goto LAB_002e9260;
    }
    memcpy(pvVar1,param_2,uVar6);
    lVar4 = param_1[3] + uVar6;
  }
  else {
    if (uVar6 != 0) {
      pvVar1 = (void *)param_1[3];
      param_1[2] = param_1[2] + uVar6;
      if (uVar6 < (ulong)((long)param_1 + (0x420 - (long)pvVar1))) {
        memcpy(pvVar1,param_2,uVar6);
        param_1[3] = param_1[3] + uVar6;
      }
      else {
        puVar5 = param_1 + 4;
        if ((long)pvVar1 - (long)puVar5 < 0) goto LAB_002e9260;
        (*(code *)param_1[1])(*param_1,puVar5,(long)pvVar1 - (long)puVar5);
        param_1[3] = puVar5;
        (*(code *)param_1[1])(*param_1,param_2,uVar6);
      }
    }
    if (__n == 0) {
      return 1;
    }
    puVar2 = (undefined8 *)param_1[3];
    param_1[2] = param_1[2] + __n;
    uVar6 = (long)param_1 + (0x420 - (long)puVar2);
    puVar5 = puVar2;
    if (uVar6 < __n) {
      puVar5 = param_1 + 4;
      do {
        if (uVar6 != 0) {
          memset(puVar2,0x20,uVar6);
          puVar2 = (undefined8 *)(param_1[3] + uVar6);
          param_1[3] = puVar2;
        }
        if ((long)puVar2 - (long)puVar5 < 0) goto LAB_002e9260;
        __n = __n - uVar6;
        (*(code *)param_1[1])(*param_1,puVar5,(long)puVar2 - (long)puVar5);
        param_1[3] = puVar5;
        uVar6 = 0x400;
        puVar2 = puVar5;
      } while (0x400 < __n);
    }
    memset(puVar5,0x20,__n);
    lVar4 = param_1[3] + __n;
  }
  param_1[3] = lVar4;
  return 1;
}


