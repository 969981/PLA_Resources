/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ee4e0; name: FUN_002ee4e0
 */


undefined8 FUN_002ee4e0(ulong *param_1,int *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 == (byte *)0x0) {
    return 0;
  }
  pbVar1 = pbVar2 + param_1[1];
  iVar5 = *param_2;
  if (0 < (long)param_1[1]) {
    do {
      if (((byte)PTR_DAT_04373828[*pbVar2] >> 3 & 1) == 0) break;
      pbVar2 = pbVar2 + 1;
    } while (pbVar2 < pbVar1);
  }
  do {
    pbVar3 = pbVar1;
    if (pbVar3 <= pbVar2) {
      return 0;
    }
    pbVar1 = pbVar3 + -1;
  } while (((byte)PTR_DAT_04373828[pbVar3[-1]] >> 3 & 1) != 0);
  bVar4 = *pbVar2;
  *(bool *)param_3 = bVar4 == 0x2d;
  if (((bVar4 == 0x2d) || (*pbVar2 == 0x2b)) && (pbVar2 = pbVar2 + 1, pbVar3 <= pbVar2)) {
    return 0;
  }
  if (iVar5 == 0x10) {
    if (((1 < (long)pbVar3 - (long)pbVar2) && (*pbVar2 == 0x30)) && ((pbVar2[1] | 0x20) == 0x78)) {
LAB_002ee5d0:
      pbVar2 = pbVar2 + 2;
      if (pbVar3 <= pbVar2) {
        return 0;
      }
    }
    iVar5 = 0x10;
  }
  else {
    if (iVar5 != 0) {
      if (0x22 < iVar5 - 2U) {
        return 0;
      }
      goto joined_r0x002ee664;
    }
    if ((long)pbVar3 - (long)pbVar2 < 2) {
      if ((long)pbVar3 - (long)pbVar2 != 1) {
        iVar5 = 10;
        goto joined_r0x002ee664;
      }
      bVar4 = *pbVar2;
    }
    else {
      bVar4 = *pbVar2;
      if (bVar4 == 0x30) {
        if ((pbVar2[1] | 0x20) == 0x78) goto LAB_002ee5d0;
        bVar4 = 0x30;
      }
    }
    if (bVar4 == 0x30) {
      pbVar2 = pbVar2 + 1;
    }
    iVar5 = 8;
    if (bVar4 != 0x30) {
      iVar5 = 10;
    }
  }
joined_r0x002ee664:
  if ((long)pbVar3 - (long)pbVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  *param_1 = (ulong)pbVar2;
  param_1[1] = (long)pbVar3 - (long)pbVar2;
  *param_2 = iVar5;
  return 1;
}


