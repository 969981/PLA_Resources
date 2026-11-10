/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00229f6c; name: FUN_00229f6c
 */


int FUN_00229f6c(long param_1,long param_2,uint param_3)

{
  uint *puVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  
  lVar6 = *(long *)(param_2 + 0x20);
  if (param_2 + 0x18 == lVar6) {
    iVar4 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    iVar4 = 0;
    do {
      if ((lVar2 != 0) && (*(short *)(lVar2 + 0xe) != 0)) {
        uVar8 = 0;
        iVar7 = 0;
        plVar5 = *(long **)(lVar6 + 0x10);
        puVar1 = (uint *)(lVar2 + (ulong)*(uint *)(lVar2 + 0x10));
        lVar2 = lVar2 + (ulong)*puVar1;
        if (*(char *)(lVar2 + 0x1d) == '\0') goto LAB_0022a034;
        do {
          pcVar3 = *(code **)(*plVar5 + 0x88);
          while( true ) {
            lVar2 = (*pcVar3)(plVar5,lVar2,param_3 & 1);
            iVar7 = iVar7 + (uint)(lVar2 != 0);
            lVar2 = *(long *)(param_1 + 8);
            uVar8 = uVar8 + 1;
            if (*(ushort *)(lVar2 + 0xe) <= uVar8) goto LAB_00229fb0;
            lVar2 = lVar2 + (ulong)puVar1[uVar8];
            if (*(char *)(lVar2 + 0x1d) != '\0') break;
LAB_0022a034:
            pcVar3 = *(code **)(*plVar5 + 0x78);
          }
        } while( true );
      }
      iVar7 = 0;
LAB_00229fb0:
      lVar6 = *(long *)(lVar6 + 8);
      iVar4 = iVar7 + iVar4;
    } while (param_2 + 0x18 != lVar6);
  }
  return iVar4;
}


