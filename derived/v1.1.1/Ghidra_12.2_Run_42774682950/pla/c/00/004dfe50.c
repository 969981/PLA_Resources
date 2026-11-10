/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dfe50; name: FUN_004dfe50
 */


undefined8 FUN_004dfe50(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar4 = FUN_0044e660(param_2);
  if (lVar4 == 0) {
    return 0;
  }
  iVar3 = FUN_00423a50();
  if (iVar3 == 0x198) {
    uVar5 = FUN_004dd2b0(param_1,lVar4);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    lVar4 = FUN_004238d0(lVar4);
    if (lVar4 == 0) {
LAB_004dfec8:
      uVar8 = 0;
    }
    else {
      FUN_0042d4f0();
      iVar3 = FUN_0042e3e0();
      uVar8 = 0;
      piVar6 = &DAT_03a27f60;
      do {
        if (uVar8 == 0x1e) goto LAB_004dfec8;
        iVar2 = *piVar6;
        uVar8 = uVar8 + 1;
        piVar6 = piVar6 + 3;
      } while (iVar2 != iVar3);
    }
    uVar5 = FUN_004dc620(param_1,uVar8 & 0xffffffff,*(int *)(param_1 + 0x38) == 0);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if ((param_3 != 0) && (lVar4 = *(long *)(param_1 + 0x488), (*(byte *)(lVar4 + 0x1e) & 3) != 0))
    {
      uVar1 = (uint)uVar8 & 0xffff;
      if (uVar1 == 0x17) {
        iVar3 = 0x31a;
        uVar8 = *(ulong *)(lVar4 + 0x1c0);
      }
      else {
        if (uVar1 != 0x18) {
          return 0;
        }
        iVar3 = 0x31b;
        uVar8 = *(ulong *)(lVar4 + 0x1c0);
      }
      if (uVar8 == 0) {
        return 0;
      }
      uVar7 = 0;
      while (iVar3 != *(int *)(*(long *)(*(long *)(lVar4 + 0x1b8) + uVar7 * 8) + 0x1c)) {
        uVar7 = uVar7 + 1;
        if (uVar8 <= uVar7) {
          return 0;
        }
      }
    }
  }
  return 1;
}


