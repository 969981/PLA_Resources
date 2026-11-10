/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031494d8; name: FUN_031494d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031494d8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = (long)(PTR_DAT_043888b8 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined2 *)(param_1 + 3) = 0xf200;
  plVar7 = (long *)FUN_0333ee60();
  lVar6 = DAT_0388a148;
  lVar5 = DAT_0388a140;
  lVar4 = _UNK_03889a88;
  lVar3 = _DAT_03889a80;
  lVar1 = *plVar7;
  lVar2 = plVar7[1];
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[0xc] = lVar1;
  param_1[0xd] = lVar2;
  param_1[5] = lVar4;
  param_1[4] = lVar3;
  param_1[7] = lVar6;
  param_1[6] = lVar5;
  lVar3 = _UNK_0388a138;
  lVar2 = _DAT_0388a130;
  lVar1 = _DAT_03888d10;
  param_1[9] = _UNK_03888d18;
  param_1[8] = lVar1;
  param_1[0xb] = lVar3;
  param_1[10] = lVar2;
  return;
}


