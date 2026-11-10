/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00468b10; name: FUN_00468b10
 */


undefined8 FUN_00468b10(long *param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[2] = param_4;
  param_1[3] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  if (param_2 == 0) {
    param_1[0x11] = 0;
    param_1[6] = (long)FUN_00468f10;
    param_1[7] = (long)&LAB_00468f00;
    param_1[8] = (long)PTR_LAB_04374498;
    param_1[9] = (long)&LAB_00468e10;
    param_1[0xc] = (long)&LAB_004693c0;
    param_1[0xd] = (long)&LAB_004696d0;
    puVar3 = PTR_LAB_043744a0;
    param_1[10] = (long)&LAB_00469100;
    param_1[0xb] = 0;
    param_1[0xe] = (long)&LAB_00469780;
    param_1[0xf] = (long)puVar3;
LAB_00468cd4:
    param_1[0x10] = (long)PTR_LAB_043744a8;
    lVar6 = FUN_0046bbe0();
    param_1[4] = lVar6;
  }
  else {
    param_1[0x11] = *(long *)(param_2 + 0x78);
    puVar2 = &LAB_00468e10;
    if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)(param_2 + 0x38);
    }
    param_1[9] = (long)puVar2;
    puVar3 = PTR_LAB_04374498;
    if (*(undefined **)(param_2 + 0x30) != (undefined *)0x0) {
      puVar3 = *(undefined **)(param_2 + 0x30);
    }
    param_1[8] = (long)puVar3;
    puVar2 = &LAB_00468f00;
    if (*(undefined1 **)(param_2 + 0x28) != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)(param_2 + 0x28);
    }
    param_1[7] = (long)puVar2;
    pcVar1 = FUN_00468f10;
    if (*(code **)(param_2 + 0x20) != (code *)0x0) {
      pcVar1 = *(code **)(param_2 + 0x20);
    }
    param_1[6] = (long)pcVar1;
    puVar2 = &LAB_00469100;
    if (*(undefined1 **)(param_2 + 0x40) != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)(param_2 + 0x40);
    }
    param_1[10] = (long)puVar2;
    param_1[0xb] = *(long *)(param_2 + 0x48);
    puVar2 = &LAB_004693c0;
    if (*(undefined1 **)(param_2 + 0x50) != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)(param_2 + 0x50);
    }
    param_1[0xc] = (long)puVar2;
    puVar2 = &LAB_004696d0;
    if (*(undefined1 **)(param_2 + 0x58) != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)(param_2 + 0x58);
    }
    param_1[0xd] = (long)puVar2;
    puVar2 = &LAB_00469780;
    if (*(undefined1 **)(param_2 + 0x60) != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)(param_2 + 0x60);
    }
    param_1[0xe] = (long)puVar2;
    puVar3 = PTR_LAB_043744a0;
    if (*(undefined **)(param_2 + 0x68) != (undefined *)0x0) {
      puVar3 = *(undefined **)(param_2 + 0x68);
    }
    param_1[0xf] = (long)puVar3;
    if (*(long *)(param_2 + 0x70) == 0) goto LAB_00468cd4;
    param_1[0x10] = *(long *)(param_2 + 0x70);
    lVar6 = FUN_0046bbe0();
    param_1[4] = lVar6;
  }
  if (lVar6 == 0) {
    uVar7 = 0x8fa;
    goto LAB_00468d7c;
  }
  if (param_2 == 0) {
    *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 0x11;
LAB_00468d04:
    uVar7 = FUN_0046c140("default");
    iVar4 = FUN_0046bce0(lVar6,uVar7);
    if (iVar4 != 0) {
      if (*(int *)(param_1[4] + 0x24) == 0) {
        FUN_00457220(*(undefined4 *)(param_1[4] + 0x20));
        lVar6 = FUN_00457280();
        if (lVar6 != 0) {
          uVar5 = FUN_004572c0();
          *(undefined4 *)(param_1[4] + 0x24) = uVar5;
        }
      }
      iVar4 = FUN_00400880(5,param_1,param_1 + 0x1c);
      if (iVar4 != 0) {
        return 1;
      }
      uVar7 = 0x91e;
      goto LAB_00468d7c;
    }
  }
  else {
    iVar4 = FUN_0046bce0(lVar6,*(undefined8 *)(param_2 + 0x18));
    if (iVar4 != 0) {
      lVar6 = param_1[4];
      goto LAB_00468d04;
    }
  }
  uVar7 = 0x90b;
LAB_00468d7c:
  FUN_004014b0(0xb,0x8f,0x41,"external/openssl/crypto/x509/x509_vfy.c",uVar7);
  if ((code *)param_1[0x11] != (code *)0x0) {
    (*(code *)param_1[0x11])(param_1);
    param_1[0x11] = 0;
  }
  if (param_1[4] != 0) {
    if (param_1[0x1b] == 0) {
      FUN_0046bc40();
    }
    param_1[4] = 0;
  }
  FUN_0046c4a0(param_1[0x14]);
  param_1[0x14] = 0;
  FUN_004078c0(param_1[0x13],PTR_FUN_04374180);
  param_1[0x13] = 0;
  FUN_00400e80(5,param_1,param_1 + 0x1c);
  param_1[0x1c] = 0;
  return 0;
}


