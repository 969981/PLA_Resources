/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c77d0; name: FUN_032c77d0
 */


undefined4 FUN_032c77d0(byte *param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 auStack_68 [56];
  char *local_30;
  undefined8 uStack_28;
  undefined4 local_18 [2];
  
  local_18[0] = 0x80040257;
  if (param_1 == param_2) {
    if (DAT_04444bc0 != '\0') {
      FUN_03326994(auStack_68,&DAT_04444b70,1);
      uStack_28 = 0x3a;
      pcVar4 = "s.isEmpty()";
      puVar3 = PTR_DAT_043890e0;
LAB_032c7884:
      local_30 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/String/hkStringBuf.cpp";
      uVar2 = FUN_03326338(auStack_68,"HK_RETURN_RES_IF({}) returning {}. ",puVar3,pcVar4,local_18);
      FUN_03326338(uVar2,&DAT_03996322,PTR_DAT_04372528);
      FUN_033269dc(auStack_68);
    }
  }
  else {
    uVar5 = 0;
    do {
      local_18[0] = 0x80040257;
      if (9 < *param_1 - 0x30) {
        if (DAT_04444bc0 == '\0') {
          return 0x80040257;
        }
        FUN_03326994(auStack_68,&DAT_04444b70,1);
        uStack_28 = 0x3e;
        pcVar4 = "isDigit(c) == false";
        puVar3 = PTR_DAT_043890f0;
        goto LAB_032c7884;
      }
      uVar1 = ((uint)*param_1 + uVar5 * 10) - 0x30;
      local_18[0] = 0x80040257;
      if (uVar1 < uVar5) {
        if (DAT_04444bc0 == '\0') {
          return 0x80040257;
        }
        FUN_03326994(auStack_68,&DAT_04444b70,1);
        uStack_28 = 0x42;
        pcVar4 = "cur < prev";
        puVar3 = &DAT_04349238;
        goto LAB_032c7884;
      }
      param_1 = param_1 + 1;
      uVar5 = uVar1;
    } while (param_2 != param_1);
    *param_3 = uVar1;
    local_18[0] = 0;
  }
  return local_18[0];
}


