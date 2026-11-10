/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014710c0; name: FUN_014710c0
 */


void FUN_014710c0(undefined8 param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_48;
  
  if ((param_2 != (long *)0x0) && (plVar6 = (long *)*param_2, (char)plVar6[0x11] != '\0')) {
    uVar8 = 0;
    do {
      lVar7 = (**(code **)(*plVar6 + 0x50))(plVar6,uVar8 & 0xffffffff);
      iVar1 = FUN_02c5fb2c();
      if (iVar1 == 100) {
        *(undefined4 *)((long)param_2 + uVar8 * 4 + 8) = 0;
        if (*(char *)((long)param_2 + uVar8 + 0x20) != '\0') {
          *(undefined1 *)((long)param_2 + uVar8 + 0x28) = 1;
        }
      }
      else if (*(char *)((long)param_2 + uVar8 + 0x20) != '\0') {
        iVar1 = FUN_02c600e8(lVar7);
        iVar5 = FUN_02c68e44(*(undefined8 *)(lVar7 + 0x98));
        *(int *)((long)param_2 + uVar8 * 4 + 8) = iVar1 - iVar5;
      }
      iVar1 = FUN_02c68e44(*(undefined8 *)(lVar7 + 0x98));
      iVar1 = *(int *)((long)param_2 + uVar8 * 4 + 8) + iVar1;
      if (iVar1 != 0) {
        FUN_0109f020(lVar7);
        uVar2 = FUN_02c5fb2c(lVar7);
        FUN_02c5fee8(lVar7,iVar1);
        uVar3 = FUN_02c5fb2c(lVar7);
        if (uVar2 != uVar3) {
          uVar4 = FUN_02c5fb2c(lVar7);
          local_48 = 0;
          uVar3 = uVar2;
          while( true ) {
            uVar3 = uVar3 + 1;
            while (iVar1 = FUN_02c61edc(lVar7,uVar3,(long)&local_48 + 4,&local_48,0), iVar1 != 3) {
              if ((iVar1 == 0) || (iVar1 == 1)) {
                FUN_02c61828(lVar7,local_48 & 0xffffffff);
              }
            }
            if (uVar3 == uVar4) break;
            local_48 = local_48 & 0xffffffff;
          }
          uVar3 = FUN_02c5fb2c(lVar7);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if ((uVar2 < uVar3) && (FUN_0109ddb8(lVar7), uVar2 + 1 != uVar3)) {
            iVar1 = ~uVar2 + uVar3;
            do {
              FUN_0109ddb8(lVar7);
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
        }
      }
      plVar6 = (long *)*param_2;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(byte *)(plVar6 + 0x11));
  }
  return;
}


