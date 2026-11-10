/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0049bc10; name: FUN_0049bc10
 */


undefined8
FUN_0049bc10(void *param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
            ulong param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 auStack_a0 [64];
  uint local_54;
  
  uVar5 = 0;
  if (((param_4 < 0x40000001) && (param_2 < 0x40000001)) && (param_6 < 0x40000001)) {
    lVar4 = FUN_00444930();
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      iVar2 = FUN_0041ccc0(param_7);
      iVar3 = FUN_004449b0(lVar4,param_7,0);
      if (iVar3 != 0) {
        uVar6 = (ulong)iVar2;
        uVar7 = 1;
        do {
          uVar1 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
          local_54 = uVar1 >> 0x10 | uVar1 << 0x10;
          iVar2 = FUN_00444ad0(lVar4,param_3,param_4);
          if (((iVar2 == 0) || (iVar2 = FUN_00444ad0(lVar4,&local_54,4), iVar2 == 0)) ||
             (iVar2 = FUN_00444ad0(lVar4,param_5,param_6), iVar2 == 0)) break;
          if (param_2 < uVar6) {
            iVar2 = FUN_00444af0(lVar4,auStack_a0,0);
            if (iVar2 != 0) {
              memcpy(param_1,auStack_a0,param_2);
              FUN_004006a0(auStack_a0,uVar6);
              uVar5 = 1;
              goto LAB_0049bd70;
            }
            break;
          }
          iVar2 = FUN_00444af0(lVar4,param_1,0);
          if (iVar2 == 0) break;
          param_2 = param_2 - uVar6;
          if (param_2 == 0) {
            uVar5 = 1;
            goto LAB_0049bd70;
          }
          param_1 = (void *)((long)param_1 + uVar6);
          uVar7 = uVar7 + 1;
          iVar2 = FUN_004449b0(lVar4,param_7,0);
        } while (iVar2 != 0);
      }
      uVar5 = 0;
LAB_0049bd70:
      FUN_00444950(lVar4);
    }
  }
  return uVar5;
}


