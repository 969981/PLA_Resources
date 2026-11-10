/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00470410; name: FUN_00470410
 */


undefined8 FUN_00470410(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (((param_1 == (long *)0x0) || (lVar2 = *param_1, lVar2 == 0)) || (*(long *)(lVar2 + 0x38) == 0)
     ) {
    FUN_004014b0(6,0x93,0x96,"external/openssl/crypto/evp/pmeth_gn.c",0x4a);
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 4) = 4;
  if (*(code **)(lVar2 + 0x30) == (code *)0x0) {
    return 1;
  }
  uVar1 = (**(code **)(lVar2 + 0x30))(param_1);
  if ((int)uVar1 < 1) {
    *(undefined4 *)(param_1 + 4) = 0;
    return uVar1;
  }
  return uVar1;
}


