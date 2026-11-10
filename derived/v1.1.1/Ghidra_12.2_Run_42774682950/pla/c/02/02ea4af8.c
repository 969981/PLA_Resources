/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea4af8; name: FUN_02ea4af8
 */


void FUN_02ea4af8(int param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  uVar2 = (ulong)DAT_0440a388;
  if (DAT_0440a388 != 0) {
    plVar3 = DAT_0440a380;
    plVar6 = DAT_0440a380;
    do {
      lVar4 = *plVar6;
      iVar1 = *(int *)(lVar4 + 0x180);
      if (iVar1 == -1) {
        lVar5 = lVar4;
        do {
          lVar5 = *(long *)(lVar5 + 0x88);
          if (lVar5 == 0) {
            if (param_1 == -1) goto LAB_02ea4b5c;
            goto LAB_02ea4b34;
          }
          iVar1 = *(int *)(lVar5 + 0x180);
        } while (iVar1 == -1);
        *(int *)(lVar4 + 0x180) = iVar1;
      }
      if (iVar1 == param_1) {
LAB_02ea4b5c:
        FUN_02ea4a78(*plVar6,param_2);
        uVar2 = (ulong)DAT_0440a388;
        plVar3 = DAT_0440a380;
      }
LAB_02ea4b34:
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar3 + uVar2);
  }
  return;
}


