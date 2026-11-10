/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022ce0c; name: FUN_0022ce0c
 */


void FUN_0022ce0c(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  param_1[1] = 0;
  puVar1 = PTR_DAT_04372a48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  plVar2 = (long *)FUN_00232654(0xd8);
  if (plVar2 != (long *)0x0) {
    *(undefined4 *)(plVar2 + 2) = 0;
    puVar1 = PTR_DAT_04372a50 + 0x10;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[7] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    *plVar2 = (long)puVar1;
    plVar2[1] = -1;
    FUN_0087ed04(plVar2 + 8);
    FUN_0087e7c0(plVar2 + 0x11);
    plVar2[0x1a] = -0x100000000;
  }
  param_1[1] = (long)plVar2;
  plVar2[7] = (long)param_1;
  lVar3 = FUN_00251600(param_2);
  param_1[2] = lVar3;
  return;
}


