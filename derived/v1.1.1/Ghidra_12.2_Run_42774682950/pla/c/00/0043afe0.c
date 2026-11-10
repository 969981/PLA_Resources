/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043afe0; name: FUN_0043afe0
 */


int * FUN_0043afe0(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == (int *)0x0) {
    param_2 = (int *)FUN_00421c70(PTR_DAT_04374270);
    if (param_2 == (int *)0x0) {
      FUN_004014b0(0x10,0x106,0x41,"external/openssl/crypto/ec/ec_asn1.c",0x213);
      return (int *)0x0;
    }
LAB_0043b070:
    iVar1 = FUN_0042e400(param_1);
  }
  else {
    if (*param_2 == 1) {
      if (*(long *)(param_2 + 2) != 0) {
        FUN_00421810(*(long *)(param_2 + 2),PTR_DAT_04374268);
      }
      goto LAB_0043b070;
    }
    if (*param_2 != 0) goto LAB_0043b070;
    FUN_00409be0(*(undefined8 *)(param_2 + 2));
    iVar1 = FUN_0042e400(param_1);
  }
  if (iVar1 == 0) {
    *param_2 = 1;
    lVar2 = FUN_0043a780(param_1,0);
    *(long *)(param_2 + 2) = lVar2;
  }
  else {
    iVar1 = FUN_0042e3e0(param_1);
    if (iVar1 == 0) goto LAB_0043b0c8;
    *param_2 = 0;
    lVar2 = FUN_00407cb0();
    *(long *)(param_2 + 2) = lVar2;
  }
  if (lVar2 != 0) {
    return param_2;
  }
LAB_0043b0c8:
  FUN_00421810(param_2,PTR_DAT_04374270);
  return (int *)0x0;
}


