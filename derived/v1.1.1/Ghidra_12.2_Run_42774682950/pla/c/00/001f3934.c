/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f3934; name: FUN_001f3934
 */


void FUN_001f3934(long param_1,char *param_2)

{
  uint uVar1;
  size_t sVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_8f8 [128];
  char acStack_854 [2044];
  undefined1 uStack_58;
  undefined1 auStack_57 [7];
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0xf43) >> 2 & 1) != 0)) {
    uVar1 = FUN_001e53d0(acStack_854,0x801,param_2,auStack_8f8 + 0x80);
    if (0x800 < uVar1) {
      sVar2 = strlen(param_2);
      if (param_2[sVar2 - 1] == '\n') {
        puVar3 = &uStack_58;
        puVar5 = &DAT_038964d6;
        uVar4 = 5;
      }
      else {
        puVar3 = auStack_57;
        puVar5 = &DAT_03952e17;
        uVar4 = 4;
      }
      FUN_001e64cc(puVar3,uVar4,puVar5);
    }
    sVar2 = strlen(acStack_854);
    FUN_001f3a38(param_1,0,acStack_854,sVar2);
  }
  return;
}


