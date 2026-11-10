/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004705d0; name: FUN_004705d0
 */


long FUN_004705d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  plVar2 = (long *)FUN_004228f0();
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  lVar6 = *plVar2;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x38) == 0)) {
    uVar3 = 0x93;
    uVar5 = 0x4a;
LAB_004706a4:
    uVar4 = 0x96;
LAB_004706a8:
    FUN_004014b0(6,uVar3,uVar4,"external/openssl/crypto/evp/pmeth_gn.c",uVar5);
  }
  else {
    *(undefined4 *)(plVar2 + 4) = 4;
    if ((*(code **)(lVar6 + 0x30) != (code *)0x0) &&
       (iVar1 = (**(code **)(lVar6 + 0x30))(plVar2), iVar1 < 1)) {
      lVar6 = 0;
      *(undefined4 *)(plVar2 + 4) = 0;
      goto LAB_004706b0;
    }
    iVar1 = FUN_00422a60(plVar2,0xffffffff,4,6,param_4,param_3);
    if (0 < iVar1) {
      if ((*plVar2 == 0) || (*(long *)(*plVar2 + 0x38) == 0)) {
        uVar3 = 0x92;
        uVar5 = 0x5c;
        goto LAB_004706a4;
      }
      if ((int)plVar2[4] != 4) {
        uVar3 = 0x92;
        uVar4 = 0x97;
        uVar5 = 0x60;
        goto LAB_004706a8;
      }
      lVar6 = FUN_004230e0();
      if ((lVar6 == 0) || (iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,lVar6), 0 < iVar1))
      goto LAB_004706b0;
      FUN_00423420(lVar6);
    }
  }
  lVar6 = 0;
LAB_004706b0:
  FUN_00422a10(plVar2);
  return lVar6;
}


