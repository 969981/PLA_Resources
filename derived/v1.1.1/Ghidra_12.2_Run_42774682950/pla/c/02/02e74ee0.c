/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e74ee0; name: FUN_02e74ee0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02e74ee0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  
  FUN_02ea6374();
  DAT_042a7030 = 3;
  DAT_042a7034 = 3;
  DAT_042a7038 = 3;
  DAT_0440a300 = 0;
  uVar3 = FUN_02f59dd0();
  if ((uVar3 & 1) == 0) {
    iVar1 = 0x4a;
  }
  else if (DAT_0440a098 == 0) {
    iVar1 = 0x4b;
  }
  else {
    if (param_1 == (undefined8 *)0x0) {
      FUN_02e750f0(&DAT_0440a198);
    }
    else {
      DAT_0440a198 = (undefined *)*param_1;
      DAT_0440a1a0 = param_1[1];
      _DAT_0440a1a8 = param_1[2];
      DAT_0440a1b0 = param_1[3];
      DAT_0440a1b8 = param_1[4];
      DAT_0440a1c0 = param_1[5];
      DAT_0440a1c8 = param_1[6];
      DAT_0440a1d0 = param_1[7];
      DAT_0440a1d8 = param_1[8];
      DAT_0440a1e0 = param_1[9];
      DAT_0440a1e8 = param_1[10];
      _DAT_0440a200 = param_1[0xd];
      DAT_0440a1f0 = param_1[0xb];
      DAT_0440a1f8 = param_1[0xc];
      DAT_0440a208._0_1_ = *(undefined1 *)(param_1 + 0xe);
    }
    if (DAT_0440a198 != (undefined *)0x0) {
      PTR_LAB_042a7028 = DAT_0440a198;
    }
    FUN_02eb3268(param_2);
    if ((DAT_0440a30c & 1) == 0) {
      iVar1 = FUN_02e75160(param_1);
      if ((iVar1 == 1) && (iVar1 = FUN_02e75800(), iVar1 == 1)) {
        lVar4 = FUN_02e799c4();
        if (lVar4 == 0) {
          iVar1 = 2;
          FUN_02e758c0();
        }
        else {
          iVar1 = 1;
          DAT_0440a30c = 1;
        }
      }
      else {
        FUN_02e758c0();
      }
    }
    else {
      iVar1 = 2;
    }
    if (0 < (int)DAT_0440a2d8) {
      lVar4 = (ulong)((int)DAT_0440a2d8 - 1) * 0x18;
      iVar6 = (int)DAT_0440a2d8;
      do {
        iVar6 = iVar6 + -1;
        pcVar5 = *(code **)(DAT_0440a2d0 + lVar4);
        if (((DAT_0440a318 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0440a318), iVar2 != 0)) {
          DAT_0440a310 = &PTR_LAB_042a7050;
          __cxa_guard_release(&DAT_0440a318);
        }
        (*pcVar5)(&DAT_0440a310,0x400,*(undefined8 *)(DAT_0440a2d0 + lVar4 + 8));
        lVar4 = lVar4 + -0x18;
      } while (0 < iVar6);
    }
  }
  return iVar1;
}


