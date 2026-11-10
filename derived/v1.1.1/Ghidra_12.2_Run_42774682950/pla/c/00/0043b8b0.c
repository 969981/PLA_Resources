/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043b8b0; name: FUN_0043b8b0
 */


long FUN_0043b8b0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = *param_2;
  lVar1 = FUN_0041d030(0,&local_28,param_3,PTR_DAT_04374270);
  if (lVar1 == 0) {
    FUN_004014b0(0x10,0x91,0x75,"external/openssl/crypto/ec/ec_asn1.c",0x354);
    FUN_00421810(0,PTR_DAT_04374270);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_0043b7a0();
    if (lVar2 == 0) {
      FUN_004014b0(0x10,0x91,0x7f,"external/openssl/crypto/ec/ec_asn1.c",0x35a);
      FUN_00421810(lVar1,PTR_DAT_04374270);
    }
    else {
      if (param_1 != (long *)0x0) {
        FUN_0042dbc0(*param_1);
        *param_1 = lVar2;
      }
      FUN_00421810(lVar1,PTR_DAT_04374270);
      *param_2 = local_28;
    }
  }
  return lVar2;
}


