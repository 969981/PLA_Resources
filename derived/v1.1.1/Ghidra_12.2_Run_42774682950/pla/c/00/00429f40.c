/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00429f40; name: FUN_00429f40
 */


undefined8 FUN_00429f40(long param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_3 = 0;
  lVar2 = FUN_0040de30();
  if (lVar2 != 0) {
    FUN_0040e090(lVar2);
    lVar3 = FUN_0040e240(lVar2);
    if ((lVar3 != 0) && (iVar1 = FUN_0040c6b0(lVar3,1), iVar1 != 0)) {
      iVar1 = FUN_0040cc60(param_2,lVar3);
      if (iVar1 < 1) {
        *param_3 = *param_3 | 1;
        lVar4 = FUN_0040c5d0(lVar3,*(undefined8 *)(param_1 + 8));
      }
      else {
        lVar4 = FUN_0040c5d0(lVar3,*(undefined8 *)(param_1 + 8));
      }
      if ((lVar4 != 0) && (iVar1 = FUN_0040be30(lVar3,1), iVar1 != 0)) {
        iVar1 = FUN_0040cc60(param_2,lVar3);
        if (-1 < iVar1) {
          *param_3 = *param_3 | 2;
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          iVar1 = FUN_00424be0(lVar3,param_2,*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 8),
                               lVar2);
          if (iVar1 == 0) goto LAB_0042a038;
          iVar1 = FUN_0040d220(lVar3);
          if (iVar1 == 0) {
            *param_3 = *param_3 | 4;
          }
        }
        uVar5 = 1;
        goto LAB_0042a03c;
      }
    }
  }
LAB_0042a038:
  uVar5 = 0;
LAB_0042a03c:
  FUN_0040e1b0(lVar2);
  FUN_0040def0(lVar2);
  return uVar5;
}


