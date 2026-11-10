/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c7470; name: FUN_032c7470
 */


undefined4 FUN_032c7470(undefined4 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  undefined1 auStack_68 [56];
  char *local_30;
  undefined8 uStack_28;
  undefined4 local_18 [2];
  
  lVar4 = *(long *)(param_1 + 6);
  pcVar3 = (char *)(lVar4 + 1);
  do {
    *(char **)(param_1 + 6) = pcVar3;
    cVar1 = *pcVar3;
    if (cVar1 == '\0') {
      local_18[0] = 0x8004ffff;
      if (DAT_04444bc0 != '\0') {
        FUN_03326994(auStack_68,&DAT_04444b70,1);
        local_30 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/String/hkStringBuf.cpp";
        uStack_28 = 0x523;
        uVar2 = FUN_03326338(auStack_68,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_04348e60,
                             &DAT_03924305,local_18);
        pcVar3 = "Truncated placeholder string";
LAB_032c7578:
        FUN_03326338(uVar2,pcVar3,PTR_DAT_04372528);
        FUN_033269dc(auStack_68);
      }
      return local_18[0];
    }
    if (cVar1 == '{') {
      local_18[0] = 0x8004ffff;
      if (DAT_04444bc0 == '\0') {
        return 0x8004ffff;
      }
      FUN_03326994(auStack_68,&DAT_04444b70,1);
      local_30 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/String/hkStringBuf.cpp";
      uStack_28 = 0x51f;
      uVar2 = FUN_03326338(auStack_68,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_04348e60,
                           &DAT_03924305,local_18);
      pcVar3 = "Left curly brace within placeholder";
      goto LAB_032c7578;
    }
    if (cVar1 == '}') {
      *(char **)(param_1 + 2) = (char *)(lVar4 + 1);
      *(char **)(param_1 + 4) = pcVar3;
      *param_1 = 2;
      *(char **)(param_1 + 6) = pcVar3 + 1;
      return 0;
    }
    pcVar3 = pcVar3 + 1;
  } while( true );
}


