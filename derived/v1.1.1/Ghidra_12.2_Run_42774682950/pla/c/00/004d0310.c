/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d0310; name: FUN_004d0310
 */


undefined8 FUN_004d0310(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  
  puVar12 = auStack_c0;
  lVar5 = *(long *)(param_1 + 0x1740) + 0xd;
  lVar10 = *(long *)(param_1 + 0x508);
  *(long *)(param_1 + 0xd68) = lVar5;
  if (0x4540 < *(ulong *)(param_1 + 0xd48)) {
    uVar6 = 0x16;
    uVar7 = 0x96;
    uVar8 = 0x666;
    goto LAB_004d0364;
  }
  *(long *)(param_1 + 0xd60) = lVar5;
  *(ulong *)(param_1 + 0xd50) = *(ulong *)(param_1 + 0xd48);
  lVar5 = param_1 + 0xd40;
  if (((*(byte *)(*(long *)(param_1 + 0xa8) + 1) & 1) != 0) && (*(long *)(param_1 + 0x450) != 0)) {
    FUN_0041cd10();
    uVar1 = FUN_0041ccc0();
    if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("Assertion failed: mac_size <= EVP_MAX_MD_SIZE",
                   "external/openssl/ssl/record/ssl3_record.c",0x671);
    }
    uVar9 = (ulong)(int)uVar1;
    if (*(ulong *)(param_1 + 0xd50) < uVar9) {
      uVar6 = 0x32;
      uVar7 = 0xa0;
      uVar8 = 0x678;
      goto LAB_004d0364;
    }
    lVar11 = *(long *)(param_1 + 0xd48) - uVar9;
    *(long *)(param_1 + 0xd48) = lVar11;
    lVar13 = *(long *)(param_1 + 0xd60);
    iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 8))(param_1,lVar5,auStack_80,0);
    if ((iVar2 == 0) || (iVar2 = FUN_00404df0(auStack_80,lVar13 + lVar11,uVar9), iVar2 != 0)) {
      uVar6 = 0x14;
      uVar7 = 0x119;
      uVar8 = 0x680;
      goto LAB_004d0364;
    }
  }
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 8) + 0xc0))(param_1,lVar5,1,0);
  if (iVar2 == 0) {
    uVar6 = FUN_004c9a20(param_1);
    if ((int)uVar6 != 0) {
      return 0;
    }
    goto LAB_004d0614;
  }
  if ((((lVar10 != 0) && ((*(byte *)(*(long *)(param_1 + 0xa8) + 1) & 1) == 0)) &&
      (*(long *)(param_1 + 0x438) != 0)) &&
     (lVar10 = FUN_0041cd10(*(undefined8 *)(param_1 + 0x450)), lVar10 != 0)) {
    FUN_0041cd10(*(undefined8 *)(param_1 + 0x450));
    uVar1 = FUN_0041ccc0();
    if ((int)uVar1 < 0) {
      uVar6 = 0x50;
      uVar8 = 0x6ab;
      uVar7 = 6;
      goto LAB_004d0364;
    }
    if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("Assertion failed: mac_size <= EVP_MAX_MD_SIZE",
                   "external/openssl/ssl/record/ssl3_record.c",0x6af);
    }
    uVar9 = (ulong)(int)uVar1;
    if (uVar9 <= *(ulong *)(param_1 + 0xd50)) {
      FUN_0041c7c0(*(undefined8 *)(param_1 + 0x438));
      uVar4 = FUN_0041c7b0();
      if (((uVar4 & 0xf0007) != 2) || (uVar9 < *(ulong *)(param_1 + 0xd50))) {
        FUN_0041c7c0(*(undefined8 *)(param_1 + 0x438));
        uVar4 = FUN_0041c7b0();
        if ((uVar4 & 0xf0007) == 2) {
          iVar3 = FUN_004cf280(auStack_c0,lVar5,uVar9);
          if (iVar3 == 0) {
            uVar6 = 0x50;
            uVar7 = 0x44;
            uVar8 = 0x6ce;
            goto LAB_004d0364;
          }
          lVar10 = *(long *)(param_1 + 0xd48) - uVar9;
        }
        else {
          lVar10 = *(long *)(param_1 + 0xd48) - uVar9;
          puVar12 = (undefined1 *)(*(long *)(param_1 + 0xd60) + lVar10);
        }
        *(long *)(param_1 + 0xd48) = lVar10;
        iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 8))
                          (param_1,lVar5,auStack_80,0);
        if (((puVar12 == (undefined1 *)0x0) || (iVar3 == 0)) ||
           (iVar3 = FUN_00404df0(auStack_80,puVar12,uVar9), iVar3 != 0)) {
          iVar2 = -1;
        }
        if (*(ulong *)(param_1 + 0xd48) <= uVar9 + 0x4400) goto LAB_004d05d8;
        goto LAB_004d0610;
      }
    }
    uVar6 = 0x32;
    uVar7 = 0xa0;
    uVar8 = 0x6c0;
    goto LAB_004d0364;
  }
LAB_004d05d8:
  if (iVar2 < 0) {
LAB_004d0610:
    uVar6 = 0;
LAB_004d0614:
    *(undefined8 *)(param_1 + 0xd48) = 0;
    *(undefined8 *)(param_1 + 0x1748) = 0;
    return uVar6;
  }
  lVar5 = *(long *)(param_1 + 0x460);
  uVar9 = *(ulong *)(param_1 + 0xd48);
  if (lVar5 == 0) {
LAB_004d0670:
    if (uVar9 < 0x4001) {
      *(undefined8 *)(param_1 + 0xd58) = 0;
      *(undefined8 *)(param_1 + 0x1748) = 0;
      FUN_004d0af0(param_1,param_2);
      return 1;
    }
    uVar6 = 0x16;
    uVar7 = 0x92;
    uVar8 = 0x6fb;
  }
  else {
    if (0x4400 < uVar9) {
      uVar6 = 0x16;
      uVar7 = 0x8c;
      uVar8 = 0x6ef;
      goto LAB_004d0364;
    }
    lVar10 = *(long *)(param_1 + 0xd70);
    if (lVar10 == 0) {
      lVar10 = FUN_00400260(0x4540,"external/openssl/ssl/record/ssl3_record.c",799);
      *(long *)(param_1 + 0xd70) = lVar10;
      if (lVar10 != 0) {
        lVar5 = *(long *)(param_1 + 0x460);
        uVar9 = *(ulong *)(param_1 + 0xd48);
        goto LAB_004d0650;
      }
    }
    else {
LAB_004d0650:
      iVar2 = FUN_004bfc20(lVar5,lVar10,0x4000,*(undefined8 *)(param_1 + 0xd60),uVar9);
      if (-1 < iVar2) {
        uVar9 = (ulong)iVar2;
        *(ulong *)(param_1 + 0xd48) = uVar9;
        *(undefined8 *)(param_1 + 0xd60) = *(undefined8 *)(param_1 + 0xd70);
        goto LAB_004d0670;
      }
    }
    uVar7 = 0x6b;
    uVar8 = 0x6f4;
    uVar6 = 0x1e;
  }
LAB_004d0364:
  FUN_004c99a0(param_1,uVar6,0x101,uVar7,"external/openssl/ssl/record/ssl3_record.c",uVar8);
  return 0;
}


