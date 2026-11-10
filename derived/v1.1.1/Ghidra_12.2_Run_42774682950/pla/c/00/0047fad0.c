/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0047fad0; name: FUN_0047fad0
 */


undefined8 FUN_0047fad0(undefined4 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if ((param_3 == 0) || (lVar2 = FUN_0042d4f0(param_3), lVar2 == 0)) {
    uVar3 = 0x7c;
    uVar5 = 0x1f;
LAB_0047fb38:
    FUN_004014b0(0x10,0xdf,uVar3,"external/openssl/crypto/ec/ec_ameth.c",uVar5);
    return 0;
  }
  iVar1 = FUN_0042e400();
  if ((iVar1 == 0) || (iVar1 = FUN_0042e3e0(lVar2), iVar1 == 0)) {
    piVar4 = (int *)FUN_0040a450();
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    iVar1 = FUN_0043be90(param_3,piVar4 + 2);
    *piVar4 = iVar1;
    if (iVar1 < 1) {
      FUN_0040a4b0(piVar4);
      uVar5 = 0x31;
      uVar3 = 0x10;
      goto LAB_0047fb38;
    }
    uVar6 = 0x10;
    *param_2 = piVar4;
  }
  else {
    uVar3 = FUN_00407cb0();
    *param_2 = uVar3;
    uVar6 = 6;
  }
  *param_1 = uVar6;
  return 1;
}


