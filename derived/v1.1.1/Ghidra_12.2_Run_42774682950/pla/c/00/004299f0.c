/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004299f0; name: FUN_004299f0
 */


undefined8 FUN_004299f0(long param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = 0;
  lVar2 = FUN_0040de30();
  if (lVar2 != 0) {
    FUN_0040e090(lVar2);
    lVar3 = FUN_0040e240(lVar2);
    if (lVar3 != 0) {
      iVar1 = FUN_0040d2b0(*(undefined8 *)(param_1 + 8));
      if (iVar1 == 0) {
        *param_2 = *param_2 | 1;
        iVar1 = FUN_0040d2e0(*(undefined8 *)(param_1 + 0x10));
        if (iVar1 == 0) goto LAB_00429a44;
LAB_00429ab8:
        *param_2 = *param_2 | 8;
        lVar4 = FUN_0040c5d0(lVar3,*(undefined8 *)(param_1 + 8));
      }
      else {
        iVar1 = FUN_0040d2e0(*(undefined8 *)(param_1 + 0x10));
        if (iVar1 != 0) goto LAB_00429ab8;
LAB_00429a44:
        iVar1 = FUN_0040c130(*(undefined8 *)(param_1 + 0x10));
        if ((iVar1 != 0) || (iVar1 = FUN_0040d220(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0))
        goto LAB_00429ab8;
        lVar4 = FUN_0040c5d0(lVar3,*(undefined8 *)(param_1 + 8));
      }
      if ((lVar4 != 0) && (iVar1 = FUN_0040be30(lVar3,1), iVar1 != 0)) {
        iVar1 = FUN_0040cc60(*(undefined8 *)(param_1 + 0x10),lVar3);
        if (-1 < iVar1) {
          *param_2 = *param_2 | 8;
        }
        uVar5 = 1;
        goto LAB_00429ad8;
      }
    }
  }
  uVar5 = 0;
LAB_00429ad8:
  FUN_0040e1b0(lVar2);
  FUN_0040def0(lVar2);
  return uVar5;
}


