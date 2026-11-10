/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e80f0; name: FUN_002e80f0
 */


ulong FUN_002e80f0(char *param_1,ulong param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  void *__dest;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  code *pcVar6;
  long lVar7;
  uint uVar8;
  
  uVar8 = (uint)param_2;
  if ((uVar8 & 0xff) == 0x13) {
    if (param_1 != (char *)0x0) {
      FUN_002e85c0(param_1,param_2,param_3,param_4);
      return 1;
    }
    puVar2 = (undefined4 *)param_4[3];
    param_4[2] = param_4[2] + 5;
    if ((ulong)((long)param_4 + (0x420 - (long)puVar2)) < 6) {
      puVar1 = param_4 + 4;
      if ((long)puVar2 - (long)puVar1 < 0) {
LAB_002e82d4:
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      (*(code *)param_4[1])(*param_4,puVar1,(long)puVar2 - (long)puVar1);
      uVar3 = *param_4;
      pcVar6 = (code *)param_4[1];
      param_1 = "(nil)";
      uVar4 = 5;
      param_4[3] = puVar1;
LAB_002e82bc:
      (*pcVar6)(uVar3,param_1,uVar4);
      return 1;
    }
    *(undefined1 *)(puVar2 + 1) = 0x29;
    *puVar2 = 0x6c696e28;
    lVar7 = param_4[3] + 5;
  }
  else {
    if (param_1 == (char *)0x0) {
      uVar4 = 0;
    }
    else {
      if (param_3 < 0) {
        uVar4 = strlen(param_1);
      }
      else {
        pcVar5 = param_1;
        if (param_3 != 0) {
          lVar7 = (long)param_3;
          do {
            if (*pcVar5 == '\0') goto LAB_002e816c;
            pcVar5 = pcVar5 + 1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
          pcVar5 = param_1 + param_3;
        }
LAB_002e816c:
        uVar4 = (long)pcVar5 - (long)param_1;
      }
      if ((long)uVar4 < 0) goto LAB_002e82d4;
    }
    if ((uVar8 & 0xff) != 2) {
      return 0;
    }
    if ((uVar8 >> 8 & 1) == 0) {
      uVar4 = FUN_002e9018(param_4,param_1,uVar4,param_2 >> 0x20,param_3,param_2 >> 9 & 1);
      return uVar4 & 1;
    }
    if (uVar4 == 0) {
      return 1;
    }
    __dest = (void *)param_4[3];
    param_4[2] = param_4[2] + uVar4;
    if ((ulong)((long)param_4 + (0x420 - (long)__dest)) <= uVar4) {
      puVar1 = param_4 + 4;
      if ((long)__dest - (long)puVar1 < 0) goto LAB_002e82d4;
      (*(code *)param_4[1])(*param_4,puVar1,(long)__dest - (long)puVar1);
      uVar3 = *param_4;
      pcVar6 = (code *)param_4[1];
      param_4[3] = puVar1;
      goto LAB_002e82bc;
    }
    memcpy(__dest,param_1,uVar4);
    lVar7 = param_4[3] + uVar4;
  }
  param_4[3] = lVar7;
  return 1;
}


