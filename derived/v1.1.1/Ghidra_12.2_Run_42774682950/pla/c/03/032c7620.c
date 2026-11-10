/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c7620; name: FUN_032c7620
 */


int FUN_032c7620(char *param_1,char *param_2,uint *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  uint uVar7;
  undefined1 auStack_80 [56];
  char *local_48;
  undefined8 uStack_40;
  int local_28;
  uint local_24;
  
  local_28 = -0x7ffbfda9;
  if (param_1 == param_2) {
    if (DAT_04444bc0 == '\0') {
      return -0x7ffbfda9;
    }
    FUN_03326994(auStack_80,&DAT_04444b70,1);
    uStack_40 = 0x4c;
    pcVar4 = "HK_RETURN_RES_IF({}) returning {}. ";
    pcVar6 = "s.isEmpty()";
    puVar5 = PTR_DAT_043890e0;
    goto LAB_032c772c;
  }
  bVar1 = false;
  bVar2 = false;
  if (*param_1 == '+') {
LAB_032c7668:
    bVar1 = bVar2;
    param_1 = param_1 + 1;
  }
  else if (*param_1 == '-') {
    bVar2 = true;
    goto LAB_032c7668;
  }
  local_28 = FUN_032c77d0(param_1,param_2,&local_24);
  if (local_28 < 0) {
    if (DAT_04444bc0 == '\0') {
      return local_28;
    }
    FUN_03326994(auStack_80,&DAT_04444b70,1);
    uStack_40 = 0x57;
    pcVar4 = "HK_RETURN_IF_FAILED({}) returning {}. ";
    pcVar6 = "parseUnsignedDecimal(s, &num)";
    puVar5 = PTR_DAT_043890e8;
  }
  else {
    local_28 = -0x7ffbfda9;
    uVar7 = 0x80000000;
    if (!bVar1) {
      uVar7 = 0x7fffffff;
    }
    if (local_24 <= uVar7) {
      uVar7 = -local_24;
      if (!bVar1) {
        uVar7 = local_24;
      }
      *param_3 = uVar7;
      return 0;
    }
    if (DAT_04444bc0 == '\0') {
      return -0x7ffbfda9;
    }
    FUN_03326994(auStack_80,&DAT_04444b70,1);
    uStack_40 = 0x5a;
    pcVar4 = "HK_RETURN_RES_IF({}) returning {}. ";
    pcVar6 = "num > limit";
    puVar5 = PTR_DAT_043890e0;
  }
LAB_032c772c:
  local_48 = 
  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/String/hkStringBuf.cpp";
  uVar3 = FUN_03326338(auStack_80,pcVar4,puVar5,pcVar6,&local_28);
  FUN_03326338(uVar3,&DAT_03996322,PTR_DAT_04372528);
  FUN_033269dc(auStack_80);
  return local_28;
}


