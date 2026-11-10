/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00454cc0; name: FUN_00454cc0
 */


undefined8
FUN_00454cc0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined1 auStack_a4 [64];
  uint local_64;
  
  lVar5 = FUN_00444930();
  if ((lVar5 == 0) || (iVar3 = FUN_0041ccc0(param_5), iVar3 < 0)) {
LAB_00454dc4:
    uVar6 = 0xffffffff;
  }
  else {
    if (0 < param_2) {
      uVar7 = 0;
      uVar6 = 0xffffffff;
      lVar8 = 0;
      do {
        uVar2 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
        iVar4 = FUN_004449b0(lVar5,param_5,0);
        if (((iVar4 == 0) || (iVar4 = FUN_00444ad0(lVar5,param_3,param_4), iVar4 == 0)) ||
           (iVar4 = FUN_00444ad0(lVar5,&local_64,4), iVar4 == 0)) goto LAB_00454dc8;
        lVar1 = lVar8 + iVar3;
        if (param_2 < lVar1) {
          iVar3 = FUN_00444b90(lVar5,auStack_a4,0);
          if (iVar3 == 0) goto LAB_00454dc4;
          memcpy((void *)(param_1 + lVar8),auStack_a4,param_2 - lVar8);
          break;
        }
        iVar4 = FUN_00444b90(lVar5,param_1 + lVar8,0);
        if (iVar4 == 0) goto LAB_00454dc8;
        uVar7 = uVar7 + 1;
        lVar8 = lVar1;
      } while (lVar1 < param_2);
    }
    uVar6 = 0;
  }
LAB_00454dc8:
  FUN_004006a0(auStack_a4,0x40);
  FUN_00444950(lVar5);
  return uVar6;
}


