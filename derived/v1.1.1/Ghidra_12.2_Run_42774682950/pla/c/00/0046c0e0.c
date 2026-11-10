/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046c0e0; name: FUN_0046c0e0
 */


void FUN_0046c0e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == 0) {
    lVar2 = 0;
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 == 0) goto LAB_0046c118;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x48);
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 == lVar2) goto LAB_0046c118;
  }
  FUN_00400420(lVar1,"external/openssl/crypto/x509/x509_vpm.c",0x1a1);
  *(long *)(param_1 + 0x48) = lVar2;
LAB_0046c118:
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}


