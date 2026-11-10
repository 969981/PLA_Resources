/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005626cc; name: FUN_005626cc
 */


undefined8 FUN_005626cc(uint *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *param_1;
  lVar2 = FUN_002e2e80(PTR_FUN_04373078,0x28);
  if ((uVar1 & 0x808) == 8) {
    if (lVar2 != 0) {
      FUN_0055da3c(lVar2,0xc,*param_1);
    }
  }
  else {
    if (lVar2 != 0) {
      FUN_0055da3c(lVar2,0x14,uVar1 & 0x3ffe);
    }
    lVar3 = FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (lVar3 != 0) {
      FUN_0055fb3c(lVar3);
    }
    *(long *)(lVar2 + 0x20) = lVar3;
    FUN_0055fb58(lVar3,0,9);
    FUN_0055fb58(*(undefined8 *)(lVar2 + 0x20),0xb,param_1[0xb]);
  }
  FUN_00562088(param_1,lVar2);
  return 1;
}


