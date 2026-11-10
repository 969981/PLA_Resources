/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8d600; name: FUN_02a8d600
 */


undefined1  [16] FUN_02a8d600(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  DirectoryEntryType aDStack_24 [4];
  
  pcVar2 = strrchr(param_1,0x2f);
  pcVar3 = strchr(param_1,0x2f);
  if (pcVar2 == pcVar3) {
    uVar4 = 0;
  }
  else {
    *pcVar2 = '\0';
    iVar1 = nn::fs::GetEntryType(aDStack_24,param_1);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      auVar7 = FUN_02a8d600(param_1);
      uVar5 = auVar7._0_8_;
      if (((uVar5 & 0xff00000000) == 0) || (auVar7._8_4_ != 0)) {
        uVar6 = uVar5 & 0xffffffff00000000;
        uVar5 = uVar5 & 0xffffff0000000000;
        goto LAB_02a8d69c;
      }
      uVar4 = nn::fs::CreateDirectory(param_1);
      uVar4 = uVar4 & 0xffffffff;
    }
    *pcVar2 = '/';
  }
  uVar5 = 0;
  uVar6 = 0x100000000;
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = 10;
LAB_02a8d69c:
  auVar8._0_8_ = uVar6 & 0xff00000000 | auVar7._0_8_ & 0xffffffff | uVar5;
  auVar8._8_8_ = auVar7._8_8_ & 0xffffffff;
  return auVar8;
}


