/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043e5e0; name: FUN_0043e5e0
 */


undefined8 FUN_0043e5e0(void)

{
  undefined8 uVar1;
  long *in_x5;
  
  if (*(code **)(*in_x5 + 0x68) == (code *)0x0) {
    FUN_004014b0(0x10,0xfd,0x98,"external/openssl/crypto/ec/ecdsa_vrf.c",0x29);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0043e5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*in_x5 + 0x68))();
  return uVar1;
}


