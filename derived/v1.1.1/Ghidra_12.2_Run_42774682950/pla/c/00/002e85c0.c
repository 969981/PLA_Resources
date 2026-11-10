/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e85c0; name: FUN_002e85c0
 */


/* WARNING: Removing unreachable block (ram,0x002e8698) */
/* WARNING: Removing unreachable block (ram,0x002e86b0) */
/* WARNING: Removing unreachable block (ram,0x002e86bc) */
/* WARNING: Removing unreachable block (ram,0x002e86d0) */

void FUN_002e85c0(ulong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  void *__dest;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  size_t __n;
  undefined8 *puVar8;
  undefined1 local_68 [4];
  int local_64;
  byte local_36 [6];
  
  pbVar1 = local_36 + 1;
  uVar4 = (uint)param_2;
  local_68[0] = 0;
  pbVar5 = pbVar1;
  if ((uVar4 & 0xff) < 0x14) {
    lVar6 = 1;
    if ((1 << (ulong)(uVar4 & 0x1f) & 0x90100U) == 0) {
      if ((1 << (ulong)(uVar4 & 0x1f) & 0x20200U) == 0) {
        if ((uVar4 & 0xff) != 6) goto LAB_002e87d0;
        if (param_1 != 0) {
          do {
            bVar2 = (byte)param_1;
            param_1 = param_1 >> 3;
            pbVar5 = pbVar5 + -1;
            *pbVar5 = bVar2 & 7 | 0x30;
          } while (param_1 != 0);
        }
        goto LAB_002e8678;
      }
    }
    else {
      lVar6 = 0;
    }
    if (param_1 != 0) {
      do {
        uVar7 = param_1 & 0xf;
        param_1 = param_1 >> 4;
        pbVar5 = pbVar5 + -1;
        *pbVar5 = "0123456789abcdef"[uVar7 + lVar6 * 0x20];
      } while (param_1 != 0);
    }
  }
  else {
LAB_002e87d0:
    if (param_1 != 0) {
      do {
        bVar3 = 9 < param_1;
        pbVar5 = pbVar5 + -1;
        *pbVar5 = (char)param_1 + (char)(param_1 / 10) * -10 | 0x30;
        param_1 = param_1 / 10;
      } while (bVar3);
    }
  }
LAB_002e8678:
  local_64 = (int)pbVar1 - (int)pbVar5;
  if (((uVar4 >> 8 & 1) == 0) || ((uVar4 & 0xff) == 0x13)) {
    FUN_002e8830(local_68,param_2,param_3,param_4);
  }
  else {
    local_68[0] = 0;
    if (local_64 < 0) {
LAB_002e880c:
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    __n = (size_t)local_64;
    if (local_64 == 0) {
      puVar8 = (undefined8 *)param_4[3];
      param_4[2] = param_4[2] + 1;
      if (puVar8 == param_4 + 0x84) {
        puVar8 = param_4 + 4;
        (*(code *)param_4[1])(*param_4,puVar8,0x400);
        param_4[3] = puVar8;
      }
      *(undefined1 *)puVar8 = 0x30;
      param_4[3] = param_4[3] + 1;
    }
    else {
      __dest = (void *)param_4[3];
      param_4[2] = param_4[2] + __n;
      if (__n < (ulong)((long)param_4 + (0x420 - (long)__dest))) {
        memcpy(__dest,pbVar1 + -__n,__n);
        param_4[3] = param_4[3] + __n;
      }
      else {
        puVar8 = param_4 + 4;
        if ((long)__dest - (long)puVar8 < 0) goto LAB_002e880c;
        (*(code *)param_4[1])(*param_4,puVar8,(long)__dest - (long)puVar8);
        param_4[3] = puVar8;
        (*(code *)param_4[1])(*param_4,pbVar1 + -__n,__n);
      }
    }
  }
  return;
}


