/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e7700; name: FUN_002e7700
 */


uint FUN_002e7700(ulong param_1,ulong param_2,undefined4 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *__dest;
  byte *pbVar9;
  long lVar10;
  size_t __n;
  undefined8 *puVar11;
  undefined8 local_68;
  undefined4 local_60;
  byte local_36 [6];
  
  uVar6 = (uint)param_2;
  iVar5 = (int)param_1;
  if ((uVar6 - 10 & 0xff) < 8) {
    local_68 = param_2;
    local_60 = param_3;
    uVar6 = FUN_002e9280((double)iVar5,&local_68,param_4);
    goto LAB_002e7798;
  }
  if ((param_2 & 0xff) == 0) {
    FUN_002e8d50(param_1,param_2,param_3,param_4);
  }
  else {
    if (5 < (uVar6 - 4 & 0xff)) {
      uVar6 = 0;
      goto LAB_002e7798;
    }
    if ((uVar6 & 0xfe) != 4) {
      uVar6 = FUN_002e7a30();
      uVar6 = uVar6 & 1;
      goto LAB_002e7798;
    }
    if (iVar5 < 0) {
      local_68 = CONCAT71(local_68._1_7_,1);
      param_1 = (ulong)(uint)-iVar5;
    }
    else {
      local_68._0_4_ = (int)(local_68 >> 8) << 8;
    }
    pbVar1 = local_36 + 1;
    uVar8 = uVar6 & 0xff;
    iVar5 = (int)param_1;
    pbVar9 = pbVar1;
    if (uVar8 == 9) {
      lVar10 = 1;
joined_r0x002e781c:
      if (iVar5 != 0) {
        do {
          uVar7 = (uint)param_1;
          uVar8 = uVar7 >> 4;
          param_1 = (ulong)uVar8;
          pbVar9 = pbVar9 + -1;
          *pbVar9 = "0123456789abcdef"[(ulong)(uVar7 & 0xf) + lVar10 * 0x20];
        } while (uVar8 != 0);
      }
    }
    else {
      if (uVar8 == 8) {
        lVar10 = 0;
        goto joined_r0x002e781c;
      }
      if (uVar8 == 6) {
        if (iVar5 != 0) {
          do {
            bVar4 = (byte)param_1;
            uVar8 = (uint)param_1 >> 3;
            param_1 = (ulong)uVar8;
            pbVar9 = pbVar9 + -1;
            *pbVar9 = bVar4 & 7 | 0x30;
          } while (uVar8 != 0);
        }
      }
      else if (iVar5 != 0) {
        do {
          uVar3 = (param_1 & 0xffffffff) / 10;
          uVar8 = (uint)param_1;
          pbVar9 = pbVar9 + -1;
          *pbVar9 = (char)param_1 + (char)uVar3 * -10 | 0x30;
          param_1 = uVar3;
        } while (9 < uVar8);
      }
    }
    local_68._4_4_ = (int)pbVar1 - (int)pbVar9;
    if (((uVar6 >> 8 & 1) == 0) || ((uVar6 & 0xff) == 0x13)) {
      FUN_002e8830(&local_68,param_2,param_3,param_4);
    }
    else {
      if ((char)local_68 != '\0') {
        puVar2 = (undefined8 *)param_4[3];
        param_4[2] = param_4[2] + 1;
        puVar11 = puVar2;
        if (puVar2 == param_4 + 0x84) {
          puVar11 = param_4 + 4;
          if ((long)puVar2 - (long)puVar11 < 0) goto LAB_002e79c4;
          (*(code *)param_4[1])(*param_4,puVar11,(long)puVar2 - (long)puVar11);
          param_4[3] = puVar11;
        }
        *(undefined1 *)puVar11 = 0x2d;
        param_4[3] = param_4[3] + 1;
      }
      if (local_68._4_4_ < 0) {
LAB_002e79c4:
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      __n = (size_t)local_68._4_4_;
      if (local_68._4_4_ == 0) {
        puVar11 = (undefined8 *)param_4[3];
        param_4[2] = param_4[2] + 1;
        if (puVar11 == param_4 + 0x84) {
          puVar11 = param_4 + 4;
          (*(code *)param_4[1])(*param_4,puVar11,0x400);
          param_4[3] = puVar11;
        }
        *(undefined1 *)puVar11 = 0x30;
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
          puVar11 = param_4 + 4;
          if ((long)__dest - (long)puVar11 < 0) goto LAB_002e79c4;
          (*(code *)param_4[1])(*param_4,puVar11,(long)__dest - (long)puVar11);
          param_4[3] = puVar11;
          (*(code *)param_4[1])(*param_4,pbVar1 + -__n,__n);
        }
      }
    }
  }
  uVar6 = 1;
LAB_002e7798:
  return uVar6 & 1;
}


