/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0338d0fc; name: FUN_0338d0fc
 */


void FUN_0338d0fc(long *param_1,undefined8 *param_2,undefined4 *param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_190 [336];
  undefined4 local_38;
  undefined4 local_34;
  
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  plVar1 = (long *)*param_2;
  param_1[4] = (long)plVar1;
  lVar2 = 8;
  if ((param_4 & 1) == 0) {
    lVar2 = 0;
  }
  lVar3 = ((ulong)*(uint *)(param_2[2] + (long)*(int *)(param_2 + 3) * 0x18 + -0x14) & 0x3fffffff) -
          8;
  param_1[5] = lVar3;
  lVar2 = lVar2 + lVar3;
  lVar3 = plVar1[1] - *plVar1;
  if ((lVar3 < lVar2) && (plVar1[7] != 0)) {
    lVar3 = FUN_033216b4(plVar1,lVar2);
  }
  if (lVar2 <= lVar3) {
    lVar2 = *(long *)param_1[4];
    *param_1 = lVar2;
    param_1[1] = param_1[5] + lVar2;
    param_1[2] = lVar2;
    return;
  }
  if (DAT_04450900 < 2) {
    if (DAT_04350668 == '\0') goto LAB_0338d22c;
  }
  else if (DAT_04350668 == '\0') {
    FUN_03326994(auStack_190,&DAT_044508b0,2);
    local_34 = *(undefined4 *)(param_2[2] + (long)*(int *)(param_2 + 3) * 0x18 + -0x18);
    lVar2 = FUN_03326338(auStack_190,"Short read in section {:x}",PTR_DAT_04389020,&local_34);
    *(char **)(lVar2 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar2 + 0x40) = 0xba;
    FUN_033269dc(auStack_190);
    goto LAB_0338d22c;
  }
  FUN_03326a7c(auStack_190,&DAT_044508b0,2);
  local_38 = *(undefined4 *)(param_2[2] + (long)*(int *)(param_2 + 3) * 0x18 + -0x18);
  lVar2 = FUN_03326338(auStack_190,"Short read in section {:x}",PTR_DAT_04389020,&local_38);
  *(char **)(lVar2 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar2 + 0x40) = 0xba;
  FUN_03326adc(auStack_190);
LAB_0338d22c:
  *param_3 = 0x80040200;
  return;
}


