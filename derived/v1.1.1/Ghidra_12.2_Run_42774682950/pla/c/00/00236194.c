/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00236194; name: FUN_00236194
 */


void FUN_00236194(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,char *param_6)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  char acStack_a8 [72];
  
  if (*(int *)(param_1 + 0x60) == 0) {
LAB_00236204:
    lVar6 = 0;
  }
  else {
    plVar7 = (long *)(param_1 + 0x58);
    do {
      lVar5 = *plVar7;
      if (lVar5 == param_1 + 0x50) goto LAB_00236204;
      lVar6 = *(long *)(lVar5 + -8);
      plVar7 = (long *)(lVar5 + 8);
      iVar1 = strcmp(param_6,*(char **)(lVar6 + 0x10));
    } while (iVar1 != 0);
  }
  puVar2 = (uint *)FUN_00251240(*(undefined8 *)(param_1 + 0x20),param_6);
  lVar5 = *(long *)(param_1 + 0x20) + (ulong)*puVar2 + 0xc;
  nn::util::SNPrintf(acStack_a8,0x48,"%s.bnvg",lVar5);
  uVar3 = (**(code **)(*param_5 + 0x50))(param_5,0x626e7667,acStack_a8);
  uVar4 = nn::util::BinaryFileHeader::IsRelocated();
  if ((uVar4 & 1) == 0) {
    nn::util::BinaryFileHeader::GetRelocationTable();
    nn::util::RelocationTable::Relocate();
  }
  FUN_00263a54(lVar6,param_2,param_3,param_5,param_4,puVar2,lVar5,uVar3);
  return;
}


