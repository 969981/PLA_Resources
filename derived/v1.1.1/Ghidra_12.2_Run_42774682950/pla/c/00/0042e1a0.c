/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042e1a0; name: FUN_0042e1a0
 */


undefined8 FUN_0042e1a0(long param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  if (param_2 == (long *)0x0) {
    uVar5 = 0x6f;
    uVar6 = 0x43;
    uVar7 = 0x110;
LAB_0042e24c:
    FUN_004014b0(0x10,uVar5,uVar6,"external/openssl/crypto/ec/ec_lib.c",uVar7);
    return 0;
  }
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)FUN_0042df90(param_1);
    *(long **)(param_1 + 8) = plVar2;
    if (plVar2 == (long *)0x0) {
      return 0;
    }
  }
  pcVar8 = *(code **)(*plVar2 + 0x68);
  if (pcVar8 == (code *)0x0) {
    uVar5 = 0x72;
    uVar6 = 0x42;
    uVar7 = 0x267;
    goto LAB_0042e24c;
  }
  if ((*plVar2 != *param_2) ||
     ((((int)param_2[1] != 0 && ((int)plVar2[1] != 0)) && ((int)plVar2[1] != (int)param_2[1])))) {
    uVar5 = 0x72;
    uVar6 = 0x65;
    uVar7 = 0x26e;
    goto LAB_0042e24c;
  }
  if ((plVar2 != param_2) && (iVar1 = (*pcVar8)(plVar2,param_2), iVar1 == 0)) {
    return 0;
  }
  if (param_3 == 0) {
    FUN_0040c6b0(*(undefined8 *)(param_1 + 0x10),0);
  }
  else {
    lVar3 = FUN_0040c5d0(*(undefined8 *)(param_1 + 0x10),param_3);
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_4 == 0) {
    FUN_0040c6b0(*(undefined8 *)(param_1 + 0x18),0);
  }
  else {
    lVar3 = FUN_0040c5d0(*(undefined8 *)(param_1 + 0x18),param_4);
    if (lVar3 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_0040d2b0(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    FUN_0040d960(*(undefined8 *)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = 0;
    return 1;
  }
  lVar3 = FUN_0040de30();
  FUN_0040d960(*(undefined8 *)(param_1 + 0x90));
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (lVar3 != 0) {
    lVar4 = FUN_0040d8e0();
    *(long *)(param_1 + 0x90) = lVar4;
    if (lVar4 != 0) {
      iVar1 = FUN_0040d9b0(lVar4,*(undefined8 *)(param_1 + 0x10),lVar3);
      if (iVar1 == 0) {
        FUN_0040d960(*(undefined8 *)(param_1 + 0x90));
        uVar5 = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
      }
      else {
        uVar5 = 1;
      }
      goto LAB_0042e334;
    }
  }
  uVar5 = 0;
LAB_0042e334:
  FUN_0040def0(lVar3);
  return uVar5;
}


