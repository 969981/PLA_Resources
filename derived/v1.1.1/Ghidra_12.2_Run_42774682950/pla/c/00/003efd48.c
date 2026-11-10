/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003efd48; name: FUN_003efd48
 */


void FUN_003efd48(int *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong *puVar6;
  ulong uVar7;
  
  if (*(char *)((long)param_1 + 9) == '\0') {
    if ((char)param_1[2] == '\0') {
      puVar6 = (ulong *)(param_1 + 4);
      bVar1 = (byte)*puVar6;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x16) {
LAB_003efdc4:
          if ((bVar1 & 1) == 0) {
            lVar2 = 0x116;
          }
          else {
            lVar2 = (*puVar6 & 0xfffffffffffffffe) + 0xff;
          }
          FUN_0030ff7c(puVar6,lVar2);
        }
      }
      else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6))
      goto LAB_003efdc4;
      FUN_002e6a9c(puVar6,0x2c);
      if (*param_1 != 0) {
        bVar1 = (byte)*puVar6;
        if ((bVar1 & 1) == 0) {
          if (bVar1 >> 1 == 0x16) {
LAB_003efe58:
            if ((bVar1 & 1) == 0) goto LAB_003efda0;
LAB_003efe5c:
            lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
            goto LAB_003efe68;
          }
        }
        else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6))
        goto LAB_003efe58;
        goto LAB_003efe70;
      }
    }
    else {
      *(undefined1 *)(param_1 + 2) = 0;
      if ((*param_1 != 0) && (param_1[1] != 0)) {
        bVar1 = *(byte *)(param_1 + 4);
        if ((bVar1 & 1) == 0) {
          if (bVar1 >> 1 == 0x16) {
LAB_003efd9c:
            if ((bVar1 & 1) != 0) goto LAB_003efe5c;
LAB_003efda0:
            lVar2 = 0x116;
LAB_003efe68:
            FUN_0030ff7c(param_1 + 4,lVar2);
          }
        }
        else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6))
        goto LAB_003efd9c;
LAB_003efe70:
        FUN_002e6a9c(param_1 + 4,10);
      }
    }
  }
  FUN_003eff60(param_1);
  if ((*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
    uVar7 = (ulong)(*param_2 >> 1);
    uVar3 = (ulong)*(byte *)(param_1 + 4);
    if ((*(byte *)(param_1 + 4) & 1) != 0) goto LAB_003efee4;
LAB_003efea0:
    uVar4 = 0x16 - (uVar3 >> 1);
    if (uVar7 <= uVar4) goto LAB_003eff18;
  }
  else {
    uVar7 = *(ulong *)(param_2 + 8);
    if ((long)uVar7 < 0) {
                    /* try { // try from 003eff3c to 003eff5b has its CatchHandler @ 003eff5c */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    pbVar5 = *(byte **)(param_2 + 0x10);
    uVar3 = (ulong)*(byte *)(param_1 + 4);
    if ((*(byte *)(param_1 + 4) & 1) == 0) goto LAB_003efea0;
LAB_003efee4:
    uVar4 = ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1) - *(long *)(param_1 + 6);
    if (uVar7 <= uVar4) goto LAB_003eff18;
  }
  if ((uVar3 & 1) == 0) {
    lVar2 = 0x16;
  }
  else {
    lVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1;
  }
  FUN_0030ff7c(param_1 + 4,lVar2 + ((ulong)(((int)uVar7 - (int)uVar4) + 0xff) & 0xffffff00));
LAB_003eff18:
  FUN_002e4094(param_1 + 4,pbVar5,uVar7);
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}


