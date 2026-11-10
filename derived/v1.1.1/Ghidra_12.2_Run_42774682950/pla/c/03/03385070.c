/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03385070; name: FUN_03385070
 */


undefined4 FUN_03385070(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_180 [336];
  
  iVar1 = FUN_0338e3bc(param_2,0x54414730);
  if (iVar1 == 0x54414730) {
    return 0x54414730;
  }
  iVar1 = FUN_0338e3bc(param_2,0x54434d30);
  if (iVar1 == 0x54434d30) {
    *(undefined4 *)(param_1 + 0x138) = 2;
    return 0x54434d30;
  }
  if (DAT_04450900 < 2) {
    if (DAT_04350668 == '\0') {
      return 0;
    }
  }
  else if (DAT_04350668 == '\0') {
    FUN_03326994(auStack_180,&DAT_044508b0,2);
    lVar2 = FUN_03326338(auStack_180,"Input does not appear to be a tagfile",PTR_DAT_04372528);
    *(char **)(lVar2 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar2 + 0x40) = 0x6de;
    FUN_033269dc(auStack_180);
    return 0;
  }
  FUN_03326a7c(auStack_180,&DAT_044508b0,2);
  lVar2 = FUN_03326338(auStack_180,"Input does not appear to be a tagfile",PTR_DAT_04372528);
  *(char **)(lVar2 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar2 + 0x40) = 0x6de;
  FUN_03326adc(auStack_180);
  return 0;
}


