/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004320d0; name: FUN_004320d0
 */


undefined * FUN_004320d0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = FUN_0040cc00(&PTR_DAT_04164f50,param_1);
  if (iVar2 == 0) {
    return PTR_LAB_04374248;
  }
  iVar2 = FUN_0040cc00(&PTR_DAT_04164f68,param_1);
  if (iVar2 == 0) {
    return PTR_LAB_04374250;
  }
  iVar2 = FUN_0040cc00(&PTR_DAT_04164f80,param_1);
  if (iVar2 == 0) {
    return PTR_LAB_04374258;
  }
  iVar2 = FUN_0040cc00(&PTR_DAT_04164f98,param_1);
  if (iVar2 == 0) {
    return PTR_LAB_04374260;
  }
  iVar2 = FUN_0040cc00(&PTR_DAT_04164fb0,param_1);
  puVar1 = PTR_LAB_04374240;
  if (iVar2 != 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}


