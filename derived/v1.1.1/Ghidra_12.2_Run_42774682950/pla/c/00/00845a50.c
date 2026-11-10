/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00845a50; name: FUN_00845a50
 */


void FUN_00845a50(undefined8 param_1,int *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char acStack_140 [256];
  
  if (*param_2 != 0) {
    sprintf(acStack_140,"%08x");
    plVar1 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
    uVar3 = 0;
    do {
      if (((param_2[uVar3 >> 5 & 7] & 1 << (ulong)(uVar3 & 0x1f)) != 0) &&
         (lVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar3), lVar2 != 0)) {
        *(undefined8 *)(lVar2 + 0x88) = *param_3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x18);
  }
  return;
}


