/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339209c; name: FUN_0339209c
 */


undefined8 FUN_0339209c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_170 [336];
  
  if (((*(int *)(param_1 + 0x20) == 0) && (*(int *)(param_1 + 0x38) == 0)) &&
     (*(int *)(param_1 + 0xf8) < 2)) {
    uVar3 = 0;
    *(undefined1 *)(param_1 + 0x291) = 1;
  }
  else {
    uVar3 = 0x80040200;
    if ((1 < DAT_04450a40) || (uVar1 = FUN_03327170(), (uVar1 & 1) != 0)) {
      uVar1 = FUN_03327170();
      if ((uVar1 & 1) == 0) {
        FUN_03326994(auStack_170,&DAT_044509f0,2);
        lVar2 = FUN_03326338(auStack_170,"You must enable multibundle before writing any data",
                             PTR_DAT_04372528);
        *(char **)(lVar2 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
        ;
        *(undefined8 *)(lVar2 + 0x40) = 0x6b8;
        FUN_033269dc(auStack_170);
      }
      else {
        FUN_03326a7c(auStack_170,&DAT_044509f0,2);
        lVar2 = FUN_03326338(auStack_170,"You must enable multibundle before writing any data",
                             PTR_DAT_04372528);
        *(char **)(lVar2 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
        ;
        *(undefined8 *)(lVar2 + 0x40) = 0x6b8;
        FUN_03326adc(auStack_170);
      }
    }
  }
  return uVar3;
}


