/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004568c0; name: FUN_004568c0
 */


long FUN_004568c0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar2 = param_2;
  if ((param_2 == 0) && (lVar2 = FUN_0040de30(), lVar2 == 0)) {
    return 0;
  }
  FUN_0040e090(lVar2);
  lVar3 = FUN_0040e240(lVar2);
  if (lVar3 == 0) {
    uVar6 = 0x41;
    uVar7 = 0x7e;
LAB_00456a8c:
    FUN_004014b0(4,0x88,uVar6,"external/openssl/crypto/rsa/rsa_crpt.c",uVar7);
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      if (((lVar3 != 0) && (lVar4 = *(long *)(param_1 + 0x30), lVar4 != 0)) &&
         (lVar5 = *(long *)(param_1 + 0x38), lVar5 != 0)) {
        FUN_0040e090(lVar2);
        uVar6 = FUN_0040e240(lVar2);
        uVar7 = FUN_0040e240(lVar2);
        lVar8 = FUN_0040e240(lVar2);
        if (lVar8 != 0) {
          uVar9 = FUN_0040bfc0();
          iVar1 = FUN_00411b00(uVar7,lVar4,uVar9);
          if (iVar1 != 0) {
            uVar9 = FUN_0040bfc0();
            iVar1 = FUN_00411b00(lVar8,lVar5,uVar9);
            if ((iVar1 != 0) && (iVar1 = FUN_004129a0(uVar6,uVar7,lVar8,lVar2), iVar1 != 0)) {
              lVar3 = FUN_00410e10(0,lVar3,uVar6,lVar2);
              FUN_0040e1b0(lVar2);
              if (lVar3 != 0) goto LAB_0045690c;
              goto LAB_00456a74;
            }
          }
        }
        FUN_0040e1b0(lVar2);
      }
LAB_00456a74:
      uVar6 = 0x8c;
      uVar7 = 0x85;
      goto LAB_00456a8c;
    }
LAB_0045690c:
    lVar4 = FUN_0040c260();
    if (lVar4 != 0) {
      FUN_0040d300(lVar4,*(undefined8 *)(param_1 + 0x18),4);
      lVar5 = FUN_00452850(0,lVar3,lVar4,lVar2,*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),
                           *(undefined8 *)(param_1 + 0x78));
      FUN_0040c1e0(lVar4);
      if (lVar5 == 0) {
        FUN_004014b0(4,0x88,3,"external/openssl/crypto/rsa/rsa_crpt.c",0x9b);
        FUN_0040e1b0(lVar2);
      }
      else {
        FUN_004526a0(lVar5);
        FUN_0040e1b0(lVar2);
      }
      goto joined_r0x00456b08;
    }
    FUN_004014b0(4,0x88,0x41,"external/openssl/crypto/rsa/rsa_crpt.c",0x90);
  }
  lVar5 = 0;
  FUN_0040e1b0(lVar2);
joined_r0x00456b08:
  if (lVar2 != param_2) {
    FUN_0040def0(lVar2);
  }
  if (lVar3 != *(long *)(param_1 + 0x20)) {
    FUN_0040c1e0(lVar3);
  }
  return lVar5;
}


