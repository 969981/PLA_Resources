/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0270d7c4; name: FUN_0270d7c4
 */


byte FUN_0270d7c4(long param_1)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  byte bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x98);
  iVar1 = (int)plVar7[0xd];
  if (iVar1 == 3) {
LAB_0270d7e8:
    (**(code **)(*plVar7 + 0x48))(plVar7);
    bVar4 = 1;
  }
  else {
    if (iVar1 == 2) {
      uVar3 = (*(code *)plVar7[0x14])(plVar7 + 0x18);
      if ((uVar3 & 1) != 0) {
        pcVar5 = (code *)plVar7[0x15];
        if (pcVar5 != (code *)0x0) {
          plVar7[0x16] = 0;
          plVar7[0x17] = 0;
          plVar7[0x14] = 0;
          plVar7[0x15] = 0;
          (*pcVar5)(plVar7 + 0x18);
        }
        *(undefined4 *)(plVar7 + 0xd) = 3;
        goto LAB_0270d7e8;
      }
    }
    else if (iVar1 == 1) {
      uVar3 = (*(code *)plVar7[0x14])(plVar7 + 0x18);
      if ((uVar3 & 1) != 0) {
        pcVar5 = (code *)plVar7[0x15];
        if (pcVar5 != (code *)0x0) {
          plVar7[0x16] = 0;
          plVar7[0x17] = 0;
          plVar7[0x14] = 0;
          plVar7[0x15] = 0;
          (*pcVar5)(plVar7 + 0x18);
        }
        plVar7[0x14] = (long)&LAB_0180f7e8;
        plVar7[0x15] = (long)&LAB_0180f81c;
        plVar7[0x16] = (long)&LAB_0180f820;
        bVar4 = 0;
        plVar7[0x17] = (long)&LAB_0180f82c;
        plVar7[0x18] = (long)plVar7;
        *(undefined4 *)(plVar7 + 0xd) = 2;
        goto LAB_0270d7fc;
      }
    }
    bVar4 = 0;
  }
LAB_0270d7fc:
  lVar6 = *(long *)(*(long *)(param_1 + 0xa0) + 0x70);
  bVar2 = false;
  if (lVar6 != 0) {
    bVar2 = *(char *)(lVar6 + 0x1e1) != '\0';
  }
  return bVar4 & bVar2;
}


