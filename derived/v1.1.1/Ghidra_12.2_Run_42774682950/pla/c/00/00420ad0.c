/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00420ad0; name: FUN_00420ad0
 */


void FUN_00420ad0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 auStack_8 [5];
  undefined1 auStack_3 [3];
  
  *(undefined4 *)(param_1 + 4) = 2;
  if ((long)param_2 < 0) {
    param_2 = -param_2;
    lVar1 = 7;
    do {
      lVar2 = lVar1;
      auStack_8[lVar2] = (char)param_2;
      param_2 = param_2 >> 8;
      lVar1 = lVar2 + -1;
    } while (param_2 != 0);
    uVar3 = 0x102;
  }
  else {
    lVar1 = 7;
    do {
      lVar2 = lVar1;
      auStack_8[lVar2] = (char)param_2;
      param_2 = param_2 >> 8;
      lVar1 = lVar2 + -1;
    } while (param_2 != 0);
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 4) = uVar3;
  FUN_0040a280(param_1,auStack_8 + lVar2,8 - (int)lVar2);
  return;
}


