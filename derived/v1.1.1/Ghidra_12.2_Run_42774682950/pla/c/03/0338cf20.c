/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0338cf20; name: FUN_0338cf20
 */


undefined8 FUN_0338cf20(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_190 [336];
  
  uVar3 = (ulong)*(uint *)(param_2[2] + (long)(int)param_2[3] * 0x18 + -0x14) & 0x3fffffff;
  lVar4 = uVar3 - 8;
  lVar1 = (**(code **)(*param_3 + 0x10))(param_3,uVar3,0);
  lVar2 = FUN_032af29c(*param_2,lVar1,lVar4);
  if (lVar2 == lVar4) {
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = lVar1;
    param_1[1] = lVar1 + lVar4;
    param_1[2] = lVar1;
    return 0;
  }
  if (DAT_04450900 == '\0') {
    if (DAT_04350668 == '\0') goto LAB_0338d000;
  }
  else if (DAT_04350668 == '\0') {
    FUN_03326994(auStack_190,&DAT_044508b0,1);
    lVar1 = FUN_03326338(auStack_190,"Invalid section size",PTR_DAT_04372528);
    *(char **)(lVar1 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar1 + 0x40) = 0x98;
    FUN_033269dc(auStack_190);
    goto LAB_0338d000;
  }
  FUN_03326a7c(auStack_190,&DAT_044508b0,1);
  lVar1 = FUN_03326338(auStack_190,"Invalid section size",PTR_DAT_04372528);
  *(char **)(lVar1 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar1 + 0x40) = 0x98;
  FUN_03326adc(auStack_190);
LAB_0338d000:
  *(byte *)(*param_2 + 0x20) = *(byte *)(*param_2 + 0x20) | 2;
  return 0x80040200;
}


