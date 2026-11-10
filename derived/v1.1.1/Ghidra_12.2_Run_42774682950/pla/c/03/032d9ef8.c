/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d9ef8; name: FUN_032d9ef8
 */


undefined8 FUN_032d9ef8(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  void *__s;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_190 [336];
  
  *param_3 = 0;
  if ((param_1[0xe] & 0x100001U) == 1) {
    uVar3 = 0x80040200;
    if ((DAT_0444a098 != '\0') || (uVar4 = FUN_03327170(), (uVar4 & 1) != 0)) {
      uVar4 = FUN_03327170();
      if ((uVar4 & 1) == 0) {
        FUN_03326994(auStack_190,&DAT_0444a048,1);
        lVar5 = FUN_03326338(auStack_190,
                             "You must have an Opt::SIZE_ALIGN if you have an Opt::FORMAT",
                             PTR_DAT_04372528);
        *(undefined4 *)(lVar5 + 0x1c) = 0x18bd024f;
        *(char **)(lVar5 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Builder/hkTypeBuilder.cpp"
        ;
        *(undefined8 *)(lVar5 + 0x40) = 0x3d8;
        FUN_033269dc(auStack_190);
      }
      else {
        FUN_03326a7c(auStack_190,&DAT_0444a048,1);
        lVar5 = FUN_03326338(auStack_190,
                             "You must have an Opt::SIZE_ALIGN if you have an Opt::FORMAT",
                             PTR_DAT_04372528);
        *(undefined4 *)(lVar5 + 0x1c) = 0x18bd024f;
        *(char **)(lVar5 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Builder/hkTypeBuilder.cpp"
        ;
        *(undefined8 *)(lVar5 + 0x40) = 0x3d8;
        FUN_03326adc(auStack_190);
      }
    }
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x10))();
    if ((param_1[0x44] != 0) &&
       (*(long **)(param_1[0x44] + 8) = param_2, (char)param_1[0x45] != '\0')) {
      *(long *)(param_1[0x44] + 0x10) = (long)iVar1;
    }
    __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,(long)iVar1,0);
    memset(__s,0,(long)iVar1);
    uVar2 = (**(code **)(*param_1 + 0x28))(param_1,__s,iVar1);
    uVar3 = 0;
    *param_3 = uVar2;
  }
  return uVar3;
}


