/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00452f90; name: FUN_00452f90
 */


undefined8 FUN_00452f90(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  iVar1 = FUN_00407950(*(undefined8 *)(param_1 + 0x58));
  if (iVar1 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_0040de30();
    if (lVar3 != 0) {
      iVar6 = 0;
      puVar4 = (undefined8 *)(param_1 + 0x38);
      plVar9 = (long *)(param_1 + 0x30);
      do {
        lVar7 = *plVar9;
        uVar8 = *puVar4;
        puVar4 = (undefined8 *)FUN_00407970(*(undefined8 *)(param_1 + 0x58),iVar6);
        plVar9 = puVar4 + 3;
        lVar5 = *plVar9;
        if (lVar5 == 0) {
          lVar5 = FUN_0040c2c0();
          *plVar9 = lVar5;
          if (lVar5 == 0) goto LAB_00453030;
        }
        iVar2 = FUN_004129a0(lVar5,lVar7,uVar8,lVar3);
        if (iVar2 == 0) goto LAB_00453030;
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
      uVar8 = 1;
      goto LAB_00453034;
    }
  }
LAB_00453030:
  uVar8 = 0;
LAB_00453034:
  FUN_0040def0(lVar3);
  return uVar8;
}


