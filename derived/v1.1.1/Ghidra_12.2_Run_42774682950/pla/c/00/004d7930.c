/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d7930; name: FUN_004d7930
 */


undefined8 FUN_004d7930(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_0040cc00(*(undefined8 *)(param_1 + 0x7a0),*(undefined8 *)(param_1 + 0x798));
  if (((iVar1 < 0) &&
      (iVar1 = FUN_0040cc00(*(undefined8 *)(param_1 + 0x7b0),*(undefined8 *)(param_1 + 0x798)),
      iVar1 < 0)) && (iVar1 = FUN_0040c130(*(undefined8 *)(param_1 + 0x7b0)), iVar1 == 0)) {
    iVar1 = FUN_0040c070(*(undefined8 *)(param_1 + 0x798));
    if (iVar1 < *(int *)(param_1 + 0x7e0)) {
      uVar3 = 0x47;
      uVar4 = 0xf1;
      uVar5 = 0x15c;
    }
    else if (*(code **)(param_1 + 0x780) == (code *)0x0) {
      lVar2 = FUN_004d8390(*(undefined8 *)(param_1 + 0x7a0),*(undefined8 *)(param_1 + 0x798));
      if (lVar2 != 0) {
        return 1;
      }
      uVar3 = 0x47;
      uVar4 = 0xf1;
      uVar5 = 0x169;
    }
    else {
      iVar1 = (**(code **)(param_1 + 0x780))(param_1,*(undefined8 *)(param_1 + 0x770));
      if (0 < iVar1) {
        return 1;
      }
      uVar3 = 0x47;
      uVar4 = 0xea;
      uVar5 = 0x164;
    }
  }
  else {
    uVar3 = 0x2f;
    uVar4 = 0x186;
    uVar5 = 0x156;
  }
  FUN_004c99a0(param_1,uVar3,0x254,uVar4,"external/openssl/ssl/tls_srp.c",uVar5);
  return 0;
}


