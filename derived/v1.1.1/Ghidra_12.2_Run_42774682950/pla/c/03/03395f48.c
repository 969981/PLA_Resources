/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03395f48; name: FUN_03395f48
 */


undefined8 FUN_03395f48(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_1c0 [336];
  undefined8 local_70 [2];
  
  if ((int)param_1[1] != 0) {
    puVar5 = (undefined8 *)*param_1;
    lVar7 = (long)(int)param_1[1] << 3;
    local_70[0] = param_2;
    do {
      uVar1 = local_70[0];
      uVar6 = *puVar5;
      iVar2 = FUN_032c4900(uVar6);
      local_70[0] = FUN_032bb150(uVar1,uVar6,(long)iVar2);
      if ((3 < DAT_04450aa8) || (uVar3 = FUN_03327170(), (uVar3 & 1) != 0)) {
        uVar3 = FUN_03327170();
        if ((uVar3 & 1) == 0) {
          FUN_03326994(auStack_1c0,&DAT_04450a58,4);
          lVar4 = FUN_03326338(auStack_1c0,"String \'{}\' -> {}",&DAT_0436f0f8,puVar5,local_70);
          *(char **)(lVar4 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
          ;
          *(undefined8 *)(lVar4 + 0x40) = 0x21a;
          FUN_033269dc(auStack_1c0);
        }
        else {
          FUN_03326a7c(auStack_1c0,&DAT_04450a58,4);
          lVar4 = FUN_03326338(auStack_1c0,"String \'{}\' -> {}",&DAT_0436f0f8,puVar5,local_70);
          *(char **)(lVar4 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
          ;
          *(undefined8 *)(lVar4 + 0x40) = 0x21a;
          FUN_03326adc(auStack_1c0);
        }
      }
      puVar5 = puVar5 + 1;
      lVar7 = lVar7 + -8;
      param_2 = local_70[0];
    } while (lVar7 != 0);
  }
  return param_2;
}


