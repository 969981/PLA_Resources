/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001eef9c; name: FUN_001eef9c
 */


undefined8 FUN_001eef9c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_001ee418();
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    FUN_001f3ae0(*param_1,
                 "Unrecognized content encoding type. libcurl understands %s content encodings.",
                 lVar1);
    FUN_002044d4(lVar1);
    uVar2 = 0x3d;
  }
  return uVar2;
}


