/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e9ef0; name: FUN_002e9ef0
 */


void FUN_002e9ef0(char param_1,void *param_2,ulong param_3,uint param_4,int param_5,
                 undefined8 *param_6)

{
  void *__dest;
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  char *pcVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  if (param_5 < 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (param_5 - (int)param_3) - (uint)(param_1 != '\0');
    uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  }
  if ((param_4 >> 1 & 1) == 0) {
    uVar8 = 0;
    if ((param_4 & 0x20) != 0) {
      uVar8 = uVar6;
    }
    uVar1 = 0;
    if (uVar6 != 0) {
      if (((param_4 & 0xff) >> 5 & 1) == 0) {
        puVar2 = (undefined8 *)param_6[3];
        uVar4 = (ulong)uVar6;
        param_6[2] = param_6[2] + uVar4;
        uVar7 = (long)param_6 + (0x420 - (long)puVar2);
        puVar3 = puVar2;
        if (uVar7 < uVar4) {
          puVar3 = param_6 + 4;
          do {
            if (uVar7 != 0) {
              memset(puVar2,0x20,uVar7);
              puVar2 = (undefined8 *)(param_6[3] + uVar7);
              param_6[3] = puVar2;
            }
            if ((long)puVar2 - (long)puVar3 < 0) goto LAB_002ea1e8;
            uVar4 = uVar4 - uVar7;
            (*(code *)param_6[1])(*param_6,puVar3,(long)puVar2 - (long)puVar3);
            param_6[3] = puVar3;
            uVar7 = 0x400;
            puVar2 = puVar3;
          } while (0x400 < uVar4);
        }
        memset(puVar3,0x20,uVar4);
        param_6[3] = param_6[3] + uVar4;
        uVar1 = 0;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar8 = 0;
    uVar1 = uVar6;
  }
  if (param_1 != '\0') {
    pcVar5 = (char *)param_6[3];
    param_6[2] = param_6[2] + 1;
    if (pcVar5 == (char *)(param_6 + 0x84)) {
      pcVar5 = (char *)(param_6 + 4);
      (*(code *)param_6[1])(*param_6,pcVar5,0x400);
      param_6[3] = pcVar5;
    }
    *pcVar5 = param_1;
    param_6[3] = param_6[3] + 1;
  }
  if (uVar8 != 0) {
    puVar2 = (undefined8 *)param_6[3];
    uVar4 = (ulong)(int)uVar8;
    param_6[2] = param_6[2] + uVar4;
    uVar7 = (long)param_6 + (0x420 - (long)puVar2);
    puVar3 = puVar2;
    if (uVar7 < uVar4) {
      puVar3 = param_6 + 4;
      do {
        if (uVar7 != 0) {
          memset(puVar2,0x30,uVar7);
          puVar2 = (undefined8 *)(param_6[3] + uVar7);
          param_6[3] = puVar2;
        }
        if ((long)puVar2 - (long)puVar3 < 0) goto LAB_002ea1e8;
        uVar4 = uVar4 - uVar7;
        (*(code *)param_6[1])(*param_6,puVar3,(long)puVar2 - (long)puVar3);
        param_6[3] = puVar3;
        uVar7 = 0x400;
        puVar2 = puVar3;
      } while (0x400 < uVar4);
    }
    memset(puVar3,0x30,uVar4);
    param_6[3] = param_6[3] + uVar4;
  }
  if (param_3 != 0) {
    __dest = (void *)param_6[3];
    param_6[2] = param_6[2] + param_3;
    if (param_3 < (ulong)((long)param_6 + (0x420 - (long)__dest))) {
      memcpy(__dest,param_2,param_3);
      param_6[3] = param_6[3] + param_3;
    }
    else {
      puVar3 = param_6 + 4;
      if ((long)__dest - (long)puVar3 < 0) {
LAB_002ea1e8:
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      (*(code *)param_6[1])(*param_6,puVar3,(long)__dest - (long)puVar3);
      param_6[3] = puVar3;
      (*(code *)param_6[1])(*param_6,param_2,param_3);
    }
  }
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)param_6[3];
    uVar4 = (ulong)(int)uVar1;
    param_6[2] = param_6[2] + uVar4;
    uVar7 = (long)param_6 + (0x420 - (long)puVar2);
    puVar3 = puVar2;
    if (uVar7 < uVar4) {
      puVar3 = param_6 + 4;
      do {
        if (uVar7 != 0) {
          memset(puVar2,0x20,uVar7);
          puVar2 = (undefined8 *)(param_6[3] + uVar7);
          param_6[3] = puVar2;
        }
        if ((long)puVar2 - (long)puVar3 < 0) goto LAB_002ea1e8;
        uVar4 = uVar4 - uVar7;
        (*(code *)param_6[1])(*param_6,puVar3,(long)puVar2 - (long)puVar3);
        param_6[3] = puVar3;
        uVar7 = 0x400;
        puVar2 = puVar3;
      } while (0x400 < uVar4);
    }
    memset(puVar3,0x20,uVar4);
    param_6[3] = param_6[3] + uVar4;
  }
  return;
}


