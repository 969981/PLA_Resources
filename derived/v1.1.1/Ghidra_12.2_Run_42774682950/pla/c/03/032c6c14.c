/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c6c14; name: FUN_032c6c14
 */


undefined4 FUN_032c6c14(uint *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 auStack_68 [56];
  char *local_30;
  undefined8 uStack_28;
  uint local_18 [2];
  
  pcVar7 = *(char **)(param_1 + 6);
  cVar2 = *pcVar7;
  lVar3 = 0;
  do {
    if (cVar2 == '\0') {
      *(char **)(param_1 + 2) = pcVar7;
      *(char **)(param_1 + 4) = pcVar7 + lVar3;
      uVar6 = (uint)(lVar3 != 0);
LAB_032c6cc0:
      *param_1 = uVar6;
      return 0;
    }
    if (cVar2 == '{') {
      pcVar1 = pcVar7 + lVar3;
      if (pcVar1[1] == '{') {
        *(char **)(param_1 + 2) = pcVar7;
        *(char **)(param_1 + 4) = pcVar1 + 1;
        goto LAB_032c6cb8;
      }
      if (lVar3 == 0) {
        uVar4 = FUN_032c7470();
        return uVar4;
      }
      *(char **)(param_1 + 2) = pcVar7;
      *(char **)(param_1 + 4) = pcVar1;
LAB_032c6cbc:
      uVar6 = 1;
      goto LAB_032c6cc0;
    }
    if (cVar2 == '}') {
      local_18[0] = 0x8004ffff;
      if (pcVar7[lVar3 + 1] != '}') {
        if (DAT_04444bc0 == '\0') {
          return 0x8004ffff;
        }
        FUN_03326994(auStack_68,&DAT_04444b70,1);
        local_30 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/String/hkStringBuf.cpp";
        uStack_28 = 0x4f3;
        uVar5 = FUN_03326338(auStack_68,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_04389058,
                             "m_fmt[1] != \'}\'",local_18);
        FUN_03326338(uVar5,"Unescaped right curly brace",PTR_DAT_04372528);
        FUN_033269dc(auStack_68);
        return local_18[0];
      }
      *(char **)(param_1 + 2) = pcVar7;
      *(char **)(param_1 + 4) = pcVar7 + lVar3 + 1;
LAB_032c6cb8:
      *(char **)(param_1 + 6) = pcVar7 + lVar3 + 2;
      goto LAB_032c6cbc;
    }
    *(char **)(param_1 + 6) = pcVar7 + lVar3 + 1;
    cVar2 = pcVar7[lVar3 + 1];
    lVar3 = lVar3 + 1;
  } while( true );
}


