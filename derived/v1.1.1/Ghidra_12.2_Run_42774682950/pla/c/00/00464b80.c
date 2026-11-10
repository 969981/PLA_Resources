/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00464b80; name: FUN_00464b80
 */


undefined8
FUN_00464b80(long param_1,undefined8 *param_2,long param_3,undefined8 param_4,undefined8 param_5,
            int param_6)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 local_34;
  
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)FUN_00422780(param_5,param_4);
    *(long **)(param_1 + 0x20) = plVar2;
    if (plVar2 == (long *)0x0) {
      return 0;
    }
  }
  lVar4 = *plVar2;
  if ((param_3 == 0) && ((*(uint *)(lVar4 + 4) >> 2 & 1) == 0)) {
    iVar1 = FUN_00423a60(param_5,&local_34);
    if (iVar1 < 1) {
LAB_00464c2c:
      FUN_004014b0(6,0xa1,0x9e,"external/openssl/crypto/evp/m_sigver.c",0x2a);
      return 0;
    }
    FUN_00407d80(local_34);
    param_3 = FUN_00446540();
    if (param_3 == 0) goto LAB_00464c2c;
    plVar2 = *(long **)(param_1 + 0x20);
    lVar4 = *plVar2;
  }
  if (param_6 == 0) {
    if (*(code **)(lVar4 + 0x70) == (code *)0x0) {
      if (*(long *)(lVar4 + 0xd0) != 0) {
        uVar6 = 8;
        goto LAB_00464c94;
      }
      iVar1 = FUN_00465280();
      goto joined_r0x00464d34;
    }
    iVar1 = (**(code **)(lVar4 + 0x70))(plVar2,param_1);
    if (iVar1 < 1) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x20);
    uVar6 = 0x40;
  }
  else {
    if (*(code **)(lVar4 + 0x80) == (code *)0x0) {
      if (*(long *)(lVar4 + 0xd8) != 0) {
        uVar6 = 0x10;
LAB_00464c94:
        *(undefined4 *)(plVar2 + 4) = uVar6;
        *(undefined1 **)(param_1 + 0x28) = &LAB_00465250;
        goto LAB_00464ca4;
      }
      iVar1 = FUN_00465470();
joined_r0x00464d34:
      if (iVar1 < 1) {
        return 0;
      }
      goto LAB_00464ca4;
    }
    iVar1 = (**(code **)(lVar4 + 0x80))(plVar2,param_1);
    if (iVar1 < 1) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x20);
    uVar6 = 0x80;
  }
  *(undefined4 *)(lVar4 + 0x20) = uVar6;
LAB_00464ca4:
  iVar1 = FUN_00422a60(*(undefined8 *)(param_1 + 0x20),0xffffffff,0xf8,1,0,param_3);
  if (iVar1 < 1) {
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
  }
  if ((*(byte *)(**(long **)(param_1 + 0x20) + 4) >> 2 & 1) == 0) {
    uVar3 = FUN_004449b0(param_1,param_3,param_4);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    pcVar5 = *(code **)(**(long **)(param_1 + 0x20) + 0xf8);
    if (pcVar5 != (code *)0x0) {
      uVar3 = (*pcVar5)(*(long **)(param_1 + 0x20),param_1);
      return uVar3;
    }
  }
  return 1;
}


